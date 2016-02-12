#include <stdio.h>
#include "..\ME3SDK\SdkHeaders.h"
#include "..\VMTDetour\vmthooks.h"
#include "..\VMTDetour\detours.h"

//#include <string.h>
//#include <windows.h>
//#include <winsock.h>
//#include <conio.h>
toolkit::VMTHook* hook;
TArray< UObject* >*     GObjObjects = NULL;
typedef void(__stdcall *ProcessEvent) (UFunction*, void*, void*);

DWORD ProcessEventOrig;
UFunction *pUFunc = NULL;
void      *pParms = NULL;
void      *pResult = NULL;
UObject *pCallObject = NULL;
UObject* pWaveStartFunc = NULL;
USFXLocalPlayer* player = NULL;
int originalMaxEnemies = 0;
PDWORD dwOldVMT = NULL;
FILE *f = NULL;

void __declspec(naked) ProcessEventHooked()
{
	__asm mov pCallObject, ecx;
	__asm
	{
		push eax
		mov eax, dword ptr[esp + 0x8]
			mov pUFunc, eax
			mov eax, dword ptr[esp + 0xC]
			mov pParms, eax
			mov eax, dword ptr[esp + 0x10]
			mov pResult, eax
			pop eax
	}
	__asm pushad
	if (pUFunc)
	{
		/*
		Perform logic here for function that was hooked. 
		This is called before the event is processed.
		*/
		UObject* pWaveHorde = UObject::FindObject< UObject >("Class sfxgamempcontent.SFXWave_Horde");
		if (pWaveHorde) {
			USFXWave_Horde* horde = static_cast<USFXWave_Horde*> (pWaveHorde);
			if (originalMaxEnemies == 0) {
				originalMaxEnemies = horde->MaxEnemies;
			}
			int fuzzy = rand() % 8 + 1;
			//USFXWave_Horde: public Usfxwave
			horde->MaxEnemies = originalMaxEnemies + 4 - fuzzy;
		}
		
	}
	__asm popad
	__asm
	{
		push pResult
		push pParms
			push pUFunc
			call ProcessEventOrig
			retn 0xC
	}
}

bool Hook()
{
	bool hookedHUD = false;
	GObjObjects = (TArray< UObject* >*)GObjects;
	while (hookedHUD == false) {
		pWaveStartFunc = UObject::FindObject< UObject >("Function sfxgamempcontent.SFXWave_Horde.BeginWave");
		if (pWaveStartFunc)
		{
			dwOldVMT = *(PDWORD*)pWaveStartFunc;
			ProcessEventOrig = dwOldVMT[70];
			ProcessEventOrig = (DWORD)DetourFunction((PBYTE)ProcessEventOrig, (PBYTE)ProcessEventHooked);
			printf("Hooked the wave start event.\n");
			hookedHUD = true;
		}
		else {
			printf("Hook not found, waiting 1s\n");
			Sleep(1000);
		}
	}
	return true;
}


void onAttach()
{
	Hook();
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

