/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WwiseAudio_classes.h
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

#define CONST_AUDIO_DISTANCE_FACTOR                              0.01
#define CONST_MAX_PROC_FOLEY_BONES                               4

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum WwiseAudio.WwiseEvent.WwiseEventPrepareState
/*enum WwiseEventPrepareState
{
	WwiseEvent_Unprepared                              = 0,
	WwiseEvent_Preparing                               = 1,
	WwiseEvent_PrepareSuccess                          = 2,
	WwiseEvent_PrepareFailed                           = 3,
	WwiseEvent_UnPrepareFailed                         = 4,
	WwiseEvent_MAX                                     = 5
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class WwiseAudio.ActorFactoryWwiseAmbientSound
// 0x0000 (0x005C - 0x005C)
class UActorFactoryWwiseAmbientSound : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1310 ];

		return pClassPointer;
	};

	void eventPostCreateActor ( class AActor* NewActor );
};

UClass* UActorFactoryWwiseAmbientSound::pClassPointer = NULL;

// Class WwiseAudio.AnimNotify_WwiseEvent
// 0x0014 (0x0050 - 0x003C)
class UAnimNotify_WwiseEvent : public UAnimNotify
{
public:
	struct FWwiseEventPair                             AudioEvent;                                       		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BoneName;                                         		// 0x0044 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFollowActor : 1;                                 		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1311 ];

		return pClassPointer;
	};

};

UClass* UAnimNotify_WwiseEvent::pClassPointer = NULL;

// Class WwiseAudio.InterpTrackInstWwiseEvent
// 0x0004 (0x0040 - 0x003C)
class UInterpTrackInstWwiseEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                               		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1312 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackInstWwiseEvent::pClassPointer = NULL;

// Class WwiseAudio.InterpTrackInstWwiseRTPC
// 0x0014 (0x0050 - 0x003C)
class UInterpTrackInstWwiseRTPC : public UInterpTrackInst
{
public:
	struct FWwiseRTPCForActorHandler                   m_RTPCHandler;                                    		// 0x003C (0x0014) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1313 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackInstWwiseRTPC::pClassPointer = NULL;

// Class WwiseAudio.InterpTrackWwiseEvent
// 0x0010 (0x006C - 0x005C)
class UInterpTrackWwiseEvent : public UInterpTrack
{
public:
	TArray< struct FWwiseEventTrackKey >               WwiseEvents;                                      		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bRequiresPreload : 1;                           		// 0x0068 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1314 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackWwiseEvent::pClassPointer = NULL;

// Class WwiseAudio.InterpTrackWwiseSoundEffect
// 0x0004 (0x0070 - 0x006C)
class UInterpTrackWwiseSoundEffect : public UInterpTrackWwiseEvent
{
public:
	class UWwiseAudioComponent*                        m_pComponent;                                     		// 0x006C (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1315 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackWwiseSoundEffect::pClassPointer = NULL;

// Class WwiseAudio.InterpTrackWwiseRTPC
// 0x000C (0x007C - 0x0070)
class UInterpTrackWwiseRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                            		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1316 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackWwiseRTPC::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseLockMic
// 0x0000 (0x00B0 - 0x00B0)
class USeqAct_WwiseLockMic : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1317 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwiseLockMic::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseMusicVolumeDisable
// 0x0004 (0x00B4 - 0x00B0)
class USeqAct_WwiseMusicVolumeDisable : public USequenceAction
{
public:
	class AWwiseMusicVolume*                           m_MusicVolume;                                    		// 0x00B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1318 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
};

UClass* USeqAct_WwiseMusicVolumeDisable::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseMusicVolumeEnable
// 0x0004 (0x00B4 - 0x00B0)
class USeqAct_WwiseMusicVolumeEnable : public USequenceAction
{
public:
	class AWwiseMusicVolume*                           m_MusicVolume;                                    		// 0x00B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1319 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
};

UClass* USeqAct_WwiseMusicVolumeEnable::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwisePostEvent
// 0x0004 (0x00C4 - 0x00C0)
class USeqAct_WwisePostEvent : public USeqAct_Latent
{
public:
	class UWwiseBaseSoundObject*                       WwiseObject;                                      		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1320 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
};

UClass* USeqAct_WwisePostEvent::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwisePostTrigger
// 0x000C (0x00BC - 0x00B0)
class USeqAct_WwisePostTrigger : public USequenceAction
{
public:
	struct FString                                     Trigger;                                          		// 0x00B0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1321 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwisePostTrigger::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseSetRTPCValue
// 0x0020 (0x00E0 - 0x00C0)
class USeqAct_WwiseSetRTPCValue : public USeqAct_Latent
{
public:
	struct FString                                     Param;                                            		// 0x00C0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FWwiseRTPCForActorHandler >         m_RTPCHandlers;                                   		// 0x00CC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              Value;                                            		// 0x00D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Running : 1;                                      		// 0x00DC (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1322 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwiseSetRTPCValue::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseSetState
// 0x0018 (0x00C8 - 0x00B0)
class USeqAct_WwiseSetState : public USequenceAction
{
public:
	struct FString                                     StateGroup;                                       		// 0x00B0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     State;                                            		// 0x00BC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1323 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwiseSetState::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseSetSwitch
// 0x0018 (0x00C8 - 0x00B0)
class USeqAct_WwiseSetSwitch : public USequenceAction
{
public:
	struct FString                                     SwitchGroup;                                      		// 0x00B0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Switch;                                           		// 0x00BC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1324 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwiseSetSwitch::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseStartAudioObjects
// 0x0000 (0x00B0 - 0x00B0)
class USeqAct_WwiseStartAudioObjects : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1325 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwiseStartAudioObjects::pClassPointer = NULL;

// Class WwiseAudio.SeqAct_WwiseStopAll
// 0x0000 (0x00B0 - 0x00B0)
class USeqAct_WwiseStopAll : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1326 ];

		return pClassPointer;
	};

};

UClass* USeqAct_WwiseStopAll::pClassPointer = NULL;

// Class WwiseAudio.WwiseAmbientSound
// 0x0012 (0x0208 - 0x01F6)
class AWwiseAmbientSound : public AKeypoint
{
public:
	struct FWwiseEventPair                             AudioEvent;                                       		// 0x01F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseAudioComponent*                        AudioComponent;                                   		// 0x0200 (0x0004) [0x00000000040A200B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Transient | CPF_EditConst | CPF_Component | CPF_EditInline )
	unsigned long                                      bAutoPlay : 1;                                    		// 0x0204 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bWasPlaying : 1;                                  		// 0x0204 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bIsPlaying : 1;                                   		// 0x0204 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1327 ];

		return pClassPointer;
	};

	void HideEmitter ( );
	void DrawEmitter ( );
};

UClass* AWwiseAmbientSound::pClassPointer = NULL;

// Class WwiseAudio.WwiseAudioComponent
// 0x00EE (0x0144 - 0x0056)
class UWwiseAudioComponent : public UActorComponent
{
public:
	struct FDouble                                     m_fLastObstructionUpdate;                         		// 0x0058 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FWwiseComponentCallbackInfo >       Callbacks;                                        		// 0x0060 (0x000C) [0x0000000000622002]              ( CPF_Const | CPF_Transient | CPF_EditConst | CPF_NeedCtorLink )
	struct FPointer                                    m_pNotifyCriticalSection;                         		// 0x006C (0x0004) [0x0000000000203000]              ( CPF_Native | CPF_Transient )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0070 (0x003C) UNKNOWN PROPERTY: MapProperty WwiseAudio.WwiseAudioComponent.WwiseEvents
	struct FVector                                     location;                                         		// 0x00AC (0x000C) [0x0000000000201000]              ( CPF_Native )
	struct FVector                                     Orientation;                                      		// 0x00B8 (0x000C) [0x0000000000201000]              ( CPF_Native )
	struct FVector                                     ComponentLocation;                                		// 0x00C4 (0x000C) [0x0000000000201002]              ( CPF_Const | CPF_Native )
	struct FVector                                     ComponentOrientation;                             		// 0x00D0 (0x000C) [0x0000000000201002]              ( CPF_Const | CPF_Native )
	struct FVector                                     CachedLastPosition;                               		// 0x00DC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     CachedLastOrientation;                            		// 0x00E8 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       m_ComponentGroup;                                 		// 0x00F4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMeshComponent*                      m_OwnerSkelMeshComponent;                         		// 0x00FC (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	int                                                m_nAttachBoneIndex;                               		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cleaned;                                          		// 0x0104 (0x0004) [0x0000000000222002]              ( CPF_Const | CPF_Transient | CPF_EditConst )
	float                                              m_fDistanceToListener;                            		// 0x0108 (0x0004) [0x0000000000201000]              ( CPF_Native )
	float                                              m_fMaxAudible3DSoundDistance;                     		// 0x010C (0x0004) [0x0000000000201000]              ( CPF_Native )
	int                                                m_nMaxAudible3DSoundEventPlayingID;               		// 0x0110 (0x0004) [0x0000000000201000]              ( CPF_Native )
	int                                                m_nNumberOf3DSoundsPlaying;                       		// 0x0114 (0x0004) [0x0000000000201000]              ( CPF_Native )
	int                                                m_nNumberOfSoundsUseAttenuation;                  		// 0x0118 (0x0004) [0x0000000000201000]              ( CPF_Native )
	int                                                m_nNumberOfSoundsWithUserDefinedPositioning;      		// 0x011C (0x0004) [0x0000000000201000]              ( CPF_Native )
	int                                                m_nNumberOfEventsUsingOrientationRTPC;            		// 0x0120 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_nNumberOfEventsUsingDistanceRTPC;               		// 0x0124 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fDotToListener;                                 		// 0x0128 (0x0004) [0x0000000000201000]              ( CPF_Native )
	float                                              m_fTargetOcclusion;                               		// 0x012C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fTargetObstruction;                             		// 0x0130 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fCurrentOcclusion;                              		// 0x0134 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fCurrentObstruction;                            		// 0x0138 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ObstructionUpdateSpeed;                           		// 0x013C (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bUseOwnerLocation : 1;                            		// 0x0140 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bEnableEnvAudio : 1;                            		// 0x0140 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bEnableObstructionOcclusion : 1;                		// 0x0140 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_bIsRegistered : 1;                              		// 0x0140 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      m_bUpdateAudioEnginePosition : 1;                 		// 0x0140 (0x0004) [0x0000000000000000] [0x00000010] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1328 ];

		return pClassPointer;
	};

	void SetLocation ( struct FVector NewLocation );
	void SetDrawMic ( unsigned long bDraw );
	bool KillSound ( class UWwiseEvent* Event );
	void Set3D ( );
	void Set2D ( );
	bool RegisterGameObject ( struct FString GameObjectName );
	bool UnregisterGameObject ( );
	float GetDistanceToListener ( );
	void SetObstructionOcclusionEnabled ( unsigned long i_bValue );
	void SetEnvironmentalAudioEnabled ( unsigned long i_bValue );
	bool GetObstructionOcclusionEnabled ( );
	bool GetEnvironmentalAudioEnabled ( );
	struct FVector GetMicPosition ( );
	bool SetGlobalRTPCFromScript ( struct FString in_pszRtpcName, float in_value );
	bool StaticPostGlobalEventFromScript ( struct FName GlobalEventName );
	class UWwiseAudioComponent* CreateComponentFromScript ( class AActor* pActor, struct FString Label, struct FName ComponentGroup, struct FName AttachBone, unsigned long bRegister );
	bool IsEventPlaying ( int WwisePlayingID );
	bool IsPlaying ( class UWwiseBaseSoundObject* Event );
	bool PostGlobalEvent ( struct FName GlobalEventName );
	bool SetWwiseTrigger ( struct FString sTrigger );
	bool SetWwiseSwitch ( struct FString sGroup, struct FString sState );
	bool SetWwiseRTPCs ( TArray< struct FString > sName, TArray< float > fValue );
	bool SetWwiseRTPC ( struct FString sName, float fValue );
	bool Stop ( class UWwiseBaseSoundObject* Base );
	bool StopWwiseEvent ( struct FWwiseEventPair AudioEvent );
	bool Play ( class UWwiseBaseSoundObject* Base, unsigned long bTrackPosition );
	bool PlayWwiseEvent ( struct FWwiseEventPair AudioEvent, unsigned long bTrackPosition );
	float SoundPositionByID ( int WwisePlayingID );
	float SoundPosition ( class UWwiseBaseSoundObject* Base );
	bool StopAll ( );
	int FindPlayingID ( class UWwiseBaseSoundObject* BaseSound, class UWwiseEvent* StopEvent );
	void SetRTPCWithHandler ( float fValue, struct FWwiseRTPCForActorHandler* RTPCHandler );
};

UClass* UWwiseAudioComponent::pClassPointer = NULL;

// Class WwiseAudio.WwiseAudioComponentMultiLoc
// 0x004C (0x0190 - 0x0144)
class UWwiseAudioComponentMultiLoc : public UWwiseAudioComponent
{
public:
	struct FMap_Mirror                                 m_Locations;                                      		// 0x0144 (0x003C) [0x0000000000001000]              ( CPF_Native )
	struct FVector                                     CachedMicPos;                                     		// 0x0180 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      IsDirty : 1;                                      		// 0x018C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1329 ];

		return pClassPointer;
	};

	void Set3D ( );
};

UClass* UWwiseAudioComponentMultiLoc::pClassPointer = NULL;

// Class WwiseAudio.WwiseAudioDevice
// 0x016B (0x040C - 0x02A1)
class UWwiseAudioDevice : public UAudioDevice
{
public:
	unsigned char                                      UnknownData00[ 0x16B ];                           		// 0x02A1 (0x016B) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1330 ];

		return pClassPointer;
	};

	bool SetSoundMode ( struct FName NewMode );
};

UClass* UWwiseAudioDevice::pClassPointer = NULL;

// Class WwiseAudio.WwiseBundleArchive
// 0x0000 (0x003C - 0x003C)
class UWwiseBundleArchive : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1331 ];

		return pClassPointer;
	};

};

UClass* UWwiseBundleArchive::pClassPointer = NULL;

// Class WwiseAudio.WwiseComponentCallback
// 0x0000 (0x003C - 0x003C)
class UWwiseComponentCallback : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1332 ];

		return pClassPointer;
	};

};

UClass* UWwiseComponentCallback::pClassPointer = NULL;

// Class WwiseAudio.WwiseEnvironmentSettings
// 0x0024 (0x0060 - 0x003C)
class UWwiseEnvironmentSettings : public UObject
{
public:
	struct FString                                     Environment;                                      		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fPrimaryControlValue;                             		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fOverrideControlValue;                            		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseBank*                                  ConvolutionReverbSoundBank;                       		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentEnvironment;                               		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bIdResolved : 1;                                  		// 0x005C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bOverrideLowerPriorityEnvironments : 1;           		// 0x005C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1333 ];

		return pClassPointer;
	};

};

UClass* UWwiseEnvironmentSettings::pClassPointer = NULL;

// Class WwiseAudio.WwiseEnvironmentVolume
// 0x0008 (0x0234 - 0x022C)
class AWwiseEnvironmentVolume : public AVolume
{
public:
	float                                              Priority;                                         		// 0x022C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEnvironmentSettings*                   Settings;                                         		// 0x0230 (0x0004) [0x0000000004420009]              ( CPF_Edit | CPF_ExportObject | CPF_EditConst | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1334 ];

		return pClassPointer;
	};

};

UClass* AWwiseEnvironmentVolume::pClassPointer = NULL;

// Class WwiseAudio.WwiseEvent
// 0x003C (0x0078 - 0x003C)
class UWwiseEvent : public UWwiseBaseSoundObject
{
public:
	struct FWwiseRelationships                         Relationships;                                    		// 0x003C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Notes;                                            		// 0x004C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0058 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              DurationMilliseconds;                             		// 0x005C (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	int                                                PrepareState;                                     		// 0x0060 (0x0004) [0x0000000000022003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_EditConst )
	float                                              m_fMaxAudible3DSoundDistance;                     		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_nNumberOf3DSoundsPlaying;                       		// 0x0068 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_nNumberOfSoundsUseAttenuation;                  		// 0x006C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_nNumberOfSoundsWithUserDefinedPositioning;      		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      IsLocalised : 1;                                  		// 0x0074 (0x0004) [0x0000000000020003] [0x00000001] ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      bIsSetup : 1;                                     		// 0x0074 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bUsesOrientationRTPC : 1;                         		// 0x0074 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bUsesDistanceRTPC : 1;                            		// 0x0074 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      m_bHasEnvironmentalSettings : 1;                  		// 0x0074 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1335 ];

		return pClassPointer;
	};

};

UClass* UWwiseEvent::pClassPointer = NULL;

// Class WwiseAudio.WwiseDialogueEvent
// 0x000C (0x0084 - 0x0078)
class UWwiseDialogueEvent : public UWwiseEvent
{
public:
	TArray< struct FWwiseDialogueArgument >            Arguments;                                        		// 0x0078 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1336 ];

		return pClassPointer;
	};

};

UClass* UWwiseDialogueEvent::pClassPointer = NULL;

// Class WwiseAudio.WwiseEventPairObject
// 0x0008 (0x0044 - 0x003C)
class UWwiseEventPairObject : public UWwiseBaseSoundObject
{
public:
	class UWwiseEvent*                                 Play;                                             		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 Stop;                                             		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1337 ];

		return pClassPointer;
	};

};

UClass* UWwiseEventPairObject::pClassPointer = NULL;

// Class WwiseAudio.WwiseFaceFXStopper
// 0x0010 (0x004C - 0x003C)
class UWwiseFaceFXStopper : public UObject
{
public:
	struct FPointer                                    VfTable_IWwiseComponentCallback;                  		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class USkeletalMeshComponent*                      m_SkelMeshComp;                                   		// 0x0040 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UWwiseAudioComponent*                        m_WwiseAudioComp;                                 		// 0x0044 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UWwiseEvent*                                 m_WwiseAudioEvent;                                		// 0x0048 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1338 ];

		return pClassPointer;
	};

};

UClass* UWwiseFaceFXStopper::pClassPointer = NULL;

// Class WwiseAudio.WwiseFile
// 0x000C (0x0048 - 0x003C)
class UWwiseFile : public UObject
{
public:
	struct FPointer                                    Data;                                             		// 0x003C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                Id;                                               		// 0x0040 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      IsRegistered : 1;                                 		// 0x0044 (0x0004) [0x0000000000022003] [0x00000001] ( CPF_Edit | CPF_Const | CPF_Transient | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1339 ];

		return pClassPointer;
	};

};

UClass* UWwiseFile::pClassPointer = NULL;

// Class WwiseAudio.WwiseBank
// 0x0018 (0x0060 - 0x0048)
class UWwiseBank : public UWwiseFile
{
public:
	TArray< struct FPointer >                          Children;                                         		// 0x0048 (0x000C) [0x0000000000023002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_EditConst )
	struct FPointer                                    Bundle;                                           		// 0x0054 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	class UWwiseBank*                                  Parent;                                           		// 0x0058 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      IsLocalised : 1;                                  		// 0x005C (0x0004) [0x0000000000020003] [0x00000001] ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      IsLoaded : 1;                                     		// 0x005C (0x0004) [0x0000000000022003] [0x00000002] ( CPF_Edit | CPF_Const | CPF_Transient | CPF_EditConst )
	unsigned long                                      GenerateDefinition : 1;                           		// 0x005C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1340 ];

		return pClassPointer;
	};

};

UClass* UWwiseBank::pClassPointer = NULL;

// Class WwiseAudio.WwiseStream
// 0x000C (0x0054 - 0x0048)
class UWwiseStream : public UWwiseFile
{
public:
	struct FName                                       Filename;                                         		// 0x0048 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UWwiseBank*                                  Bank;                                             		// 0x0050 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1341 ];

		return pClassPointer;
	};

};

UClass* UWwiseStream::pClassPointer = NULL;

// Class WwiseAudio.WwiseMicPosOrient
// 0x0000 (0x01F6 - 0x01F6)
class AWwiseMicPosOrient : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1342 ];

		return pClassPointer;
	};

	struct FVector LocalToWorld ( struct FVector vLocal );
	void eventBioBaseRemovedFromWorld ( );
	void BioRestoreFromStasis ( );
	void BioApplyStasis ( struct FString Cause );
	void eventPlayFootStepSound ( int FootDown );
	void eventSFXSetAudioComponentRTPCs ( class UActorComponent* pWwiseAudioComponent );
	class USkeletalMeshComponent* GetHeadSkelMeshComponent ( );
	class USkeletalMeshComponent* GetPrimarySkelMeshComponent ( );
	bool ImpactWithPower ( unsigned char Resistance, class APawn* Caster, struct FVector HitLocation, struct FVector HitNormal, float Damage, struct FVector Force, class UClass* DamageType );
	unsigned char GetPowerResistance ( class APawn* Caster, struct FVector HitLocation, struct FVector HitNormal, class UClass* DamageType, float* Damage, struct FVector* Force, class AActor** TargetOverride );
	void RemoveSFXModuleIndex ( int nIndex );
	void RemoveSFXModule ( class USFXModule* oModule );
	void AddSFXModule ( class USFXModule* oModule, unsigned long bUserModule );
	void StopAllSounds ( );
	bool WillOverlap ( struct FVector PosA, struct FVector VelA, struct FVector PosB, struct FVector VelB, float StepSize, float Radius, float* Time );
	struct FVector GetAvoidanceVector ( struct FVector GoalLocation, float CollisionRadius, float MaxSpeed, int NumSamples, float VelocityStepRate, float MaxTimeTilOverlap, TArray< class AActor* >* Obstacles );
	bool IsClient ( );
	bool IsServer ( );
	bool IsOwningClient ( );
	void eventReplicationEnded ( );
	void eventPostDemoRewind ( );
	void eventAnimTreeUpdated ( class USkeletalMeshComponent* SkelMesh );
	bool SupportsKismetModification ( class USequenceOp* AskingOp, struct FString* Reason );
	void eventTrailsNotifyEnd ( class UAnimNotify_Trails* AnimNotifyData );
	void eventTrailsNotifyTick ( class UAnimNotify_Trails* AnimNotifyData );
	void eventTrailsNotify ( class UAnimNotify_Trails* AnimNotifyData );
	void eventPlayParticleEffect ( class UAnimNotify_PlayParticleEffect* AnimNotifyData );
	void GetAimAdhesionExtent ( float* Width, float* Height, struct FVector* Center );
	void GetAimFrictionExtent ( float* Width, float* Height, struct FVector* Center );
	bool IsInPersistentLevel ( );
	void SetActive ( unsigned long bActive );
	class USFXModule* GetModule ( class UClass* ModuleClass );
	void eventExceededPhysicsThreshold ( class AActor* instigatedBy );
	void eventOnRigidBodySpringOverextension ( class URB_BodyInstance* BodyInstance );
	struct FGuid GetPackageGuid ( struct FName PackageName );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void eventRootMotionExtracted ( class USkeletalMeshComponent* SkelComp, struct FBoneAtom* ExtractedRootMotionDelta );
	void eventRootMotionModeChanged ( class USkeletalMeshComponent* SkelComp );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	void NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	void SetHUDLocation ( struct FVector NewHUDLocation );
	void eventOnRanOver ( class ASVehicle* Vehicle, class UPrimitiveComponent* RunOverComponent, int WheelIndex );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData );
	void eventInterpolationChanged ( class USeqAct_Interp* InterpAction );
	void eventInterpolationFinished ( class USeqAct_Interp* InterpAction );
	void eventInterpolationStarted ( class USeqAct_Interp* InterpAction, class UInterpGroupInst* GroupInst );
	void PickedUpBy ( class APawn* P );
	void eventSpawnedByKismet ( );
	struct FVector GetTargetLocation ( class AActor* RequestedBy, unsigned long bRequestAlternateLoc );
	void FindGoodEndView ( class APlayerController* PC, struct FRotator* GoodRotation );
	void NotifyLocalPlayerTeamReceived ( );
	struct FString GetLocationStringFor ( class APlayerReplicationInfo* PRI );
	unsigned char eventScriptGetTeamNum ( );
	unsigned char GetTeamNum ( );
	void PawnBaseDied ( );
	bool IsPlayerOwned ( );
	void eventGetActorEyesViewPoint ( struct FVector* out_Location, struct FRotator* out_rotation );
	bool IsStationary ( );
	class UFaceFXAsset* eventGetActorFaceFXAsset ( );
	bool CanActorPlayFaceFXAnim ( );
	bool IsActorPlayingFaceFXAnim ( );
	void eventSetSkelControlScale ( struct FName SkelControlName, float Scale );
	void eventSetMorphWeight ( struct FName MorphNodeName, float MorphWeight );
	void eventStopActorFaceFXAnim ( );
	bool eventPlayActorFaceFXAnim ( class UFaceFXAnimSet* AnimSet, struct FString GroupName, struct FString SeqName, class USoundCue* SoundCueToPlay );
	void eventFinishMovementControl ( class UInterpGroup* InInterpGroup );
	void eventBeginMovementControl ( class UInterpGroup* InInterpGroup );
	void eventFinishAnimControl ( class UInterpGroup* InInterpGroup );
	void eventSetAnimPosition ( struct FName SlotName, int ChannelIndex, struct FName InAnimSeqName, float InPosition, unsigned long bFireNotifies, unsigned long bLooping );
	void eventBeginAnimControl ( class UInterpGroup* InInterpGroup );
	void eventOnAnimPlay ( class UAnimNodeSequence* SeqNode );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void DoKismetAttachment ( class AActor* Attachment, class USeqAct_AttachToActor* Action );
	void OnAttachToActor ( class USeqAct_AttachToActor* Action );
	void BioEnqueueDoKismetAttachment ( class AActor* InAttachment, unsigned long bInDetach, unsigned long bInHardAttach, struct FName InBoneName, unsigned long bInUseRelativeOffset, struct FVector InRelativeOffset, unsigned long bInUseRelativeRotation, struct FRotator InRelativeRotation );
	void eventBioDoKismetAttachment ( class AActor* InAttachment, unsigned long bInDetach, unsigned long bInHardAttach, struct FName InBoneName, unsigned long bInUseRelativeOffset, struct FVector InRelativeOffset, unsigned long bInUseRelativeRotation, struct FRotator InRelativeRotation );
	void OnToggleHidden ( class USeqAct_ToggleHidden* Action );
	void OnChangeCollision ( class USeqAct_ChangeCollision* Action );
	void OnSetPhysics ( class USeqAct_SetPhysics* Action );
	void OnSetBlockRigidBody ( class USeqAct_SetBlockRigidBody* Action );
	void OnSetVelocity ( class USeqAct_SetVelocity* Action );
	void OnTeleport ( class USeqAct_Teleport* Action );
	void OnModifyHealth ( class USeqAct_ModifyHealth* Action );
	void BlockForTextureStreaming ( );
	bool TexturePrestreamIsRequired ( );
	void PrestreamTextures ( float Seconds, unsigned long bEnableStreaming, int CinematicTextureGroups );
	void eventShutDown ( );
	void SetNetUpdateTime ( float NewUpdateTime );
	void eventForceNetRelevant ( );
	void OnDestroy ( class USeqAct_Destroy* Action );
	void ClearLatentAction ( class UClass* actionClass, unsigned long bAborted, class USeqAct_Latent* exceptionAction, unsigned long bCancelled );
	bool FindEventsOfClass ( class UClass* EventClass, unsigned long bIncludeDisabled, TArray< class USequenceEvent* >* out_EventList );
	bool ActivateEventClass ( class UClass* InClass, class AActor* inInstigator, unsigned long bTest, TArray< class USequenceEvent* >* EventList, TArray< int >* ActivateIndices, TArray< class USequenceEvent* >* ActivatedEvents );
	bool TriggerGlobalEventClass ( class UClass* InEventClass, class AActor* inInstigator, int ActivateIndex );
	void eventReceivedNewEvent ( class USequenceEvent* Evt );
	bool TriggerEventClass ( class UClass* InEventClass, class AActor* inInstigator, int ActivateIndex, unsigned long bTest, TArray< class USequenceEvent* >* ActivatedEvents );
	bool EffectIsRelevant ( struct FVector SpawnLocation, unsigned long bForceDedicated, float CullDistance );
	bool CheckMaxEffectDistance ( class APlayerController* P, struct FVector SpawnLocation, float CullDistance );
	void ApplyFluidSurfaceImpact ( class AFluidSurfaceActor* Fluid, struct FVector HitLocation );
	bool CanSplash ( );
	void PlayTeleportEffect ( unsigned long bOut, unsigned long bSound );
	bool IsInPain ( );
	bool IsInVolume ( class AVolume* aVolume );
	void eventReset ( );
	class UAudioComponent* eventGetFaceFXAudioComponent ( );
	void eventModifyHearSoundComponent ( class UAudioComponent* AC );
	struct FString GetPhysicsName ( );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	struct FString GetDebugName ( );
	void MatchStarting ( );
	struct FString GetLocalString ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01 );
	void ReplaceText ( struct FString Replace, struct FString With, struct FString* Text );
	struct FString GetHumanReadableName ( );
	struct FString GetItemName ( struct FString FullName );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void eventEndViewTarget ( class APlayerController* PC );
	void eventBecomeViewTarget ( class APlayerController* PC );
	bool CheckForErrors ( );
	void eventDebugFreezeGame ( class AActor* ActorToLookAt );
	float GetGravityZ ( );
	void CheckHitInfo ( class UPrimitiveComponent* FallBackComponent, struct FVector Dir, struct FTraceHitInfo* HitInfo, struct FVector* out_HitLocation );
	void eventTakeRadiusDamage ( class AController* instigatedBy, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, float DamageFalloffExponent, struct FTraceHitInfo HitInfo );
	bool eventHealDamage ( int Amount, class AController* Healer, class UClass* DamageType );
	void eventTakeDamage ( float DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void KilledBy ( class APawn* EventInstigator );
	bool HurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage );
	bool StopsProjectile ( class AProjectile* P );
	void eventNotifySkelControlBeyondLimit ( class USkelControlLookAt* LookAt );
	void eventConstraintBrokenNotify ( class AActor* ConOwner, class URB_ConstraintSetup* ConSetup, class URB_ConstraintInstance* ConInstance );
	void eventSetInitialState ( );
	void eventPostBeginPlay ( );
	void eventBroadcastLocalizedTeamMessage ( int TeamIndex, class UClass* InMessageClass, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void eventBroadcastLocalizedMessage ( class UClass* InMessageClass, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void eventPreBeginPlay ( );
	bool FindActorsOfClass ( class UClass* ActorClass, TArray< class AActor* >* out_Actors );
	bool MoveActorToFloor ( );
	class APlayerController* GetALocalPlayerController ( );
	void LocalPlayerControllers ( class UClass* BaseClass, class APlayerController** PC );
	void AllOwnedComponents ( class UClass* BaseClass, class UActorComponent** OutComponent );
	void ComponentList ( class UClass* BaseClass, class UActorComponent** out_Component );
	void OverlappingActors ( class UClass* BaseClass, float Radius, struct FVector Loc, unsigned long bIgnoreHidden, class AActor** out_Actor );
	void CollidingActors ( class UClass* BaseClass, float Radius, struct FVector Loc, unsigned long bUseOverlapCheck, class UClass* InterfaceClass, class AActor** Actor, struct FTraceHitInfo* HitInfo );
	void VisibleCollidingActors ( class UClass* BaseClass, float Radius, struct FVector Loc, unsigned long bIgnoreHidden, struct FVector Extent, unsigned long bTraceActors, class UClass* InterfaceClass, class AActor** Actor, struct FTraceHitInfo* HitInfo );
	void VisibleActors ( class UClass* BaseClass, float Radius, struct FVector Loc, class AActor** Actor );
	void TraceActors ( class UClass* BaseClass, struct FVector End, struct FVector Start, struct FVector Extent, int ExtraTraceFlags, class AActor** Actor, struct FVector* HitLoc, struct FVector* HitNorm, struct FTraceHitInfo* HitInfo );
	void TouchingActors ( class UClass* BaseClass, unsigned long bReverse, class AActor** Actor );
	void BasedActors ( class UClass* BaseClass, class AActor** Actor );
	void ChildActors ( class UClass* BaseClass, class AActor** Actor );
	void DynamicActors ( class UClass* BaseClass, class UClass* InterfaceClass, class AActor** Actor );
	void AllActors ( class UClass* BaseClass, class UClass* InterfaceClass, class AActor** Actor );
	struct FString GetURLMap ( );
	void PostTeleport ( class ATeleporter* OutTeleporter );
	bool PreTeleport ( class ATeleporter* InTeleporter );
	struct FVector GetDestination ( class AController* C );
	bool SuggestTossVelocity ( struct FVector Destination, struct FVector Start, float TossSpeed, float BaseTossZ, float DesiredZPct, struct FVector CollisionSize, float TerminalVelocity, float OverrideGravityZ, unsigned long bOnlyTraceUp, struct FVector* TossVelocity );
	bool PlayerCanSeeMe ( );
	void MakeNoise ( float Loudness, struct FName NoiseType );
	void StopSound ( class UWwiseBaseSoundObject* InSoundEvent );
	void PlaySound ( class UWwiseBaseSoundObject* InSoundCue, unsigned long bNotReplicated, unsigned long bNoRepToOwner, unsigned long bStopWhenOwnerDestroyed, struct FVector SoundLocation, unsigned long bNoRepToRelevant );
	class UAudioComponent* CreateAudioComponent ( class USoundCue* InSoundCue, unsigned long bPlay, unsigned long bStopWhenOwnerDestroyed, unsigned long bUseLocation, struct FVector SourceLocation, unsigned long bAttachToSelf );
	void ResetTimerTimeDilation ( struct FName TimerName, class UObject* inObj );
	void ModifyTimerTimeDilation ( struct FName TimerName, float InTimerTimeDilation, class UObject* inObj );
	float GetRemainingTimeForTimer ( struct FName TimerFuncName, class UObject* inObj );
	float GetTimerRate ( struct FName TimerFuncName, class UObject* inObj );
	float GetTimerCount ( struct FName inTimerFunc, class UObject* inObj );
	bool IsTimerActive ( struct FName inTimerFunc, class UObject* inObj );
	void PauseTimer ( unsigned long bPause, struct FName inTimerFunc, class UObject* inObj );
	void ClearAllTimers ( class UObject* inObj );
	void ClearTimer ( struct FName inTimerFunc, class UObject* inObj );
	void SetTimer ( float InRate, unsigned long inbLoop, struct FName inTimerFunc, class UObject* inObj );
	void eventTornOff ( );
	bool Destroy ( );
	class AActor* Spawn ( class UClass* SpawnClass, class AActor* SpawnOwner, struct FName SpawnTag, struct FVector SpawnLocation, struct FRotator SpawnRotation, class AActor* ActorTemplate, unsigned long bNoCollisionFail, unsigned long bFindSafeLocation );
	void GetBoundingCylinder ( float* CollisionRadius, float* CollisionHeight );
	void GetComponentsBoundingBox ( struct FBox* ActorBox );
	bool IsOverlapping ( class AActor* A );
	bool ContainsPoint ( struct FVector Spot );
	bool FindSpot ( struct FVector BoxExtent, struct FVector* SpotLocation );
	bool TraceAllPhysicsAssetInteractions ( class USkeletalMeshComponent* SkelMeshComp, struct FVector EndTrace, struct FVector StartTrace, struct FVector Extent, TArray< struct FImpactInfo >* out_Hits );
	bool FastTrace ( struct FVector TraceEnd, struct FVector TraceStart, struct FVector BoxExtent, unsigned long bTraceBullet );
	bool PointCheckComponent ( class UPrimitiveComponent* InComponent, struct FVector PointLocation, struct FVector PointExtent );
	bool TraceComponent ( class UPrimitiveComponent* InComponent, struct FVector TraceEnd, struct FVector TraceStart, struct FVector Extent, unsigned long bComplexCollision, struct FVector* HitLocation, struct FVector* HitNormal, struct FTraceHitInfo* HitInfo );
	class AActor* Trace ( struct FVector TraceEnd, struct FVector TraceStart, unsigned long bTraceActors, struct FVector Extent, int ExtraTraceFlags, struct FVector* HitLocation, struct FVector* HitNormal, struct FTraceHitInfo* HitInfo );
	void VolumeBasedDestroy ( class APhysicsVolume* PV );
	void eventOutsideWorldBounds ( );
	void eventFellOutOfWorld ( class UClass* dmgType );
	bool UsedBy ( class APawn* User );
	bool eventOverRotated ( struct FRotator* out_Desired, struct FRotator* out_Actual );
	bool ClampRotation ( struct FRotator rBase, struct FRotator rUpperLimits, struct FRotator rLowerLimits, struct FRotator* out_Rot );
	void eventOnSleepRBPhysics ( );
	void eventOnWakeRBPhysics ( );
	void eventRanInto ( class AActor* Other );
	void eventEncroachedBy ( class AActor* Other );
	bool eventEncroachingOn ( class AActor* Other );
	void eventCollisionChanged ( );
	class AActor* eventSpecialHandling ( class APawn* Other );
	void eventDetach ( class AActor* Other );
	void eventAttach ( class AActor* Other );
	void eventBaseChange ( );
	void eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal );
	void eventUnTouch ( class AActor* Other );
	void eventPostTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void eventPhysicsVolumeChange ( class APhysicsVolume* NewVolume );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void eventFalling ( );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void eventTimer ( );
	void eventTick ( float DeltaTime );
	void eventLostChild ( class AActor* Other );
	void eventGainedChild ( class AActor* Other );
	void eventDestroyed ( );
	void SetTickIsDisabled ( unsigned long bInDisabled );
	void SetTickGroup ( unsigned char NewTickGroup );
	void ReattachComponent ( class UActorComponent* ComponentToReattach );
	void DetachComponent ( class UActorComponent* ExComponent );
	void AttachComponent ( class UActorComponent* NewComponent );
	void UnClock ( float* Time );
	void Clock ( float* Time );
	void SetPhysics ( unsigned char newPhysics );
	void SetOnlyOwnerSee ( unsigned long bNewOnlyOwnerSee );
	void SetHidden ( unsigned long bNewHidden );
	void ChartData ( struct FString DataName, float DataValue );
	void FlushDebugStrings ( );
	void DrawDebugFrustrum ( unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines, struct FMatrix* FrustumToWorld );
	void DrawDebugString ( struct FVector TextLocation, struct FString Text, class AActor* TestBaseActor, struct FColor TextColor, float Duration );
	void DrawDebugCone ( struct FVector Origin, struct FVector Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, struct FColor DrawColor, unsigned long bPersistentLines );
	void DrawDebugCylinder ( struct FVector Start, struct FVector End, float Radius, int Segments, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	void DrawDebugSphere ( struct FVector Center, float Radius, int Segments, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	void DrawDebugCoordinateSystem ( struct FVector AxisLoc, struct FRotator AxisRot, float Scale, unsigned long bPersistentLines );
	void DrawDebugStar ( struct FVector Position, float Size, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	void DrawDebugBox ( struct FVector Center, struct FVector Extent, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	void DrawDebugPoint ( struct FVector Position, float Size, struct FLinearColor PointColor, unsigned long bPersistentLines );
	void DrawDebugLine ( struct FVector LineStart, struct FVector LineEnd, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	void FlushPersistentDebugLines ( );
	struct FVector GetBasedPosition ( struct FBasedPosition BP );
	void SetBasedPosition ( struct FVector pos, class AActor* ForcedBase, struct FBasedPosition* BP );
	struct FVector BP2Vect ( struct FBasedPosition BP );
	void Vect2BP ( struct FVector pos, class AActor* ForcedBase, struct FBasedPosition* BP );
	void SetForcedInitialReplicatedProperty ( class UProperty* PropToReplicate, unsigned long bAdd );
	void eventReplicatedDataBinding ( struct FName VarName );
	void eventReplicatedEvent ( struct FName VarName );
	bool IsOwnedBy ( class AActor* TestActor );
	class AActor* GetBaseMost ( );
	bool IsBasedOn ( class AActor* TestActor );
	void FindBase ( );
	void SetOwner ( class AActor* NewOwner );
	void SetBase ( class AActor* NewBase, struct FVector NewFloor, class USkeletalMeshComponent* SkelComp, struct FName AttachName );
	float GetTerminalVelocity ( );
	void AutonomousPhysics ( float DeltaSeconds );
	bool MoveSmooth ( struct FVector Delta );
	int fixedTurn ( int Current, int Desired, int DeltaRate );
	void SetHardAttach ( unsigned long bNewHardAttach );
	bool SetRelativeLocation ( struct FVector NewLocation );
	bool SetRelativeRotation ( struct FRotator NewRotation );
	void SetZone ( unsigned long bForceRefresh );
	unsigned char MovingWhichWay ( float* Amount );
	bool SetRotation ( struct FRotator NewRotation );
	bool SetLocation ( struct FVector NewLocation, unsigned long bDebugFailure );
	bool Move ( struct FVector Delta );
	void SetDrawScale3D ( struct FVector NewScale3D );
	void SetDrawScale ( float NewScale );
	void SetCollisionType ( unsigned char NewCollisionType );
	void SetCollisionSize ( float NewRadius, float NewHeight );
	void SetCollision ( unsigned long bNewColActors, unsigned long bNewBlockActors, unsigned long bNewIgnoreEncroachers );
	void FinishAnim ( class UAnimNodeSequence* SeqNode );
	void Sleep ( float Seconds );
	struct FString ConsoleCommand ( struct FString Command, unsigned long bWriteToLog );
	void ForceUpdateComponents ( unsigned long bCollisionUpdate, unsigned long bTransformOnly );
};

UClass* AWwiseMicPosOrient::pClassPointer = NULL;

// Class WwiseAudio.WwiseProcFoleyComponent
// 0x006E (0x00C4 - 0x0056)
class UWwiseProcFoleyComponent : public UActorComponent
{
public:
	struct FProcFoleyInfo                              Info[ 0x4 ];                                      		// 0x0058 (0x0050) [0x0000000000000000]              
	class UWwiseAudioComponent*                        m_AudioComp;                                      		// 0x00A8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UWwiseEventPairObject*                       m_FoleySound;                                     		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              m_fLastMaxVel;                                    		// 0x00B0 (0x0004) [0x0000000000000000]              
	float                                              m_fSmoothFactor;                                  		// 0x00B4 (0x0004) [0x0000000000000000]              
	float                                              m_fMaxThreshold;                                  		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                m_nProcFoleyRTPCId;                               		// 0x00BC (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsPlaying : 1;                                 		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1343 ];

		return pClassPointer;
	};

	int eventGetMAX_PROC_FOLEY_BONES ( );
};

UClass* UWwiseProcFoleyComponent::pClassPointer = NULL;

// Class WwiseAudio.WwiseVolume
// 0x0004 (0x0230 - 0x022C)
class AWwiseVolume : public AVolume
{
public:
	class AWwiseVolumeTimer*                           m_oTrackTimer;                                    		// 0x022C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1344 ];

		return pClassPointer;
	};

	void TimerPop ( class AWwiseVolumeTimer* T );
	void PostBeginPlay ( );
};

UClass* AWwiseVolume::pClassPointer = NULL;

// Class WwiseAudio.WwiseAudioVolume
// 0x0020 (0x0250 - 0x0230)
class AWwiseAudioVolume : public AWwiseVolume
{
public:
	struct FDouble                                     m_fLastLineCheckTime;                             		// 0x0230 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FWwiseEventPair >                   WwiseEventArray;                                  		// 0x0238 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UWwiseAudioComponentMultiLoc*                AudioComponent;                                   		// 0x0244 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              m_fTimeBetweenLineChecks;                         		// 0x0248 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAutoPlay : 1;                                    		// 0x024C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bWasPlaying : 1;                                  		// 0x024C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      DrawSoundLocations : 1;                           		// 0x024C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      m_bIs2D : 1;                                      		// 0x024C (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1345 ];

		return pClassPointer;
	};

	void HideVolume ( );
	void DrawVolume ( );
	void Stop ( );
	void Start ( );
	void myTimerPop ( );
	void TimerPop ( class AWwiseVolumeTimer* T );
	void PostBeginPlay ( );
};

UClass* AWwiseAudioVolume::pClassPointer = NULL;

// Class WwiseAudio.WwiseMusicVolume
// 0x0020 (0x0250 - 0x0230)
class AWwiseMusicVolume : public AWwiseVolume
{
public:
	struct FName                                       MusicID;                                          		// 0x0230 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                MusicPriority;                                    		// 0x0238 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseAudioComponent*                        m_pWwiseComponent;                                		// 0x023C (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class APawn*                                       m_oTrackPawn;                                     		// 0x0240 (0x0004) [0x0000000000000000]              
	int                                                m_nCurrentMusicState;                             		// 0x0244 (0x0004) [0x0000000000000000]              
	class UWwiseEventPairObject*                       m_pMusicEventPair;                                		// 0x0248 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	unsigned long                                      InitiallyEnabled : 1;                             		// 0x024C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bContainsPawn : 1;                              		// 0x024C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bMyMusicIsPlaying : 1;                          		// 0x024C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bEnabled : 1;                                   		// 0x024C (0x0004) [0x0000000000000000] [0x00000008] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1346 ];

		return pClassPointer;
	};

	void myTimerPop ( );
	void SetContainsPlayer ( unsigned long bContainsPlayer );
	void SetEnabled ( unsigned long bEnabled );
	void StopMusic ( );
	void StartMusic ( );
	bool CheckPriority ( );
	void TimerPop ( class AWwiseVolumeTimer* T );
	void PostBeginPlay ( );
};

UClass* AWwiseMusicVolume::pClassPointer = NULL;

// Class WwiseAudio.WwiseVolumeTimer
// 0x0006 (0x01FC - 0x01F6)
class AWwiseVolumeTimer : public AInfo
{
public:
	class AWwiseVolume*                                m_oVolume;                                        		// 0x01F8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1347 ];

		return pClassPointer;
	};

	void Timer ( );
};

UClass* AWwiseVolumeTimer::pClassPointer = NULL;

// Class WwiseAudio.ActorFactoryWwiseDistanceRTPC
// 0x0000 (0x005C - 0x005C)
class UActorFactoryWwiseDistanceRTPC : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34991 ];

		return pClassPointer;
	};

	void eventPostCreateActor ( class AActor* NewActor );
};

UClass* UActorFactoryWwiseDistanceRTPC::pClassPointer = NULL;

// Class WwiseAudio.WwiseDistanceRTPC
// 0x0016 (0x020C - 0x01F6)
class AWwiseDistanceRTPC : public AActor
{
public:
	struct FString                                     RTPCName;                                         		// 0x01F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              TickDelay;                                        		// 0x0204 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fTimeSinceLastUpdate;                           		// 0x0208 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34993 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
};

UClass* AWwiseDistanceRTPC::pClassPointer = NULL;

// Class WwiseAudio.ActorFactoryWwiseMicPosOrient
// 0x0000 (0x005C - 0x005C)
class UActorFactoryWwiseMicPosOrient : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34994 ];

		return pClassPointer;
	};

	void eventPostCreateActor ( class AActor* NewActor );
};

UClass* UActorFactoryWwiseMicPosOrient::pClassPointer = NULL;

// Class WwiseAudio.WwiseCollection
// 0x0028 (0x0064 - 0x003C)
class UWwiseCollection : public UObject
{
public:
	TArray< class UWwiseEvent* >                       Events;                                           		// 0x003C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< class UWwiseEventPairObject* >             EventPairs;                                       		// 0x0048 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< class UWwiseStream* >                      Streams;                                          		// 0x0054 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	class UWwiseBank*                                  Bank;                                             		// 0x0060 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 35218 ];

		return pClassPointer;
	};

};

UClass* UWwiseCollection::pClassPointer = NULL;

// Class WwiseAudio.WwiseOcclusionVolume
// 0x0000 (0x022C - 0x022C)
class AWwiseOcclusionVolume : public AVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 35317 ];

		return pClassPointer;
	};

	void eventProcessActorSetVolume ( class AActor* Other );
	void eventCollisionChanged ( );
	void OnToggle ( class USeqAct_Toggle* Action );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	struct FString GetLocationStringFor ( class APlayerReplicationInfo* PRI );
	void eventPostBeginPlay ( );
	bool ScriptLineCheck ( struct FVector* End, struct FVector* Start, struct FVector* Extent );
	bool EncompassesPoint ( struct FVector Loc );
	bool Encompasses ( class AActor* Other );
};

UClass* AWwiseOcclusionVolume::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif