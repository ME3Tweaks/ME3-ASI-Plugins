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

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.

ME3TweaksASILogger logger("SeqAct_Log Enabler v1", "SeqActLog.txt", false);
ScreenLogger screenLogger(L"SeqAct_Log Enabler v1");

wstringstream& operator<<(wstringstream& ss, const FString& fStr)
{
	
	for (auto i = 0; i < fStr.Num() && fStr(i) != 0; i++)
	{
		ss << fStr(i);
	}
	return ss;
}

wstringstream& operator<<(wstringstream& ss, const FVector& vec)
{
	ss << "(" << vec.X << ", " << vec.Y << ", " << vec.Z << ")";
	
	return ss;
}

void __fastcall HookedPE(UObject *pObject, void *edx, UFunction *pFunction, void *pParms, void *pResult)
{
	const auto funcName = pFunction->GetFullName();
	if (isPartOf(funcName, "Function Engine.SequenceOp.Activated") && IsA<USeqAct_Log>(pObject))
	{
		const auto seqLog = static_cast<USeqAct_Log*>(pObject);
		wstringstream ss;
		const auto numVarLinks = seqLog->VariableLinks.Num();
		for (auto i = 0; i < numVarLinks; i++)
		{
			const auto numVars = seqLog->VariableLinks(i).LinkedVariables.Num();
			for (auto j = 0; j < numVars; j++)
			{
				const auto seqVar = seqLog->VariableLinks(i).LinkedVariables(j);
				if (IsA<USeqVar_String>(seqVar))
				{
					ss << static_cast<USeqVar_String*>(seqVar)->StrValue << " ";
				}
				else if (IsA<USeqVar_Float>(seqVar))
				{
					ss << static_cast<USeqVar_Float*>(seqVar)->FloatValue << " ";
				}
				else if (IsA<USeqVar_Int>(seqVar))
				{
					ss << static_cast<USeqVar_Int*>(seqVar)->IntValue << " ";
				}
				else if (IsA<USeqVar_Vector>(seqVar))
				{
					ss << static_cast<USeqVar_Vector*>(seqVar)->VectValue << " ";
				}
				else if (IsA<USeqVar_Bool>(seqVar))
				{
					ss << (static_cast<USeqVar_Bool*>(seqVar)->bValue ? "True" : "False") << " ";
				}
				else if (IsA<USeqVar_Object>(seqVar))
				{
					const auto seqVarObj = static_cast<USeqVar_Object*>(seqVar);
					auto referencedObj = seqVarObj->ObjValue;
					if (referencedObj != nullptr)
					{
						ss << referencedObj->GetName() << " ";
					}
				}
				else if (IsA<USeqVar_Name>(seqVar))
				{
					ss << static_cast<USeqVar_Name*>(seqVar)->NameValue.GetName() << " ";
				}
			}
		}
		ss << endl;
		const wstring msg = ss.str();
		logger.writeToDiskOnly(msg, true);
		screenLogger.LogMessage(msg);
	}
	else if (!strcmp(funcName, "Function SFXGame.BioHUD.PostRender"))
	{
		const auto hud = static_cast<ABioHUD*>(pObject);
		screenLogger.PostRenderer(hud);
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

