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
#include "Strsafe.h"

#include "../ME3SDK/ME3TweaksHeader.h"
#include "../detours/detours.h"
#include "ME3ExpInterop.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "detours.lib") //Library needed for Hooking part.
#pragma comment(lib, "shlwapi.lib")

TCHAR SplashPath[MAX_PATH];

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
	for (auto i = 0; i < len && wstr[i] != 0 && writePos < 512; i++, writePos++)
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
	for (auto i = 0; i < numVarLinks; i++)
	{
		const auto& varLink = op->VariableLinks(i);
		for (auto j = 0; j < varLink.LinkedVariables.Num(); ++j)
		{
			const auto seqVar = varLink.LinkedVariables(j);
			if (varLink.LinkDesc == L"MessageName" && IsA<USeqVar_String>(seqVar))
			{
				const USeqVar_String* strVar = static_cast<USeqVar_String*>(seqVar);
				WriteToMsgBuffer(strVar->StrValue, true);
			}
			else if (varLink.LinkDesc == L"String" && IsA<USeqVar_String>(seqVar))
			{
				const USeqVar_String* strVar = static_cast<USeqVar_String*>(seqVar);
				WriteToMsgBuffer(L"string", 7);
				WriteToMsgBuffer(strVar->StrValue);
			}
			else if (varLink.LinkDesc == L"Vector" && IsA<USeqVar_Vector>(seqVar))
			{
				const USeqVar_Vector* vectorVar = static_cast<USeqVar_Vector*>(seqVar);
				WriteToMsgBuffer(L"vector", 7);
				WriteToMsgBuffer(to_wstring(vectorVar->VectValue.X));
				WriteToMsgBuffer(to_wstring(vectorVar->VectValue.Y));
				WriteToMsgBuffer(to_wstring(vectorVar->VectValue.Z));
			}
			else if (varLink.LinkDesc == L"Float" && IsA<USeqVar_Float>(seqVar))
			{
				const USeqVar_Float* floatVar = static_cast<USeqVar_Float*>(seqVar);
				WriteToMsgBuffer(L"float", 6);
				WriteToMsgBuffer(to_wstring(floatVar->FloatValue));
			}
			else if (varLink.LinkDesc == L"Int" && IsA<USeqVar_Int>(seqVar))
			{
				const USeqVar_Int* intVar = static_cast<USeqVar_Int*>(seqVar);
				WriteToMsgBuffer(L"int", 4);
				WriteToMsgBuffer(to_wstring(intVar->IntValue));
			}
			else if (varLink.LinkDesc == L"Bool" && IsA<USeqVar_Bool>(seqVar))
			{
				const USeqVar_Bool* boolVar = static_cast<USeqVar_Bool*>(seqVar);
				WriteToMsgBuffer(L"bool", 5);
				WriteToMsgBuffer(to_wstring(boolVar->bValue));
			}
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

TArray<UObject*> Actors;

void DumpActors(USequenceOp* const op)
{
	const auto numVarLinks = op->VariableLinks.Num();
	const auto objCount = UObject::GObjObjects()->Count;
	const auto objArray = UObject::GObjObjects()->Data;

	Actors.Count = 0; //clear the array without de-allocating any memory.
	ofstream ofs;
	ofs.open(SplashPath);
	const auto actorClass = AActor::StaticClass();
	for (auto j = 0; j < objCount; j++)
	{
		auto obj = objArray[j];
		if (obj && obj->IsA(actorClass))
		{
			auto actor = static_cast<AActor*>(obj);
			const auto name = actor->Name.GetName();
			if (strstr(name, "Default_"))// || actor->bStatic || !actor->bMovable)
			{
				continue;
			}
			Actors.Add(actor);
			ofs << actor->GetContainingMapName() << ":" << name;
			const auto index = actor->Name.GetIndex();
			if (index > 0)
			{
				ofs << '_' << index - 1;
			}
			if (actor->bStatic || !actor->bMovable)
			{
				ofs << ":static";
			}
			ofs << endl;
		}
	}
	ofs.close();
	
	for (auto i = 0; i < numVarLinks; i++)
	{

		if (op->VariableLinks(i).LinkedVariables.Num() == 0)
		{
			continue;
		}
		const auto seqVar = op->VariableLinks(i).LinkedVariables(0);
		if (op->VariableLinks(i).LinkDesc == L"Length" && IsA<USeqVar_Int>(seqVar))
		{
			const auto lenVar = static_cast<USeqVar_Int*>(seqVar);
			lenVar->IntValue = Actors.Count;
			break;
		}
	}
}

void AcessDumpedActorsList(USequenceOp* const op)
{
	const auto numVarLinks = op->VariableLinks.Num();
	int index = 0;
	for (auto i = 0; i < numVarLinks; i++)
	{
		if (op->VariableLinks(i).LinkedVariables.Num() == 0)
		{
			continue;
		}
		const auto seqVar = op->VariableLinks(i).LinkedVariables(0);
		if (op->VariableLinks(i).LinkDesc == L"Index" && IsA<USeqVar_Int>(seqVar))
		{
			const auto idxVar = static_cast<USeqVar_Int*>(seqVar);
			index = idxVar->IntValue;
		}
		if (op->VariableLinks(i).LinkDesc == L"Output Object" && IsA<USeqVar_Object>(seqVar))
		{
			const auto outputVar = static_cast<USeqVar_Object*>(seqVar);
			if (index >= 0 && index < Actors.Count)
			{
				outputVar->ObjValue = Actors(index);
			}
			else
			{
				outputVar->ObjValue = nullptr;
			}
		}
	}
}

float ToRadians(const int unrealRotationUnits)
{
	return unrealRotationUnits * 360.0f / 65536.0f * 3.1415926535897931f / 180.0f;
}

FTPOV cachedPOV;
void GetCamPOV(USequenceOp* const op)
{
	const auto numVarLinks = op->VariableLinks.Num();
	for (auto i = 0; i < numVarLinks; i++)
	{

		if (op->VariableLinks(i).LinkedVariables.Num() == 0)
		{
			continue;
		}
		const auto seqVar = op->VariableLinks(i).LinkedVariables(0);
		if (op->VariableLinks(i).LinkDesc == L"Position" && IsA<USeqVar_Vector>(seqVar))
		{
			const auto posVar = static_cast<USeqVar_Vector*>(seqVar);
			posVar->VectValue = cachedPOV.location;
		}
		else if (op->VariableLinks(i).LinkDesc == L"Rotation" && IsA<USeqVar_Vector>(seqVar))
		{
			const auto pitch = ToRadians(cachedPOV.Rotation.Pitch);
			const auto yaw = ToRadians(cachedPOV.Rotation.Yaw);
			const auto cp = cos(pitch);
			const auto sp = sin(pitch);
			const auto cy = cos(yaw);
			const auto sy = sin(yaw);
			FVector rotVect;
			rotVect.X = cp * cy;
			rotVect.Y = cp * sy;
			rotVect.Z = sp;

			auto* rotVar = static_cast<USeqVar_Vector*>(seqVar);
			rotVar->VectValue = rotVect;
		}
	}
}

void __fastcall HookedPE(UObject *pObject, void *edx, UFunction *pFunction, void *pParms, void *pResult)
{
	const auto className = pObject->Class->GetName();
	if (strcmp(className, "SeqAct_SendMessageToME3Explorer") == 0)
	{
		const auto funcName = pFunction->GetFullName();
		if (isPartOf(funcName, "Function Engine.SequenceOp.Activated")) {
			const auto op = static_cast<USequenceOp*>(pObject);
			SendMessageToMe3Explorer(op);
		}
	}
	else if(strcmp(className, "SeqAct_ME3ExpDumpActors") == 0)
	{
		const auto funcName = pFunction->GetFullName();
		if (isPartOf(funcName, "Function Engine.SequenceOp.Activated")) {
			const auto op = static_cast<USequenceOp*>(pObject);
			DumpActors(op);
		}
	}
	else if (strcmp(className, "SeqAct_ME3ExpAcessDumpedActorsList") == 0)
	{
		const auto funcName = pFunction->GetFullName();
		if (isPartOf(funcName, "Function Engine.SequenceOp.Activated")) {
			const auto op = static_cast<USequenceOp*>(pObject);
			AcessDumpedActorsList(op);
		}
	}
	else if (strcmp(className, "SeqAct_ME3ExpGetPlayerCamPOV") == 0)
	{
		const auto funcName = pFunction->GetFullName();
		if (isPartOf(funcName, "Function Engine.SequenceOp.Activated")) {
			const auto op = static_cast<USequenceOp*>(pObject);
			GetCamPOV(op);
		}
	}
	else if (IsA<ABioPlayerController>(pObject) && isPartOf(pFunction->GetFullName(), "Function SFXGame.BioPlayerController.PlayerTick"))
	{
		const auto playerController = static_cast<ABioPlayerController*>(pObject);
		cachedPOV = playerController->PlayerCamera->CameraCache.POV;
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
		GetModuleFileName(hModule, SplashPath, MAX_PATH);
		PathRemoveFileSpec(SplashPath);
		PathRemoveFileSpec(SplashPath);
		StringCchCat(SplashPath, MAX_PATH, L"\\ME3ExpActorDump.txt");
		
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

