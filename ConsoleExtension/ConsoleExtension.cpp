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

#include "SimpleSerializer.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.


#define LOGGING 0

#if LOGGING 
ME3TweaksASILogger logger("ConsoleExtension v1", "ConsoleExtension.txt", false);
ScreenLogger screenLogger(L"ConsoleExtension v1");
#endif

auto savedCamsFileName = "savedCams";

wstringstream& operator<<(wstringstream& ss, const FString& fStr)
{

	for (auto i = 0; i < fStr.Num() && fStr(i) != 0; i++)
	{
		ss << fStr(i);
	}
	return ss;
}

FTPOV cachedPOV;
FTPOV povToLoad;
bool shouldSetCamPOV;

FTPOV savedPOVs[10];

void HandleConsoleCommand(USFXConsole* console, const wstring& cmd)
{
	if (cmd.rfind(L"savecam ") == 0 && cmd.length() == 9)
	{
		const int i = _wtoi(&cmd[8]);
		if (i >= 0 && i < 10)
		{
			savedPOVs[i] = cachedPOV;
			writeCamArray(savedCamsFileName, savedPOVs);
		}
	}
	else if (cmd.rfind(L"loadcam ") == 0 && cmd.length() == 9)
	{
		const int i = _wtoi(&cmd[8]);
		if (i >= 0 && i < 10)
		{
			readCamArray(savedCamsFileName, savedPOVs);
			povToLoad = savedPOVs[i];
			shouldSetCamPOV = true;
		}
	}
	else if (cmd == L"superspeed") {
		auto playerpawns = FindObjectsOfType(ASFXPawn_Player::StaticClass());
		for (int i = 0; i < playerpawns.Count; i++) {
			auto playerpawn = (ASFXPawn_Player*)playerpawns.Data[i];
			playerpawn->GroundSpeed = 6000.0;
			playerpawn->CombatGroundSpeed = 6000.0;
			playerpawn->StormSpeed = 10000.0;
			playerpawn->AccelRate = 4000.0;
		}
	}
	else if (cmd == L"normalspeed") {
		auto playerpawns = FindObjectsOfType(ASFXPawn_Player::StaticClass());
		for (int i = 0; i < playerpawns.Count; i++) {
			auto playerpawn = (ASFXPawn_Player*)playerpawns.Data[i];
			playerpawn->GroundSpeed = 400.0;
			playerpawn->CombatGroundSpeed = 350.0;
			playerpawn->StormSpeed = 700.0; 
			playerpawn->AccelRate = 1500.0;
		}
	}
}

void __fastcall HookedPE(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult)
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
			HandleConsoleCommand(console, ss.str());
#if LOGGING 
			ss << endl;
			const wstring msg = ss.str();
			logger.writeToDiskOnly(msg, true);
			screenLogger.LogMessage(msg);
#endif

}
	}
#if LOGGING
	else if (!strcmp(funcName, "Function SFXGame.BioHUD.PostRender"))
	{
		const auto hud = static_cast<ABioHUD*>(pObject);
		screenLogger.PostRenderer(hud);
	}
#endif

	else if (IsA<ABioPlayerController>(pObject) && isPartOf(pFunction->GetFullName(), "Function SFXGame.BioPlayerController.PlayerTick"))
	{
		const auto playerController = static_cast<ABioPlayerController*>(pObject);
		cachedPOV = playerController->PlayerCamera->CameraCache.POV;
	}
	else if (shouldSetCamPOV && !strcmp(funcName, "Function Engine.Camera.UpdateCamera"))
	{
		const auto camera = static_cast<ACamera*>(pObject);
		if (IsA<AActor>(camera->PCOwner))
		{
			shouldSetCamPOV = false;
			const auto actor = static_cast<AActor*>(camera->PCOwner);
			actor->location = povToLoad.location;
			actor->Rotation = povToLoad.Rotation;
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

	if (_access_s(savedCamsFileName, 0) == 0) // does file exist
	{
		readCamArray(savedCamsFileName, savedPOVs);
	}
	else
	{
		writeCamArray(savedCamsFileName, savedPOVs);
	}
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

