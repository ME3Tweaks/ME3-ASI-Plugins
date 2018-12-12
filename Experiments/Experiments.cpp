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

//ME3TweaksASILogger logger("Match Stats Collector", "MatchStats.txt");
ME3TweaksASILogger logger("MatchSettings", "MatchSettings.txt");
bool logNextTick = false;
void __fastcall HookedPE(UObject *pObject, void *edx, UFunction *pFunction, void *pParms, void *pResult)
{
	char *szName = pFunction->GetFullName();
	if (isPartOf(szName, "Function sfxgamempcontent.sfxgrimp.SetGameStatus")) {
		logger.writeToLog(string_format("%s\n", szName), true);
	}
	/*if (isPartOf(szName, "Function sfxgamempcontent.sfxpawn_playermp.Tick") && logNextTick) {
		Asfxpawn_playermp* player = (Asfxpawn_playermp*)pObject;
		logger.writeToLog(string_format("%f,%f,%f\n", player->location.X, player->location.Y, player->location.Z), false);
		logNextTick = false;
	}
	else if (isPartOf(szName, "Function SFXGame.SFXConsole.InputKey")) {
		USFXConsole_execInputKey_Parms* params = (USFXConsole_execInputKey_Parms*)pParms;
		//Event: 0 - > Down
		//Event: 1 - > Up
		//Event: 2 - > Holding
		if (params->Event == 1 && strcmp("XboxTypeS_Back", params->Key.GetName()) == 0) {
			logNextTick = true;
		}
		//logger.writeToConsoleOnly(string_format("%u %s\n", params->Event,params->Key.GetName()), true);
	}*/
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