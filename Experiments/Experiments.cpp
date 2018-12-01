#include <stdio.h>
#include <io.h>
#include <fcntl.h>     /* for _O_TEXT and _O_BINARY */  
#include <string>
#include <fstream>
#include <iostream>
#include <ostream>
#include <streambuf>
#include <shlwapi.h>

#include "..\ME3SDK\ME3TweaksHeader.h"
#include "..\ME3SDK\SdkHeaders.h"
#include "..\detours\detours.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.

ME3TweaksASILogger logger("Galaxy At Work Logger", "GAWLog.txt");

void __fastcall HookedPE(UObject *pObject, void *edx, UFunction *pFunction, void *pParms, void *pResult)
{
	char *szName = pFunction->GetFullName();
	if (isPartOf(szName, "Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnMPGameStatusChange")) {
		logger.writeToLog(string_format("%s\n", szName), true);
		USFXOnlineComponentBlazeGame_execOnMPGameStatusChange_Parms* parms = (USFXOnlineComponentBlazeGame_execOnMPGameStatusChange_Parms*)pParms;
		if (parms->Event) {
			FString statusAsStr = parms->Event->GetEventStatusAsString(parms->Event->CurrentStatus);
			if (statusAsStr.Data) {
				logger.writeToLog(string_format("New status: %s\n", wchar2string(statusAsStr.Data).c_str()), true);
			}
		}
	}
	else
		if (/*(isPartOf(szName, "Blaze") || isPartOf(szName, "Job")) &&*/ !isPartOf(szName, "Tick")) {
			logger.writeToLog(string_format("%s\n", szName), true);
		}
		//else if (isPartOf(szName, "Function SFXGame.SFXGAWAssetsHandler.OnGetRatingsComplete")) {
			//logger.writeToLog(string_format("%s\n", szName), true);
			//USFXOnlineComponentBlazeNotification_execGetGalaxyAtWarRatingsCompleted_Parms* parms = (USFXOnlineComponentBlazeNotification_execGetGalaxyAtWarRatingsCompleted_Parms*)pParms;
			//logger.writeToLog(string_format("  Error: %d\n", parms->errorCode), true);
			//logger.writeToLog(string_format("  Level: %d\n", parms->Level), true);
			//parms->Level = 26;
			//logger.writeToLog(string_format("  >> Level: %d\n", parms->Level), true);

			//logger.writeToLog(string_format("  uSecRatings: %d\n", parms->updatedSecurityRatings.Count), true);
			//for (int i = 0; i < parms->updatedSecurityRatings.Count; i++) {
			//	parms->updatedSecurityRatings(i) = i;
			//	logger.writeToLog(string_format("   uSecRatings[%d]: %d\n", i, parms->updatedSecurityRatings(i)), true);
			//}
			//logger.writeToLog(string_format("  uWarAssets: %d\n", parms->updatedWarAssets.Count), true);
			//for (int i = 0; i < parms->updatedWarAssets.Count; i++) {
			//	parms->updatedWarAssets(i) = i;
			//	logger.writeToLog(string_format("   uWarAssets[%d]: %d\n", i, parms->updatedWarAssets(i)), true);
			//}

			//for (int i = 0; i < parms->updatedSecurityRatings.Count; i++) {
			//	parms->updatedSecurityRatings(i) = i;
			//	logger.writeToLog(string_format("  >> uWarAssets[%d]: %d\n", i, parms->updatedSecurityRatings(i)), true);
			//}
		//}
	//else if (isPartOf(szName, "GAW") || isPartOf(szName, "GaW") || isPartOf(szName, "GalaxyAtWar")) {
	//	logger.writeToLog(string_format("%s\n", szName), true);
	//}
	ProcessEvent(pObject, pFunction, pParms, pResult);
}

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
}*/

void onAttach()
{
	//logger = ME3TweaksASILogger("Kismet Logger", "KismetLog.txt");
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

