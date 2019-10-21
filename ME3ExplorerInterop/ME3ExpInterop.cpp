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
#include "ME3ExpInterop.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.

char* GetUObjectClassName(UObject* object)
{
	static char cOutBuffer[256];

	sprintf_s(cOutBuffer, "%s", object->Class->GetName());

	return cOutBuffer;
}

bool IsA(UObject* object, const char* className) {
	return strcmp(GetUObjectClassName(object), className) == 0;
}

wchar_t msgBuffer[512];
wchar_t* msgPtr;
int writePos = 0;
void WriteToMsgBuffer(const wchar_t* wstr, int len, bool msgStart = false) {
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

void WriteToMsgBuffer(FString& fstr, bool msgStart = false) {
	WriteToMsgBuffer(fstr.Data, fstr.Num(), msgStart);
}

void WriteToMsgBuffer(wstring& wstr, bool msgStart = false) {
	WriteToMsgBuffer(wstr.c_str(), wstr.length(), msgStart);
}

struct ME3ExpMsg
{
	wchar_t msg[100];
};


void SendMessageToMe3Explorer(USequenceOp* op)
{
	const int numVarLinks = op->VariableLinks.Num();
	for (size_t i = 0; i < numVarLinks; i++)
	{
		if (op->VariableLinks(i).LinkedVariables.Num() == 0)
		{
			continue;
		}
		if (op->VariableLinks(i).LinkDesc == L"MessageName" && IsA(op->VariableLinks(i).LinkedVariables(0), "SeqVar_String"))
		{
			USeqVar_String* strVar = (USeqVar_String*)op->VariableLinks(i).LinkedVariables(0);
			WriteToMsgBuffer(strVar->StrValue, true);
		}
		else if (op->VariableLinks(i).LinkDesc == L"String" && IsA(op->VariableLinks(i).LinkedVariables(0), "SeqVar_String"))
		{
			USeqVar_String* strVar = (USeqVar_String*)op->VariableLinks(i).LinkedVariables(0);
			WriteToMsgBuffer(L"string", 7);
			WriteToMsgBuffer(strVar->StrValue);
		}
		else if (op->VariableLinks(i).LinkDesc == L"Vector" && IsA(op->VariableLinks(i).LinkedVariables(0), "SeqVar_Vector"))
		{
			USeqVar_Vector* vectorVar = (USeqVar_Vector*)op->VariableLinks(i).LinkedVariables(0);
			WriteToMsgBuffer(L"vector", 7);
			WriteToMsgBuffer(to_wstring(vectorVar->VectValue.X));
			WriteToMsgBuffer(to_wstring(vectorVar->VectValue.Y));
			WriteToMsgBuffer(to_wstring(vectorVar->VectValue.Z));
		}
		else if (op->VariableLinks(i).LinkDesc == L"Float" && IsA(op->VariableLinks(i).LinkedVariables(0), "SeqVar_Float"))
		{
			USeqVar_Float* floatVar = (USeqVar_Float*)op->VariableLinks(i).LinkedVariables(0);
			WriteToMsgBuffer(L"float", 6);
			WriteToMsgBuffer(to_wstring(floatVar->FloatValue));
		}
		else if (op->VariableLinks(i).LinkDesc == L"Int" && IsA(op->VariableLinks(i).LinkedVariables(0), "SeqVar_Int"))
		{
			USeqVar_Int* intVar = (USeqVar_Int*)op->VariableLinks(i).LinkedVariables(0);
			WriteToMsgBuffer(L"int", 4);
			WriteToMsgBuffer(to_wstring(intVar->IntValue));
		}
		else if (op->VariableLinks(i).LinkDesc == L"Bool" && IsA(op->VariableLinks(i).LinkedVariables(0), "SeqVar_Bool"))
		{
			USeqVar_Bool* boolVar = (USeqVar_Bool*)op->VariableLinks(i).LinkedVariables(0);
			WriteToMsgBuffer(L"bool", 5);
			WriteToMsgBuffer(to_wstring(boolVar->bValue));
		}
	}
	msgBuffer[writePos] = 0;
	writePos++;
	HWND handle = FindWindow(NULL, L"ME3Explorer");
	if (handle)
	{
		constexpr unsigned long SENT_FROM_ME3 = 0x02AC00C2;
		ME3ExpMsg msg;
		int len = writePos - (msgPtr - msgBuffer);
		wcsncpy_s(msg.msg, msgPtr, len);
		COPYDATASTRUCT cds;
		ZeroMemory(&cds, sizeof(COPYDATASTRUCT));
		cds.dwData = SENT_FROM_ME3;
		cds.cbData = sizeof(msg);
		cds.lpData = &msg;
		SendMessageTimeout(handle, WM_COPYDATA, NULL, (LPARAM)&cds, 0, 10, nullptr);
	}
}

void __fastcall HookedPE(UObject *pObject, void *edx, UFunction *pFunction, void *pParms, void *pResult)
{
	char* className = GetUObjectClassName(pObject);
	if (strcmp(className, "SeqAct_SendMessageToME3Explorer") == 0)
	{
		char* funcName = pFunction->GetFullName();
		if (isPartOf(funcName, "Function Engine.SequenceOp.Activated")) {
			USequenceOp* op = (USequenceOp*)pObject;
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

