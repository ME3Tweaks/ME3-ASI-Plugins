/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WwiseAudio_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function Engine.ActorFactory.PostCreateActor
// [0x00020900] ( FUNC_Event )
struct UActorFactoryWwiseAmbientSound_eventPostCreateActor_Parms
{
	class AActor*                                      NewActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function WwiseAudio.SeqAct_WwiseMusicVolumeDisable.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USeqAct_WwiseMusicVolumeDisable_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.SeqAct_WwiseMusicVolumeEnable.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USeqAct_WwiseMusicVolumeEnable_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.SeqAct_WwisePostEvent.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USeqAct_WwisePostEvent_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAmbientSound.HideEmitter
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseAmbientSound_execHideEmitter_Parms
{
};

// Function WwiseAudio.WwiseAmbientSound.DrawEmitter
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseAmbientSound_execDrawEmitter_Parms
{
};

// Function WwiseAudio.WwiseAudioComponent.SetLocation
// [0x00020103] ( FUNC_Final )
struct UWwiseAudioComponent_execSetLocation_Parms
{
	struct FVector                                     NewLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function WwiseAudio.WwiseAudioComponent.SetDrawMic
// [0x00022400] ( FUNC_Native )
struct UWwiseAudioComponent_execSetDrawMic_Parms
{
	unsigned long                                      bDraw : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function WwiseAudio.WwiseAudioComponent.KillSound
// [0x00020400] ( FUNC_Native )
struct UWwiseAudioComponent_execKillSound_Parms
{
	class UWwiseEvent*                                 Event;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.Set3D
// [0x00020400] ( FUNC_Native )
struct UWwiseAudioComponent_execSet3D_Parms
{
};

// Function WwiseAudio.WwiseAudioComponent.Set2D
// [0x00020400] ( FUNC_Native )
struct UWwiseAudioComponent_execSet2D_Parms
{
};

// Function WwiseAudio.WwiseAudioComponent.RegisterGameObject
// [0x00024400] ( FUNC_Native )
struct UWwiseAudioComponent_execRegisterGameObject_Parms
{
	struct FString                                     GameObjectName;                                   		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.UnregisterGameObject
// [0x00020400] ( FUNC_Native )
struct UWwiseAudioComponent_execUnregisterGameObject_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.GetDistanceToListener
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execGetDistanceToListener_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SetObstructionOcclusionEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetObstructionOcclusionEnabled_Parms
{
	unsigned long                                      i_bValue : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function WwiseAudio.WwiseAudioComponent.SetEnvironmentalAudioEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetEnvironmentalAudioEnabled_Parms
{
	unsigned long                                      i_bValue : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function WwiseAudio.WwiseAudioComponent.GetObstructionOcclusionEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execGetObstructionOcclusionEnabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.GetEnvironmentalAudioEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execGetEnvironmentalAudioEnabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.GetMicPosition
// [0x00022400] ( FUNC_Native )
struct UWwiseAudioComponent_execGetMicPosition_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SetGlobalRTPCFromScript
// [0x00022400] ( FUNC_Native )
struct UWwiseAudioComponent_execSetGlobalRTPCFromScript_Parms
{
	struct FString                                     in_pszRtpcName;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              in_value;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.StaticPostGlobalEventFromScript
// [0x00022400] ( FUNC_Native )
struct UWwiseAudioComponent_execStaticPostGlobalEventFromScript_Parms
{
	struct FName                                       GlobalEventName;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.CreateComponentFromScript
// [0x00026401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execCreateComponentFromScript_Parms
{
	class AActor*                                      pActor;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Label;                                            		// 0x0004 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FName                                       ComponentGroup;                                   		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       AttachBone;                                       		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRegister : 1;                                    		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class UWwiseAudioComponent*                        ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function WwiseAudio.WwiseAudioComponent.IsEventPlaying
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execIsEventPlaying_Parms
{
	int                                                WwisePlayingID;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.IsPlaying
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execIsPlaying_Parms
{
	class UWwiseBaseSoundObject*                       Event;                                            		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.PostGlobalEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execPostGlobalEvent_Parms
{
	struct FName                                       GlobalEventName;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseTrigger
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetWwiseTrigger_Parms
{
	struct FString                                     sTrigger;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseSwitch
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetWwiseSwitch_Parms
{
	struct FString                                     sGroup;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sState;                                           		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseRTPCs
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetWwiseRTPCs_Parms
{
	TArray< struct FString >                           sName;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< float >                                    fValue;                                           		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseRTPC
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetWwiseRTPC_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              fValue;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.Stop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execStop_Parms
{
	class UWwiseBaseSoundObject*                       Base;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.StopWwiseEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execStopWwiseEvent_Parms
{
	struct FWwiseEventPair                             AudioEvent;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.Play
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execPlay_Parms
{
	class UWwiseBaseSoundObject*                       Base;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTrackPosition : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.PlayWwiseEvent
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execPlayWwiseEvent_Parms
{
	struct FWwiseEventPair                             AudioEvent;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTrackPosition : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SoundPositionByID
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSoundPositionByID_Parms
{
	int                                                WwisePlayingID;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SoundPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSoundPosition_Parms
{
	class UWwiseBaseSoundObject*                       Base;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.StopAll
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execStopAll_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.FindPlayingID
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execFindPlayingID_Parms
{
	class UWwiseBaseSoundObject*                       BaseSound;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 StopEvent;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SetRTPCWithHandler
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetRTPCWithHandler_Parms
{
	struct FWwiseRTPCForActorHandler                   RTPCHandler;                                      		// 0x0000 (0x0014) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	float                                              fValue;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function WwiseAudio.WwiseAudioComponentMultiLoc.Set3D
// [0x00020400] ( FUNC_Native )
struct UWwiseAudioComponentMultiLoc_execSet3D_Parms
{
};

// Function Engine.AudioDevice.SetSoundMode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioDevice_execSetSoundMode_Parms
{
	struct FName                                       NewMode;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.LocalToWorld
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execLocalToWorld_Parms
{
	struct FVector                                     vLocal;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.BioBaseRemovedFromWorld
// [0x00020900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventBioBaseRemovedFromWorld_Parms
{
};

// Function Engine.Actor.BioRestoreFromStasis
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execBioRestoreFromStasis_Parms
{
};

// Function Engine.Actor.BioApplyStasis
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execBioApplyStasis_Parms
{
	struct FString                                     Cause;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Engine.Actor.PlayFootStepSound
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventPlayFootStepSound_Parms
{
	int                                                FootDown;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.SFXSetAudioComponentRTPCs
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventSFXSetAudioComponentRTPCs_Parms
{
	class UActorComponent*                             pWwiseAudioComponent;                             		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function Engine.Actor.GetHeadSkelMeshComponent
// [0x00020400] ( FUNC_Native )
struct AWwiseMicPosOrient_execGetHeadSkelMeshComponent_Parms
{
	class USkeletalMeshComponent*                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function Engine.Actor.GetPrimarySkelMeshComponent
// [0x00020400] ( FUNC_Native )
struct AWwiseMicPosOrient_execGetPrimarySkelMeshComponent_Parms
{
	class USkeletalMeshComponent*                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function Engine.Actor.ImpactWithPower
// [0x00020100] 
struct AWwiseMicPosOrient_execImpactWithPower_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Caster;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Force;                                            		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.GetPowerResistance
// [0x00420102] 
struct AWwiseMicPosOrient_execGetPowerResistance_Parms
{
	class APawn*                                       Caster;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Force;                                            		// 0x0020 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UClass*                                      DamageType;                                       		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      TargetOverride;                                   		// 0x0030 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0034 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.RemoveSFXModuleIndex
// [0x00020400] ( FUNC_Native )
struct AWwiseMicPosOrient_execRemoveSFXModuleIndex_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.RemoveSFXModule
// [0x00020400] ( FUNC_Native )
struct AWwiseMicPosOrient_execRemoveSFXModule_Parms
{
	class USFXModule*                                  oModule;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.AddSFXModule
// [0x00024400] ( FUNC_Native )
struct AWwiseMicPosOrient_execAddSFXModule_Parms
{
	class USFXModule*                                  oModule;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUserModule : 1;                                  		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.StopAllSounds
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execStopAllSounds_Parms
{
};

// Function Engine.Actor.WillOverlap
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execWillOverlap_Parms
{
	struct FVector                                     PosA;                                             		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     VelA;                                             		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     PosB;                                             		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     VelB;                                             		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              StepSize;                                         		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Radius;                                           		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Time;                                             		// 0x0038 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x003C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.GetAvoidanceVector
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execGetAvoidanceVector_Parms
{
	TArray< class AActor* >                            Obstacles;                                        		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FVector                                     GoalLocation;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              CollisionRadius;                                  		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              MaxSpeed;                                         		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumSamples;                                       		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              VelocityStepRate;                                 		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              MaxTimeTilOverlap;                                		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x002C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.IsClient
// [0x00020103] ( FUNC_Final )
struct AWwiseMicPosOrient_execIsClient_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.IsServer
// [0x00020103] ( FUNC_Final )
struct AWwiseMicPosOrient_execIsServer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.IsOwningClient
// [0x00020102] 
struct AWwiseMicPosOrient_execIsOwningClient_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.ReplicationEnded
// [0x00020900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventReplicationEnded_Parms
{
};

// Function Engine.Actor.PostDemoRewind
// [0x00020900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventPostDemoRewind_Parms
{
};

// Function Engine.Actor.AnimTreeUpdated
// [0x00020900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventAnimTreeUpdated_Parms
{
	class USkeletalMeshComponent*                      SkelMesh;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function Engine.Actor.SupportsKismetModification
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execSupportsKismetModification_Parms
{
	class USequenceOp*                                 AskingOp;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.TrailsNotifyEnd
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventTrailsNotifyEnd_Parms
{
	class UAnimNotify_Trails*                          AnimNotifyData;                                   		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function Engine.Actor.TrailsNotifyTick
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventTrailsNotifyTick_Parms
{
	class UAnimNotify_Trails*                          AnimNotifyData;                                   		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function Engine.Actor.TrailsNotify
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventTrailsNotify_Parms
{
	class UAnimNotify_Trails*                          AnimNotifyData;                                   		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function Engine.Actor.PlayParticleEffect
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventPlayParticleEffect_Parms
{
	class UAnimNotify_PlayParticleEffect*              AnimNotifyData;                                   		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function Engine.Actor.GetAimAdhesionExtent
// [0x00420102] 
struct AWwiseMicPosOrient_execGetAimAdhesionExtent_Parms
{
	float                                              Width;                                            		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Center;                                           		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Engine.Actor.GetAimFrictionExtent
// [0x00420102] 
struct AWwiseMicPosOrient_execGetAimFrictionExtent_Parms
{
	float                                              Width;                                            		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Center;                                           		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Engine.Actor.IsInPersistentLevel
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execIsInPersistentLevel_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.SetActive
// [0x00020400] ( FUNC_Native )
struct AWwiseMicPosOrient_execSetActive_Parms
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Engine.Actor.GetModule
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execGetModule_Parms
{
	class UClass*                                      ModuleClass;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXModule*                                  ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000D80]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm )
};

// Function Engine.Actor.ExceededPhysicsThreshold
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventExceededPhysicsThreshold_Parms
{
	class AActor*                                      instigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.OnRigidBodySpringOverextension
// [0x00020900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventOnRigidBodySpringOverextension_Parms
{
	class URB_BodyInstance*                            BodyInstance;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.GetPackageGuid
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execGetPackageGuid_Parms
{
	struct FName                                       PackageName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.PostInitAnimTree
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventPostInitAnimTree_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function Engine.Actor.RootMotionExtracted
// [0x00420900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventRootMotionExtracted_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FBoneAtom                                   ExtractedRootMotionDelta;                         		// 0x0010 (0x0020) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Engine.Actor.RootMotionModeChanged
// [0x00020900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventRootMotionModeChanged_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function Engine.Actor.PostRenderFor
// [0x00020900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventPostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.NativePostRenderFor
// [0x00020500] ( FUNC_Native )
struct AWwiseMicPosOrient_execNativePostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.SetHUDLocation
// [0x00020500] ( FUNC_Native )
struct AWwiseMicPosOrient_execSetHUDLocation_Parms
{
	struct FVector                                     NewHUDLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.OnRanOver
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventOnRanOver_Parms
{
	class ASVehicle*                                   Vehicle;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         RunOverComponent;                                 		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	int                                                WheelIndex;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.RigidBodyCollision
// [0x00420800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventRigidBodyCollision_Parms
{
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class UPrimitiveComponent*                         OtherComponent;                                   		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FCollisionImpactData                        RigidCollisionData;                               		// 0x0008 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ContactIndex;                                     		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.InterpolationChanged
// [0x00020900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventInterpolationChanged_Parms
{
	class USeqAct_Interp*                              InterpAction;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.InterpolationFinished
// [0x00020900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventInterpolationFinished_Parms
{
	class USeqAct_Interp*                              InterpAction;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.InterpolationStarted
// [0x00020900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventInterpolationStarted_Parms
{
	class USeqAct_Interp*                              InterpAction;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UInterpGroupInst*                            GroupInst;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.PickedUpBy
// [0x00020000] 
struct AWwiseMicPosOrient_execPickedUpBy_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.SpawnedByKismet
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventSpawnedByKismet_Parms
{
};

// Function Engine.Actor.GetTargetLocation
// [0x00024500] ( FUNC_Native )
struct AWwiseMicPosOrient_execGetTargetLocation_Parms
{
	class AActor*                                      RequestedBy;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRequestAlternateLoc : 1;                         		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.FindGoodEndView
// [0x00420102] 
struct AWwiseMicPosOrient_execFindGoodEndView_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    GoodRotation;                                     		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Engine.Actor.NotifyLocalPlayerTeamReceived
// [0x00020100] 
struct AWwiseMicPosOrient_execNotifyLocalPlayerTeamReceived_Parms
{
};

// Function Engine.Actor.GetLocationStringFor
// [0x00020102] 
struct AWwiseMicPosOrient_execGetLocationStringFor_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Engine.Actor.ScriptGetTeamNum
// [0x00020902] ( FUNC_Event )
struct AWwiseMicPosOrient_eventScriptGetTeamNum_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.GetTeamNum
// [0x00020500] ( FUNC_Native )
struct AWwiseMicPosOrient_execGetTeamNum_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.PawnBaseDied
// [0x00020000] 
struct AWwiseMicPosOrient_execPawnBaseDied_Parms
{
};

// Function Engine.Actor.IsPlayerOwned
// [0x00020500] ( FUNC_Native )
struct AWwiseMicPosOrient_execIsPlayerOwned_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.GetActorEyesViewPoint
// [0x00420902] ( FUNC_Event )
struct AWwiseMicPosOrient_eventGetActorEyesViewPoint_Parms
{
	struct FVector                                     out_Location;                                     		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_rotation;                                     		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Engine.Actor.IsStationary
// [0x00020002] 
struct AWwiseMicPosOrient_execIsStationary_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.GetActorFaceFXAsset
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventGetActorFaceFXAsset_Parms
{
	class UFaceFXAsset*                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.CanActorPlayFaceFXAnim
// [0x00020102] 
struct AWwiseMicPosOrient_execCanActorPlayFaceFXAnim_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.IsActorPlayingFaceFXAnim
// [0x00020102] 
struct AWwiseMicPosOrient_execIsActorPlayingFaceFXAnim_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.SetSkelControlScale
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventSetSkelControlScale_Parms
{
	struct FName                                       SkelControlName;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Scale;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.SetMorphWeight
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventSetMorphWeight_Parms
{
	struct FName                                       MorphNodeName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              MorphWeight;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.StopActorFaceFXAnim
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventStopActorFaceFXAnim_Parms
{
};

// Function Engine.Actor.PlayActorFaceFXAnim
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventPlayActorFaceFXAnim_Parms
{
	class UFaceFXAnimSet*                              AnimSet;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     GroupName;                                        		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     SeqName;                                          		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USoundCue*                                   SoundCueToPlay;                                   		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.FinishMovementControl
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventFinishMovementControl_Parms
{
	class UInterpGroup*                                InInterpGroup;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.BeginMovementControl
// [0x00020802] ( FUNC_Event )
struct AWwiseMicPosOrient_eventBeginMovementControl_Parms
{
	class UInterpGroup*                                InInterpGroup;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.FinishAnimControl
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventFinishAnimControl_Parms
{
	class UInterpGroup*                                InInterpGroup;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.SetAnimPosition
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventSetAnimPosition_Parms
{
	struct FName                                       SlotName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ChannelIndex;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       InAnimSeqName;                                    		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              InPosition;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFireNotifies : 1;                                		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bLooping : 1;                                     		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Engine.Actor.BeginAnimControl
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventBeginAnimControl_Parms
{
	class UInterpGroup*                                InInterpGroup;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.OnAnimPlay
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventOnAnimPlay_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.OnAnimEnd
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventOnAnimEnd_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.DoKismetAttachment
// [0x00020002] 
struct AWwiseMicPosOrient_execDoKismetAttachment_Parms
{
	class AActor*                                      Attachment;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USeqAct_AttachToActor*                       Action;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bOldCollideActors : 1;                            		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bOldBlockActors : 1;                              		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  X;                                                		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function Engine.Actor.OnAttachToActor
// [0x00020002] 
struct AWwiseMicPosOrient_execOnAttachToActor_Parms
{
	class USeqAct_AttachToActor*                       Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AActor*                                   Attachment;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AController*                              C;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< class UObject* >                        objVars;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function Engine.Actor.BioEnqueueDoKismetAttachment
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execBioEnqueueDoKismetAttachment_Parms
{
	class AActor*                                      InAttachment;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bInDetach : 1;                                    		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bInHardAttach : 1;                                		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       InBoneName;                                       		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bInUseRelativeOffset : 1;                         		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     InRelativeOffset;                                 		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bInUseRelativeRotation : 1;                       		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FRotator                                    InRelativeRotation;                               		// 0x0028 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.BioDoKismetAttachment
// [0x00020802] ( FUNC_Event )
struct AWwiseMicPosOrient_eventBioDoKismetAttachment_Parms
{
	class AActor*                                      InAttachment;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bInDetach : 1;                                    		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bInHardAttach : 1;                                		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       InBoneName;                                       		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bInUseRelativeOffset : 1;                         		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     InRelativeOffset;                                 		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bInUseRelativeRotation : 1;                       		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FRotator                                    InRelativeRotation;                               		// 0x0028 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class USeqAct_AttachToActor*                    Seq;                                              		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.OnToggleHidden
// [0x00020102] 
struct AWwiseMicPosOrient_execOnToggleHidden_Parms
{
	class USeqAct_ToggleHidden*                        Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             AttachIdx;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             IgnoreIdx;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   A;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.OnChangeCollision
// [0x00020002] 
struct AWwiseMicPosOrient_execOnChangeCollision_Parms
{
	class USeqAct_ChangeCollision*                     Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.OnSetPhysics
// [0x00020102] 
struct AWwiseMicPosOrient_execOnSetPhysics_Parms
{
	class USeqAct_SetPhysics*                          Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.OnSetBlockRigidBody
// [0x00020102] 
struct AWwiseMicPosOrient_execOnSetBlockRigidBody_Parms
{
	class USeqAct_SetBlockRigidBody*                   Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.OnSetVelocity
// [0x00020102] 
struct AWwiseMicPosOrient_execOnSetVelocity_Parms
{
	class USeqAct_SetVelocity*                         Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  V;                                                		// 0x0004 (0x000C) [0x0000000000000000]              
	// float                                           Mag;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.OnTeleport
// [0x00020102] 
struct AWwiseMicPosOrient_execOnTeleport_Parms
{
	class USeqAct_Teleport*                            Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   destActor;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vLocation;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 rRotation;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function Engine.Actor.OnModifyHealth
// [0x00020102] 
struct AWwiseMicPosOrient_execOnModifyHealth_Parms
{
	class USeqAct_ModifyHealth*                        Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AController*                              InstigatorController;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APawn*                                    InstigatorPawn;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.BlockForTextureStreaming
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execBlockForTextureStreaming_Parms
{
};

// Function Engine.Actor.TexturePrestreamIsRequired
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execTexturePrestreamIsRequired_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.PrestreamTextures
// [0x00024400] ( FUNC_Native )
struct AWwiseMicPosOrient_execPrestreamTextures_Parms
{
	float                                              Seconds;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bEnableStreaming : 1;                             		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                CinematicTextureGroups;                           		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.ShutDown
// [0x00020902] ( FUNC_Event )
struct AWwiseMicPosOrient_eventShutDown_Parms
{
};

// Function Engine.Actor.SetNetUpdateTime
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execSetNetUpdateTime_Parms
{
	float                                              NewUpdateTime;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.ForceNetRelevant
// [0x00020802] ( FUNC_Event )
struct AWwiseMicPosOrient_eventForceNetRelevant_Parms
{
};

// Function Engine.Actor.OnDestroy
// [0x00020102] 
struct AWwiseMicPosOrient_execOnDestroy_Parms
{
	class USeqAct_Destroy*                             Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             AttachIdx;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             IgnoreIdx;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   A;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.ClearLatentAction
// [0x00024103] ( FUNC_Final )
struct AWwiseMicPosOrient_execClearLatentAction_Parms
{
	class UClass*                                      actionClass;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAborted : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class USeqAct_Latent*                              exceptionAction;                                  		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bCancelled : 1;                                   		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             idx;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// class USeqAct_Latent*                           oLatentAction;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.FindEventsOfClass
// [0x00424103] ( FUNC_Final )
struct AWwiseMicPosOrient_execFindEventsOfClass_Parms
{
	class UClass*                                      EventClass;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< class USequenceEvent* >                    out_EventList;                                    		// 0x0004 (0x000C) [0x0000000000400190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bIncludeDisabled : 1;                             		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USequenceEvent*                           Evt;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFoundEvent : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function Engine.Actor.ActivateEventClass
// [0x00424103] ( FUNC_Final )
struct AWwiseMicPosOrient_execActivateEventClass_Parms
{
	class UClass*                                      InClass;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      inInstigator;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< class USequenceEvent* >                    EventList;                                        		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< int >                                      ActivateIndices;                                  		// 0x0014 (0x000C) [0x0000000000400192]              ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bTest : 1;                                        		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	TArray< class USequenceEvent* >                    ActivatedEvents;                                  		// 0x0024 (0x000C) [0x0000000000400190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USequenceEvent*                           Evt;                                              		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.TriggerGlobalEventClass
// [0x00024102] 
struct AWwiseMicPosOrient_execTriggerGlobalEventClass_Parms
{
	class UClass*                                      InEventClass;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      inInstigator;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ActivateIndex;                                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// TArray< class USequenceObject* >                EventsToActivate;                                 		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< int >                                   ActivateIndices;                                  		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USequence*                                GameSeq;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bResult : 1;                                      		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             i;                                                		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.ReceivedNewEvent
// [0x00020900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventReceivedNewEvent_Parms
{
	class USequenceEvent*                              Evt;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.TriggerEventClass
// [0x00424102] 
struct AWwiseMicPosOrient_execTriggerEventClass_Parms
{
	class UClass*                                      InEventClass;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      inInstigator;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ActivateIndex;                                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bTest : 1;                                        		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	TArray< class USequenceEvent* >                    ActivatedEvents;                                  		// 0x0010 (0x000C) [0x0000000000400190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// TArray< int >                                   ActivateIndices;                                  		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function Engine.Actor.EffectIsRelevant
// [0x00024102] 
struct AWwiseMicPosOrient_execEffectIsRelevant_Parms
{
	struct FVector                                     SpawnLocation;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceDedicated : 1;                              		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              CullDistance;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APlayerController*                        P;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bResult : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function Engine.Actor.CheckMaxEffectDistance
// [0x00024102] 
struct AWwiseMicPosOrient_execCheckMaxEffectDistance_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnLocation;                                    		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              CullDistance;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Dist;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.ApplyFluidSurfaceImpact
// [0x00020102] 
struct AWwiseMicPosOrient_execApplyFluidSurfaceImpact_Parms
{
	class AFluidSurfaceActor*                          Fluid;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           Radius;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Height;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           AdjustedVelocity;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.CanSplash
// [0x00020102] 
struct AWwiseMicPosOrient_execCanSplash_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.PlayTeleportEffect
// [0x00020000] 
struct AWwiseMicPosOrient_execPlayTeleportEffect_Parms
{
	unsigned long                                      bOut : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bSound : 1;                                       		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Engine.Actor.IsInPain
// [0x00020002] 
struct AWwiseMicPosOrient_execIsInPain_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APhysicsVolume*                           V;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.IsInVolume
// [0x00020002] 
struct AWwiseMicPosOrient_execIsInVolume_Parms
{
	class AVolume*                                     aVolume;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AVolume*                                  V;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.Reset
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventReset_Parms
{
};

// Function Engine.Actor.GetFaceFXAudioComponent
// [0x00020902] ( FUNC_Event )
struct AWwiseMicPosOrient_eventGetFaceFXAudioComponent_Parms
{
	class UAudioComponent*                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function Engine.Actor.ModifyHearSoundComponent
// [0x00020900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventModifyHearSoundComponent_Parms
{
	class UAudioComponent*                             AC;                                               		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function Engine.Actor.GetPhysicsName
// [0x00020102] 
struct AWwiseMicPosOrient_execGetPhysicsName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Engine.Actor.DisplayDebug
// [0x00420102] 
struct AWwiseMicPosOrient_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FString                                  T;                                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AActor*                                   A;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           MyRadius;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           MyHeight;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UCanvas*                                  Canvas;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.GetDebugName
// [0x00020002] 
struct AWwiseMicPosOrient_execGetDebugName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Engine.Actor.MatchStarting
// [0x00020000] 
struct AWwiseMicPosOrient_execMatchStarting_Parms
{
};

// Function Engine.Actor.GetLocalString
// [0x00026002] 
struct AWwiseMicPosOrient_execGetLocalString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Engine.Actor.ReplaceText
// [0x00422002] 
struct AWwiseMicPosOrient_execReplaceText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     Replace;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     With;                                             		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             i;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FString                                  Input;                                            		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function Engine.Actor.GetHumanReadableName
// [0x00020102] 
struct AWwiseMicPosOrient_execGetHumanReadableName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Engine.Actor.GetItemName
// [0x00020102] 
struct AWwiseMicPosOrient_execGetItemName_Parms
{
	struct FString                                     FullName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             pos;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.CalcCamera
// [0x00420102] 
struct AWwiseMicPosOrient_execCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HitNormal;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// float                                           Radius;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           Height;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.EndViewTarget
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventEndViewTarget_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.BecomeViewTarget
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventBecomeViewTarget_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.CheckForErrors
// [0x00020000] 
struct AWwiseMicPosOrient_execCheckForErrors_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.DebugFreezeGame
// [0x00024800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventDebugFreezeGame_Parms
{
	class AActor*                                      ActorToLookAt;                                    		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.GetGravityZ
// [0x00020400] ( FUNC_Native )
struct AWwiseMicPosOrient_execGetGravityZ_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.CheckHitInfo
// [0x00420103] ( FUNC_Final )
struct AWwiseMicPosOrient_execCheckHitInfo_Parms
{
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UPrimitiveComponent*                         FallBackComponent;                                		// 0x001C (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     Dir;                                              		// 0x0020 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_HitLocation;                                  		// 0x002C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FVector                                  out_NewHitLocation;                               		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  out_HitNormal;                                    		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x005C (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            newHitInfo;                                       		// 0x0068 (0x001C) [0x0000000000000000]              
};

// Function Engine.Actor.TakeRadiusDamage
// [0x00024902] ( FUNC_Event )
struct AWwiseMicPosOrient_eventTakeRadiusDamage_Parms
{
	class AController*                                 instigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BaseDamage;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRadius;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullDamage : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageFalloffExponent;                            		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x002C (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// float                                           ColRadius;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           ColHeight;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           DamageScale;                                      		// 0x0050 (0x0004) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           ScaledDamage;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x005C (0x000C) [0x0000000000000000]              
	// class USFXModule_DamageBase*                    DmgModule;                                        		// 0x0068 (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.HealDamage
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventHealDamage_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Healer;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.TakeDamage
// [0x00024902] ( FUNC_Event )
struct AWwiseMicPosOrient_eventTakeDamage_Parms
{
	float                                              DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             idx;                                              		// 0x0044 (0x0004) [0x0000000000000000]              
	// class USeqEvent_TakeDamage*                     dmgEvent;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	// class USFXModule_DamageBase*                    DmgModule;                                        		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.KilledBy
// [0x00020000] 
struct AWwiseMicPosOrient_execKilledBy_Parms
{
	class APawn*                                       EventInstigator;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.HurtRadius
// [0x00024102] 
struct AWwiseMicPosOrient_execHurtRadius_Parms
{
	float                                              BaseDamage;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRadius;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      IgnoredActor;                                     		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AController*                                 InstigatedByController;                           		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bDoFullDamage : 1;                                		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   Victim;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bCausedDamage : 1;                                		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0034 (0x001C) [0x0000000000000000]              
	// class UStaticMeshComponent*                     HitComponent;                                     		// 0x0050 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class AKActorFromStatic*                        NewKActor;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.StopsProjectile
// [0x00020102] 
struct AWwiseMicPosOrient_execStopsProjectile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.NotifySkelControlBeyondLimit
// [0x00020900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventNotifySkelControlBeyondLimit_Parms
{
	class USkelControlLookAt*                          LookAt;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.ConstraintBrokenNotify
// [0x00020900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventConstraintBrokenNotify_Parms
{
	class AActor*                                      ConOwner;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class URB_ConstraintSetup*                         ConSetup;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class URB_ConstraintInstance*                      ConInstance;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.SetInitialState
// [0x00020902] ( FUNC_Event )
struct AWwiseMicPosOrient_eventSetInitialState_Parms
{
};

// Function Engine.Actor.PostBeginPlay
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventPostBeginPlay_Parms
{
};

// Function Engine.Actor.BroadcastLocalizedTeamMessage
// [0x00024802] ( FUNC_Event )
struct AWwiseMicPosOrient_eventBroadcastLocalizedTeamMessage_Parms
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      InMessageClass;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.BroadcastLocalizedMessage
// [0x00024802] ( FUNC_Event )
struct AWwiseMicPosOrient_eventBroadcastLocalizedMessage_Parms
{
	class UClass*                                      InMessageClass;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.PreBeginPlay
// [0x00020802] ( FUNC_Event )
struct AWwiseMicPosOrient_eventPreBeginPlay_Parms
{
};

// Function Engine.Actor.FindActorsOfClass
// [0x00420003] ( FUNC_Final )
struct AWwiseMicPosOrient_execFindActorsOfClass_Parms
{
	class UClass*                                      ActorClass;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< class AActor* >                            out_Actors;                                       		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   TestActor;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.MoveActorToFloor
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execMoveActorToFloor_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.GetALocalPlayerController
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execGetALocalPlayerController_Parms
{
	class APlayerController*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.LocalPlayerControllers
// [0x00420405] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execLocalPlayerControllers_Parms
{
	class UClass*                                      BaseClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Engine.Actor.AllOwnedComponents
// [0x00420405] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execAllOwnedComponents_Parms
{
	class UClass*                                      BaseClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UActorComponent*                             OutComponent;                                     		// 0x0004 (0x0004) [0x0000000004000180]              ( CPF_Parm | CPF_OutParm | CPF_EditInline )
};

// Function Engine.Actor.ComponentList
// [0x00420405] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execComponentList_Parms
{
	class UClass*                                      BaseClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UActorComponent*                             out_Component;                                    		// 0x0004 (0x0004) [0x0000000004000180]              ( CPF_Parm | CPF_OutParm | CPF_EditInline )
};

// Function Engine.Actor.OverlappingActors
// [0x00424405] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execOverlappingActors_Parms
{
	class UClass*                                      BaseClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      out_Actor;                                        		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Radius;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Loc;                                              		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIgnoreHidden : 1;                                		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.CollidingActors
// [0x00424405] ( FUNC_Final | FUNC_Native ) iNative [0x0141]
struct AWwiseMicPosOrient_execCollidingActors_Parms
{
	class UClass*                                      BaseClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Actor;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Radius;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Loc;                                              		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUseOverlapCheck : 1;                             		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class UClass*                                      InterfaceClass;                                   		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0020 (0x001C) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
};

// Function Engine.Actor.VisibleCollidingActors
// [0x00424405] ( FUNC_Final | FUNC_Native ) iNative [0x0138]
struct AWwiseMicPosOrient_execVisibleCollidingActors_Parms
{
	class UClass*                                      BaseClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Actor;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Radius;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Loc;                                              		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIgnoreHidden : 1;                                		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     Extent;                                           		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bTraceActors : 1;                                 		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class UClass*                                      InterfaceClass;                                   		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0030 (0x001C) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
};

// Function Engine.Actor.VisibleActors
// [0x00424405] ( FUNC_Final | FUNC_Native ) iNative [0x0137]
struct AWwiseMicPosOrient_execVisibleActors_Parms
{
	class UClass*                                      BaseClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Actor;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Radius;                                           		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     Loc;                                              		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.TraceActors
// [0x00424405] ( FUNC_Final | FUNC_Native ) iNative [0x0135]
struct AWwiseMicPosOrient_execTraceActors_Parms
{
	class UClass*                                      BaseClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Actor;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     HitLoc;                                           		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     HitNorm;                                          		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     End;                                              		// 0x0020 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Start;                                            		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     Extent;                                           		// 0x0038 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0044 (0x001C) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	int                                                ExtraTraceFlags;                                  		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.TouchingActors
// [0x00424405] ( FUNC_Final | FUNC_Native ) iNative [0x0133]
struct AWwiseMicPosOrient_execTouchingActors_Parms
{
	class UClass*                                      BaseClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Actor;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bReverse : 1;                                     		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.BasedActors
// [0x00420405] ( FUNC_Final | FUNC_Native ) iNative [0x0132]
struct AWwiseMicPosOrient_execBasedActors_Parms
{
	class UClass*                                      BaseClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Actor;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Engine.Actor.ChildActors
// [0x00420405] ( FUNC_Final | FUNC_Native ) iNative [0x0131]
struct AWwiseMicPosOrient_execChildActors_Parms
{
	class UClass*                                      BaseClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Actor;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Engine.Actor.DynamicActors
// [0x00424405] ( FUNC_Final | FUNC_Native ) iNative [0x0139]
struct AWwiseMicPosOrient_execDynamicActors_Parms
{
	class UClass*                                      BaseClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Actor;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UClass*                                      InterfaceClass;                                   		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.AllActors
// [0x00424405] ( FUNC_Final | FUNC_Native ) iNative [0x0130]
struct AWwiseMicPosOrient_execAllActors_Parms
{
	class UClass*                                      BaseClass;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Actor;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UClass*                                      InterfaceClass;                                   		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.GetURLMap
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0223]
struct AWwiseMicPosOrient_execGetURLMap_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Engine.Actor.PostTeleport
// [0x00020000] 
struct AWwiseMicPosOrient_execPostTeleport_Parms
{
	class ATeleporter*                                 OutTeleporter;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.PreTeleport
// [0x00020000] 
struct AWwiseMicPosOrient_execPreTeleport_Parms
{
	class ATeleporter*                                 InTeleporter;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.GetDestination
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execGetDestination_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.SuggestTossVelocity
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execSuggestTossVelocity_Parms
{
	struct FVector                                     TossVelocity;                                     		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Destination;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Start;                                            		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              TossSpeed;                                        		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BaseTossZ;                                        		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              DesiredZPct;                                      		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     CollisionSize;                                    		// 0x0030 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              TerminalVelocity;                                 		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              OverrideGravityZ;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOnlyTraceUp : 1;                                 		// 0x0044 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.PlayerCanSeeMe
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0214]
struct AWwiseMicPosOrient_execPlayerCanSeeMe_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.MakeNoise
// [0x00024401] ( FUNC_Final | FUNC_Native ) iNative [0x0200]
struct AWwiseMicPosOrient_execMakeNoise_Parms
{
	float                                              Loudness;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       NoiseType;                                        		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.StopSound
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execStopSound_Parms
{
	class UWwiseBaseSoundObject*                       InSoundEvent;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.PlaySound
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execPlaySound_Parms
{
	class UWwiseBaseSoundObject*                       InSoundCue;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bNotReplicated : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bNoRepToOwner : 1;                                		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bStopWhenOwnerDestroyed : 1;                      		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     SoundLocation;                                    		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bNoRepToRelevant : 1;                             		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.CreateAudioComponent
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execCreateAudioComponent_Parms
{
	class USoundCue*                                   InSoundCue;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPlay : 1;                                        		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bStopWhenOwnerDestroyed : 1;                      		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUseLocation : 1;                                 		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     SourceLocation;                                   		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAttachToSelf : 1;                                		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class UAudioComponent*                             ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function Engine.Actor.ResetTimerTimeDilation
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execResetTimerTimeDilation_Parms
{
	struct FName                                       TimerName;                                        		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UObject*                                     inObj;                                            		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.ModifyTimerTimeDilation
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execModifyTimerTimeDilation_Parms
{
	struct FName                                       TimerName;                                        		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              InTimerTimeDilation;                              		// 0x0008 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UObject*                                     inObj;                                            		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.GetRemainingTimeForTimer
// [0x00024103] ( FUNC_Final )
struct AWwiseMicPosOrient_execGetRemainingTimeForTimer_Parms
{
	struct FName                                       TimerFuncName;                                    		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     inObj;                                            		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Count;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Rate;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Engine.Actor.GetTimerRate
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execGetTimerRate_Parms
{
	struct FName                                       TimerFuncName;                                    		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     inObj;                                            		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.GetTimerCount
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execGetTimerCount_Parms
{
	struct FName                                       inTimerFunc;                                      		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     inObj;                                            		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.IsTimerActive
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execIsTimerActive_Parms
{
	struct FName                                       inTimerFunc;                                      		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     inObj;                                            		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.PauseTimer
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execPauseTimer_Parms
{
	unsigned long                                      bPause : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       inTimerFunc;                                      		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     inObj;                                            		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.ClearAllTimers
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execClearAllTimers_Parms
{
	class UObject*                                     inObj;                                            		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.ClearTimer
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execClearTimer_Parms
{
	struct FName                                       inTimerFunc;                                      		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     inObj;                                            		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.SetTimer
// [0x00024401] ( FUNC_Final | FUNC_Native ) iNative [0x0118]
struct AWwiseMicPosOrient_execSetTimer_Parms
{
	float                                              InRate;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      inbLoop : 1;                                      		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       inTimerFunc;                                      		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     inObj;                                            		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.TornOff
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventTornOff_Parms
{
};

// Function Engine.Actor.Destroy
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0117]
struct AWwiseMicPosOrient_execDestroy_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.Spawn
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execSpawn_Parms
{
	class UClass*                                      SpawnClass;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      SpawnOwner;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       SpawnTag;                                         		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     SpawnLocation;                                    		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    SpawnRotation;                                    		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      ActorTemplate;                                    		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bNoCollisionFail : 1;                             		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFindSafeLocation : 1;                            		// 0x0030 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0034 (0x0004) [0x0000000000000D80]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm )
};

// Function Engine.Actor.GetBoundingCylinder
// [0x00420400] ( FUNC_Native )
struct AWwiseMicPosOrient_execGetBoundingCylinder_Parms
{
	float                                              CollisionRadius;                                  		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              CollisionHeight;                                  		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Engine.Actor.GetComponentsBoundingBox
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execGetComponentsBoundingBox_Parms
{
	struct FBox                                        ActorBox;                                         		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Engine.Actor.IsOverlapping
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execIsOverlapping_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.ContainsPoint
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execContainsPoint_Parms
{
	struct FVector                                     Spot;                                             		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.FindSpot
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execFindSpot_Parms
{
	struct FVector                                     BoxExtent;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpotLocation;                                     		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.TraceAllPhysicsAssetInteractions
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execTraceAllPhysicsAssetInteractions_Parms
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                     		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     EndTrace;                                         		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     StartTrace;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FImpactInfo >                       out_Hits;                                         		// 0x001C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FVector                                     Extent;                                           		// 0x0028 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.FastTrace
// [0x00024401] ( FUNC_Final | FUNC_Native ) iNative [0x0224]
struct AWwiseMicPosOrient_execFastTrace_Parms
{
	struct FVector                                     TraceEnd;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     TraceStart;                                       		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     BoxExtent;                                        		// 0x0018 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bTraceBullet : 1;                                 		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.PointCheckComponent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execPointCheckComponent_Parms
{
	class UPrimitiveComponent*                         InComponent;                                      		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     PointLocation;                                    		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     PointExtent;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.TraceComponent
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execTraceComponent_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UPrimitiveComponent*                         InComponent;                                      		// 0x0018 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     TraceEnd;                                         		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     TraceStart;                                       		// 0x0028 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     Extent;                                           		// 0x0034 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0040 (0x001C) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned long                                      bComplexCollision : 1;                            		// 0x005C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.Trace
// [0x00424401] ( FUNC_Final | FUNC_Native ) iNative [0x0115]
struct AWwiseMicPosOrient_execTrace_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     TraceEnd;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     TraceStart;                                       		// 0x0024 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bTraceActors : 1;                                 		// 0x0030 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     Extent;                                           		// 0x0034 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0040 (0x001C) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	int                                                ExtraTraceFlags;                                  		// 0x005C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0060 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.VolumeBasedDestroy
// [0x00020102] 
struct AWwiseMicPosOrient_execVolumeBasedDestroy_Parms
{
	class APhysicsVolume*                              PV;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.OutsideWorldBounds
// [0x00020902] ( FUNC_Event )
struct AWwiseMicPosOrient_eventOutsideWorldBounds_Parms
{
};

// Function Engine.Actor.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
struct AWwiseMicPosOrient_eventFellOutOfWorld_Parms
{
	class UClass*                                      dmgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.UsedBy
// [0x00020002] 
struct AWwiseMicPosOrient_execUsedBy_Parms
{
	class APawn*                                       User;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.OverRotated
// [0x00420900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventOverRotated_Parms
{
	struct FRotator                                    out_Desired;                                      		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_Actual;                                       		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.ClampRotation
// [0x00420501] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execClampRotation_Parms
{
	struct FRotator                                    out_Rot;                                          		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    rBase;                                            		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    rUpperLimits;                                     		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    rLowerLimits;                                     		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.OnSleepRBPhysics
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventOnSleepRBPhysics_Parms
{
};

// Function Engine.Actor.OnWakeRBPhysics
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventOnWakeRBPhysics_Parms
{
};

// Function Engine.Actor.RanInto
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventRanInto_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.EncroachedBy
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventEncroachedBy_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.EncroachingOn
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventEncroachingOn_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.CollisionChanged
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventCollisionChanged_Parms
{
};

// Function Engine.Actor.SpecialHandling
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventSpecialHandling_Parms
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.Detach
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventDetach_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.Attach
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventAttach_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.BaseChange
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventBaseChange_Parms
{
};

// Function Engine.Actor.Bump
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.UnTouch
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.PostTouch
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventPostTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.Touch
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.PhysicsVolumeChange
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventPhysicsVolumeChange_Parms
{
	class APhysicsVolume*                              NewVolume;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.Landed
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.Falling
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventFalling_Parms
{
};

// Function Engine.Actor.HitWall
// [0x00020802] ( FUNC_Event )
struct AWwiseMicPosOrient_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function Engine.Actor.Timer
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventTimer_Parms
{
};

// Function Engine.Actor.Tick
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.LostChild
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventLostChild_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.GainedChild
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventGainedChild_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.Destroyed
// [0x00020800] ( FUNC_Event )
struct AWwiseMicPosOrient_eventDestroyed_Parms
{
};

// Function Engine.Actor.SetTickIsDisabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execSetTickIsDisabled_Parms
{
	unsigned long                                      bInDisabled : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Engine.Actor.SetTickGroup
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execSetTickGroup_Parms
{
	unsigned char                                      NewTickGroup;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.ReattachComponent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execReattachComponent_Parms
{
	class UActorComponent*                             ComponentToReattach;                              		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function Engine.Actor.DetachComponent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execDetachComponent_Parms
{
	class UActorComponent*                             ExComponent;                                      		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function Engine.Actor.AttachComponent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execAttachComponent_Parms
{
	class UActorComponent*                             NewComponent;                                     		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function Engine.Actor.UnClock
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execUnClock_Parms
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Engine.Actor.Clock
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execClock_Parms
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Engine.Actor.SetPhysics
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0F82]
struct AWwiseMicPosOrient_execSetPhysics_Parms
{
	unsigned char                                      newPhysics;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.SetOnlyOwnerSee
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execSetOnlyOwnerSee_Parms
{
	unsigned long                                      bNewOnlyOwnerSee : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Engine.Actor.SetHidden
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execSetHidden_Parms
{
	unsigned long                                      bNewHidden : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Engine.Actor.ChartData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execChartData_Parms
{
	struct FString                                     DataName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              DataValue;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.FlushDebugStrings
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execFlushDebugStrings_Parms
{
};

// Function Engine.Actor.DrawDebugFrustrum
// [0x00426401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execDrawDebugFrustrum_Parms
{
	struct FMatrix                                     FrustumToWorld;                                   		// 0x0000 (0x0040) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned char                                      R;                                                		// 0x0040 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      G;                                                		// 0x0041 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      B;                                                		// 0x0042 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPersistentLines : 1;                             		// 0x0044 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.DrawDebugString
// [0x00026401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execDrawDebugString_Parms
{
	struct FVector                                     TextLocation;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Text;                                             		// 0x000C (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	class AActor*                                      TestBaseActor;                                    		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FColor                                      TextColor;                                        		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.DrawDebugCone
// [0x00026401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execDrawDebugCone_Parms
{
	struct FVector                                     Origin;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Direction;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Length;                                           		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              AngleWidth;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              AngleHeight;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumSides;                                         		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FColor                                      DrawColor;                                        		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPersistentLines : 1;                             		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.DrawDebugCylinder
// [0x00026401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execDrawDebugCylinder_Parms
{
	struct FVector                                     Start;                                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     End;                                              		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Radius;                                           		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Segments;                                         		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      R;                                                		// 0x0020 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      G;                                                		// 0x0021 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      B;                                                		// 0x0022 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPersistentLines : 1;                             		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.DrawDebugSphere
// [0x00026401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execDrawDebugSphere_Parms
{
	struct FVector                                     Center;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Radius;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Segments;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      R;                                                		// 0x0014 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      G;                                                		// 0x0015 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      B;                                                		// 0x0016 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPersistentLines : 1;                             		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.DrawDebugCoordinateSystem
// [0x00026401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execDrawDebugCoordinateSystem_Parms
{
	struct FVector                                     AxisLoc;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    AxisRot;                                          		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Scale;                                            		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPersistentLines : 1;                             		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.DrawDebugStar
// [0x00026401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execDrawDebugStar_Parms
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Size;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      R;                                                		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      G;                                                		// 0x0011 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      B;                                                		// 0x0012 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPersistentLines : 1;                             		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.DrawDebugBox
// [0x00026401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execDrawDebugBox_Parms
{
	struct FVector                                     Center;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Extent;                                           		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      R;                                                		// 0x0018 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      G;                                                		// 0x0019 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      B;                                                		// 0x001A (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPersistentLines : 1;                             		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.DrawDebugPoint
// [0x00026401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execDrawDebugPoint_Parms
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Size;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FLinearColor                                PointColor;                                       		// 0x0010 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPersistentLines : 1;                             		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.DrawDebugLine
// [0x00026401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execDrawDebugLine_Parms
{
	struct FVector                                     LineStart;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     LineEnd;                                          		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      R;                                                		// 0x0018 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      G;                                                		// 0x0019 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      B;                                                		// 0x001A (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPersistentLines : 1;                             		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.FlushPersistentDebugLines
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execFlushPersistentDebugLines_Parms
{
};

// Function Engine.Actor.GetBasedPosition
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execGetBasedPosition_Parms
{
	struct FBasedPosition                              BP;                                               		// 0x0000 (0x0034) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0034 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.SetBasedPosition
// [0x00426401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execSetBasedPosition_Parms
{
	struct FBasedPosition                              BP;                                               		// 0x0000 (0x0034) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     pos;                                              		// 0x0034 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ForcedBase;                                       		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.BP2Vect
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execBP2Vect_Parms
{
	struct FBasedPosition                              BP;                                               		// 0x0000 (0x0034) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0034 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.Vect2BP
// [0x00426401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execVect2BP_Parms
{
	struct FBasedPosition                              BP;                                               		// 0x0000 (0x0034) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     pos;                                              		// 0x0034 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ForcedBase;                                       		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.SetForcedInitialReplicatedProperty
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execSetForcedInitialReplicatedProperty_Parms
{
	class UProperty*                                   PropToReplicate;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAdd : 1;                                         		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Engine.Actor.ReplicatedDataBinding
// [0x00020900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventReplicatedDataBinding_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.ReplicatedEvent
// [0x00020900] ( FUNC_Event )
struct AWwiseMicPosOrient_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.IsOwnedBy
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execIsOwnedBy_Parms
{
	class AActor*                                      TestActor;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.GetBaseMost
// [0x00020400] ( FUNC_Native )
struct AWwiseMicPosOrient_execGetBaseMost_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.IsBasedOn
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execIsBasedOn_Parms
{
	class AActor*                                      TestActor;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.FindBase
// [0x00020400] ( FUNC_Native )
struct AWwiseMicPosOrient_execFindBase_Parms
{
};

// Function Engine.Actor.SetOwner
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0110]
struct AWwiseMicPosOrient_execSetOwner_Parms
{
	class AActor*                                      NewOwner;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.SetBase
// [0x00024401] ( FUNC_Final | FUNC_Native ) iNative [0x012A]
struct AWwiseMicPosOrient_execSetBase_Parms
{
	class AActor*                                      NewBase;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     NewFloor;                                         		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0010 (0x0004) [0x0000000004000090]              ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
	struct FName                                       AttachName;                                       		// 0x0014 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.GetTerminalVelocity
// [0x00020400] ( FUNC_Native )
struct AWwiseMicPosOrient_execGetTerminalVelocity_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.AutonomousPhysics
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0F83]
struct AWwiseMicPosOrient_execAutonomousPhysics_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.MoveSmooth
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0F81]
struct AWwiseMicPosOrient_execMoveSmooth_Parms
{
	struct FVector                                     Delta;                                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.fixedTurn
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execfixedTurn_Parms
{
	int                                                Current;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Desired;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DeltaRate;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.SetHardAttach
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execSetHardAttach_Parms
{
	unsigned long                                      bNewHardAttach : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.SetRelativeLocation
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execSetRelativeLocation_Parms
{
	struct FVector                                     NewLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.SetRelativeRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execSetRelativeRotation_Parms
{
	struct FRotator                                    NewRotation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.SetZone
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execSetZone_Parms
{
	unsigned long                                      bForceRefresh : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Engine.Actor.MovingWhichWay
// [0x00420400] ( FUNC_Native )
struct AWwiseMicPosOrient_execMovingWhichWay_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.SetRotation
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x012B]
struct AWwiseMicPosOrient_execSetRotation_Parms
{
	struct FRotator                                    NewRotation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.SetLocation
// [0x00024401] ( FUNC_Final | FUNC_Native ) iNative [0x010B]
struct AWwiseMicPosOrient_execSetLocation_Parms
{
	struct FVector                                     NewLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDebugFailure : 1;                                		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.Move
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x010A]
struct AWwiseMicPosOrient_execMove_Parms
{
	struct FVector                                     Delta;                                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Actor.SetDrawScale3D
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execSetDrawScale3D_Parms
{
	struct FVector                                     NewScale3D;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.SetDrawScale
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execSetDrawScale_Parms
{
	float                                              NewScale;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.SetCollisionType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMicPosOrient_execSetCollisionType_Parms
{
	unsigned char                                      NewCollisionType;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.SetCollisionSize
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x011B]
struct AWwiseMicPosOrient_execSetCollisionSize_Parms
{
	float                                              NewRadius;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewHeight;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.SetCollision
// [0x00024401] ( FUNC_Final | FUNC_Native ) iNative [0x0106]
struct AWwiseMicPosOrient_execSetCollision_Parms
{
	unsigned long                                      bNewColActors : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bNewBlockActors : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bNewIgnoreEncroachers : 1;                        		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Actor.FinishAnim
// [0x00020409] ( FUNC_Final | FUNC_Native ) iNative [0x0105]
struct AWwiseMicPosOrient_execFinishAnim_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.Sleep
// [0x00020409] ( FUNC_Final | FUNC_Native ) iNative [0x0100]
struct AWwiseMicPosOrient_execSleep_Parms
{
	float                                              Seconds;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Actor.ConsoleCommand
// [0x00024400] ( FUNC_Native )
struct AWwiseMicPosOrient_execConsoleCommand_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWriteToLog : 1;                                  		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Engine.Actor.ForceUpdateComponents
// [0x00024400] ( FUNC_Native )
struct AWwiseMicPosOrient_execForceUpdateComponents_Parms
{
	unsigned long                                      bCollisionUpdate : 1;                             		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bTransformOnly : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function WwiseAudio.WwiseProcFoleyComponent.GetMAX_PROC_FOLEY_BONES
// [0x00020802] ( FUNC_Event )
struct UWwiseProcFoleyComponent_eventGetMAX_PROC_FOLEY_BONES_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseVolume.TimerPop
// [0x00020000] 
struct AWwiseVolume_execTimerPop_Parms
{
	class AWwiseVolumeTimer*                           T;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function WwiseAudio.WwiseVolume.PostBeginPlay
// [0x00020002] 
struct AWwiseVolume_execPostBeginPlay_Parms
{
};

// Function WwiseAudio.WwiseAudioVolume.HideVolume
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseAudioVolume_execHideVolume_Parms
{
};

// Function WwiseAudio.WwiseAudioVolume.DrawVolume
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseAudioVolume_execDrawVolume_Parms
{
};

// Function WwiseAudio.WwiseAudioVolume.Stop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseAudioVolume_execStop_Parms
{
};

// Function WwiseAudio.WwiseAudioVolume.Start
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseAudioVolume_execStart_Parms
{
};

// Function WwiseAudio.WwiseAudioVolume.myTimerPop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseAudioVolume_execmyTimerPop_Parms
{
};

// Function WwiseAudio.WwiseAudioVolume.TimerPop
// [0x00020002] 
struct AWwiseAudioVolume_execTimerPop_Parms
{
	class AWwiseVolumeTimer*                           T;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function WwiseAudio.WwiseAudioVolume.PostBeginPlay
// [0x00020002] 
struct AWwiseAudioVolume_execPostBeginPlay_Parms
{
};

// Function WwiseAudio.WwiseMusicVolume.myTimerPop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execmyTimerPop_Parms
{
};

// Function WwiseAudio.WwiseMusicVolume.SetContainsPlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execSetContainsPlayer_Parms
{
	unsigned long                                      bContainsPlayer : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function WwiseAudio.WwiseMusicVolume.SetEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execSetEnabled_Parms
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function WwiseAudio.WwiseMusicVolume.StopMusic
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execStopMusic_Parms
{
};

// Function WwiseAudio.WwiseMusicVolume.StartMusic
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execStartMusic_Parms
{
};

// Function WwiseAudio.WwiseMusicVolume.CheckPriority
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execCheckPriority_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseMusicVolume.TimerPop
// [0x00020002] 
struct AWwiseMusicVolume_execTimerPop_Parms
{
	class AWwiseVolumeTimer*                           T;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function WwiseAudio.WwiseMusicVolume.PostBeginPlay
// [0x00020002] 
struct AWwiseMusicVolume_execPostBeginPlay_Parms
{
};

// Function WwiseAudio.WwiseVolumeTimer.Timer
// [0x00020002] 
struct AWwiseVolumeTimer_execTimer_Parms
{
};

// Function Engine.ActorFactory.PostCreateActor
// [0x00020900] ( FUNC_Event )
struct UActorFactoryWwiseDistanceRTPC_eventPostCreateActor_Parms
{
	class AActor*                                      NewActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function WwiseAudio.WwiseDistanceRTPC.Tick
// [0x00020002] 
struct AWwiseDistanceRTPC_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           DistanceFromListener;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Distance;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  MicPosition;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function Engine.ActorFactory.PostCreateActor
// [0x00020900] ( FUNC_Event )
struct UActorFactoryWwiseMicPosOrient_eventPostCreateActor_Parms
{
	class AActor*                                      NewActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Volume.ProcessActorSetVolume
// [0x00020800] ( FUNC_Event )
struct AWwiseOcclusionVolume_eventProcessActorSetVolume_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Volume.CollisionChanged
// [0x00020902] ( FUNC_Event )
struct AWwiseOcclusionVolume_eventCollisionChanged_Parms
{
};

// Function Engine.Volume.OnToggle
// [0x00020102] 
struct AWwiseOcclusionVolume_execOnToggle_Parms
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Volume.DisplayDebug
// [0x00420102] 
struct AWwiseOcclusionVolume_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Engine.Volume.GetLocationStringFor
// [0x00020102] 
struct AWwiseOcclusionVolume_execGetLocationStringFor_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Engine.Volume.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct AWwiseOcclusionVolume_eventPostBeginPlay_Parms
{
};

// Function Engine.Volume.ScriptLineCheck
// [0x00420400] ( FUNC_Native )
struct AWwiseOcclusionVolume_execScriptLineCheck_Parms
{
	struct FVector                                     End;                                              		// 0x0000 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FVector                                     Start;                                            		// 0x000C (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FVector                                     Extent;                                           		// 0x0018 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Volume.EncompassesPoint
// [0x00020400] ( FUNC_Native )
struct AWwiseOcclusionVolume_execEncompassesPoint_Parms
{
	struct FVector                                     Loc;                                              		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Engine.Volume.Encompasses
// [0x00020400] ( FUNC_Native )
struct AWwiseOcclusionVolume_execEncompasses_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif