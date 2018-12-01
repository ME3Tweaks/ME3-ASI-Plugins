/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Core_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_InvAspectRatio16x9                                 0.56249
#define CONST_InvAspectRatio5x4                                  0.8
#define CONST_InvAspectRatio4x3                                  0.75
#define CONST_AspectRatio16x9                                    1.77778
#define CONST_AspectRatio5x4                                     1.25
#define CONST_AspectRatio4x3                                     1.33333
#define CONST_DegToUU                                            182.044444444444
#define CONST_UUToDeg                                            0.005493164063
#define CONST_INDEX_NONE                                         -1
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_Pi                                                 3.1415926535897932
#define CONST_MaxInt                                             0x7fffffff
#define CONST_INVALID_STRINGREF                                  0

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Core.Object.EDebugBreakType
/*enum EDebugBreakType
{
	DEBUGGER_NativeOnly                                = 0,
	DEBUGGER_ScriptOnly                                = 1,
	DEBUGGER_Both                                      = 2,
	DEBUGGER_MAX                                       = 3
};*/

// Enum Core.Object.EAutomatedRunResult
/*enum EAutomatedRunResult
{
	ARR_Unknown                                        = 0,
	ARR_OOM                                            = 1,
	ARR_Passed                                         = 2,
	ARR_MAX                                            = 3
};*/

// Enum Core.Object.EInputEvent
/*enum EInputEvent
{
	IE_Pressed                                         = 0,
	IE_Released                                        = 1,
	IE_Repeat                                          = 2,
	IE_DoubleClick                                     = 3,
	IE_Axis                                            = 4,
	IE_MAX                                             = 5
};*/

// Enum Core.Object.EInterpCurveMode
/*enum EInterpCurveMode
{
	CIM_Linear                                         = 0,
	CIM_CurveAuto                                      = 1,
	CIM_Constant                                       = 2,
	CIM_CurveUser                                      = 3,
	CIM_CurveBreak                                     = 4,
	CIM_CurveAutoClamped                               = 5,
	CIM_MAX                                            = 6
};*/

// Enum Core.Object.EInterpMethodType
/*enum EInterpMethodType
{
	IMT_UseFixedTangentEvalAndNewAutoTangents          = 0,
	IMT_UseFixedTangentEval                            = 1,
	IMT_UseBrokenTangentEval                           = 2,
	IMT_MAX                                            = 3
};*/

// Enum Core.Object.EAxis
/*enum EAxis
{
	AXIS_NONE                                          = 0,
	AXIS_X                                             = 1,
	AXIS_Y                                             = 2,
	AXIS_BLANK                                         = 3,
	AXIS_Z                                             = 4,
	AXIS_MAX                                           = 5
};*/

// Enum Core.Object.ENetRole
/*enum ENetRole
{
	ROLE_None                                          = 0,
	ROLE_SimulatedProxy                                = 1,
	ROLE_AutonomousProxy                               = 2,
	ROLE_Authority                                     = 3,
	ROLE_MAX                                           = 4
};*/

// Enum Core.Object.ETickingGroup
/*enum ETickingGroup
{
	TG_PreAsyncWork                                    = 0,
	TG_DuringAsyncWork                                 = 1,
	TG_PostAsyncWork                                   = 2,
	TG_PostUpdateWork                                  = 3,
	TG_PostDirtyComponentsWork                         = 4,
	TG_MAX                                             = 5
};*/

// Enum Core.Object.AlphaBlendType
/*enum AlphaBlendType
{
	ABT_Linear                                         = 0,
	ABT_Cubic                                          = 1,
	ABT_Sinusoidal                                     = 2,
	ABT_EaseInOutExponent2                             = 3,
	ABT_EaseInOutExponent3                             = 4,
	ABT_EaseInOutExponent4                             = 5,
	ABT_EaseInOutExponent5                             = 6,
	ABT_EaseIn                                         = 7,
	ABT_EaseOut                                        = 8,
	ABT_MAX                                            = 9
};*/

// Enum Core.Object.ESFXLanguageSetting
/*enum ESFXLanguageSetting
{
	ESFXLanguageSetting_Current                        = 0,
	ESFXLanguageSetting_SystemPreferred                = 1,
	ESFXLanguageSetting_SKUDefault                     = 2,
	ESFXLanguageSetting_MAX                            = 3
};*/

