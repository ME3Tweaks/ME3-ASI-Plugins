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
	if (isPartOf(szName, "Function Engine.SequenceOp.Activated")) {
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
		std::cout << "\n";
	}
	ProcessEvent(pObject, pFunction, pParms, pResult);
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

