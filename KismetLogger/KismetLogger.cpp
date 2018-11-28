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

ME3TweaksASILogger logger("Kismet Logger", "KismetLog.txt");

void __fastcall HookedPE(UObject *pObject, void *edx, UFunction *pFunction, void *pParms, void *pResult)
{
	char *szName = pFunction->GetFullName();
	if (isPartOf(szName, "Function Engine.SequenceOp.Activated")) {
		USequenceOp* op = (USequenceOp*)pObject;
		char* fullname = op->GetFullName();
		int netindex = op->NetIndex;
		logger.writeToLog(string_format("%s_%d\n", fullname, netindex), true);
		//logger->writeToLog("Test"s, true);
		//logger.writeToLog("Test."s, true);
		//std::cout.rdbuf(sharedtb); // needs to be replaced as it gets used to flush
		//std::cout << "[";
		//std::cout << secondsSinceBoot;
		//std::cout << ".";
		//std::cout << ms;
		//std::cout << "] ";
		//std::cout << op->GetFullName();
		//std::cout << "_";
		//std::cout << op->NetIndex;
		//std::cout << "\n";
		////printf("%p\n", coutbuf);
		//std::cout.rdbuf(coutbuf); // set to std cout to flush
	}
	ProcessEvent(pObject, pFunction, pParms, pResult);
}

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

