#include <stdio.h>
#include <io.h>
#include <fcntl.h>     /* for _O_TEXT and _O_BINARY */  
#include <string>
#include <fstream>
#include <iostream>
#include <ostream>
#include <streambuf>
#include "..\ME3SDK\ME3TweaksHeader.h"
#include "..\ME3SDK\SdkHeaders.h"
#include "..\detours\detours.h"


#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.

ULONGLONG boottime = 0;
int loopCheck = 1;

void __fastcall HookedPE(UObject *pObject, void *edx, UFunction *pFunction, void *pParms, void *pResult)
{
	char *szName = pFunction->GetFullName();
	/*if (isPartOf(szName, "Function SFXOnlineFoundation.SFXOnlineHTTPRequest")) {

		printf(szName);
		printf("\n");

		//pFunction->eventGenerateParametersString();
		ProcessEvent(pObject, pFunction, pParms, pResult);
		USFXOnlineHTTPRequest* request = (USFXOnlineHTTPRequest*)pObject;
		if (request) {
			if (loopCheck) {
				loopCheck = 0;
				FString baseUrL = request->mURL;
				FString paramsString = request->eventGenerateParametersString();
				FString urlBase = request->eventGenerateHeaderParametersString();
				loopCheck = 1; //no loop
				//printf("%p\n", (void*)&urlBase);
				if (baseUrL.Data) {
					wprintf(baseUrL.Data);
				}
				if (paramsString.Data) {
					wprintf(paramsString.Data);
					printf("\n");
				}
				if (urlBase.Data) {
					printf("   Headers==============\n");
					wprintf(urlBase.Data);
				}
				printf("\n");
			}
		}
		//FString* result = (FString*)pResult;
		//wprintf((wchar_t*)(result->Data));
	}
	else if (isPartOf(szName, "Function Engine.GameInfo.ProcessClientTravel")) {
		FString travelURL = ((AGameInfo_execProcessClientTravel_Parms*)(pParms))->URL;
		FGuid nextMapGuid = ((AGameInfo_execProcessClientTravel_Parms*)(pParms))->NextMapGuid;

		if (travelURL.Data) {
			printf("Travel URL: ");
			wprintf(travelURL.Data);
		}
		printf("Next Map GUID: ");
		printf(GuidToString(nextMapGuid).c_str());
		ProcessEvent(pObject, pFunction, pParms, pResult);
	}
	else if (isPartOf(szName, "Function SFXGame.BioWorldInfo.ServerTravel")) {
		printf(szName);
		printf("\n");
		FString travelURL = ((ABioWorldInfo_eventServerTravel_Parms*)(pParms))->URL;
		if (travelURL.Data) {
			printf("Servertravelling with URL: ");
			wprintf(travelURL.Data);
			printf("\n");
		}
		ProcessEvent(pObject, pFunction, pParms, pResult);
	}
	else if (isPartOf(szName, "Function Engine.Actor.GetPackageGuid")) {
		FName packageName = ((AInfo_execGetPackageGuid_Parms*)(pParms))->PackageName;
		ProcessEvent(pObject, pFunction, pParms, pResult);
		FGuid guid = ((AInfo_execGetPackageGuid_Parms*)(pParms))->ReturnValue;

		printf(packageName.GetName());
		printf(" -> ");
		printf(GuidToString(guid).c_str());
	}
	else if (isPartOf(szName, "Function sfxgamempcontent.sfxgrimp.AddPRI")) {
		//Player joined
		printf(szName);
		printf("\n");
		ProcessEvent(pObject, pFunction, pParms, pResult);

		Asfxgrimp* grimp = (Asfxgrimp*)pObject;
		Asfxgrimp_execAddPRI_Parms* params = (Asfxgrimp_execAddPRI_Parms*)pParms;
		grimp->MaxUniquePlayers = 6;
		printf("Set number of unique players to 6\n");
	}
	else if (isPartOf(szName, "Function sfxgamempcontent.sfxgrimp.SetGameStatus")) {
		Asfxgrimp* grimp = (Asfxgrimp*)pObject;
		Asfxgrimp_execSetGameStatus_Parms* settings = (Asfxgrimp_execSetGameStatus_Parms*)pParms;
		printf(szName);
		printf("\n");
		printf("Current GRIMP status: %c\n", grimp->GameStatus);
		ProcessEvent(pObject, pFunction, pParms, pResult);
		printf("New GRIMP status: %c\n", grimp->GameStatus);
	}
	else*/ if (isPartOf(szName, "Function Engine.SequenceOp.Activated")) {
		//printf(szName);
		USequenceOp* op = (USequenceOp*)pObject;
		ULONGLONG currenttime = GetTickCount64();
		unsigned long secondsSinceBoot = (currenttime - boottime) / 1000;
		int ms = (currenttime - boottime) % 1000;
		std::cout << "[";
		std::cout << secondsSinceBoot;
		std::cout << ".";
		std::cout << ms;
		std::cout << "] ";
		std::cout << op->GetFullName();
		std::cout << "_";
		std::cout << op->NetIndex;
		//op->
		//printf("Count: %d\n", op->m_aObjComment.Count);
		//printf("Max: %d\n", op->m_aObjComment.Max);
		//int i = 0;

		//for (unsigned int a = 0; a < op->m_aObjComment.Count; a++) {
		//	wprintf(op->m_aObjComment(0).Data);
		//}
		std::cout << "\n";

		ProcessEvent(pObject, pFunction, pParms, pResult);
	}
	else {

		/*if (isPartOf(szName, "Travel") || isPartOf(szName, "Sequence")) {
			printf(szName);
			printf("\n");
		}*/
		ProcessEvent(pObject, pFunction, pParms, pResult);
	}
	//else if ((isPartOf(szName, "HTTP") || isPartOf(szName, "Online")) && !isPartOf(szName, "Tick") && !isPartOf(szName, "MultiplayerFlow")) {
		/*&& !isPartOf(szName, "SFXTelemetry") && !isPartOf(szName, "Canvas") && !isPartOf(szName, "Render")
		&& !isPartOf(szName, "PostAdvance") && !isPartOf(szName, ".Update") && !isPartOf(szName, "GetPlayerView") && !isPartOf(szName, "FOV")
		&& !isPartOf(szName, "SFXGUIInteraction") && !isPartOf(szName, "SFHandler") && !isPartOf(szName, "SFXProfile") && !isPartOf(szName, "IsInMultiplayerFlow")
		&& !isPartOf(szName, "SFXGameEffect") && !isPartOf(szName, "SFXCamera") && !isPartOf(szName, "SFXWeapon") && !isPartOf(szName, "SFXGame.BioPawn") && !isPartOf(szName, "Engine.Pawn")
		&& !isPartOf(szName, "IsPlayerPerform") && !isPartOf(szName, ".Timer") && !isPartOf(szName, "InputEvent") && !isPartOf(szName, "SetAnim")
		&& !isPartOf(szName, "LoadWeap") && !isPartOf(szName, "ScoreInfo") && !isPartOf(szName, "LoadPow") && !isPartOf(szName, "RagdollFai")
		&& !isPartOf(szName, "Camper") && !isPartOf(szName, "Deferred") && !isPartOf(szName, "CheckPrior") && !isPartOf(szName, "HealthFai")
		&& !isPartOf(szName, "NavigationPoint") && !isPartOf(szName, "OnInit") && !isPartOf(szName, "PowerCustomAction")) {*/
		//if (!strcmp(szName, "Function Engine.Actor.Tick") && !strcmp(szName, "Function Engine.Interaction.PostRender")) {

		//printf(szName);
		//printf("\n");

	//}
	//
	//ProcessEvent(pObject, pFunction, pParms, pResult);
	//FILE *fp = fopen("C:\\Users\\YouUser\\Desktop\\Functions.txt", "w+");
	//fprintf(fp, "%s\n", szName);

}



void onAttach()
{
	boottime = GetTickCount64();
	AllocConsole();
	AttachConsole(GetCurrentProcessId());
	
	// Get STDOUT handle
	HANDLE ConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	int SystemOutput = _open_osfhandle(intptr_t(ConsoleOutput), _O_TEXT);
	FILE *COutputHandle = _fdopen(SystemOutput, "w");

	// Get STDERR handle
	HANDLE ConsoleError = GetStdHandle(STD_ERROR_HANDLE);
	int SystemError = _open_osfhandle(intptr_t(ConsoleError), _O_TEXT);
	FILE *CErrorHandle = _fdopen(SystemError, "w");

	// Redirect the CRT standard input, output, and error handles to the console
	freopen_s(&COutputHandle, "CONOUT$", "w", stdout);
	freopen_s(&CErrorHandle, "CONOUT$", "w", stderr);

	std::ofstream outf("KismetLog.txt");
	teebuf tb{ outf.rdbuf(), std::cout.rdbuf() };
	std::streambuf* coutbuf = std::cout.rdbuf(&tb);

	std::cout << "ME3Tweaks Kismet Logger for Mass Effect 3\nBy Mgamerz\n";
	std::cout.rdbuf(coutbuf); // needs to be replaced as it gets used to flush

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

