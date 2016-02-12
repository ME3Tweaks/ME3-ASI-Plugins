/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WwiseAudio_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct WwiseAudio.WwiseEvent.WwiseEventPair
// 0x0008
struct FWwiseEventPair
{
	class UWwiseEvent*                                 Play;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 Stop;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WwiseAudio.WwiseAudioComponent.WwiseRTPCForActorHandler
// 0x0014
struct FWwiseRTPCForActorHandler
{
	struct FString                                     m_sRTPCName;                                      		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class AActor*                                      m_actor;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_currentValue;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct WwiseAudio.InterpTrackWwiseEvent.WwiseEventTrackKey
// 0x0008
struct FWwiseEventTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 Event;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WwiseAudio.WwiseComponentCallback.WwiseComponentCallbackInfo
// 0x0010
struct FWwiseComponentCallbackInfo
{
	class UWwiseComponentCallback*                     TargetObject;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	int                                                CallbackFlags;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 TargetEvent;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct WwiseAudio.WwiseFile.WwiseSHA1Digest
// 0x0014
struct FWwiseSHA1Digest
{
	unsigned char                                      Digest[ 0x14 ];                                   		// 0x0000 (0x0014) [0x0000000000000000]              
};

// ScriptStruct WwiseAudio.WwiseFile.WwisePlatformData
// 0x0008
struct FWwisePlatformData
{
	struct FPointer                                    Data;                                             		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                Platform;                                         		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct WwiseAudio.WwiseEvent.WwiseEventInstance
// 0x0004(0x000C - 0x0008)
struct FWwiseEventInstance : FWwiseEventPair
{
	int                                                WwisePlayingID;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WwiseAudio.WwiseEvent.WwiseRelationships
// 0x0010
struct FWwiseRelationships
{
	TArray< class UWwiseStream* >                      Streams;                                          		// 0x0000 (0x000C) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )
	class UWwiseBank*                                  Bank;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WwiseAudio.WwiseEvent.WwisePlatformRelationships
// 0x0014
struct FWwisePlatformRelationships
{
	struct FWwiseRelationships                         Relationships;                                    		// 0x0000 (0x0010) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	int                                                Platform;                                         		// 0x0010 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct WwiseAudio.WwiseDialogueEvent.WwiseDialogueArgumentValue
// 0x000C
struct FWwiseDialogueArgumentValue
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Id;                                               		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WwiseAudio.WwiseDialogueEvent.WwiseDialogueArgument
// 0x0018
struct FWwiseDialogueArgument
{
	TArray< struct FWwiseDialogueArgumentValue >       Values;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       Name;                                             		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Id;                                               		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct WwiseAudio.WwiseProcFoleyComponent.ProcFoleyInfo
// 0x0014
struct FProcFoleyInfo
{
	struct FVector                                     vLoc;                                             		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FName                                       nmBoneName;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct WwiseAudio.WwiseStream.WwisePlatformGuid
// 0x0014
struct FWwisePlatformGuid
{
	struct FGuid                                       Guid;                                             		// 0x0000 (0x0010) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	int                                                Platform;                                         		// 0x0010 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct WwiseAudio.WwiseStream.WwiseFileCacheGuids
// 0x000C
struct FWwiseFileCacheGuids
{
	TArray< struct FWwisePlatformGuid >                Guids;                                            		// 0x0000 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif