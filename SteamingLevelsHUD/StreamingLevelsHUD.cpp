#include <string>
#include <sstream>
#include "../ME3SDK/ME3TweaksHeader.h"
#include "../detours/detours.h"
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.
#pragma comment( lib, "psapi.lib" )
#include <psapi.h>

const size_t MEDIUM_MEM = 3006477107; //2.8 GiB
const size_t HIGH_MEM = 3543348019; //3.3 GiB
const size_t CRIT_HIGH_MEM = 3650722201; //3.4 GiB - on verge of crash

// Testing vars
//const size_t MEDIUM_MEM = 30064771; //2.8 GiB
//const size_t HIGH_MEM = 35433480; //3.3 GiB
//const size_t CRIT_HIGH_MEM = 36507222; //3.4 GiB - on verge of crash

size_t MaxMemoryHit = 0;
int currentCritTick = 0;
int critNumTicksToFlip = 10; //start
const int critNumTicksToTurnOff = 30;
const int critNumTicksToTurnOn = 30;
BOOL critVisible = true;
bool DrawSLH = true;
bool CanToggleDrawSLH = false;

static void RenderTextSLH(std::wstring msg, const float x, const float y, const char r, const char g, const char b, const float alpha, UCanvas* can)
{
	can->SetDrawColor(r, g, b, alpha * 255);
	can->SetPos(x, y + 64); //+ is Y start. To prevent overlay on top of the power bar thing
	FLinearColor drawColor;
	drawColor.R = r;
	drawColor.G = g;
	drawColor.B = b;
	drawColor.A = alpha;
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
		// Toggle drawing/not drawing
		if ((GetKeyState('T') & 0x8000) && (GetKeyState(VK_CONTROL) & 0x8000)) {
			if (CanToggleDrawSLH) {
				CanToggleDrawSLH = false; // Will not activate combo again until you re-press combo
				DrawSLH = !DrawSLH;
			}
		}
		else
		{
			if (!(GetKeyState('T') & 0x8000) || !(GetKeyState(VK_CONTROL) & 0x8000)) {
				CanToggleDrawSLH = true; // can press key combo again
			}
		}

		currentCritTick++;
		if (currentCritTick > critNumTicksToFlip)
		{
			currentCritTick = 0;
			critVisible = !critVisible;
			critNumTicksToFlip = critVisible ? critNumTicksToTurnOff : critNumTicksToTurnOn;
		}
		const auto hud = static_cast<ABioHUD*>(pObject);
		// Render mem usage
		PROCESS_MEMORY_COUNTERS pmc;
		if (GetProcessMemoryInfo(OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, GetCurrentProcessId()), &pmc, sizeof(pmc)))
		{
			unsigned char r = 0;
			unsigned char g = 0;

			if (pmc.PagefileUsage > MEDIUM_MEM && pmc.PagefileUsage < HIGH_MEM)
			{
				// Yellow
				r = 255;
				g = 255;
			}
			else if (pmc.PagefileUsage >= HIGH_MEM)
			{
				//Red
				r = 255;
				g = 0;
			}
			else
			{
				// Green
				g = 255;
			}

			// Flash if high crit

			char str[18] = ""; //Allocate
			float alpha = 1.0f;
			if (pmc.PagefileUsage >= CRIT_HIGH_MEM && !critVisible)
			{
				alpha = 0.5;
			}
			if (DrawSLH)
				RenderTextSLH(s2ws(string_format("Memory usage: %s (%u bytes)", FormatBytes(pmc.PagefileUsage, str), pmc.PagefileUsage)), 5.0f, 0.0f, r, g, 0, alpha, hud->Canvas);


			// Max Hit
			if (pmc.PagefileUsage > MaxMemoryHit)
			{
				MaxMemoryHit = pmc.PagefileUsage;
			}

			if (MaxMemoryHit > MEDIUM_MEM && MaxMemoryHit < HIGH_MEM)
			{
				// Yellow
				r = 255;
				g = 255;
			}
			else if (MaxMemoryHit >= HIGH_MEM)
			{
				//Red
				r = 255;
				g = 0;
			}
			else
			{
				// Green
				g = 255;
			}

			if (DrawSLH) {
				char str2[18] = "";
				RenderTextSLH(s2ws(string_format("Max memory hit: %s (%u bytes)", FormatBytes(MaxMemoryHit, str2), MaxMemoryHit)), 5.0f, 12.0f, r, g, 0, 1.0f, hud->Canvas);
			}
		}

		if (DrawSLH && hud->WorldInfo)
		{
			//screenLogger->ClearMessages();
			//logger.writeToConsoleOnly(string_format("Number of streaming levels: %d\n", hud->WorldInfo->StreamingLevels.Count), true);
			if (hud->WorldInfo->StreamingLevels.Any()) {
				int yIndex = 3; //Start at line 3 (starting at 0)
				for (int i = 0; i < hud->WorldInfo->StreamingLevels.Count; i++) {
					wstringstream ss;
					ULevelStreaming* sl = hud->WorldInfo->StreamingLevels.Data[i];
					if (sl->bShouldBeLoaded || sl->bIsVisible) {
						unsigned char r = 255;
						unsigned char g = 255;
						unsigned char b = 255;

						ss << sl->PackageName.GetName();
						if (sl->PackageName.GetIndex() > 0)
						{
							ss << "_" << sl->PackageName.GetIndex();
						}
						if (sl->bIsVisible)
						{
							ss << " Visible";
							r = 0;
							g = 255;
							b = 0;
						}
						else if (sl->bHasLoadRequestPending)
						{
							ss << " Loading";
							r = 255;
							g = 229;
							b = 0;
						}
						else if (sl->bHasUnloadRequestPending)
						{
							ss << " Unloading";
							r = 0;
							g = 255;
							b = 229;
						}
						else if (sl->bShouldBeLoaded && sl->LoadedLevel)
						{
							ss << " Loaded";
							r = 255;
							g = 255;
							b = 0;
						}
						else if (sl->bShouldBeLoaded)
						{
							ss << " Pending load";
							r = 255;
							g = 175;
							b = 0;
						}
						const wstring msg = ss.str();
						RenderTextSLH(msg, 5, yIndex * 12.0f, r, g, b, 1.0f, hud->Canvas);
						yIndex++;
					}
				}
			}
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

