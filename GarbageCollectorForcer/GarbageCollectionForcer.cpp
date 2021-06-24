#include <chrono>
#include <string>
#include "../ME3SDK/SdkHeaders.h"
#include "../detours/detours.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.

typedef void(__thiscall* tProcessEvent)(class UObject*, class UFunction*, void*, void*);
tProcessEvent ProcessEvent = (tProcessEvent)0x00453120;

auto _personalization_lastForcedGC = std::chrono::steady_clock::now(); // Init at app boot
auto _personalizationGCInterval = 8;

void __fastcall HookedPE(UObject *pObject, void *edx, UFunction *pFunction, void *pParms, void *pResult)
{
	char* szName = pFunction->GetFullName();

	// Force Garbage Collection when the personalization UI is open (armor locker) every 8 seconds.
	if (strcmp(szName, "Function SFXGame.SFXSFHandler_PCPersonalization.Update") == 0)
	{
		auto now = std::chrono::steady_clock::now();
		auto time_elapsed = std::chrono::duration_cast<std::chrono::seconds>(now - _personalization_lastForcedGC).count();
		if (time_elapsed > _personalizationGCInterval)
		{
			USFXSFHandler_PCPersonalization* sfxHandler = static_cast<USFXSFHandler_PCPersonalization*>(pObject);
			sfxHandler->oWorldInfo->ForceGarbageCollection(false);
			_personalization_lastForcedGC = now;
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

