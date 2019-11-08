#include <stdio.h>
#include <io.h>
#include <fcntl.h>     /* for _O_TEXT and _O_BINARY */  
#include <string>
#include <fstream>
#include <iostream>
#include <ostream>
#include <streambuf>
#include <shlwapi.h>
#include <sstream>

#include "../ME3SDK/ME3TweaksHeader.h"
#include "../ME3SDK/ScreenLogger.h"
#include "../ME3SDK/SdkHeaders.h"
#include "../detours/detours.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.

ME3TweaksASILogger logger("ConsoleExtension v1", "ConsoleExtension.txt", false);
ScreenLogger screenLogger(L"ConsoleExtension v1");

wstringstream& operator<<(wstringstream& ss, const FString& fStr)
{
	
	for (auto i = 0; i < fStr.Num() && fStr(i) != 0; i++)
	{
		ss << fStr(i);
	}
	return ss;
}

void __fastcall HookedPE(UObject *pObject, void *edx, UFunction *pFunction, void *pParms, void *pResult)
{
	const auto funcName = pFunction->GetFullName();
	if (IsA<USFXConsole>(pObject) && isPartOf(funcName, "Function Console.Typing.InputChar"))
	{
		const auto inputCharParams = static_cast<UConsole_execInputChar_Parms*>(pParms);
		if (inputCharParams->Unicode.Count >= 1 && inputCharParams->Unicode(0) == '\r')
		{
			const auto console = static_cast<USFXConsole*>(pObject);
			wstringstream ss;
			ss << console->TypedStr;
			ss << endl;
			const wstring msg = ss.str();
			logger.writeToDiskOnly(msg, true);
			screenLogger.LogMessage(msg);
		}
	}
	else if (!strcmp(funcName, "Function SFXGame.BioHUD.PostRender"))
	{
		const auto hud = static_cast<ABioHUD*>(pObject);
		screenLogger.PostRenderer(hud);
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

