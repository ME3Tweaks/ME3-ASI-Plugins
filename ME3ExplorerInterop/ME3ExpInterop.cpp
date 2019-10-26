#include <stdio.h>
#include <io.h>
#include <fcntl.h>     /* for _O_TEXT and _O_BINARY */  
#include <string>
#include <fstream>
#include <iostream>
#include <ostream>
#include <streambuf>
#include <shlwapi.h>

#include "../ME3SDK/ME3TweaksHeader.h"
#include "../detours/detours.h"
#include "ME3ExpInterop.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.

char* GetUObjectClassName(UObject* object)
{
	static char cOutBuffer[256];

	sprintf_s(cOutBuffer, "%s", object->Class->GetName());

	return cOutBuffer;
}

wchar_t msgBuffer[512];
wchar_t* msgPtr;
int writePos = 0;
void WriteToMsgBuffer(const wchar_t* wstr, const int len, const bool msgStart = false) {
	if (msgStart)
	{
		if (writePos > 400)
		{
			writePos = 0;
		}
		msgPtr = msgBuffer + writePos;
	}
	else
	{
		msgBuffer[writePos] = ' ';
		writePos++;
	}
	for (size_t i = 0; i < len && wstr[i] != 0 && writePos < 512; i++, writePos++)
	{
		msgBuffer[writePos] = wstr[i];
	}
}

void WriteToMsgBuffer(const FString& fstr, const bool msgStart = false) {
	WriteToMsgBuffer(fstr.Data, fstr.Num(), msgStart);
}

void WriteToMsgBuffer(wstring& wstr, const bool msgStart = false) {
	WriteToMsgBuffer(wstr.c_str(), wstr.length(), msgStart);
}

struct ME3ExpMsg
{
	wchar_t msg[100];
};


void SendMessageToMe3Explorer(USequenceOp* op)
{
	const auto numVarLinks = op->VariableLinks.Num();
	for (size_t i = 0; i < numVarLinks; i++)
	{
		if (op->VariableLinks(i).LinkedVariables.Num() == 0)
		{
			continue;
		}
		const auto seqVar = op->VariableLinks(i).LinkedVariables(0);
		if (op->VariableLinks(i).LinkDesc == L"MessageName" && IsA<USeqVar_String>(seqVar))
		{
			const USeqVar_String* strVar = static_cast<USeqVar_String*>(seqVar);
			WriteToMsgBuffer(strVar->StrValue, true);
		}
		else if (op->VariableLinks(i).LinkDesc == L"String" && IsA<USeqVar_String>(seqVar))
		{
			const USeqVar_String* strVar = static_cast<USeqVar_String*>(seqVar);
			WriteToMsgBuffer(L"string", 7);
			WriteToMsgBuffer(strVar->StrValue);
		}
		else if (op->VariableLinks(i).LinkDesc == L"Vector" && IsA<USeqVar_Vector>(seqVar))
		{
			const USeqVar_Vector* vectorVar = static_cast<USeqVar_Vector*>(seqVar);
			WriteToMsgBuffer(L"vector", 7);
			WriteToMsgBuffer(to_wstring(vectorVar->VectValue.X));
			WriteToMsgBuffer(to_wstring(vectorVar->VectValue.Y));
			WriteToMsgBuffer(to_wstring(vectorVar->VectValue.Z));
		}
		else if (op->VariableLinks(i).LinkDesc == L"Float" && IsA<USeqVar_Float>(seqVar))
		{
			const USeqVar_Float* floatVar = static_cast<USeqVar_Float*>(seqVar);
			WriteToMsgBuffer(L"float", 6);
			WriteToMsgBuffer(to_wstring(floatVar->FloatValue));
		}
		else if (op->VariableLinks(i).LinkDesc == L"Int" && IsA<USeqVar_Int>(seqVar))
		{
			const USeqVar_Int* intVar = static_cast<USeqVar_Int*>(seqVar);
			WriteToMsgBuffer(L"int", 4);
			WriteToMsgBuffer(to_wstring(intVar->IntValue));
		}
		else if (op->VariableLinks(i).LinkDesc == L"Bool" && IsA<USeqVar_Bool>(seqVar))
		{
			const USeqVar_Bool* boolVar = static_cast<USeqVar_Bool*>(seqVar);
			WriteToMsgBuffer(L"bool", 5);
			WriteToMsgBuffer(to_wstring(boolVar->bValue));
		}
	}
	msgBuffer[writePos] = 0;
	writePos++;
	const auto handle = FindWindow(nullptr, L"ME3Explorer");
	if (handle)
	{
		constexpr unsigned long SENT_FROM_ME3 = 0x02AC00C2;
		ME3ExpMsg msg;
		const auto len = writePos - (msgPtr - msgBuffer);
		wcsncpy_s(msg.msg, msgPtr, len);
		COPYDATASTRUCT cds;
		ZeroMemory(&cds, sizeof(COPYDATASTRUCT));
		cds.dwData = SENT_FROM_ME3;
		cds.cbData = sizeof(msg);
		cds.lpData = &msg;
		SendMessageTimeout(handle, WM_COPYDATA, NULL, reinterpret_cast<LPARAM>(&cds), 0, 10, nullptr);
	}
}

void __fastcall HookedPE(UObject *pObject, void *edx, UFunction *pFunction, void *pParms, void *pResult)
{
	if (strcmp(pObject->Class->GetName(), "SeqAct_SendMessageToME3Explorer") == 0)
	{
		const auto funcName = pFunction->GetFullName();
		if (isPartOf(funcName, "Function Engine.SequenceOp.Activated")) {
			const auto op = static_cast<USequenceOp*>(pObject);
			SendMessageToMe3Explorer(op);
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

