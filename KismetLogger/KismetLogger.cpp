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

ME3TweaksASILogger logger("Kismet Logger v5", "KismetLog.txt");

void __fastcall HookedPE(UObject *pObject, void *edx, UFunction *pFunction, void *pParms, void *pResult)
{
	char *szName = pFunction->GetFullName();
	if (isPartOf(szName, "Function Engine.SequenceOp.Activated")) {
		USequenceOp* op = (USequenceOp*)pObject;
		const char* fullInstancedPath = op->GetFullPath();
		const char* className = op->Class->Name.GetName();
		logger.writeToLog(string_format("%s %s\n", className, fullInstancedPath), true);
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

