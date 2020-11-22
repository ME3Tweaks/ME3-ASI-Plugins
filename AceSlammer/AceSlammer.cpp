#include <stdio.h>
#include <shlwapi.h>
#include "..\ME3SDK\ME3TweaksHeader.h"
#include "..\ME3SDK\SdkHeaders.h"
#include <chrono>
#include <thread>
#include <functional>
#include "../detours/detours.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.

//ME3TweaksASILogger logger("Ace Slammer v1", "AceSlammer.txt");

bool changeGravity = false;

const int NEXTSTATE_SLAMMING = 1;
const int NEXTSTATE_ZEROG = 2;
const int NEXTSTATE_UPGRAV = 3;
const int NEXTSTATE_NORMAL = 4;
int nextState = NEXTSTATE_UPGRAV;
int numTicksBetweenRagdoll = 12;
int currentRagdollTick = 0;


void __fastcall HookedPE(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult)
{
	if (changeGravity) {
		char* szName = pFunction->GetFullName();
		if (strcmp(szName, "Function SFXGame.BioPlayerController.PlayerTick") == 0)
		{
			bool nextStateSet = false;
			ABioPlayerController* bpc = reinterpret_cast<ABioPlayerController*>(pObject);
			if (!nextStateSet && nextState == NEXTSTATE_SLAMMING)
			{
				bpc->WorldInfo->WorldGravityZ = -6000; //Slam it like Shaq
				nextState = NEXTSTATE_NORMAL;
				nextStateSet = true;
			}
			if (!nextStateSet && nextState == NEXTSTATE_NORMAL)
			{
				bpc->WorldInfo->WorldGravityZ = -981; //Normal
				nextState = NEXTSTATE_UPGRAV;
				nextStateSet = true;
			}
			if (!nextStateSet && nextState == NEXTSTATE_ZEROG)
			{
				bpc->WorldInfo->WorldGravityZ = 3; //just slightly up
				nextState = NEXTSTATE_SLAMMING;
				nextStateSet = true;
			}
			if (!nextStateSet && nextState == NEXTSTATE_UPGRAV)
			{
				bpc->WorldInfo->WorldGravityZ = 700; //Going up
				nextState = NEXTSTATE_ZEROG;
				nextStateSet = true;
			}

			//logger.writeToLog(string_format("GRAVITY: %f\n", bpc->WorldInfo->WorldGravityZ), true);
			//logger.writeToConsoleOnly(string_format("Default gravity: %f", wi->DefaultGravityZ), true);
			//logger.writeToLog(string_format("%s", szName), true);
			changeGravity = false;
			//logger.writeToLog(string_format("Ragdoll tick %d/%d\n", currentRagdollTick, numTicksBetweenRagdoll), true);
			//if (currentRagdollTick >= numTicksBetweenRagdoll)
			//{
			//	auto playerObj = FindObjectOfType(ASFXPawn_Player::StaticClass());
			//	if (playerObj != NULL) {
			//		auto player = static_cast<ASFXPawn_Player*>(playerObj);
			//		auto pawns = FindObjectsOfType(ABioPawn::StaticClass());
			//		for (int i = 0; i < pawns.Count; i++) {
			//			auto pawn = static_cast<ABioPawn*>(pawns.Data[i]);
			//			if (pawn != NULL && pawn->CanRagdoll() && pawn->bCanRagdoll) {
			//				auto pname = pawn->Name.GetName();
			//				auto pid = pawn->Name.GetIndex();
			//				if (pid > 0) {
			//					// I have no idea what i'm doing
			//					// But I hate C/C++ strings
			//					/*auto commandS = string_format("testragdoll %s_%d", pname, pid - 1);
			//					auto commandWS = s2ws(commandS);
			//					wchar_t* t = (wchar_t*)commandWS.c_str();
			//					logger.writeToLog(t, true, true);
			//					pawn->Controller->ConsoleCommand(t, false);*/
			//					//pawn->InitRagdoll();
			//					//pawn->rag
			//				}
			//			}
			//		}
			//	}
			//	currentRagdollTick = 0;
			//}
		}
	}
	ProcessEvent(pObject, pFunction, pParms, pResult);
}

void timer_start(function<unsigned(void)> func, unsigned int interval)
{
	std::thread([func, interval]() {
		while (true)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(func()));
		}
		}).detach();
}


unsigned timerTick()
{
	unsigned nextInterval = 100; //default 100ms
	if (nextState == NEXTSTATE_SLAMMING)
	{
		nextInterval = 1600;
	}
	if (nextState == NEXTSTATE_NORMAL)
	{
		nextInterval = 7000;
	}
	if (nextState == NEXTSTATE_ZEROG)
	{
		nextInterval = 2100;
	}
	if (nextState == NEXTSTATE_UPGRAV)
	{
		nextInterval = 250;
	}
	changeGravity = true;
	currentRagdollTick++;
	return nextInterval;
}


void onAttach()
{
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread()); //This command set the current working thread to the game current thread.
	DetourAttach(&(PVOID&)ProcessEvent, HookedPE); //This command will start your Hook.
	DetourTransactionCommit();
	std::this_thread::sleep_for(std::chrono::milliseconds(10000));
	timer_start(timerTick, 1000);
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

