#include <regex>
#include <stdio.h>
#include <string>
#include <shlwapi.h>
#include "../detours/detours.h"
#include "../ME3SDK/ME3TweaksHeader.h"
#include "../ME3SDK/SdkHeaders.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.


// Set to 1 to attach the ME3Tweaks ASI logger component.
#define LOGGING 0 

#if LOGGING 
ME3TweaksASILogger logger("Origin MP Status v2", "OriginMPStatus.txt", true);
#endif

/* The new presence text buffer that we will copy into the buffer provided by the Origin SDK*/
wchar_t presencetext[256];
/* The current presence text buffer that is set by the Origin SDK*/
wchar_t currentpresencetext[256];


void __fastcall HookedPE(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult)
{
	char* funcName = pFunction->GetFullName();
	if (strcmp(funcName, "Function sfxlobbyflow.Startup.BeginState") == 0)
	{
		// Clear status when returning to the MPLobby map
		auto origincomp = (USFXOnlineComponentOrigin*)FindObjectOfType(USFXOnlineComponentOrigin::StaticClass());
		if (origincomp) {
			memset(presencetext, 0, 256);
			if (wcscmp(currentpresencetext, presencetext) != 0) {
				//difference
				bool result = origincomp->SetRichPresence(presencetext, L"");
				if (result == 1) {
					wcsncpy_s(currentpresencetext, presencetext, 256);
				}
			}
		}
	}
	else if (strcmp(funcName, "Function sfxgamempcontent.sfxwavecoordinator_hordeoperation.OnAllWavesFinishedLoading") == 0)
	{
		// Set status when wave has started and we have notified that all assets are loaded (wave has begun)
		if (IsA<Asfxwavecoordinator_hordeoperation>(pObject)) {
			// For string lookups
			auto sfxgame = (ASFXGame*)ASFXGame::StaticClass();
			
			// for getting info
			auto uengine = (UEngine*)UEngine::StaticClass();
			auto CurrWorld = (AWorldInfo*)uengine->GetCurrentWorldInfo();
			auto grimp = (Asfxgrimp*)CurrWorld->GRI;
			auto sfxonlinegamesettings = (USFXOnlineGameSettings*)FindObjectOfType(USFXOnlineGameSettings::StaticClass());
			if (sfxgame && uengine && CurrWorld && grimp && sfxonlinegamesettings) {

				// DIFFICULTY
				int difficultyIndex = grimp->GetChallengeTypeIndex();
				int diffStrRef = (int)sfxonlinegamesettings->ChallengeTypes.Data[difficultyIndex].Name;

				auto difficultyStr = sfxgame->GetSimpleString(diffStrRef, false);

				// FACTION
				int enemyTypeStrRef = 0;
				int enemyTypeID = grimp->GetEnemyWaveTypeID();
				for (int i = 0; i < sfxonlinegamesettings->EnemyTypes.Count; i++)
				{
					auto enemyType = sfxonlinegamesettings->EnemyTypes.Data[enemyTypeID];
					if (enemyType.Id == enemyTypeID) {
						enemyTypeStrRef = enemyType.Name;
						break;
					}
				}
				auto enemyTypeName = sfxgame->GetSimpleString(enemyTypeStrRef, false);

				// MAP NAME
				auto mapPackageName = sfxonlinegamesettings->mME3MapName;
				int mapStrRef = 0;
				for (int i = 0; i < sfxonlinegamesettings->MasterMapList.Count; i++)
				{
					auto mapinfo = sfxonlinegamesettings->MasterMapList.Data[i];
					if (mapinfo.PackageName.Data) { //some of these don't have to be initialized
						if (mapinfo.PackageName == mapPackageName)
						{
							mapStrRef = mapinfo.PrettyName;
							break;
						}
					}
				}

				// handle the biohazard symbol
				auto mapName = sfxgame->GetSimpleString(mapStrRef, false);
				std::wstring mapNameCleansed = L"Unknown map"; mapName.Data;
				if (mapName.Data)
				{
					mapNameCleansed = mapName.Data;
					std::wregex expression(L"\\[Ux2623\\]");
					mapNameCleansed = std::regex_replace(mapNameCleansed, expression, L"☣");
					if (mapNameCleansed.length() > 100)
					{
						// Abandon it. It might be player as client with modded host using custom string (e.g. Firebase Neptune)
						ProcessEvent(pObject, pFunction, pParms, pResult);
						return;
					}
				}

				// WAVE INDEX
				auto sfxwaveCoordinator = static_cast<Asfxwavecoordinator_hordeoperation*>(pObject);
				int waveindex = sfxwaveCoordinator->GetFriendlyCurrentWaveNumber();

				// Set origin rich presence
				auto origincomp = (USFXOnlineComponentOrigin*)FindObjectOfType(USFXOnlineComponentOrigin::StaticClass());
				if (origincomp && difficultyStr.Data && enemyTypeName.Data) {
					swprintf(presencetext, 256, L"%s/%s/%s Wave %d", mapNameCleansed.c_str(), enemyTypeName.Data, difficultyStr.Data, waveindex);
					if (wcscmp(currentpresencetext, presencetext) != 0) {
						//difference
						bool result = origincomp->SetRichPresence(presencetext, L"");
						if (result == 1) {
							wcsncpy_s(currentpresencetext, presencetext, 256);
						}
					}
				}
			}
		}
	}
	ProcessEvent(pObject, pFunction, pParms, pResult);
}

void onAttach()
{
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread()); //This command set the current working thread to the game current thread.
	DetourAttach(&(PVOID&)ProcessEvent, HookedPE); //This command will start your Hook.
	DetourTransactionCommit();
}


BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hModule);
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)onAttach, NULL, 0, NULL);
		return true;
		break;

	case DLL_PROCESS_DETACH:
		return true;
		break;
	}
	return true;
};