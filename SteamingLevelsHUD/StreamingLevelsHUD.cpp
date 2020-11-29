#include <string>
#include <sstream>
//#include "../ME3SDK/SdkHeaders.h"
#include "../ME3SDK/ME3TweaksHeader.h"
#include "../detours/detours.h"
#include "../ME3SDK/ScreenLogger.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.

//typedef void(__thiscall* tProcessEvent)(class UObject*, class UFunction*, void*, void*);
//tProcessEvent ProcessEvent = (tProcessEvent)0x00453120;

ME3TweaksASILogger logger("Streaming Levels HUD", "StreamingLevelsHUD.txt");
//ScreenLogger screenLogger(L"Streaming Levels HUD v1");
//
//int numTicks = 0;
//int ticksBetweenUpdates = 60;
//
//wstringstream& operator<<(wstringstream& ss, const FString& fStr)
//{
//
//	for (auto i = 0; i < fStr.Num() && fStr(i) != 0; i++)
//	{
//		ss << fStr(i);
//	}
//	return ss;
//}
//
//wstringstream& operator<<(wstringstream& ss, const FVector& vec)
//{
//	ss << "(" << vec.X << ", " << vec.Y << ", " << vec.Z << ")";
//
//	return ss;
//}

static void RenderTextSLH(wstring msg, const float x, const float y, const float r, const float g, const float b, UCanvas* can)
{
	can->SetDrawColor(BYTE(r) * 255, BYTE(g) * 255, BYTE(b) * 255, 255);
	can->SetPos(x, y);
	FLinearColor drawColor;
	drawColor.R = r;
	drawColor.G = g;
	drawColor.B = b;
	drawColor.A = 1.0f;
	FVector2D glowBorder;
	glowBorder.X = 2;
	glowBorder.Y = 2;
	FFontRenderInfo renderInfo;
	renderInfo.bClipText = true;
	renderInfo.bEnableShadow = true;
	renderInfo.GlowInfo.bEnableGlow = false;
	renderInfo.GlowInfo.GlowColor = drawColor;
	renderInfo.GlowInfo.GlowInnerRadius = glowBorder;
	renderInfo.GlowInfo.GlowOuterRadius = glowBorder;
	can->DrawText(FString(msg.data()), 1, 1.0f, 1.0f, &renderInfo);
}

void __fastcall HookedPE(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult)
{
	char* funcName = pFunction->GetFullName();
	if (strcmp(funcName, "Function SFXGame.BioHUD.PostRender") == 0)
	{
		const auto hud = static_cast<ABioHUD*>(pObject);
		//screenLogger.PostRenderer(hud);

		//numTicks++;
		//if (numTicks > ticksBetweenUpdates) {
			// Get list of streaming levels
		if (hud->WorldInfo)
		{
			//screenLogger->ClearMessages();
			//logger.writeToConsoleOnly(string_format("Number of streaming levels: %d\n", hud->WorldInfo->StreamingLevels.Count), true);
			if (hud->WorldInfo->StreamingLevels.Any()) {
				int yIndex = 0;
				for (int i = 0; i < hud->WorldInfo->StreamingLevels.Count; i++) {
					wstringstream ss;
					auto sl = hud->WorldInfo->StreamingLevels.Data[i];
					if (sl->bShouldBeLoaded || sl->bIsVisible) {
						float r = 1;
						float g = 1;
						float b = 1;

						ss << sl->PackageName.GetName();
						if (sl->PackageName.GetIndex() > 0)
						{
							ss << "_" << sl->PackageName.GetIndex();
						}
						if (sl->bIsVisible)
						{
							ss << " Visible";
							r = 0;
							g = 1;
							b = 0;
						}
						else if (sl->bShouldBeLoaded)
						{
							ss << " Loaded";
							r = 1;
							g = 1;
							b = 0;
						}
						const wstring msg = ss.str();
						RenderTextSLH(msg, 5, yIndex * 12, r, g, b, hud->Canvas);
						yIndex++;
						//screenLogger.LogMessage(msg);
					}
				}
			}
		}
		//numTicks -= ticksBetweenUpdates;

		else
		{
			logger.writeToConsoleOnly(L"No world info!\n", true);
		}
	}

	//}
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

