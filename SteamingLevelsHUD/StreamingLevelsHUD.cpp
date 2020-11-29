#include <string>
#include <sstream>
//#include "../ME3SDK/SdkHeaders.h"
#include "../ME3SDK/ME3TweaksHeader.h"
#include "../detours/detours.h"
#include "../ME3SDK/ScreenLogger.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.
#pragma comment( lib, "psapi.lib" )
#include <psapi.h>


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

const size_t MEDIUM_MEM = 3006477107; //2.8 GiB
const size_t HIGH_MEM = 3543348019; //3.3 GiB
size_t MaxMemoryHit = 0;

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

const char* FormatBytes(size_t bytes, char* keepInStackStr)
{
	const char* sizes[4] = { "B", "KB", "MB", "GB" };

	int i;
	double dblByte = bytes;
	for (i = 0; i < 4 && bytes >= 1024; i++, bytes /= 1024)
		dblByte = bytes / 1024.0;

	sprintf(keepInStackStr, "%.2f", dblByte);

	return strcat(strcat(keepInStackStr, " "), sizes[i]);
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
		// Render mem usage
		PROCESS_MEMORY_COUNTERS pmc;
		if (GetProcessMemoryInfo(OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, GetCurrentProcessId()), &pmc, sizeof(pmc)))
		{
			float r = 0;
			float g = 0;

			if (pmc.PagefileUsage > MEDIUM_MEM && pmc.PagefileUsage < HIGH_MEM)
			{
				// Yellow
				r = 1;
				g = 1;
			}
			else if (pmc.PagefileUsage >= HIGH_MEM)
			{
				//Red
				r = 1;
				g = 0;
			}
			else
			{
				// Green
				g = 1;
			}
			char str[18] = ""; //Allocate
			RenderTextSLH(s2ws(string_format("Memory usage: %s (%u bytes)", FormatBytes(pmc.PagefileUsage, str), pmc.PagefileUsage)), 5, 0, r, g, 0, hud->Canvas);

			// Max Hit
			if (pmc.PagefileUsage > MaxMemoryHit)
			{
				MaxMemoryHit = pmc.PagefileUsage;
			}

			if (MaxMemoryHit > MEDIUM_MEM && MaxMemoryHit < HIGH_MEM)
			{
				// Yellow
				r = 1;
				g = 1;
			}
			else if (MaxMemoryHit >= HIGH_MEM)
			{
				//Red
				r = 1;
				g = 0;
			}
			else
			{
				// Green
				g = 1;
			}
			
			char str2[18] = "";
			RenderTextSLH(s2ws(string_format("Max memory hit: %s (%u bytes)", FormatBytes(MaxMemoryHit, str2), MaxMemoryHit)), 5, 12, r, g, 0, hud->Canvas);
			
		}

		if (hud->WorldInfo)
		{
			//screenLogger->ClearMessages();
			//logger.writeToConsoleOnly(string_format("Number of streaming levels: %d\n", hud->WorldInfo->StreamingLevels.Count), true);
			if (hud->WorldInfo->StreamingLevels.Any()) {
				int yIndex = 3; //Start at line 3 (starting at 0)
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

