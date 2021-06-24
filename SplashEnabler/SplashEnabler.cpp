#include <combaseapi.h>
#include <iostream>
#include <Shlwapi.h>
#include <strsafe.h>
#include <filesystem>

#define _NOSDK
#include <thread>

//#include "../ME3SDK/ME3TweaksHeader.h"
//ME3TweaksASILogger logger("Splash logger", "SplashLog.txt");

static wchar_t SplashPath[MAX_PATH];
static HBITMAP SplashBitmap = NULL;
static HWND SplashWindow = NULL;
static const char* WindowTitleName = NULL;

/// <summary>
/// Splash Screen Window Pumping method
/// </summary>
/// <param name="windowHandle"></param>
/// <param name="message"></param>
/// <param name="wParam"></param>
/// <param name="lParam"></param>
/// <returns></returns>
LRESULT CALLBACK SplashScreenWindowPump(HWND windowHandle, UINT message, WPARAM wParam, LPARAM lParam)
{
	HDC hdc; //Display device context
	PAINTSTRUCT ps; //Paint Info Struct

	switch (message)
	{
	case WM_PAINT:
		// Draw the splash bitmap to the screen
		hdc = BeginPaint(windowHandle, &ps);
		DrawState(hdc, DSS_NORMAL, NULL, (LPARAM)SplashBitmap, NULL, 0, 0, 0, 0, DST_BITMAP);

		// No more painting
		EndPaint(windowHandle, &ps);
		break;
	case WM_DESTROY: // Kill splash window
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(windowHandle, message, wParam, lParam);
	}

	return 0;
}

/// <summary>
/// Checks if specified process (by process id) has a window matching windowTitle open and not Iconified (Minimized)
/// </summary>
/// <param name="dwProcessID"></param>
/// <param name="windowTitle"></param>
/// <returns></returns>
bool ProcessHasNamedWindowOpen(DWORD dwProcessID, const char* windowTitle)
{
	// find all hWnds (vhWnds) associated with a process id (dwProcessID)
	HWND hCurWnd = NULL;
	//logger.writeToLog("------------------\n", true);
	do
	{
		hCurWnd = FindWindowEx(NULL, hCurWnd, NULL, NULL);
		DWORD dwProcessIDx = 0;
		GetWindowThreadProcessId(hCurWnd, &dwProcessIDx);
		if (dwProcessID == dwProcessIDx)
		{
			char title[256];
			GetWindowTextA(hCurWnd, title, GetWindowTextLength(hCurWnd) + 1);
			//logger.writeToLog(title, true);
			//logger.writeToLog(string_format(", IsMinimized: %s\n", IsIconic(hCurWnd) ? "true" : "false"), true);
			if (strcmp(title, windowTitle) == 0 && !IsIconic(hCurWnd)) return true;
		}
	} while (hCurWnd != NULL);

	return false;
}

void ShowSplashScreen()
{
	HINSTANCE hostingProcessHandle = GetModuleHandle(nullptr);

	WNDCLASS windowsClass;
	windowsClass.style = CS_HREDRAW | CS_VREDRAW; //Reposition if the resolution change (which it probably will)
	windowsClass.lpfnWndProc = (WNDPROC)SplashScreenWindowPump; //Set the 
	windowsClass.cbClsExtra = 0;
	windowsClass.cbWndExtra = 0;
	windowsClass.hInstance = hostingProcessHandle;

	windowsClass.hIcon = LoadIcon(hostingProcessHandle, MAKEINTRESOURCE(0)); // Use icon from internal
	if (windowsClass.hIcon == NULL)
	{
		// If the internal icon fails to load, use the default app icon. This shouldn't happen
		// but we should make sure we do it anyways
		windowsClass.hIcon = LoadIcon((HINSTANCE)NULL, IDI_APPLICATION);
	}

	windowsClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH); //splash seems to have a white background brush.
	windowsClass.lpszClassName = L"SplashScreenASIClass";

	if (!RegisterClass(&windowsClass))
	{
		// Failed to registry splash. Just abort.
		return;
	}

	// Load splash screen image, display it and handle all window's messages
	SplashBitmap = (HBITMAP)LoadImage(hostingProcessHandle, SplashPath, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
	if (SplashBitmap)
	{
		BITMAP bm; //Bipmap data
		GetObject(SplashBitmap, sizeof(bm), &bm);
		INT posX = (GetSystemMetrics(SM_CXSCREEN) - bm.bmWidth) / 2;
		INT posY = (GetSystemMetrics(SM_CYSCREEN) - bm.bmHeight) / 2;

		DWORD dwWindowStyle = WS_EX_TOOLWINDOW;

		SplashWindow = CreateWindowEx(dwWindowStyle, windowsClass.lpszClassName, L"SplashScreen_ASI", WS_BORDER | WS_POPUP,
			posX, posY, bm.bmWidth, bm.bmHeight, NULL, NULL, hostingProcessHandle, NULL);

		if (SplashWindow)
		{
			ShowWindow(SplashWindow, SW_SHOW);
			UpdateWindow(SplashWindow);

			bool found = false;
			int pid = GetCurrentProcessId();
			while (!found)
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(100));
				found = ProcessHasNamedWindowOpen(pid, WindowTitleName);
			}
			//logger.writeToLog("Closing splash\n", true);
		}

		// Splash has closed. Nuke it
		DeleteObject(SplashBitmap);
		SplashBitmap = NULL;
	}

	// Nuke it more
	UnregisterClass(windowsClass.lpszClassName, hostingProcessHandle);
}


void onAttach()
{
	ShowSplashScreen();
}


BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
	{
		//HANDLE processhandle = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, GetCurrentProcessId());
		//int p = GetProcessImageFileName(processhandle, SplashPath, MAX_PATH);
		int len = GetModuleFileName(NULL, SplashPath, MAX_PATH);
		std::filesystem::path pathObj(SplashPath);
		PathRemoveFileSpec(SplashPath); //Removes the process name

		if (pathObj.filename().string() == "MassEffect3.exe") {
			WindowTitleName = "Mass Effect 3";
			PathRemoveFileSpec(SplashPath); //Remove Win32 // This will NOT work on renamed executables!
			//logger.writeToLog(SplashPath, true, true);
		}
		else
		{
			WindowTitleName = "Mass Effect 2";
		}

		PathRemoveFileSpec(SplashPath); // Remove Binaries
		//logger.writeToLog(SplashPath, true, true);

		StringCchCat(SplashPath, MAX_PATH, L"\\BIOGame\\Splash\\PC\\Splash.bmp");
		//logger.writeToLog("Looking for splash at:", true, true);
		//logger.writeToLog(SplashPath, true, true);
		if (PathFileExistsW(SplashPath))
		{
			//logger.writeToLog("Showing splash\n", true);
			DisableThreadLibraryCalls(hModule);
			CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)onAttach, NULL, 0, NULL);
		}
		else
		{
			//logger.writeToLog("Splash doesn't exist!", true);
		}
		return true;
	}
	case DLL_PROCESS_DETACH:
		return true;
	}
	return true;
};