// Enum Core.Object.ESFXLanguageContentType
/*enum ESFXLanguageContentType
{
	ESFXLanguageContentType_Package                    = 0,
	ESFXLanguageContentType_Text                       = 1,
	ESFXLanguageContentType_Speech                     = 2,
	ESFXLanguageContentType_MAX                        = 3
};*/

// Enum Core.DistributionVector.EDistributionVectorLockFlags
/*enum EDistributionVectorLockFlags
{
	EDVLF_None                                         = 0,
	EDVLF_XY                                           = 1,
	EDVLF_XZ                                           = 2,
	EDVLF_YZ                                           = 3,
	EDVLF_XYZ                                          = 4,
	EDVLF_MAX                                          = 5
};*/

// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
/*enum EDistributionVectorMirrorFlags
{
	EDVMF_Same                                         = 0,
	EDVMF_Different                                    = 1,
	EDVMF_Mirror                                       = 2,
	EDVMF_MAX                                          = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Core.Object
// 0x003C
class UObject
{
public:
	//struct FPointer                                    VfTableObject;                                    		// 0x0000 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                ObjectInternalInteger;                            		// 0x0004 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FQWord                                      ObjectFlags;                                      		// 0x0008 (0x0008) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    HashNext;                                         		// 0x0010 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    HashOuterNext;                                    		// 0x0014 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    StateFrame;                                       		// 0x0018 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     Linker;                                           		// 0x001C (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer                                    LinkerIndex;                                      		// 0x0020 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                NetIndex;                                         		// 0x0024 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	class UObject*                                     Outer;                                            		// 0x0028 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FName                                       Name;                                             		// 0x002C (0x0008) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )
	class UClass*                                      Class;                                            		// 0x0034 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     ObjectArchetype;                                  		// 0x0038 (0x0004) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static TArray< UObject* >* GObjObjects(); 

	char* GetName(); 
	char* GetNameCPP(); 
	char* GetFullName(); 
	char* GetFullName2();

	template< class T > static T* FindObject ( char* ObjectFullName ); 
	static UClass* FindClass ( char* ClassFullName ); 

	bool IsA ( UClass* pClass ); 

	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1 ];

		return pClassPointer;
	};


	// Virtual Functions
	virtual void VirtualFunction00 ( );																			// 0x0043DEF0 (0x00)
	virtual void VirtualFunction01 ( );																			// 0x0041E580 (0x04)
	virtual void VirtualFunction02 ( );																			// 0x00B524E0 (0x08)
	virtual void VirtualFunction03 ( );																			// 0x005CE840 (0x0C)
	virtual void VirtualFunction04 ( );																			// 0x00475C80 (0x10)
	virtual void VirtualFunction05 ( );																			// 0x00475CD0 (0x14)
	virtual void VirtualFunction06 ( );																			// 0x00433330 (0x18)
	virtual void VirtualFunction07 ( );																			// 0x006F57C0 (0x1C)
	virtual void VirtualFunction08 ( );																			// 0x00473DE0 (0x20)
	virtual void VirtualFunction09 ( );																			// 0x005CE840 (0x24)
	virtual void VirtualFunction10 ( );																			// 0x00B524E0 (0x28)
	virtual void VirtualFunction11 ( );																			// 0x00474510 (0x2C)
	virtual void VirtualFunction12 ( );																			// 0x007A9270 (0x30)
	virtual void VirtualFunction13 ( );																			// 0x00474F10 (0x34)
	virtual void VirtualFunction14 ( );																			// 0x004332E0 (0x38)
	virtual void VirtualFunction15 ( );																			// 0x00433670 (0x3C)
	virtual void VirtualFunction16 ( );																			// 0x00476380 (0x40)
	virtual void VirtualFunction17 ( );																			// 0x00427950 (0x44)
	virtual void VirtualFunction18 ( );																			// 0x005CE840 (0x48)
	virtual void VirtualFunction19 ( );																			// 0x00B524E0 (0x4C)
	virtual void VirtualFunction20 ( );																			// 0x00473E10 (0x50)
	virtual void VirtualFunction21 ( );																			// 0x00473E00 (0x54)
	virtual void VirtualFunction22 ( );																			// 0x00473E60 (0x58)
	virtual void VirtualFunction23 ( );																			// 0x00A60A90 (0x5C)
	virtual void VirtualFunction24 ( );																			// 0x00473EB0 (0x60)
	virtual void VirtualFunction25 ( );																			// 0x004744F0 (0x64)
	virtual void VirtualFunction26 ( );																			// 0x00474500 (0x68)
	virtual void VirtualFunction27 ( );																			// 0x005CE840 (0x6C)
	virtual void VirtualFunction28 ( );																			// 0x005CE840 (0x70)
	virtual void VirtualFunction29 ( );																			// 0x00473EF0 (0x74)
	virtual void VirtualFunction30 ( );																			// 0x004744F0 (0x78)
	virtual void VirtualFunction31 ( );																			// 0x00474500 (0x7C)
	virtual void VirtualFunction32 ( );																			// 0x004744F0 (0x80)
	virtual void VirtualFunction33 ( );																			// 0x00474500 (0x84)
	virtual void VirtualFunction34 ( );																			// 0x00473F00 (0x88)
	virtual void VirtualFunction35 ( );																			// 0x004740D0 (0x8C)
	virtual void VirtualFunction36 ( );																			// 0x004742E0 (0x90)
	virtual void VirtualFunction37 ( );																			// 0x005CE840 (0x94)
	virtual void VirtualFunction38 ( );																			// 0x00432C50 (0x98)
	virtual void VirtualFunction39 ( );																			// 0x0047B630 (0x9C)
	virtual void VirtualFunction40 ( );																			// 0x0041E590 (0xA0)
	virtual void VirtualFunction41 ( );																			// 0x0041E5C0 (0xA4)
	virtual void VirtualFunction42 ( );																			// 0x0041E5F0 (0xA8)
	virtual void VirtualFunction43 ( );																			// 0x0041E670 (0xAC)
	virtual void VirtualFunction44 ( );																			// 0x0041E6A0 (0xB0)
	virtual void VirtualFunction45 ( );																			// 0x00541C20 (0xB4)
	virtual void VirtualFunction46 ( );																			// 0x00562F20 (0xB8)
	virtual void VirtualFunction47 ( );																			// 0x00562F20 (0xBC)
	virtual void VirtualFunction48 ( );																			// 0x005CE840 (0xC0)
	virtual void VirtualFunction49 ( );																			// 0x0079F090 (0xC4)
	virtual void VirtualFunction50 ( );																			// 0x0079F100 (0xC8)
	virtual void VirtualFunction51 ( );																			// 0x004737A0 (0xCC)
	virtual void VirtualFunction52 ( );																			// 0x00433050 (0xD0)
	virtual void VirtualFunction53 ( );																			// 0x00B524E0 (0xD4)
	virtual void VirtualFunction54 ( );																			// 0x00B524E0 (0xD8)
	virtual void VirtualFunction55 ( );																			// 0x00B524E0 (0xDC)
	virtual void VirtualFunction56 ( );																			// 0x0041E670 (0xE0)
	virtual void VirtualFunction57 ( );																			// 0x004820E0 (0xE4)
	virtual void VirtualFunction58 ( );																			// 0x00BAAED0 (0xE8)
	virtual void VirtualFunction59 ( );																			// 0x00473780 (0xEC)
	virtual void VirtualFunction60 ( );																			// 0x004279A0 (0xF0)
	virtual void VirtualFunction61 ( );																			// 0x00481DC0 (0xF4)
	virtual void VirtualFunction62 ( );																			// 0x005CE840 (0xF8)
	virtual void VirtualFunction63 ( );																			// 0x00541C20 (0xFC)
	virtual void VirtualFunction64 ( );																			// 0x0041E6E0 (0x100)
	virtual void VirtualFunction65 ( );																			// 0x0041E700 (0x104)
	virtual void VirtualFunction66 ( );																			// 0x0041E720 (0x108)
	virtual void VirtualFunction67 ( );																			// 0x0047A860 (0x10C)
	virtual void VirtualFunction68 ( );																			// 0x0047A900 (0x110)
	virtual void VirtualFunction69 ( );																			// 0x00432960 (0x114)
	virtual void ProcessEvent ( class UFunction* pFunction, void* pParms, void* pResult = NULL );				// 0x00453120 (0x118)
};

UClass* UObject::pClassPointer = NULL;

// Class Core.TextBuffer
// 0x0028 (0x0064 - 0x003C)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x28 ];                            		// 0x003C (0x0028) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 0 ];

		return pClassPointer;
	};

};

UClass* UTextBuffer::pClassPointer = NULL;

// Class Core.Subsystem
// 0x0004 (0x0040 - 0x003C)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                    		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3 ];

		return pClassPointer;
	};

};

UClass* USubsystem::pClassPointer = NULL;

// Class Core.System
// 0x00C8 (0x0108 - 0x0040)
class USystem : public USubsystem
{
public:
	int                                                StaleCacheDays;                                   		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxStaleCacheSize;                                		// 0x0044 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxOverallCacheSize;                              		// 0x0048 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                PackageSizeSoftLimit;                             		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AsyncIOBandwidthLimit;                            		// 0x0050 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     SavePath;                                         		// 0x0054 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CachePath;                                        		// 0x0060 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CacheExt;                                         		// 0x006C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ScreenShotPath;                                   		// 0x0078 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Paths;                                            		// 0x0084 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCPaths;                                  		// 0x0090 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           ScriptPaths;                                      		// 0x009C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           FRScriptPaths;                                    		// 0x00A8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           DemoScriptPaths;                                  		// 0x00B4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           CutdownPaths;                                     		// 0x00C0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FName >                             Suppress;                                         		// 0x00CC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Extensions;                                       		// 0x00D8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCExtensions;                             		// 0x00E4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           LocalizationPaths;                                		// 0x00F0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TextureFileCacheExtension;                        		// 0x00FC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2 ];

		return pClassPointer;
	};

};

UClass* USystem::pClassPointer = NULL;

// Class Core.PackageMap
// 0x008C (0x00C8 - 0x003C)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x8C ];                            		// 0x003C (0x008C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4 ];

		return pClassPointer;
	};

};

UClass* UPackageMap::pClassPointer = NULL;

// Class Core.ObjectSerializer
// 0x000C (0x0048 - 0x003C)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 5 ];

		return pClassPointer;
	};

};

UClass* UObjectSerializer::pClassPointer = NULL;

// Class Core.ObjectRedirector
// 0x0004 (0x0040 - 0x003C)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 6 ];

		return pClassPointer;
	};

};

UClass* UObjectRedirector::pClassPointer = NULL;

// Class Core.MetaData
// 0x003C (0x0078 - 0x003C)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x003C (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 7 ];

		return pClassPointer;
	};

};

UClass* UMetaData::pClassPointer = NULL;

// Class Core.Linker
// 0x011C (0x0158 - 0x003C)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x11C ];                           		// 0x003C (0x011C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 9 ];

		return pClassPointer;
	};

};

UClass* ULinker::pClassPointer = NULL;

// Class Core.LinkerSave
// 0x00D4 (0x022C - 0x0158)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0xD4 ];                            		// 0x0158 (0x00D4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 8 ];

		return pClassPointer;
	};

};

UClass* ULinkerSave::pClassPointer = NULL;

// Class Core.LinkerLoad
// 0x05BC (0x0714 - 0x0158)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0x5BC ];                           		// 0x0158 (0x05BC) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 10 ];

		return pClassPointer;
	};

};

UClass* ULinkerLoad::pClassPointer = NULL;

// Class Core.Interface
// 0x0000 (0x003C - 0x003C)
class UInterface : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 11 ];

		return pClassPointer;
	};

};

UClass* UInterface::pClassPointer = NULL;

// Class Core.Field
// 0x0008 (0x0044 - 0x003C)
class UField : public UObject
{
public:
	class UField*                                      SuperField;                                       		// NOT AUTO-GENERATED PROPERTY 
	class UField*                                      Next;                                             		// NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 14 ];

		return pClassPointer;
	};

};

UClass* UField::pClassPointer = NULL;

// Class Core.Struct
// 0x0040 (0x0084 - 0x0044)
class UStruct : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x40 ];                            		// 0x0044 (0x0040) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 13 ];

		return pClassPointer;
	};

};

UClass* UStruct::pClassPointer = NULL;

// Class Core.ScriptStruct
// 0x0010 (0x0094 - 0x0084)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0084 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 12 ];

		return pClassPointer;
	};

};

UClass* UScriptStruct::pClassPointer = NULL;

// Class Core.Function
// 0x0014 (0x0098 - 0x0084)
class UFunction : public UStruct
{
public:
	void*				                               Func;				                             		// NOT AUTO-GENERATED PROPERTY 
	unsigned long		                               FunctionFlags;		                             		// NOT AUTO-GENERATED PROPERTY 
	unsigned short		                               iNative;			                             		    // NOT AUTO-GENERATED PROPERTY 
	unsigned char		                               UnknownData00[ 0x8 ];                             		// NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 15 ];

		return pClassPointer;
	};

};

UClass* UFunction::pClassPointer = NULL;

// Class Core.Property
// 0x0044 (0x0088 - 0x0044)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x44 ];                            		// 0x0044 (0x0044) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 17 ];

		return pClassPointer;
	};

};

UClass* UProperty::pClassPointer = NULL;

// Class Core.StructProperty
// 0x0008 (0x0090 - 0x0088)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0088 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 16 ];

		return pClassPointer;
	};

};

UClass* UStructProperty::pClassPointer = NULL;

// Class Core.StrProperty
// 0x0000 (0x0088 - 0x0088)
class UStrProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 18 ];

		return pClassPointer;
	};

};

UClass* UStrProperty::pClassPointer = NULL;

// Class Core.StringRefProperty
// 0x0000 (0x0088 - 0x0088)
class UStringRefProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 19 ];

		return pClassPointer;
	};

};

UClass* UStringRefProperty::pClassPointer = NULL;

// Class Core.ObjectProperty
// 0x0008 (0x0090 - 0x0088)
class UObjectProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0088 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 21 ];

		return pClassPointer;
	};

};

UClass* UObjectProperty::pClassPointer = NULL;

// Class Core.ComponentProperty
// 0x0000 (0x0090 - 0x0090)
class UComponentProperty : public UObjectProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 20 ];

		return pClassPointer;
	};

};

UClass* UComponentProperty::pClassPointer = NULL;

// Class Core.ClassProperty
// 0x0000 (0x0090 - 0x0090)
class UClassProperty : public UObjectProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 22 ];

		return pClassPointer;
	};

};

UClass* UClassProperty::pClassPointer = NULL;

// Class Core.NameProperty
// 0x0000 (0x0088 - 0x0088)
class UNameProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 23 ];

		return pClassPointer;
	};

};

UClass* UNameProperty::pClassPointer = NULL;

// Class Core.MapProperty
// 0x0008 (0x0090 - 0x0088)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0088 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 24 ];

		return pClassPointer;
	};

};

UClass* UMapProperty::pClassPointer = NULL;

// Class Core.IntProperty
// 0x0000 (0x0088 - 0x0088)
class UIntProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 25 ];

		return pClassPointer;
	};

};

UClass* UIntProperty::pClassPointer = NULL;

// Class Core.InterfaceProperty
// 0x0008 (0x0090 - 0x0088)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0088 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 26 ];

		return pClassPointer;
	};

};

UClass* UInterfaceProperty::pClassPointer = NULL;

// Class Core.FloatProperty
// 0x0000 (0x0088 - 0x0088)
class UFloatProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 27 ];

		return pClassPointer;
	};

};

UClass* UFloatProperty::pClassPointer = NULL;

// Class Core.DelegateProperty
// 0x0008 (0x0090 - 0x0088)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0088 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 28 ];

		return pClassPointer;
	};

};

UClass* UDelegateProperty::pClassPointer = NULL;

// Class Core.ByteProperty
// 0x0008 (0x0090 - 0x0088)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0088 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 29 ];

		return pClassPointer;
	};

};

UClass* UByteProperty::pClassPointer = NULL;

// Class Core.BoolProperty
// 0x0008 (0x0090 - 0x0088)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0088 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 30 ];

		return pClassPointer;
	};

};

UClass* UBoolProperty::pClassPointer = NULL;

// Class Core.BioMask4Property
// 0x0008 (0x0090 - 0x0088)
class UBioMask4Property : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0088 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 31 ];

		return pClassPointer;
	};

};

UClass* UBioMask4Property::pClassPointer = NULL;

// Class Core.ArrayProperty
// 0x0008 (0x0090 - 0x0088)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0088 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 32 ];

		return pClassPointer;
	};

};

UClass* UArrayProperty::pClassPointer = NULL;

// Class Core.Enum
// 0x0010 (0x0054 - 0x0044)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0044 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33 ];

		return pClassPointer;
	};

};

UClass* UEnum::pClassPointer = NULL;

// Class Core.Const
// 0x000C (0x0050 - 0x0044)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0044 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34 ];

		return pClassPointer;
	};

};

UClass* UConst::pClassPointer = NULL;

// Class Core.Factory
// 0x0034 (0x0070 - 0x003C)
class UFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x003C (0x0008) MISSED OFFSET
	struct FString                                     Description;                                      		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Formats;                                          		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x14 ];                            		// 0x005C (0x0014) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36 ];

		return pClassPointer;
	};

};

UClass* UFactory::pClassPointer = NULL;

// Class Core.TextBufferFactory
// 0x0000 (0x0070 - 0x0070)
class UTextBufferFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 35 ];

		return pClassPointer;
	};

};

UClass* UTextBufferFactory::pClassPointer = NULL;

// Class Core.Exporter
// 0x0028 (0x0064 - 0x003C)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET
	TArray< struct FString >                           FormatExtension;                                  		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           FormatDescription;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0xC ];                             		// 0x0058 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37 ];

		return pClassPointer;
	};

};

UClass* UExporter::pClassPointer = NULL;

// Class Core.Component
// 0x000C (0x0048 - 0x003C)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                               		// 0x003C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FName                                       TemplateName;                                     		// 0x0040 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39 ];

		return pClassPointer;
	};

};

UClass* UComponent::pClassPointer = NULL;

// Class Core.DistributionVector
// 0x0008 (0x0050 - 0x0048)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38 ];

		return pClassPointer;
	};

	struct FVector GetVectorValue ( float F, int LastExtreme );
};

UClass* UDistributionVector::pClassPointer = NULL;

// Class Core.DistributionFloat
// 0x0008 (0x0050 - 0x0048)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40 ];

		return pClassPointer;
	};

	float GetFloatValue ( float F );
};

UClass* UDistributionFloat::pClassPointer = NULL;

// Class Core.Commandlet
// 0x0040 (0x007C - 0x003C)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                  		// 0x003C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpUsage;                                        		// 0x0048 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpWebLink;                                      		// 0x0054 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamNames;                                   		// 0x0060 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamDescriptions;                            		// 0x006C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      IsServer : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsClient : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsEditor : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      LogToConsole : 1;                                 		// 0x0078 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ShowErrorCount : 1;                               		// 0x0078 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      BioLoadConsoleSupport : 1;                        		// 0x0078 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bBioUseSound : 1;                                 		// 0x0078 (0x0004) [0x0000000000000000] [0x00000040] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42 ];

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UCommandlet::pClassPointer = NULL;

// Class Core.HelpCommandlet
// 0x0000 (0x007C - 0x007C)
class UHelpCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41 ];

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UHelpCommandlet::pClassPointer = NULL;

// Class Core.Package
// 0x0094 (0x00D0 - 0x003C)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x94 ];                            		// 0x003C (0x0094) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43 ];

		return pClassPointer;
	};

};

UClass* UPackage::pClassPointer = NULL;

// Class Core.State
// 0x0024 (0x00A8 - 0x0084)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x0084 (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44 ];

		return pClassPointer;
	};

};

UClass* UState::pClassPointer = NULL;

// Class Core.Class
// 0x00BC (0x0164 - 0x00A8)
class UClass : public UState
{
public:
	unsigned char                                      UnknownData00[ 0xBC ];                            		// 0x00A8 (0x00BC) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45 ];

		return pClassPointer;
	};

};

UClass* UClass::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif