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
ME3TweaksASILogger logger("MP Controller Client Fix", "WorldInfo.txt");
bool logNextTick = false;

FVector inline RotationToVector(FRotator Rotation) {
	FVector Vector;
	float fYaw = Rotation.Yaw * (float)CONST_UnrRotToRad;
	float fPitch = Rotation.Pitch * (float)CONST_UnrRotToRad;
	float fCosPitch = cos(fPitch);

	Vector.X = cos(fYaw) * fCosPitch;
	Vector.Y = sin(fYaw) * fCosPitch;
	Vector.Z = sin(fPitch);

	return Vector;
}

void __fastcall HookedPE(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult)
{
	char* szName = pFunction->GetFullName();
	//if (isPartOf(szName, "Function Engine.DebugCameraHUD.PostRender"))
	//{
	//	ProcessEvent(pObject, pFunction, pParms, pResult);
	//	ADebugCameraHUD* debugCameraHud = (ADebugCameraHUD*)pObject;
	//	if (!debugCameraHud->Canvas)
	//	{
	//		return;
	//	}
	//	int xpos = 40;
	//	int ypos = 300;

	//	debugCameraHud->Canvas->SetPos(xpos, ypos); //set canvas position to (10,10)
	//	debugCameraHud->Canvas->SetDrawColor(150, 150, 255, 255);
	//	debugCameraHud->Canvas->DrawText(L"ME3Tweaks Enhanced Debug Camera Mod", true, 1.5f, 1.5f, NULL);


	//	xpos += 25;
	//	ypos += 20;
	//	debugCameraHud->Canvas->SetPos(xpos, ypos); //set canvas position to (10,10)
	//	debugCameraHud->Canvas->SetDrawColor(255, 255, 255, 255);

	//	//Perform trace

	//	FVector Extent = { 0,0,0 };
	//	FVector HitLocation;
	//	FVector HitNormal;
	//	FTraceHitInfo HitInfo;
	//	FRotator camRotation = debugCameraHud->PlayerOwner->PlayerCamera->CameraCache.POV.Rotation;


	//	FVector end = RotationToVector(camRotation);

	//	FVector camLoc = debugCameraHud->PlayerOwner->PlayerCamera->CameraCache.POV.location;
	//	end.X = end.X * 5000 * 20 + camLoc.X;
	//	end.Y = end.Z * 5000 * 20 + camLoc.Y;
	//	end.Z = end.Z * 5000 * 20 + camLoc.Z;

	//	AActor* foundActor = debugCameraHud->Trace(end, camLoc, 1, Extent, 0, &HitLocation, &HitNormal, &HitInfo);
	//	if (foundActor)
	//	{
	//		string str = string_format("Containing file: %s.pcc", foundActor->GetContainingMapName());
	//		std::wstring widestr = std::wstring(str.begin(), str.end());
	//		debugCameraHud->Canvas->DrawText(FString(const_cast<wchar_t*>(widestr.c_str())), true, 1.0f, 1.0f, NULL);

	//		ypos += 12;
	//		debugCameraHud->Canvas->SetPos(xpos, ypos); //set canvas position to (10,10)
	//		str = string_format("Hit Actor: %s_%i", foundActor->GetFullNameNoClass(), (foundActor->Name.GetIndex() - 1));
	//		widestr = std::wstring(str.begin(), str.end());
	//		debugCameraHud->Canvas->DrawText(FString(const_cast<wchar_t*>(widestr.c_str())), true, 1.0f, 1.0f, NULL);


	//		if (HitInfo.HitComponent) {
	//			ypos += 12;
	//			debugCameraHud->Canvas->SetPos(xpos, ypos); //set canvas position to (10,10)
	//			str = string_format("Hit component: %s_%d", HitInfo.HitComponent->GetFullName(), HitInfo.HitComponent->Name.GetIndex() - 1);
	//			widestr = std::wstring(str.begin(), str.end());
	//			debugCameraHud->Canvas->DrawText(FString(const_cast<wchar_t*>(widestr.c_str())), false, 1.0f, 1.0f, NULL);
	//		//	HitInfo.HitComponent->
	//		}

	//		//logger.writeToLog(string_format("(%s) %s_%d\n", mapname, fullname, instanceIndex), true);
	//	}
	//	else
	//	{
	//		debugCameraHud->Canvas->DrawText(L"No trace hit", true, 1.0f, 1.0f, NULL);

	//	}
	//	return; // do not process twice.
	//	/*AActor* actor = (AActor*)pObject;
	//	if (actor->WorldInfo)
	//	{
	//		if (actor->WorldInfo->bUseConsoleInput == 0)
	//		{
	//			logger.writeToConsoleOnly(string_format(" >> WI IS ZERO! WorldInfo.bUseConsoleInput: %u\n", actor->WorldInfo->bUseConsoleInput), true);
	//		}
	//		actor->WorldInfo->bUseConsoleInput = 1;
	//	}*/
	//}
	//else 
	if (isPartOf(szName, "Function SFXGame.SFXConsole.InputKey")) {
		USFXConsole_execInputKey_Parms* params = (USFXConsole_execInputKey_Parms*)pParms;
		//Event: 0 - > Down
		//Event: 1 - > Up
		//Event: 2 - > Holding
		//logger.writeToConsoleOnly(string_format("Key pressed: %u %s\n", params->Event, params->Key.GetName()), true);
		if (isPartOf(params->Key.GetName(), "Xbox")) {
			if (params->Event == 0) {
				logger.writeToConsoleOnly(string_format("%s DOWN\n", params->Key.GetName()), true);
			}
			else if (params->Event == 1) {
				logger.writeToConsoleOnly(string_format("%s UP\n", params->Key.GetName()), true);
			}
			else if (params->Event == 2) {
				logger.writeToConsoleOnly(string_format("%s HOLD\n", params->Key.GetName()), true);
			}
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
}

/******************************************************************************
 * Checks to see if a directory exists. Note: This method only checks the
 * existence of the full path AND if path leaf is a dir.
 *
 * @return  >0 if dir exists AND is a dir,
 *           0 if dir does not exist OR exists but not a dir,
 *          <0 if an error occurred (errno is also set)
 *****************************************************************************/
int dirExists(const char* const path)
{
	struct stat info;

	int statRC = stat(path, &info);
	if (statRC != 0)
	{
		if (errno == ENOENT) { return 0; } // something along the path does not exist
		if (errno == ENOTDIR) { return 0; } // something in path prefix is not a dir
		return -1;
	}

	return (info.st_mode & S_IFDIR) ? 1 : 0;
}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		// Check if DLC_MOD_ControllerSupport exists at ..\..\BioGame\DLC
		if (dirExists("..\\..\\BIOGame\\DLC\\DLC_MOD_ControllerSupport") != 0)
		{
			DisableThreadLibraryCalls(hModule);
			CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)onAttach, NULL, 0, NULL);
		}
		/*else
		{
			MessageBoxW(NULL, L"Controller mod not installed!", L"Error!", MB_ICONEXCLAMATION | MB_OK);
		}*/
		//doesn't exist otherwise
		return true;
		break;

	case DLL_PROCESS_DETACH:
		return true;
		break;
	}
	return true;
};