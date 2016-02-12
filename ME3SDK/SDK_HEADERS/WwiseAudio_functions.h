/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WwiseAudio_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function Engine.ActorFactory.PostCreateActor
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class AActor*                  NewActor                       ( CPF_Parm )

void UActorFactoryWwiseAmbientSound::eventPostCreateActor ( class AActor* NewActor )
{
	static UFunction* pFnPostCreateActor = NULL;

	if ( ! pFnPostCreateActor )
		pFnPostCreateActor = (UFunction*) UObject::GObjObjects()->Data[ 5133 ];

	UActorFactoryWwiseAmbientSound_eventPostCreateActor_Parms PostCreateActor_Parms;
	PostCreateActor_Parms.NewActor = NewActor;

	this->ProcessEvent ( pFnPostCreateActor, &PostCreateActor_Parms, NULL );
};

// Function WwiseAudio.SeqAct_WwiseMusicVolumeDisable.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_WwiseMusicVolumeDisable::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 35016 ];

	USeqAct_WwiseMusicVolumeDisable_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function WwiseAudio.SeqAct_WwiseMusicVolumeEnable.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_WwiseMusicVolumeEnable::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 35019 ];

	USeqAct_WwiseMusicVolumeEnable_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function WwiseAudio.SeqAct_WwisePostEvent.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_WwisePostEvent::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 35022 ];

	USeqAct_WwisePostEvent_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAmbientSound.HideEmitter
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseAmbientSound::HideEmitter ( )
{
	static UFunction* pFnHideEmitter = NULL;

	if ( ! pFnHideEmitter )
		pFnHideEmitter = (UFunction*) UObject::GObjObjects()->Data[ 35036 ];

	AWwiseAmbientSound_execHideEmitter_Parms HideEmitter_Parms;

	pFnHideEmitter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHideEmitter, &HideEmitter_Parms, NULL );

	pFnHideEmitter->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAmbientSound.DrawEmitter
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseAmbientSound::DrawEmitter ( )
{
	static UFunction* pFnDrawEmitter = NULL;

	if ( ! pFnDrawEmitter )
		pFnDrawEmitter = (UFunction*) UObject::GObjObjects()->Data[ 35035 ];

	AWwiseAmbientSound_execDrawEmitter_Parms DrawEmitter_Parms;

	pFnDrawEmitter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawEmitter, &DrawEmitter_Parms, NULL );

	pFnDrawEmitter->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioComponent.SetLocation
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// struct FVector                 NewLocation                    ( CPF_Parm )

void UWwiseAudioComponent::SetLocation ( struct FVector NewLocation )
{
	static UFunction* pFnSetLocation = NULL;

	if ( ! pFnSetLocation )
		pFnSetLocation = (UFunction*) UObject::GObjObjects()->Data[ 35141 ];

	UWwiseAudioComponent_execSetLocation_Parms SetLocation_Parms;
	memcpy ( &SetLocation_Parms.NewLocation, &NewLocation, 0xC );

	this->ProcessEvent ( pFnSetLocation, &SetLocation_Parms, NULL );
};

// Function WwiseAudio.WwiseAudioComponent.SetDrawMic
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bDraw                          ( CPF_Parm )

void UWwiseAudioComponent::SetDrawMic ( unsigned long bDraw )
{
	static UFunction* pFnSetDrawMic = NULL;

	if ( ! pFnSetDrawMic )
		pFnSetDrawMic = (UFunction*) UObject::GObjObjects()->Data[ 35139 ];

	UWwiseAudioComponent_execSetDrawMic_Parms SetDrawMic_Parms;
	SetDrawMic_Parms.bDraw = bDraw;

	pFnSetDrawMic->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDrawMic, &SetDrawMic_Parms, NULL );

	pFnSetDrawMic->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioComponent.KillSound
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWwiseEvent*             Event                          ( CPF_Parm )

bool UWwiseAudioComponent::KillSound ( class UWwiseEvent* Event )
{
	static UFunction* pFnKillSound = NULL;

	if ( ! pFnKillSound )
		pFnKillSound = (UFunction*) UObject::GObjObjects()->Data[ 35136 ];

	UWwiseAudioComponent_execKillSound_Parms KillSound_Parms;
	KillSound_Parms.Event = Event;

	pFnKillSound->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnKillSound, &KillSound_Parms, NULL );

	pFnKillSound->FunctionFlags |= 0x400;

	return KillSound_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.Set3D
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UWwiseAudioComponent::Set3D ( )
{
	static UFunction* pFnSet3D = NULL;

	if ( ! pFnSet3D )
		pFnSet3D = (UFunction*) UObject::GObjObjects()->Data[ 35135 ];

	UWwiseAudioComponent_execSet3D_Parms Set3D_Parms;

	pFnSet3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSet3D, &Set3D_Parms, NULL );

	pFnSet3D->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioComponent.Set2D
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UWwiseAudioComponent::Set2D ( )
{
	static UFunction* pFnSet2D = NULL;

	if ( ! pFnSet2D )
		pFnSet2D = (UFunction*) UObject::GObjObjects()->Data[ 35134 ];

	UWwiseAudioComponent_execSet2D_Parms Set2D_Parms;

	pFnSet2D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSet2D, &Set2D_Parms, NULL );

	pFnSet2D->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioComponent.RegisterGameObject
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 GameObjectName                 ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UWwiseAudioComponent::RegisterGameObject ( struct FString GameObjectName )
{
	static UFunction* pFnRegisterGameObject = NULL;

	if ( ! pFnRegisterGameObject )
		pFnRegisterGameObject = (UFunction*) UObject::GObjObjects()->Data[ 35131 ];

	UWwiseAudioComponent_execRegisterGameObject_Parms RegisterGameObject_Parms;
	memcpy ( &RegisterGameObject_Parms.GameObjectName, &GameObjectName, 0xC );

	pFnRegisterGameObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterGameObject, &RegisterGameObject_Parms, NULL );

	pFnRegisterGameObject->FunctionFlags |= 0x400;

	return RegisterGameObject_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.UnregisterGameObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWwiseAudioComponent::UnregisterGameObject ( )
{
	static UFunction* pFnUnregisterGameObject = NULL;

	if ( ! pFnUnregisterGameObject )
		pFnUnregisterGameObject = (UFunction*) UObject::GObjObjects()->Data[ 35129 ];

	UWwiseAudioComponent_execUnregisterGameObject_Parms UnregisterGameObject_Parms;

	pFnUnregisterGameObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterGameObject, &UnregisterGameObject_Parms, NULL );

	pFnUnregisterGameObject->FunctionFlags |= 0x400;

	return UnregisterGameObject_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.GetDistanceToListener
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UWwiseAudioComponent::GetDistanceToListener ( )
{
	static UFunction* pFnGetDistanceToListener = NULL;

	if ( ! pFnGetDistanceToListener )
		pFnGetDistanceToListener = (UFunction*) UObject::GObjObjects()->Data[ 35127 ];

	UWwiseAudioComponent_execGetDistanceToListener_Parms GetDistanceToListener_Parms;

	pFnGetDistanceToListener->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDistanceToListener, &GetDistanceToListener_Parms, NULL );

	pFnGetDistanceToListener->FunctionFlags |= 0x400;

	return GetDistanceToListener_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetObstructionOcclusionEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  i_bValue                       ( CPF_Parm )

void UWwiseAudioComponent::SetObstructionOcclusionEnabled ( unsigned long i_bValue )
{
	static UFunction* pFnSetObstructionOcclusionEnabled = NULL;

	if ( ! pFnSetObstructionOcclusionEnabled )
		pFnSetObstructionOcclusionEnabled = (UFunction*) UObject::GObjObjects()->Data[ 35125 ];

	UWwiseAudioComponent_execSetObstructionOcclusionEnabled_Parms SetObstructionOcclusionEnabled_Parms;
	SetObstructionOcclusionEnabled_Parms.i_bValue = i_bValue;

	pFnSetObstructionOcclusionEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetObstructionOcclusionEnabled, &SetObstructionOcclusionEnabled_Parms, NULL );

	pFnSetObstructionOcclusionEnabled->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioComponent.SetEnvironmentalAudioEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  i_bValue                       ( CPF_Parm )

void UWwiseAudioComponent::SetEnvironmentalAudioEnabled ( unsigned long i_bValue )
{
	static UFunction* pFnSetEnvironmentalAudioEnabled = NULL;

	if ( ! pFnSetEnvironmentalAudioEnabled )
		pFnSetEnvironmentalAudioEnabled = (UFunction*) UObject::GObjObjects()->Data[ 35123 ];

	UWwiseAudioComponent_execSetEnvironmentalAudioEnabled_Parms SetEnvironmentalAudioEnabled_Parms;
	SetEnvironmentalAudioEnabled_Parms.i_bValue = i_bValue;

	pFnSetEnvironmentalAudioEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetEnvironmentalAudioEnabled, &SetEnvironmentalAudioEnabled_Parms, NULL );

	pFnSetEnvironmentalAudioEnabled->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioComponent.GetObstructionOcclusionEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWwiseAudioComponent::GetObstructionOcclusionEnabled ( )
{
	static UFunction* pFnGetObstructionOcclusionEnabled = NULL;

	if ( ! pFnGetObstructionOcclusionEnabled )
		pFnGetObstructionOcclusionEnabled = (UFunction*) UObject::GObjObjects()->Data[ 35121 ];

	UWwiseAudioComponent_execGetObstructionOcclusionEnabled_Parms GetObstructionOcclusionEnabled_Parms;

	pFnGetObstructionOcclusionEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetObstructionOcclusionEnabled, &GetObstructionOcclusionEnabled_Parms, NULL );

	pFnGetObstructionOcclusionEnabled->FunctionFlags |= 0x400;

	return GetObstructionOcclusionEnabled_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.GetEnvironmentalAudioEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWwiseAudioComponent::GetEnvironmentalAudioEnabled ( )
{
	static UFunction* pFnGetEnvironmentalAudioEnabled = NULL;

	if ( ! pFnGetEnvironmentalAudioEnabled )
		pFnGetEnvironmentalAudioEnabled = (UFunction*) UObject::GObjObjects()->Data[ 35119 ];

	UWwiseAudioComponent_execGetEnvironmentalAudioEnabled_Parms GetEnvironmentalAudioEnabled_Parms;

	pFnGetEnvironmentalAudioEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEnvironmentalAudioEnabled, &GetEnvironmentalAudioEnabled_Parms, NULL );

	pFnGetEnvironmentalAudioEnabled->FunctionFlags |= 0x400;

	return GetEnvironmentalAudioEnabled_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.GetMicPosition
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector UWwiseAudioComponent::GetMicPosition ( )
{
	static UFunction* pFnGetMicPosition = NULL;

	if ( ! pFnGetMicPosition )
		pFnGetMicPosition = (UFunction*) UObject::GObjObjects()->Data[ 35117 ];

	UWwiseAudioComponent_execGetMicPosition_Parms GetMicPosition_Parms;

	pFnGetMicPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMicPosition, &GetMicPosition_Parms, NULL );

	pFnGetMicPosition->FunctionFlags |= 0x400;

	return GetMicPosition_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetGlobalRTPCFromScript
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 in_pszRtpcName                 ( CPF_Parm | CPF_NeedCtorLink )
// float                          in_value                       ( CPF_Parm )

bool UWwiseAudioComponent::SetGlobalRTPCFromScript ( struct FString in_pszRtpcName, float in_value )
{
	static UFunction* pFnSetGlobalRTPCFromScript = NULL;

	if ( ! pFnSetGlobalRTPCFromScript )
		pFnSetGlobalRTPCFromScript = (UFunction*) UObject::GObjObjects()->Data[ 35113 ];

	UWwiseAudioComponent_execSetGlobalRTPCFromScript_Parms SetGlobalRTPCFromScript_Parms;
	memcpy ( &SetGlobalRTPCFromScript_Parms.in_pszRtpcName, &in_pszRtpcName, 0xC );
	SetGlobalRTPCFromScript_Parms.in_value = in_value;

	pFnSetGlobalRTPCFromScript->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetGlobalRTPCFromScript, &SetGlobalRTPCFromScript_Parms, NULL );

	pFnSetGlobalRTPCFromScript->FunctionFlags |= 0x400;

	return SetGlobalRTPCFromScript_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.StaticPostGlobalEventFromScript
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   GlobalEventName                ( CPF_Parm )

bool UWwiseAudioComponent::StaticPostGlobalEventFromScript ( struct FName GlobalEventName )
{
	static UFunction* pFnStaticPostGlobalEventFromScript = NULL;

	if ( ! pFnStaticPostGlobalEventFromScript )
		pFnStaticPostGlobalEventFromScript = (UFunction*) UObject::GObjObjects()->Data[ 35110 ];

	UWwiseAudioComponent_execStaticPostGlobalEventFromScript_Parms StaticPostGlobalEventFromScript_Parms;
	memcpy ( &StaticPostGlobalEventFromScript_Parms.GlobalEventName, &GlobalEventName, 0x8 );

	pFnStaticPostGlobalEventFromScript->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStaticPostGlobalEventFromScript, &StaticPostGlobalEventFromScript_Parms, NULL );

	pFnStaticPostGlobalEventFromScript->FunctionFlags |= 0x400;

	return StaticPostGlobalEventFromScript_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.CreateComponentFromScript
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UWwiseAudioComponent*    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class AActor*                  pActor                         ( CPF_Parm )
// struct FString                 Label                          ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FName                   ComponentGroup                 ( CPF_OptionalParm | CPF_Parm )
// struct FName                   AttachBone                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bRegister                      ( CPF_OptionalParm | CPF_Parm )

class UWwiseAudioComponent* UWwiseAudioComponent::CreateComponentFromScript ( class AActor* pActor, struct FString Label, struct FName ComponentGroup, struct FName AttachBone, unsigned long bRegister )
{
	static UFunction* pFnCreateComponentFromScript = NULL;

	if ( ! pFnCreateComponentFromScript )
		pFnCreateComponentFromScript = (UFunction*) UObject::GObjObjects()->Data[ 35103 ];

	UWwiseAudioComponent_execCreateComponentFromScript_Parms CreateComponentFromScript_Parms;
	CreateComponentFromScript_Parms.pActor = pActor;
	memcpy ( &CreateComponentFromScript_Parms.Label, &Label, 0xC );
	memcpy ( &CreateComponentFromScript_Parms.ComponentGroup, &ComponentGroup, 0x8 );
	memcpy ( &CreateComponentFromScript_Parms.AttachBone, &AttachBone, 0x8 );
	CreateComponentFromScript_Parms.bRegister = bRegister;

	pFnCreateComponentFromScript->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateComponentFromScript, &CreateComponentFromScript_Parms, NULL );

	pFnCreateComponentFromScript->FunctionFlags |= 0x400;

	return CreateComponentFromScript_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.IsEventPlaying
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            WwisePlayingID                 ( CPF_Parm )

bool UWwiseAudioComponent::IsEventPlaying ( int WwisePlayingID )
{
	static UFunction* pFnIsEventPlaying = NULL;

	if ( ! pFnIsEventPlaying )
		pFnIsEventPlaying = (UFunction*) UObject::GObjObjects()->Data[ 35100 ];

	UWwiseAudioComponent_execIsEventPlaying_Parms IsEventPlaying_Parms;
	IsEventPlaying_Parms.WwisePlayingID = WwisePlayingID;

	pFnIsEventPlaying->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsEventPlaying, &IsEventPlaying_Parms, NULL );

	pFnIsEventPlaying->FunctionFlags |= 0x400;

	return IsEventPlaying_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.IsPlaying
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWwiseBaseSoundObject*   Event                          ( CPF_OptionalParm | CPF_Parm )

bool UWwiseAudioComponent::IsPlaying ( class UWwiseBaseSoundObject* Event )
{
	static UFunction* pFnIsPlaying = NULL;

	if ( ! pFnIsPlaying )
		pFnIsPlaying = (UFunction*) UObject::GObjObjects()->Data[ 35097 ];

	UWwiseAudioComponent_execIsPlaying_Parms IsPlaying_Parms;
	IsPlaying_Parms.Event = Event;

	pFnIsPlaying->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPlaying, &IsPlaying_Parms, NULL );

	pFnIsPlaying->FunctionFlags |= 0x400;

	return IsPlaying_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.PostGlobalEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   GlobalEventName                ( CPF_Parm )

bool UWwiseAudioComponent::PostGlobalEvent ( struct FName GlobalEventName )
{
	static UFunction* pFnPostGlobalEvent = NULL;

	if ( ! pFnPostGlobalEvent )
		pFnPostGlobalEvent = (UFunction*) UObject::GObjObjects()->Data[ 35094 ];

	UWwiseAudioComponent_execPostGlobalEvent_Parms PostGlobalEvent_Parms;
	memcpy ( &PostGlobalEvent_Parms.GlobalEventName, &GlobalEventName, 0x8 );

	pFnPostGlobalEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPostGlobalEvent, &PostGlobalEvent_Parms, NULL );

	pFnPostGlobalEvent->FunctionFlags |= 0x400;

	return PostGlobalEvent_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseTrigger
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sTrigger                       ( CPF_Parm | CPF_NeedCtorLink )

bool UWwiseAudioComponent::SetWwiseTrigger ( struct FString sTrigger )
{
	static UFunction* pFnSetWwiseTrigger = NULL;

	if ( ! pFnSetWwiseTrigger )
		pFnSetWwiseTrigger = (UFunction*) UObject::GObjObjects()->Data[ 35091 ];

	UWwiseAudioComponent_execSetWwiseTrigger_Parms SetWwiseTrigger_Parms;
	memcpy ( &SetWwiseTrigger_Parms.sTrigger, &sTrigger, 0xC );

	pFnSetWwiseTrigger->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWwiseTrigger, &SetWwiseTrigger_Parms, NULL );

	pFnSetWwiseTrigger->FunctionFlags |= 0x400;

	return SetWwiseTrigger_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseSwitch
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sGroup                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sState                         ( CPF_Parm | CPF_NeedCtorLink )

bool UWwiseAudioComponent::SetWwiseSwitch ( struct FString sGroup, struct FString sState )
{
	static UFunction* pFnSetWwiseSwitch = NULL;

	if ( ! pFnSetWwiseSwitch )
		pFnSetWwiseSwitch = (UFunction*) UObject::GObjObjects()->Data[ 35087 ];

	UWwiseAudioComponent_execSetWwiseSwitch_Parms SetWwiseSwitch_Parms;
	memcpy ( &SetWwiseSwitch_Parms.sGroup, &sGroup, 0xC );
	memcpy ( &SetWwiseSwitch_Parms.sState, &sState, 0xC );

	pFnSetWwiseSwitch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWwiseSwitch, &SetWwiseSwitch_Parms, NULL );

	pFnSetWwiseSwitch->FunctionFlags |= 0x400;

	return SetWwiseSwitch_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseRTPCs
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FString >       sName                          ( CPF_Parm | CPF_NeedCtorLink )
// TArray< float >                fValue                         ( CPF_Parm | CPF_NeedCtorLink )

bool UWwiseAudioComponent::SetWwiseRTPCs ( TArray< struct FString > sName, TArray< float > fValue )
{
	static UFunction* pFnSetWwiseRTPCs = NULL;

	if ( ! pFnSetWwiseRTPCs )
		pFnSetWwiseRTPCs = (UFunction*) UObject::GObjObjects()->Data[ 35081 ];

	UWwiseAudioComponent_execSetWwiseRTPCs_Parms SetWwiseRTPCs_Parms;
	memcpy ( &SetWwiseRTPCs_Parms.sName, &sName, 0xC );
	memcpy ( &SetWwiseRTPCs_Parms.fValue, &fValue, 0xC );

	pFnSetWwiseRTPCs->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWwiseRTPCs, &SetWwiseRTPCs_Parms, NULL );

	pFnSetWwiseRTPCs->FunctionFlags |= 0x400;

	return SetWwiseRTPCs_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseRTPC
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )
// float                          fValue                         ( CPF_Parm )

bool UWwiseAudioComponent::SetWwiseRTPC ( struct FString sName, float fValue )
{
	static UFunction* pFnSetWwiseRTPC = NULL;

	if ( ! pFnSetWwiseRTPC )
		pFnSetWwiseRTPC = (UFunction*) UObject::GObjObjects()->Data[ 35077 ];

	UWwiseAudioComponent_execSetWwiseRTPC_Parms SetWwiseRTPC_Parms;
	memcpy ( &SetWwiseRTPC_Parms.sName, &sName, 0xC );
	SetWwiseRTPC_Parms.fValue = fValue;

	pFnSetWwiseRTPC->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWwiseRTPC, &SetWwiseRTPC_Parms, NULL );

	pFnSetWwiseRTPC->FunctionFlags |= 0x400;

	return SetWwiseRTPC_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.Stop
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWwiseBaseSoundObject*   Base                           ( CPF_Parm )

bool UWwiseAudioComponent::Stop ( class UWwiseBaseSoundObject* Base )
{
	static UFunction* pFnStop = NULL;

	if ( ! pFnStop )
		pFnStop = (UFunction*) UObject::GObjObjects()->Data[ 35074 ];

	UWwiseAudioComponent_execStop_Parms Stop_Parms;
	Stop_Parms.Base = Base;

	pFnStop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStop, &Stop_Parms, NULL );

	pFnStop->FunctionFlags |= 0x400;

	return Stop_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.StopWwiseEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FWwiseEventPair         AudioEvent                     ( CPF_Parm )

bool UWwiseAudioComponent::StopWwiseEvent ( struct FWwiseEventPair AudioEvent )
{
	static UFunction* pFnStopWwiseEvent = NULL;

	if ( ! pFnStopWwiseEvent )
		pFnStopWwiseEvent = (UFunction*) UObject::GObjObjects()->Data[ 35071 ];

	UWwiseAudioComponent_execStopWwiseEvent_Parms StopWwiseEvent_Parms;
	memcpy ( &StopWwiseEvent_Parms.AudioEvent, &AudioEvent, 0x8 );

	pFnStopWwiseEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopWwiseEvent, &StopWwiseEvent_Parms, NULL );

	pFnStopWwiseEvent->FunctionFlags |= 0x400;

	return StopWwiseEvent_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.Play
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWwiseBaseSoundObject*   Base                           ( CPF_Parm )
// unsigned long                  bTrackPosition                 ( CPF_OptionalParm | CPF_Parm )

bool UWwiseAudioComponent::Play ( class UWwiseBaseSoundObject* Base, unsigned long bTrackPosition )
{
	static UFunction* pFnPlay = NULL;

	if ( ! pFnPlay )
		pFnPlay = (UFunction*) UObject::GObjObjects()->Data[ 35067 ];

	UWwiseAudioComponent_execPlay_Parms Play_Parms;
	Play_Parms.Base = Base;
	Play_Parms.bTrackPosition = bTrackPosition;

	pFnPlay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlay, &Play_Parms, NULL );

	pFnPlay->FunctionFlags |= 0x400;

	return Play_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.PlayWwiseEvent
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FWwiseEventPair         AudioEvent                     ( CPF_Parm )
// unsigned long                  bTrackPosition                 ( CPF_OptionalParm | CPF_Parm )

bool UWwiseAudioComponent::PlayWwiseEvent ( struct FWwiseEventPair AudioEvent, unsigned long bTrackPosition )
{
	static UFunction* pFnPlayWwiseEvent = NULL;

	if ( ! pFnPlayWwiseEvent )
		pFnPlayWwiseEvent = (UFunction*) UObject::GObjObjects()->Data[ 35063 ];

	UWwiseAudioComponent_execPlayWwiseEvent_Parms PlayWwiseEvent_Parms;
	memcpy ( &PlayWwiseEvent_Parms.AudioEvent, &AudioEvent, 0x8 );
	PlayWwiseEvent_Parms.bTrackPosition = bTrackPosition;

	pFnPlayWwiseEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayWwiseEvent, &PlayWwiseEvent_Parms, NULL );

	pFnPlayWwiseEvent->FunctionFlags |= 0x400;

	return PlayWwiseEvent_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SoundPositionByID
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            WwisePlayingID                 ( CPF_Parm )

float UWwiseAudioComponent::SoundPositionByID ( int WwisePlayingID )
{
	static UFunction* pFnSoundPositionByID = NULL;

	if ( ! pFnSoundPositionByID )
		pFnSoundPositionByID = (UFunction*) UObject::GObjObjects()->Data[ 35060 ];

	UWwiseAudioComponent_execSoundPositionByID_Parms SoundPositionByID_Parms;
	SoundPositionByID_Parms.WwisePlayingID = WwisePlayingID;

	pFnSoundPositionByID->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSoundPositionByID, &SoundPositionByID_Parms, NULL );

	pFnSoundPositionByID->FunctionFlags |= 0x400;

	return SoundPositionByID_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SoundPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWwiseBaseSoundObject*   Base                           ( CPF_Parm )

float UWwiseAudioComponent::SoundPosition ( class UWwiseBaseSoundObject* Base )
{
	static UFunction* pFnSoundPosition = NULL;

	if ( ! pFnSoundPosition )
		pFnSoundPosition = (UFunction*) UObject::GObjObjects()->Data[ 35057 ];

	UWwiseAudioComponent_execSoundPosition_Parms SoundPosition_Parms;
	SoundPosition_Parms.Base = Base;

	pFnSoundPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSoundPosition, &SoundPosition_Parms, NULL );

	pFnSoundPosition->FunctionFlags |= 0x400;

	return SoundPosition_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.StopAll
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWwiseAudioComponent::StopAll ( )
{
	static UFunction* pFnStopAll = NULL;

	if ( ! pFnStopAll )
		pFnStopAll = (UFunction*) UObject::GObjObjects()->Data[ 35055 ];

	UWwiseAudioComponent_execStopAll_Parms StopAll_Parms;

	pFnStopAll->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopAll, &StopAll_Parms, NULL );

	pFnStopAll->FunctionFlags |= 0x400;

	return StopAll_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.FindPlayingID
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWwiseBaseSoundObject*   BaseSound                      ( CPF_Parm )
// class UWwiseEvent*             StopEvent                      ( CPF_OptionalParm | CPF_Parm )

int UWwiseAudioComponent::FindPlayingID ( class UWwiseBaseSoundObject* BaseSound, class UWwiseEvent* StopEvent )
{
	static UFunction* pFnFindPlayingID = NULL;

	if ( ! pFnFindPlayingID )
		pFnFindPlayingID = (UFunction*) UObject::GObjObjects()->Data[ 35051 ];

	UWwiseAudioComponent_execFindPlayingID_Parms FindPlayingID_Parms;
	FindPlayingID_Parms.BaseSound = BaseSound;
	FindPlayingID_Parms.StopEvent = StopEvent;

	pFnFindPlayingID->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindPlayingID, &FindPlayingID_Parms, NULL );

	pFnFindPlayingID->FunctionFlags |= 0x400;

	return FindPlayingID_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetRTPCWithHandler
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          fValue                         ( CPF_Parm )
// struct FWwiseRTPCForActorHandler RTPCHandler                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UWwiseAudioComponent::SetRTPCWithHandler ( float fValue, struct FWwiseRTPCForActorHandler* RTPCHandler )
{
	static UFunction* pFnSetRTPCWithHandler = NULL;

	if ( ! pFnSetRTPCWithHandler )
		pFnSetRTPCWithHandler = (UFunction*) UObject::GObjObjects()->Data[ 35048 ];

	UWwiseAudioComponent_execSetRTPCWithHandler_Parms SetRTPCWithHandler_Parms;
	SetRTPCWithHandler_Parms.fValue = fValue;

	pFnSetRTPCWithHandler->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRTPCWithHandler, &SetRTPCWithHandler_Parms, NULL );

	pFnSetRTPCWithHandler->FunctionFlags |= 0x400;

	if ( RTPCHandler )
		memcpy ( RTPCHandler, &SetRTPCWithHandler_Parms.RTPCHandler, 0x14 );
};

// Function WwiseAudio.WwiseAudioComponentMultiLoc.Set3D
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UWwiseAudioComponentMultiLoc::Set3D ( )
{
	static UFunction* pFnSet3D = NULL;

	if ( ! pFnSet3D )
		pFnSet3D = (UFunction*) UObject::GObjObjects()->Data[ 35175 ];

	UWwiseAudioComponentMultiLoc_execSet3D_Parms Set3D_Parms;

	pFnSet3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSet3D, &Set3D_Parms, NULL );

	pFnSet3D->FunctionFlags |= 0x400;
};

// Function Engine.AudioDevice.SetSoundMode
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   NewMode                        ( CPF_Parm )

bool UWwiseAudioDevice::SetSoundMode ( struct FName NewMode )
{
	static UFunction* pFnSetSoundMode = NULL;

	if ( ! pFnSetSoundMode )
		pFnSetSoundMode = (UFunction*) UObject::GObjObjects()->Data[ 9256 ];

	UWwiseAudioDevice_execSetSoundMode_Parms SetSoundMode_Parms;
	memcpy ( &SetSoundMode_Parms.NewMode, &NewMode, 0x8 );

	pFnSetSoundMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSoundMode, &SetSoundMode_Parms, NULL );

	pFnSetSoundMode->FunctionFlags |= 0x400;

	return SetSoundMode_Parms.ReturnValue;
};

// Function Engine.Actor.LocalToWorld
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 vLocal                         ( CPF_Parm )

struct FVector AWwiseMicPosOrient::LocalToWorld ( struct FVector vLocal )
{
	static UFunction* pFnLocalToWorld = NULL;

	if ( ! pFnLocalToWorld )
		pFnLocalToWorld = (UFunction*) UObject::GObjObjects()->Data[ 4835 ];

	AWwiseMicPosOrient_execLocalToWorld_Parms LocalToWorld_Parms;
	memcpy ( &LocalToWorld_Parms.vLocal, &vLocal, 0xC );

	pFnLocalToWorld->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLocalToWorld, &LocalToWorld_Parms, NULL );

	pFnLocalToWorld->FunctionFlags |= 0x400;

	return LocalToWorld_Parms.ReturnValue;
};

// Function Engine.Actor.BioBaseRemovedFromWorld
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventBioBaseRemovedFromWorld ( )
{
	static UFunction* pFnBioBaseRemovedFromWorld = NULL;

	if ( ! pFnBioBaseRemovedFromWorld )
		pFnBioBaseRemovedFromWorld = (UFunction*) UObject::GObjObjects()->Data[ 4834 ];

	AWwiseMicPosOrient_eventBioBaseRemovedFromWorld_Parms BioBaseRemovedFromWorld_Parms;

	this->ProcessEvent ( pFnBioBaseRemovedFromWorld, &BioBaseRemovedFromWorld_Parms, NULL );
};

// Function Engine.Actor.BioRestoreFromStasis
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseMicPosOrient::BioRestoreFromStasis ( )
{
	static UFunction* pFnBioRestoreFromStasis = NULL;

	if ( ! pFnBioRestoreFromStasis )
		pFnBioRestoreFromStasis = (UFunction*) UObject::GObjObjects()->Data[ 4639 ];

	AWwiseMicPosOrient_execBioRestoreFromStasis_Parms BioRestoreFromStasis_Parms;

	pFnBioRestoreFromStasis->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBioRestoreFromStasis, &BioRestoreFromStasis_Parms, NULL );

	pFnBioRestoreFromStasis->FunctionFlags |= 0x400;
};

// Function Engine.Actor.BioApplyStasis
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Cause                          ( CPF_Parm | CPF_NeedCtorLink )

void AWwiseMicPosOrient::BioApplyStasis ( struct FString Cause )
{
	static UFunction* pFnBioApplyStasis = NULL;

	if ( ! pFnBioApplyStasis )
		pFnBioApplyStasis = (UFunction*) UObject::GObjObjects()->Data[ 4832 ];

	AWwiseMicPosOrient_execBioApplyStasis_Parms BioApplyStasis_Parms;
	memcpy ( &BioApplyStasis_Parms.Cause, &Cause, 0xC );

	pFnBioApplyStasis->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBioApplyStasis, &BioApplyStasis_Parms, NULL );

	pFnBioApplyStasis->FunctionFlags |= 0x400;
};

// Function Engine.Actor.PlayFootStepSound
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// int                            FootDown                       ( CPF_Parm )

void AWwiseMicPosOrient::eventPlayFootStepSound ( int FootDown )
{
	static UFunction* pFnPlayFootStepSound = NULL;

	if ( ! pFnPlayFootStepSound )
		pFnPlayFootStepSound = (UFunction*) UObject::GObjObjects()->Data[ 4830 ];

	AWwiseMicPosOrient_eventPlayFootStepSound_Parms PlayFootStepSound_Parms;
	PlayFootStepSound_Parms.FootDown = FootDown;

	this->ProcessEvent ( pFnPlayFootStepSound, &PlayFootStepSound_Parms, NULL );
};

// Function Engine.Actor.SFXSetAudioComponentRTPCs
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UActorComponent*         pWwiseAudioComponent           ( CPF_Parm | CPF_EditInline )

void AWwiseMicPosOrient::eventSFXSetAudioComponentRTPCs ( class UActorComponent* pWwiseAudioComponent )
{
	static UFunction* pFnSFXSetAudioComponentRTPCs = NULL;

	if ( ! pFnSFXSetAudioComponentRTPCs )
		pFnSFXSetAudioComponentRTPCs = (UFunction*) UObject::GObjObjects()->Data[ 4828 ];

	AWwiseMicPosOrient_eventSFXSetAudioComponentRTPCs_Parms SFXSetAudioComponentRTPCs_Parms;
	SFXSetAudioComponentRTPCs_Parms.pWwiseAudioComponent = pWwiseAudioComponent;

	this->ProcessEvent ( pFnSFXSetAudioComponentRTPCs, &SFXSetAudioComponentRTPCs_Parms, NULL );
};

// Function Engine.Actor.GetHeadSkelMeshComponent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USkeletalMeshComponent*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

class USkeletalMeshComponent* AWwiseMicPosOrient::GetHeadSkelMeshComponent ( )
{
	static UFunction* pFnGetHeadSkelMeshComponent = NULL;

	if ( ! pFnGetHeadSkelMeshComponent )
		pFnGetHeadSkelMeshComponent = (UFunction*) UObject::GObjObjects()->Data[ 4826 ];

	AWwiseMicPosOrient_execGetHeadSkelMeshComponent_Parms GetHeadSkelMeshComponent_Parms;

	pFnGetHeadSkelMeshComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHeadSkelMeshComponent, &GetHeadSkelMeshComponent_Parms, NULL );

	pFnGetHeadSkelMeshComponent->FunctionFlags |= 0x400;

	return GetHeadSkelMeshComponent_Parms.ReturnValue;
};

// Function Engine.Actor.GetPrimarySkelMeshComponent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USkeletalMeshComponent*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

class USkeletalMeshComponent* AWwiseMicPosOrient::GetPrimarySkelMeshComponent ( )
{
	static UFunction* pFnGetPrimarySkelMeshComponent = NULL;

	if ( ! pFnGetPrimarySkelMeshComponent )
		pFnGetPrimarySkelMeshComponent = (UFunction*) UObject::GObjObjects()->Data[ 4824 ];

	AWwiseMicPosOrient_execGetPrimarySkelMeshComponent_Parms GetPrimarySkelMeshComponent_Parms;

	pFnGetPrimarySkelMeshComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPrimarySkelMeshComponent, &GetPrimarySkelMeshComponent_Parms, NULL );

	pFnGetPrimarySkelMeshComponent->FunctionFlags |= 0x400;

	return GetPrimarySkelMeshComponent_Parms.ReturnValue;
};

// Function Engine.Actor.ImpactWithPower
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class APawn*                   Caster                         ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Force                          ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

bool AWwiseMicPosOrient::ImpactWithPower ( unsigned char Resistance, class APawn* Caster, struct FVector HitLocation, struct FVector HitNormal, float Damage, struct FVector Force, class UClass* DamageType )
{
	static UFunction* pFnImpactWithPower = NULL;

	if ( ! pFnImpactWithPower )
		pFnImpactWithPower = (UFunction*) UObject::GObjObjects()->Data[ 4815 ];

	AWwiseMicPosOrient_execImpactWithPower_Parms ImpactWithPower_Parms;
	ImpactWithPower_Parms.Resistance = Resistance;
	ImpactWithPower_Parms.Caster = Caster;
	memcpy ( &ImpactWithPower_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ImpactWithPower_Parms.HitNormal, &HitNormal, 0xC );
	ImpactWithPower_Parms.Damage = Damage;
	memcpy ( &ImpactWithPower_Parms.Force, &Force, 0xC );
	ImpactWithPower_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnImpactWithPower, &ImpactWithPower_Parms, NULL );

	return ImpactWithPower_Parms.ReturnValue;
};

// Function Engine.Actor.GetPowerResistance
// [0x00420102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   Caster                         ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// float                          Damage                         ( CPF_Parm | CPF_OutParm )
// struct FVector                 Force                          ( CPF_Parm | CPF_OutParm )
// class AActor*                  TargetOverride                 ( CPF_Parm | CPF_OutParm )

unsigned char AWwiseMicPosOrient::GetPowerResistance ( class APawn* Caster, struct FVector HitLocation, struct FVector HitNormal, class UClass* DamageType, float* Damage, struct FVector* Force, class AActor** TargetOverride )
{
	static UFunction* pFnGetPowerResistance = NULL;

	if ( ! pFnGetPowerResistance )
		pFnGetPowerResistance = (UFunction*) UObject::GObjObjects()->Data[ 4806 ];

	AWwiseMicPosOrient_execGetPowerResistance_Parms GetPowerResistance_Parms;
	GetPowerResistance_Parms.Caster = Caster;
	memcpy ( &GetPowerResistance_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &GetPowerResistance_Parms.HitNormal, &HitNormal, 0xC );
	GetPowerResistance_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnGetPowerResistance, &GetPowerResistance_Parms, NULL );

	if ( Damage )
		*Damage = GetPowerResistance_Parms.Damage;

	if ( Force )
		memcpy ( Force, &GetPowerResistance_Parms.Force, 0xC );

	if ( TargetOverride )
		*TargetOverride = GetPowerResistance_Parms.TargetOverride;

	return GetPowerResistance_Parms.ReturnValue;
};

// Function Engine.Actor.RemoveSFXModuleIndex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nIndex                         ( CPF_Parm )

void AWwiseMicPosOrient::RemoveSFXModuleIndex ( int nIndex )
{
	static UFunction* pFnRemoveSFXModuleIndex = NULL;

	if ( ! pFnRemoveSFXModuleIndex )
		pFnRemoveSFXModuleIndex = (UFunction*) UObject::GObjObjects()->Data[ 4804 ];

	AWwiseMicPosOrient_execRemoveSFXModuleIndex_Parms RemoveSFXModuleIndex_Parms;
	RemoveSFXModuleIndex_Parms.nIndex = nIndex;

	pFnRemoveSFXModuleIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveSFXModuleIndex, &RemoveSFXModuleIndex_Parms, NULL );

	pFnRemoveSFXModuleIndex->FunctionFlags |= 0x400;
};

// Function Engine.Actor.RemoveSFXModule
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USFXModule*              oModule                        ( CPF_Parm )

void AWwiseMicPosOrient::RemoveSFXModule ( class USFXModule* oModule )
{
	static UFunction* pFnRemoveSFXModule = NULL;

	if ( ! pFnRemoveSFXModule )
		pFnRemoveSFXModule = (UFunction*) UObject::GObjObjects()->Data[ 4802 ];

	AWwiseMicPosOrient_execRemoveSFXModule_Parms RemoveSFXModule_Parms;
	RemoveSFXModule_Parms.oModule = oModule;

	pFnRemoveSFXModule->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveSFXModule, &RemoveSFXModule_Parms, NULL );

	pFnRemoveSFXModule->FunctionFlags |= 0x400;
};

// Function Engine.Actor.AddSFXModule
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// class USFXModule*              oModule                        ( CPF_Parm )
// unsigned long                  bUserModule                    ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::AddSFXModule ( class USFXModule* oModule, unsigned long bUserModule )
{
	static UFunction* pFnAddSFXModule = NULL;

	if ( ! pFnAddSFXModule )
		pFnAddSFXModule = (UFunction*) UObject::GObjObjects()->Data[ 4799 ];

	AWwiseMicPosOrient_execAddSFXModule_Parms AddSFXModule_Parms;
	AddSFXModule_Parms.oModule = oModule;
	AddSFXModule_Parms.bUserModule = bUserModule;

	pFnAddSFXModule->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddSFXModule, &AddSFXModule_Parms, NULL );

	pFnAddSFXModule->FunctionFlags |= 0x400;
};

// Function Engine.Actor.StopAllSounds
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseMicPosOrient::StopAllSounds ( )
{
	static UFunction* pFnStopAllSounds = NULL;

	if ( ! pFnStopAllSounds )
		pFnStopAllSounds = (UFunction*) UObject::GObjObjects()->Data[ 4798 ];

	AWwiseMicPosOrient_execStopAllSounds_Parms StopAllSounds_Parms;

	pFnStopAllSounds->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopAllSounds, &StopAllSounds_Parms, NULL );

	pFnStopAllSounds->FunctionFlags |= 0x400;
};

// Function Engine.Actor.WillOverlap
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 PosA                           ( CPF_Parm )
// struct FVector                 VelA                           ( CPF_Parm )
// struct FVector                 PosB                           ( CPF_Parm )
// struct FVector                 VelB                           ( CPF_Parm )
// float                          StepSize                       ( CPF_Parm )
// float                          Radius                         ( CPF_Parm )
// float                          Time                           ( CPF_Parm | CPF_OutParm )

bool AWwiseMicPosOrient::WillOverlap ( struct FVector PosA, struct FVector VelA, struct FVector PosB, struct FVector VelB, float StepSize, float Radius, float* Time )
{
	static UFunction* pFnWillOverlap = NULL;

	if ( ! pFnWillOverlap )
		pFnWillOverlap = (UFunction*) UObject::GObjObjects()->Data[ 4789 ];

	AWwiseMicPosOrient_execWillOverlap_Parms WillOverlap_Parms;
	memcpy ( &WillOverlap_Parms.PosA, &PosA, 0xC );
	memcpy ( &WillOverlap_Parms.VelA, &VelA, 0xC );
	memcpy ( &WillOverlap_Parms.PosB, &PosB, 0xC );
	memcpy ( &WillOverlap_Parms.VelB, &VelB, 0xC );
	WillOverlap_Parms.StepSize = StepSize;
	WillOverlap_Parms.Radius = Radius;

	pFnWillOverlap->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWillOverlap, &WillOverlap_Parms, NULL );

	pFnWillOverlap->FunctionFlags |= 0x400;

	if ( Time )
		*Time = WillOverlap_Parms.Time;

	return WillOverlap_Parms.ReturnValue;
};

// Function Engine.Actor.GetAvoidanceVector
// [0x00424401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 GoalLocation                   ( CPF_Parm )
// float                          CollisionRadius                ( CPF_Parm )
// float                          MaxSpeed                       ( CPF_Parm )
// int                            NumSamples                     ( CPF_OptionalParm | CPF_Parm )
// float                          VelocityStepRate               ( CPF_OptionalParm | CPF_Parm )
// float                          MaxTimeTilOverlap              ( CPF_OptionalParm | CPF_Parm )
// TArray< class AActor* >        Obstacles                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FVector AWwiseMicPosOrient::GetAvoidanceVector ( struct FVector GoalLocation, float CollisionRadius, float MaxSpeed, int NumSamples, float VelocityStepRate, float MaxTimeTilOverlap, TArray< class AActor* >* Obstacles )
{
	static UFunction* pFnGetAvoidanceVector = NULL;

	if ( ! pFnGetAvoidanceVector )
		pFnGetAvoidanceVector = (UFunction*) UObject::GObjObjects()->Data[ 4779 ];

	AWwiseMicPosOrient_execGetAvoidanceVector_Parms GetAvoidanceVector_Parms;
	memcpy ( &GetAvoidanceVector_Parms.GoalLocation, &GoalLocation, 0xC );
	GetAvoidanceVector_Parms.CollisionRadius = CollisionRadius;
	GetAvoidanceVector_Parms.MaxSpeed = MaxSpeed;
	GetAvoidanceVector_Parms.NumSamples = NumSamples;
	GetAvoidanceVector_Parms.VelocityStepRate = VelocityStepRate;
	GetAvoidanceVector_Parms.MaxTimeTilOverlap = MaxTimeTilOverlap;

	pFnGetAvoidanceVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAvoidanceVector, &GetAvoidanceVector_Parms, NULL );

	pFnGetAvoidanceVector->FunctionFlags |= 0x400;

	if ( Obstacles )
		memcpy ( Obstacles, &GetAvoidanceVector_Parms.Obstacles, 0xC );

	return GetAvoidanceVector_Parms.ReturnValue;
};

// Function Engine.Actor.IsClient
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMicPosOrient::IsClient ( )
{
	static UFunction* pFnIsClient = NULL;

	if ( ! pFnIsClient )
		pFnIsClient = (UFunction*) UObject::GObjObjects()->Data[ 4777 ];

	AWwiseMicPosOrient_execIsClient_Parms IsClient_Parms;

	this->ProcessEvent ( pFnIsClient, &IsClient_Parms, NULL );

	return IsClient_Parms.ReturnValue;
};

// Function Engine.Actor.IsServer
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMicPosOrient::IsServer ( )
{
	static UFunction* pFnIsServer = NULL;

	if ( ! pFnIsServer )
		pFnIsServer = (UFunction*) UObject::GObjObjects()->Data[ 4775 ];

	AWwiseMicPosOrient_execIsServer_Parms IsServer_Parms;

	this->ProcessEvent ( pFnIsServer, &IsServer_Parms, NULL );

	return IsServer_Parms.ReturnValue;
};

// Function Engine.Actor.IsOwningClient
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMicPosOrient::IsOwningClient ( )
{
	static UFunction* pFnIsOwningClient = NULL;

	if ( ! pFnIsOwningClient )
		pFnIsOwningClient = (UFunction*) UObject::GObjObjects()->Data[ 4773 ];

	AWwiseMicPosOrient_execIsOwningClient_Parms IsOwningClient_Parms;

	this->ProcessEvent ( pFnIsOwningClient, &IsOwningClient_Parms, NULL );

	return IsOwningClient_Parms.ReturnValue;
};

// Function Engine.Actor.ReplicationEnded
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventReplicationEnded ( )
{
	static UFunction* pFnReplicationEnded = NULL;

	if ( ! pFnReplicationEnded )
		pFnReplicationEnded = (UFunction*) UObject::GObjObjects()->Data[ 4772 ];

	AWwiseMicPosOrient_eventReplicationEnded_Parms ReplicationEnded_Parms;

	this->ProcessEvent ( pFnReplicationEnded, &ReplicationEnded_Parms, NULL );
};

// Function Engine.Actor.PostDemoRewind
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventPostDemoRewind ( )
{
	static UFunction* pFnPostDemoRewind = NULL;

	if ( ! pFnPostDemoRewind )
		pFnPostDemoRewind = (UFunction*) UObject::GObjObjects()->Data[ 4771 ];

	AWwiseMicPosOrient_eventPostDemoRewind_Parms PostDemoRewind_Parms;

	this->ProcessEvent ( pFnPostDemoRewind, &PostDemoRewind_Parms, NULL );
};

// Function Engine.Actor.AnimTreeUpdated
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class USkeletalMeshComponent*  SkelMesh                       ( CPF_Parm | CPF_EditInline )

void AWwiseMicPosOrient::eventAnimTreeUpdated ( class USkeletalMeshComponent* SkelMesh )
{
	static UFunction* pFnAnimTreeUpdated = NULL;

	if ( ! pFnAnimTreeUpdated )
		pFnAnimTreeUpdated = (UFunction*) UObject::GObjObjects()->Data[ 4769 ];

	AWwiseMicPosOrient_eventAnimTreeUpdated_Parms AnimTreeUpdated_Parms;
	AnimTreeUpdated_Parms.SkelMesh = SkelMesh;

	this->ProcessEvent ( pFnAnimTreeUpdated, &AnimTreeUpdated_Parms, NULL );
};

// Function Engine.Actor.SupportsKismetModification
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USequenceOp*             AskingOp                       ( CPF_Parm )
// struct FString                 Reason                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AWwiseMicPosOrient::SupportsKismetModification ( class USequenceOp* AskingOp, struct FString* Reason )
{
	static UFunction* pFnSupportsKismetModification = NULL;

	if ( ! pFnSupportsKismetModification )
		pFnSupportsKismetModification = (UFunction*) UObject::GObjObjects()->Data[ 4765 ];

	AWwiseMicPosOrient_execSupportsKismetModification_Parms SupportsKismetModification_Parms;
	SupportsKismetModification_Parms.AskingOp = AskingOp;

	pFnSupportsKismetModification->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSupportsKismetModification, &SupportsKismetModification_Parms, NULL );

	pFnSupportsKismetModification->FunctionFlags |= 0x400;

	if ( Reason )
		memcpy ( Reason, &SupportsKismetModification_Parms.Reason, 0xC );

	return SupportsKismetModification_Parms.ReturnValue;
};

// Function Engine.Actor.TrailsNotifyEnd
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UAnimNotify_Trails*      AnimNotifyData                 ( CPF_Const | CPF_Parm )

void AWwiseMicPosOrient::eventTrailsNotifyEnd ( class UAnimNotify_Trails* AnimNotifyData )
{
	static UFunction* pFnTrailsNotifyEnd = NULL;

	if ( ! pFnTrailsNotifyEnd )
		pFnTrailsNotifyEnd = (UFunction*) UObject::GObjObjects()->Data[ 4763 ];

	AWwiseMicPosOrient_eventTrailsNotifyEnd_Parms TrailsNotifyEnd_Parms;
	TrailsNotifyEnd_Parms.AnimNotifyData = AnimNotifyData;

	this->ProcessEvent ( pFnTrailsNotifyEnd, &TrailsNotifyEnd_Parms, NULL );
};

// Function Engine.Actor.TrailsNotifyTick
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UAnimNotify_Trails*      AnimNotifyData                 ( CPF_Const | CPF_Parm )

void AWwiseMicPosOrient::eventTrailsNotifyTick ( class UAnimNotify_Trails* AnimNotifyData )
{
	static UFunction* pFnTrailsNotifyTick = NULL;

	if ( ! pFnTrailsNotifyTick )
		pFnTrailsNotifyTick = (UFunction*) UObject::GObjObjects()->Data[ 4761 ];

	AWwiseMicPosOrient_eventTrailsNotifyTick_Parms TrailsNotifyTick_Parms;
	TrailsNotifyTick_Parms.AnimNotifyData = AnimNotifyData;

	this->ProcessEvent ( pFnTrailsNotifyTick, &TrailsNotifyTick_Parms, NULL );
};

// Function Engine.Actor.TrailsNotify
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UAnimNotify_Trails*      AnimNotifyData                 ( CPF_Const | CPF_Parm )

void AWwiseMicPosOrient::eventTrailsNotify ( class UAnimNotify_Trails* AnimNotifyData )
{
	static UFunction* pFnTrailsNotify = NULL;

	if ( ! pFnTrailsNotify )
		pFnTrailsNotify = (UFunction*) UObject::GObjObjects()->Data[ 4759 ];

	AWwiseMicPosOrient_eventTrailsNotify_Parms TrailsNotify_Parms;
	TrailsNotify_Parms.AnimNotifyData = AnimNotifyData;

	this->ProcessEvent ( pFnTrailsNotify, &TrailsNotify_Parms, NULL );
};

// Function Engine.Actor.PlayParticleEffect
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UAnimNotify_PlayParticleEffect* AnimNotifyData                 ( CPF_Const | CPF_Parm )

void AWwiseMicPosOrient::eventPlayParticleEffect ( class UAnimNotify_PlayParticleEffect* AnimNotifyData )
{
	static UFunction* pFnPlayParticleEffect = NULL;

	if ( ! pFnPlayParticleEffect )
		pFnPlayParticleEffect = (UFunction*) UObject::GObjObjects()->Data[ 4757 ];

	AWwiseMicPosOrient_eventPlayParticleEffect_Parms PlayParticleEffect_Parms;
	PlayParticleEffect_Parms.AnimNotifyData = AnimNotifyData;

	this->ProcessEvent ( pFnPlayParticleEffect, &PlayParticleEffect_Parms, NULL );
};

// Function Engine.Actor.GetAimAdhesionExtent
// [0x00420102] 
// Parameters infos:
// float                          Width                          ( CPF_Parm | CPF_OutParm )
// float                          Height                         ( CPF_Parm | CPF_OutParm )
// struct FVector                 Center                         ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::GetAimAdhesionExtent ( float* Width, float* Height, struct FVector* Center )
{
	static UFunction* pFnGetAimAdhesionExtent = NULL;

	if ( ! pFnGetAimAdhesionExtent )
		pFnGetAimAdhesionExtent = (UFunction*) UObject::GObjObjects()->Data[ 4752 ];

	AWwiseMicPosOrient_execGetAimAdhesionExtent_Parms GetAimAdhesionExtent_Parms;

	this->ProcessEvent ( pFnGetAimAdhesionExtent, &GetAimAdhesionExtent_Parms, NULL );

	if ( Width )
		*Width = GetAimAdhesionExtent_Parms.Width;

	if ( Height )
		*Height = GetAimAdhesionExtent_Parms.Height;

	if ( Center )
		memcpy ( Center, &GetAimAdhesionExtent_Parms.Center, 0xC );
};

// Function Engine.Actor.GetAimFrictionExtent
// [0x00420102] 
// Parameters infos:
// float                          Width                          ( CPF_Parm | CPF_OutParm )
// float                          Height                         ( CPF_Parm | CPF_OutParm )
// struct FVector                 Center                         ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::GetAimFrictionExtent ( float* Width, float* Height, struct FVector* Center )
{
	static UFunction* pFnGetAimFrictionExtent = NULL;

	if ( ! pFnGetAimFrictionExtent )
		pFnGetAimFrictionExtent = (UFunction*) UObject::GObjObjects()->Data[ 4747 ];

	AWwiseMicPosOrient_execGetAimFrictionExtent_Parms GetAimFrictionExtent_Parms;

	this->ProcessEvent ( pFnGetAimFrictionExtent, &GetAimFrictionExtent_Parms, NULL );

	if ( Width )
		*Width = GetAimFrictionExtent_Parms.Width;

	if ( Height )
		*Height = GetAimFrictionExtent_Parms.Height;

	if ( Center )
		memcpy ( Center, &GetAimFrictionExtent_Parms.Center, 0xC );
};

// Function Engine.Actor.IsInPersistentLevel
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMicPosOrient::IsInPersistentLevel ( )
{
	static UFunction* pFnIsInPersistentLevel = NULL;

	if ( ! pFnIsInPersistentLevel )
		pFnIsInPersistentLevel = (UFunction*) UObject::GObjObjects()->Data[ 4745 ];

	AWwiseMicPosOrient_execIsInPersistentLevel_Parms IsInPersistentLevel_Parms;

	pFnIsInPersistentLevel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsInPersistentLevel, &IsInPersistentLevel_Parms, NULL );

	pFnIsInPersistentLevel->FunctionFlags |= 0x400;

	return IsInPersistentLevel_Parms.ReturnValue;
};

// Function Engine.Actor.SetActive
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bActive                        ( CPF_Parm )

void AWwiseMicPosOrient::SetActive ( unsigned long bActive )
{
	static UFunction* pFnSetActive = NULL;

	if ( ! pFnSetActive )
		pFnSetActive = (UFunction*) UObject::GObjObjects()->Data[ 4743 ];

	AWwiseMicPosOrient_execSetActive_Parms SetActive_Parms;
	SetActive_Parms.bActive = bActive;

	pFnSetActive->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetActive, &SetActive_Parms, NULL );

	pFnSetActive->FunctionFlags |= 0x400;
};

// Function Engine.Actor.GetModule
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USFXModule*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm )
// class UClass*                  ModuleClass                    ( CPF_Parm )

class USFXModule* AWwiseMicPosOrient::GetModule ( class UClass* ModuleClass )
{
	static UFunction* pFnGetModule = NULL;

	if ( ! pFnGetModule )
		pFnGetModule = (UFunction*) UObject::GObjObjects()->Data[ 4272 ];

	AWwiseMicPosOrient_execGetModule_Parms GetModule_Parms;
	GetModule_Parms.ModuleClass = ModuleClass;

	pFnGetModule->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetModule, &GetModule_Parms, NULL );

	pFnGetModule->FunctionFlags |= 0x400;

	return GetModule_Parms.ReturnValue;
};

// Function Engine.Actor.ExceededPhysicsThreshold
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  instigatedBy                   ( CPF_Parm )

void AWwiseMicPosOrient::eventExceededPhysicsThreshold ( class AActor* instigatedBy )
{
	static UFunction* pFnExceededPhysicsThreshold = NULL;

	if ( ! pFnExceededPhysicsThreshold )
		pFnExceededPhysicsThreshold = (UFunction*) UObject::GObjObjects()->Data[ 4739 ];

	AWwiseMicPosOrient_eventExceededPhysicsThreshold_Parms ExceededPhysicsThreshold_Parms;
	ExceededPhysicsThreshold_Parms.instigatedBy = instigatedBy;

	this->ProcessEvent ( pFnExceededPhysicsThreshold, &ExceededPhysicsThreshold_Parms, NULL );
};

// Function Engine.Actor.OnRigidBodySpringOverextension
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class URB_BodyInstance*        BodyInstance                   ( CPF_Parm )

void AWwiseMicPosOrient::eventOnRigidBodySpringOverextension ( class URB_BodyInstance* BodyInstance )
{
	static UFunction* pFnOnRigidBodySpringOverextension = NULL;

	if ( ! pFnOnRigidBodySpringOverextension )
		pFnOnRigidBodySpringOverextension = (UFunction*) UObject::GObjObjects()->Data[ 4737 ];

	AWwiseMicPosOrient_eventOnRigidBodySpringOverextension_Parms OnRigidBodySpringOverextension_Parms;
	OnRigidBodySpringOverextension_Parms.BodyInstance = BodyInstance;

	this->ProcessEvent ( pFnOnRigidBodySpringOverextension, &OnRigidBodySpringOverextension_Parms, NULL );
};

// Function Engine.Actor.GetPackageGuid
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FGuid                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   PackageName                    ( CPF_Parm )

struct FGuid AWwiseMicPosOrient::GetPackageGuid ( struct FName PackageName )
{
	static UFunction* pFnGetPackageGuid = NULL;

	if ( ! pFnGetPackageGuid )
		pFnGetPackageGuid = (UFunction*) UObject::GObjObjects()->Data[ 4734 ];

	AWwiseMicPosOrient_execGetPackageGuid_Parms GetPackageGuid_Parms;
	memcpy ( &GetPackageGuid_Parms.PackageName, &PackageName, 0x8 );

	pFnGetPackageGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPackageGuid, &GetPackageGuid_Parms, NULL );

	pFnGetPackageGuid->FunctionFlags |= 0x400;

	return GetPackageGuid_Parms.ReturnValue;
};

// Function Engine.Actor.PostInitAnimTree
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class USkeletalMeshComponent*  SkelComp                       ( CPF_Parm | CPF_EditInline )

void AWwiseMicPosOrient::eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp )
{
	static UFunction* pFnPostInitAnimTree = NULL;

	if ( ! pFnPostInitAnimTree )
		pFnPostInitAnimTree = (UFunction*) UObject::GObjObjects()->Data[ 4732 ];

	AWwiseMicPosOrient_eventPostInitAnimTree_Parms PostInitAnimTree_Parms;
	PostInitAnimTree_Parms.SkelComp = SkelComp;

	this->ProcessEvent ( pFnPostInitAnimTree, &PostInitAnimTree_Parms, NULL );
};

// Function Engine.Actor.RootMotionExtracted
// [0x00420900] ( FUNC_Event )
// Parameters infos:
// class USkeletalMeshComponent*  SkelComp                       ( CPF_Parm | CPF_EditInline )
// struct FBoneAtom               ExtractedRootMotionDelta       ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::eventRootMotionExtracted ( class USkeletalMeshComponent* SkelComp, struct FBoneAtom* ExtractedRootMotionDelta )
{
	static UFunction* pFnRootMotionExtracted = NULL;

	if ( ! pFnRootMotionExtracted )
		pFnRootMotionExtracted = (UFunction*) UObject::GObjObjects()->Data[ 4729 ];

	AWwiseMicPosOrient_eventRootMotionExtracted_Parms RootMotionExtracted_Parms;
	RootMotionExtracted_Parms.SkelComp = SkelComp;

	this->ProcessEvent ( pFnRootMotionExtracted, &RootMotionExtracted_Parms, NULL );

	if ( ExtractedRootMotionDelta )
		memcpy ( ExtractedRootMotionDelta, &RootMotionExtracted_Parms.ExtractedRootMotionDelta, 0x20 );
};

// Function Engine.Actor.RootMotionModeChanged
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class USkeletalMeshComponent*  SkelComp                       ( CPF_Parm | CPF_EditInline )

void AWwiseMicPosOrient::eventRootMotionModeChanged ( class USkeletalMeshComponent* SkelComp )
{
	static UFunction* pFnRootMotionModeChanged = NULL;

	if ( ! pFnRootMotionModeChanged )
		pFnRootMotionModeChanged = (UFunction*) UObject::GObjObjects()->Data[ 4727 ];

	AWwiseMicPosOrient_eventRootMotionModeChanged_Parms RootMotionModeChanged_Parms;
	RootMotionModeChanged_Parms.SkelComp = SkelComp;

	this->ProcessEvent ( pFnRootMotionModeChanged, &RootMotionModeChanged_Parms, NULL );
};

// Function Engine.Actor.PostRenderFor
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void AWwiseMicPosOrient::eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnPostRenderFor = NULL;

	if ( ! pFnPostRenderFor )
		pFnPostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 4722 ];

	AWwiseMicPosOrient_eventPostRenderFor_Parms PostRenderFor_Parms;
	PostRenderFor_Parms.PC = PC;
	PostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &PostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &PostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	this->ProcessEvent ( pFnPostRenderFor, &PostRenderFor_Parms, NULL );
};

// Function Engine.Actor.NativePostRenderFor
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void AWwiseMicPosOrient::NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnNativePostRenderFor = NULL;

	if ( ! pFnNativePostRenderFor )
		pFnNativePostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 4717 ];

	AWwiseMicPosOrient_execNativePostRenderFor_Parms NativePostRenderFor_Parms;
	NativePostRenderFor_Parms.PC = PC;
	NativePostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &NativePostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &NativePostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	pFnNativePostRenderFor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativePostRenderFor, &NativePostRenderFor_Parms, NULL );

	pFnNativePostRenderFor->FunctionFlags |= 0x400;
};

// Function Engine.Actor.SetHUDLocation
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// struct FVector                 NewHUDLocation                 ( CPF_Parm )

void AWwiseMicPosOrient::SetHUDLocation ( struct FVector NewHUDLocation )
{
	static UFunction* pFnSetHUDLocation = NULL;

	if ( ! pFnSetHUDLocation )
		pFnSetHUDLocation = (UFunction*) UObject::GObjObjects()->Data[ 4715 ];

	AWwiseMicPosOrient_execSetHUDLocation_Parms SetHUDLocation_Parms;
	memcpy ( &SetHUDLocation_Parms.NewHUDLocation, &NewHUDLocation, 0xC );

	pFnSetHUDLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHUDLocation, &SetHUDLocation_Parms, NULL );

	pFnSetHUDLocation->FunctionFlags |= 0x400;
};

// Function Engine.Actor.OnRanOver
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class ASVehicle*               Vehicle                        ( CPF_Parm )
// class UPrimitiveComponent*     RunOverComponent               ( CPF_Parm | CPF_EditInline )
// int                            WheelIndex                     ( CPF_Parm )

void AWwiseMicPosOrient::eventOnRanOver ( class ASVehicle* Vehicle, class UPrimitiveComponent* RunOverComponent, int WheelIndex )
{
	static UFunction* pFnOnRanOver = NULL;

	if ( ! pFnOnRanOver )
		pFnOnRanOver = (UFunction*) UObject::GObjObjects()->Data[ 4711 ];

	AWwiseMicPosOrient_eventOnRanOver_Parms OnRanOver_Parms;
	OnRanOver_Parms.Vehicle = Vehicle;
	OnRanOver_Parms.RunOverComponent = RunOverComponent;
	OnRanOver_Parms.WheelIndex = WheelIndex;

	this->ProcessEvent ( pFnOnRanOver, &OnRanOver_Parms, NULL );
};

// Function Engine.Actor.RigidBodyCollision
// [0x00420800] ( FUNC_Event )
// Parameters infos:
// class UPrimitiveComponent*     HitComponent                   ( CPF_Parm | CPF_EditInline )
// class UPrimitiveComponent*     OtherComponent                 ( CPF_Parm | CPF_EditInline )
// int                            ContactIndex                   ( CPF_Parm )
// struct FCollisionImpactData    RigidCollisionData             ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AWwiseMicPosOrient::eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData )
{
	static UFunction* pFnRigidBodyCollision = NULL;

	if ( ! pFnRigidBodyCollision )
		pFnRigidBodyCollision = (UFunction*) UObject::GObjObjects()->Data[ 4694 ];

	AWwiseMicPosOrient_eventRigidBodyCollision_Parms RigidBodyCollision_Parms;
	RigidBodyCollision_Parms.HitComponent = HitComponent;
	RigidBodyCollision_Parms.OtherComponent = OtherComponent;
	RigidBodyCollision_Parms.ContactIndex = ContactIndex;

	this->ProcessEvent ( pFnRigidBodyCollision, &RigidBodyCollision_Parms, NULL );

	if ( RigidCollisionData )
		memcpy ( RigidCollisionData, &RigidBodyCollision_Parms.RigidCollisionData, 0x24 );
};

// Function Engine.Actor.InterpolationChanged
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class USeqAct_Interp*          InterpAction                   ( CPF_Parm )

void AWwiseMicPosOrient::eventInterpolationChanged ( class USeqAct_Interp* InterpAction )
{
	static UFunction* pFnInterpolationChanged = NULL;

	if ( ! pFnInterpolationChanged )
		pFnInterpolationChanged = (UFunction*) UObject::GObjObjects()->Data[ 4692 ];

	AWwiseMicPosOrient_eventInterpolationChanged_Parms InterpolationChanged_Parms;
	InterpolationChanged_Parms.InterpAction = InterpAction;

	this->ProcessEvent ( pFnInterpolationChanged, &InterpolationChanged_Parms, NULL );
};

// Function Engine.Actor.InterpolationFinished
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class USeqAct_Interp*          InterpAction                   ( CPF_Parm )

void AWwiseMicPosOrient::eventInterpolationFinished ( class USeqAct_Interp* InterpAction )
{
	static UFunction* pFnInterpolationFinished = NULL;

	if ( ! pFnInterpolationFinished )
		pFnInterpolationFinished = (UFunction*) UObject::GObjObjects()->Data[ 4690 ];

	AWwiseMicPosOrient_eventInterpolationFinished_Parms InterpolationFinished_Parms;
	InterpolationFinished_Parms.InterpAction = InterpAction;

	this->ProcessEvent ( pFnInterpolationFinished, &InterpolationFinished_Parms, NULL );
};

// Function Engine.Actor.InterpolationStarted
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class USeqAct_Interp*          InterpAction                   ( CPF_Parm )
// class UInterpGroupInst*        GroupInst                      ( CPF_Parm )

void AWwiseMicPosOrient::eventInterpolationStarted ( class USeqAct_Interp* InterpAction, class UInterpGroupInst* GroupInst )
{
	static UFunction* pFnInterpolationStarted = NULL;

	if ( ! pFnInterpolationStarted )
		pFnInterpolationStarted = (UFunction*) UObject::GObjObjects()->Data[ 4687 ];

	AWwiseMicPosOrient_eventInterpolationStarted_Parms InterpolationStarted_Parms;
	InterpolationStarted_Parms.InterpAction = InterpAction;
	InterpolationStarted_Parms.GroupInst = GroupInst;

	this->ProcessEvent ( pFnInterpolationStarted, &InterpolationStarted_Parms, NULL );
};

// Function Engine.Actor.PickedUpBy
// [0x00020000] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void AWwiseMicPosOrient::PickedUpBy ( class APawn* P )
{
	static UFunction* pFnPickedUpBy = NULL;

	if ( ! pFnPickedUpBy )
		pFnPickedUpBy = (UFunction*) UObject::GObjObjects()->Data[ 4685 ];

	AWwiseMicPosOrient_execPickedUpBy_Parms PickedUpBy_Parms;
	PickedUpBy_Parms.P = P;

	this->ProcessEvent ( pFnPickedUpBy, &PickedUpBy_Parms, NULL );
};

// Function Engine.Actor.SpawnedByKismet
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventSpawnedByKismet ( )
{
	static UFunction* pFnSpawnedByKismet = NULL;

	if ( ! pFnSpawnedByKismet )
		pFnSpawnedByKismet = (UFunction*) UObject::GObjObjects()->Data[ 4684 ];

	AWwiseMicPosOrient_eventSpawnedByKismet_Parms SpawnedByKismet_Parms;

	this->ProcessEvent ( pFnSpawnedByKismet, &SpawnedByKismet_Parms, NULL );
};

// Function Engine.Actor.GetTargetLocation
// [0x00024500] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  RequestedBy                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bRequestAlternateLoc           ( CPF_OptionalParm | CPF_Parm )

struct FVector AWwiseMicPosOrient::GetTargetLocation ( class AActor* RequestedBy, unsigned long bRequestAlternateLoc )
{
	static UFunction* pFnGetTargetLocation = NULL;

	if ( ! pFnGetTargetLocation )
		pFnGetTargetLocation = (UFunction*) UObject::GObjObjects()->Data[ 4680 ];

	AWwiseMicPosOrient_execGetTargetLocation_Parms GetTargetLocation_Parms;
	GetTargetLocation_Parms.RequestedBy = RequestedBy;
	GetTargetLocation_Parms.bRequestAlternateLoc = bRequestAlternateLoc;

	pFnGetTargetLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTargetLocation, &GetTargetLocation_Parms, NULL );

	pFnGetTargetLocation->FunctionFlags |= 0x400;

	return GetTargetLocation_Parms.ReturnValue;
};

// Function Engine.Actor.FindGoodEndView
// [0x00420102] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// struct FRotator                GoodRotation                   ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::FindGoodEndView ( class APlayerController* PC, struct FRotator* GoodRotation )
{
	static UFunction* pFnFindGoodEndView = NULL;

	if ( ! pFnFindGoodEndView )
		pFnFindGoodEndView = (UFunction*) UObject::GObjObjects()->Data[ 4677 ];

	AWwiseMicPosOrient_execFindGoodEndView_Parms FindGoodEndView_Parms;
	FindGoodEndView_Parms.PC = PC;

	this->ProcessEvent ( pFnFindGoodEndView, &FindGoodEndView_Parms, NULL );

	if ( GoodRotation )
		memcpy ( GoodRotation, &FindGoodEndView_Parms.GoodRotation, 0xC );
};

// Function Engine.Actor.NotifyLocalPlayerTeamReceived
// [0x00020100] 
// Parameters infos:

void AWwiseMicPosOrient::NotifyLocalPlayerTeamReceived ( )
{
	static UFunction* pFnNotifyLocalPlayerTeamReceived = NULL;

	if ( ! pFnNotifyLocalPlayerTeamReceived )
		pFnNotifyLocalPlayerTeamReceived = (UFunction*) UObject::GObjObjects()->Data[ 4676 ];

	AWwiseMicPosOrient_execNotifyLocalPlayerTeamReceived_Parms NotifyLocalPlayerTeamReceived_Parms;

	this->ProcessEvent ( pFnNotifyLocalPlayerTeamReceived, &NotifyLocalPlayerTeamReceived_Parms, NULL );
};

// Function Engine.Actor.GetLocationStringFor
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )

struct FString AWwiseMicPosOrient::GetLocationStringFor ( class APlayerReplicationInfo* PRI )
{
	static UFunction* pFnGetLocationStringFor = NULL;

	if ( ! pFnGetLocationStringFor )
		pFnGetLocationStringFor = (UFunction*) UObject::GObjObjects()->Data[ 4673 ];

	AWwiseMicPosOrient_execGetLocationStringFor_Parms GetLocationStringFor_Parms;
	GetLocationStringFor_Parms.PRI = PRI;

	this->ProcessEvent ( pFnGetLocationStringFor, &GetLocationStringFor_Parms, NULL );

	return GetLocationStringFor_Parms.ReturnValue;
};

// Function Engine.Actor.ScriptGetTeamNum
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AWwiseMicPosOrient::eventScriptGetTeamNum ( )
{
	static UFunction* pFnScriptGetTeamNum = NULL;

	if ( ! pFnScriptGetTeamNum )
		pFnScriptGetTeamNum = (UFunction*) UObject::GObjObjects()->Data[ 4671 ];

	AWwiseMicPosOrient_eventScriptGetTeamNum_Parms ScriptGetTeamNum_Parms;

	this->ProcessEvent ( pFnScriptGetTeamNum, &ScriptGetTeamNum_Parms, NULL );

	return ScriptGetTeamNum_Parms.ReturnValue;
};

// Function Engine.Actor.GetTeamNum
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AWwiseMicPosOrient::GetTeamNum ( )
{
	static UFunction* pFnGetTeamNum = NULL;

	if ( ! pFnGetTeamNum )
		pFnGetTeamNum = (UFunction*) UObject::GObjObjects()->Data[ 4669 ];

	AWwiseMicPosOrient_execGetTeamNum_Parms GetTeamNum_Parms;

	pFnGetTeamNum->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTeamNum, &GetTeamNum_Parms, NULL );

	pFnGetTeamNum->FunctionFlags |= 0x400;

	return GetTeamNum_Parms.ReturnValue;
};

// Function Engine.Actor.PawnBaseDied
// [0x00020000] 
// Parameters infos:

void AWwiseMicPosOrient::PawnBaseDied ( )
{
	static UFunction* pFnPawnBaseDied = NULL;

	if ( ! pFnPawnBaseDied )
		pFnPawnBaseDied = (UFunction*) UObject::GObjObjects()->Data[ 4668 ];

	AWwiseMicPosOrient_execPawnBaseDied_Parms PawnBaseDied_Parms;

	this->ProcessEvent ( pFnPawnBaseDied, &PawnBaseDied_Parms, NULL );
};

// Function Engine.Actor.IsPlayerOwned
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMicPosOrient::IsPlayerOwned ( )
{
	static UFunction* pFnIsPlayerOwned = NULL;

	if ( ! pFnIsPlayerOwned )
		pFnIsPlayerOwned = (UFunction*) UObject::GObjObjects()->Data[ 4666 ];

	AWwiseMicPosOrient_execIsPlayerOwned_Parms IsPlayerOwned_Parms;

	pFnIsPlayerOwned->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPlayerOwned, &IsPlayerOwned_Parms, NULL );

	pFnIsPlayerOwned->FunctionFlags |= 0x400;

	return IsPlayerOwned_Parms.ReturnValue;
};

// Function Engine.Actor.GetActorEyesViewPoint
// [0x00420902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 out_Location                   ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_rotation                   ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::eventGetActorEyesViewPoint ( struct FVector* out_Location, struct FRotator* out_rotation )
{
	static UFunction* pFnGetActorEyesViewPoint = NULL;

	if ( ! pFnGetActorEyesViewPoint )
		pFnGetActorEyesViewPoint = (UFunction*) UObject::GObjObjects()->Data[ 4663 ];

	AWwiseMicPosOrient_eventGetActorEyesViewPoint_Parms GetActorEyesViewPoint_Parms;

	this->ProcessEvent ( pFnGetActorEyesViewPoint, &GetActorEyesViewPoint_Parms, NULL );

	if ( out_Location )
		memcpy ( out_Location, &GetActorEyesViewPoint_Parms.out_Location, 0xC );

	if ( out_rotation )
		memcpy ( out_rotation, &GetActorEyesViewPoint_Parms.out_rotation, 0xC );
};

// Function Engine.Actor.IsStationary
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMicPosOrient::IsStationary ( )
{
	static UFunction* pFnIsStationary = NULL;

	if ( ! pFnIsStationary )
		pFnIsStationary = (UFunction*) UObject::GObjObjects()->Data[ 4661 ];

	AWwiseMicPosOrient_execIsStationary_Parms IsStationary_Parms;

	this->ProcessEvent ( pFnIsStationary, &IsStationary_Parms, NULL );

	return IsStationary_Parms.ReturnValue;
};

// Function Engine.Actor.GetActorFaceFXAsset
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UFaceFXAsset*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UFaceFXAsset* AWwiseMicPosOrient::eventGetActorFaceFXAsset ( )
{
	static UFunction* pFnGetActorFaceFXAsset = NULL;

	if ( ! pFnGetActorFaceFXAsset )
		pFnGetActorFaceFXAsset = (UFunction*) UObject::GObjObjects()->Data[ 4659 ];

	AWwiseMicPosOrient_eventGetActorFaceFXAsset_Parms GetActorFaceFXAsset_Parms;

	this->ProcessEvent ( pFnGetActorFaceFXAsset, &GetActorFaceFXAsset_Parms, NULL );

	return GetActorFaceFXAsset_Parms.ReturnValue;
};

// Function Engine.Actor.CanActorPlayFaceFXAnim
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMicPosOrient::CanActorPlayFaceFXAnim ( )
{
	static UFunction* pFnCanActorPlayFaceFXAnim = NULL;

	if ( ! pFnCanActorPlayFaceFXAnim )
		pFnCanActorPlayFaceFXAnim = (UFunction*) UObject::GObjObjects()->Data[ 4657 ];

	AWwiseMicPosOrient_execCanActorPlayFaceFXAnim_Parms CanActorPlayFaceFXAnim_Parms;

	this->ProcessEvent ( pFnCanActorPlayFaceFXAnim, &CanActorPlayFaceFXAnim_Parms, NULL );

	return CanActorPlayFaceFXAnim_Parms.ReturnValue;
};

// Function Engine.Actor.IsActorPlayingFaceFXAnim
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMicPosOrient::IsActorPlayingFaceFXAnim ( )
{
	static UFunction* pFnIsActorPlayingFaceFXAnim = NULL;

	if ( ! pFnIsActorPlayingFaceFXAnim )
		pFnIsActorPlayingFaceFXAnim = (UFunction*) UObject::GObjObjects()->Data[ 4655 ];

	AWwiseMicPosOrient_execIsActorPlayingFaceFXAnim_Parms IsActorPlayingFaceFXAnim_Parms;

	this->ProcessEvent ( pFnIsActorPlayingFaceFXAnim, &IsActorPlayingFaceFXAnim_Parms, NULL );

	return IsActorPlayingFaceFXAnim_Parms.ReturnValue;
};

// Function Engine.Actor.SetSkelControlScale
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FName                   SkelControlName                ( CPF_Parm )
// float                          Scale                          ( CPF_Parm )

void AWwiseMicPosOrient::eventSetSkelControlScale ( struct FName SkelControlName, float Scale )
{
	static UFunction* pFnSetSkelControlScale = NULL;

	if ( ! pFnSetSkelControlScale )
		pFnSetSkelControlScale = (UFunction*) UObject::GObjObjects()->Data[ 4652 ];

	AWwiseMicPosOrient_eventSetSkelControlScale_Parms SetSkelControlScale_Parms;
	memcpy ( &SetSkelControlScale_Parms.SkelControlName, &SkelControlName, 0x8 );
	SetSkelControlScale_Parms.Scale = Scale;

	this->ProcessEvent ( pFnSetSkelControlScale, &SetSkelControlScale_Parms, NULL );
};

// Function Engine.Actor.SetMorphWeight
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FName                   MorphNodeName                  ( CPF_Parm )
// float                          MorphWeight                    ( CPF_Parm )

void AWwiseMicPosOrient::eventSetMorphWeight ( struct FName MorphNodeName, float MorphWeight )
{
	static UFunction* pFnSetMorphWeight = NULL;

	if ( ! pFnSetMorphWeight )
		pFnSetMorphWeight = (UFunction*) UObject::GObjObjects()->Data[ 4649 ];

	AWwiseMicPosOrient_eventSetMorphWeight_Parms SetMorphWeight_Parms;
	memcpy ( &SetMorphWeight_Parms.MorphNodeName, &MorphNodeName, 0x8 );
	SetMorphWeight_Parms.MorphWeight = MorphWeight;

	this->ProcessEvent ( pFnSetMorphWeight, &SetMorphWeight_Parms, NULL );
};

// Function Engine.Actor.StopActorFaceFXAnim
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventStopActorFaceFXAnim ( )
{
	static UFunction* pFnStopActorFaceFXAnim = NULL;

	if ( ! pFnStopActorFaceFXAnim )
		pFnStopActorFaceFXAnim = (UFunction*) UObject::GObjObjects()->Data[ 4648 ];

	AWwiseMicPosOrient_eventStopActorFaceFXAnim_Parms StopActorFaceFXAnim_Parms;

	this->ProcessEvent ( pFnStopActorFaceFXAnim, &StopActorFaceFXAnim_Parms, NULL );
};

// Function Engine.Actor.PlayActorFaceFXAnim
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFaceFXAnimSet*          AnimSet                        ( CPF_Parm )
// struct FString                 GroupName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SeqName                        ( CPF_Parm | CPF_NeedCtorLink )
// class USoundCue*               SoundCueToPlay                 ( CPF_Parm )

bool AWwiseMicPosOrient::eventPlayActorFaceFXAnim ( class UFaceFXAnimSet* AnimSet, struct FString GroupName, struct FString SeqName, class USoundCue* SoundCueToPlay )
{
	static UFunction* pFnPlayActorFaceFXAnim = NULL;

	if ( ! pFnPlayActorFaceFXAnim )
		pFnPlayActorFaceFXAnim = (UFunction*) UObject::GObjObjects()->Data[ 4642 ];

	AWwiseMicPosOrient_eventPlayActorFaceFXAnim_Parms PlayActorFaceFXAnim_Parms;
	PlayActorFaceFXAnim_Parms.AnimSet = AnimSet;
	memcpy ( &PlayActorFaceFXAnim_Parms.GroupName, &GroupName, 0xC );
	memcpy ( &PlayActorFaceFXAnim_Parms.SeqName, &SeqName, 0xC );
	PlayActorFaceFXAnim_Parms.SoundCueToPlay = SoundCueToPlay;

	this->ProcessEvent ( pFnPlayActorFaceFXAnim, &PlayActorFaceFXAnim_Parms, NULL );

	return PlayActorFaceFXAnim_Parms.ReturnValue;
};

// Function Engine.Actor.FinishMovementControl
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UInterpGroup*            InInterpGroup                  ( CPF_Parm )

void AWwiseMicPosOrient::eventFinishMovementControl ( class UInterpGroup* InInterpGroup )
{
	static UFunction* pFnFinishMovementControl = NULL;

	if ( ! pFnFinishMovementControl )
		pFnFinishMovementControl = (UFunction*) UObject::GObjObjects()->Data[ 4640 ];

	AWwiseMicPosOrient_eventFinishMovementControl_Parms FinishMovementControl_Parms;
	FinishMovementControl_Parms.InInterpGroup = InInterpGroup;

	this->ProcessEvent ( pFnFinishMovementControl, &FinishMovementControl_Parms, NULL );
};

// Function Engine.Actor.BeginMovementControl
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UInterpGroup*            InInterpGroup                  ( CPF_Parm )

void AWwiseMicPosOrient::eventBeginMovementControl ( class UInterpGroup* InInterpGroup )
{
	static UFunction* pFnBeginMovementControl = NULL;

	if ( ! pFnBeginMovementControl )
		pFnBeginMovementControl = (UFunction*) UObject::GObjObjects()->Data[ 4637 ];

	AWwiseMicPosOrient_eventBeginMovementControl_Parms BeginMovementControl_Parms;
	BeginMovementControl_Parms.InInterpGroup = InInterpGroup;

	this->ProcessEvent ( pFnBeginMovementControl, &BeginMovementControl_Parms, NULL );
};

// Function Engine.Actor.FinishAnimControl
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UInterpGroup*            InInterpGroup                  ( CPF_Parm )

void AWwiseMicPosOrient::eventFinishAnimControl ( class UInterpGroup* InInterpGroup )
{
	static UFunction* pFnFinishAnimControl = NULL;

	if ( ! pFnFinishAnimControl )
		pFnFinishAnimControl = (UFunction*) UObject::GObjObjects()->Data[ 4635 ];

	AWwiseMicPosOrient_eventFinishAnimControl_Parms FinishAnimControl_Parms;
	FinishAnimControl_Parms.InInterpGroup = InInterpGroup;

	this->ProcessEvent ( pFnFinishAnimControl, &FinishAnimControl_Parms, NULL );
};

// Function Engine.Actor.SetAnimPosition
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FName                   SlotName                       ( CPF_Parm )
// int                            ChannelIndex                   ( CPF_Parm )
// struct FName                   InAnimSeqName                  ( CPF_Parm )
// float                          InPosition                     ( CPF_Parm )
// unsigned long                  bFireNotifies                  ( CPF_Parm )
// unsigned long                  bLooping                       ( CPF_Parm )

void AWwiseMicPosOrient::eventSetAnimPosition ( struct FName SlotName, int ChannelIndex, struct FName InAnimSeqName, float InPosition, unsigned long bFireNotifies, unsigned long bLooping )
{
	static UFunction* pFnSetAnimPosition = NULL;

	if ( ! pFnSetAnimPosition )
		pFnSetAnimPosition = (UFunction*) UObject::GObjObjects()->Data[ 4628 ];

	AWwiseMicPosOrient_eventSetAnimPosition_Parms SetAnimPosition_Parms;
	memcpy ( &SetAnimPosition_Parms.SlotName, &SlotName, 0x8 );
	SetAnimPosition_Parms.ChannelIndex = ChannelIndex;
	memcpy ( &SetAnimPosition_Parms.InAnimSeqName, &InAnimSeqName, 0x8 );
	SetAnimPosition_Parms.InPosition = InPosition;
	SetAnimPosition_Parms.bFireNotifies = bFireNotifies;
	SetAnimPosition_Parms.bLooping = bLooping;

	this->ProcessEvent ( pFnSetAnimPosition, &SetAnimPosition_Parms, NULL );
};

// Function Engine.Actor.BeginAnimControl
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UInterpGroup*            InInterpGroup                  ( CPF_Parm )

void AWwiseMicPosOrient::eventBeginAnimControl ( class UInterpGroup* InInterpGroup )
{
	static UFunction* pFnBeginAnimControl = NULL;

	if ( ! pFnBeginAnimControl )
		pFnBeginAnimControl = (UFunction*) UObject::GObjObjects()->Data[ 4626 ];

	AWwiseMicPosOrient_eventBeginAnimControl_Parms BeginAnimControl_Parms;
	BeginAnimControl_Parms.InInterpGroup = InInterpGroup;

	this->ProcessEvent ( pFnBeginAnimControl, &BeginAnimControl_Parms, NULL );
};

// Function Engine.Actor.OnAnimPlay
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )

void AWwiseMicPosOrient::eventOnAnimPlay ( class UAnimNodeSequence* SeqNode )
{
	static UFunction* pFnOnAnimPlay = NULL;

	if ( ! pFnOnAnimPlay )
		pFnOnAnimPlay = (UFunction*) UObject::GObjObjects()->Data[ 4624 ];

	AWwiseMicPosOrient_eventOnAnimPlay_Parms OnAnimPlay_Parms;
	OnAnimPlay_Parms.SeqNode = SeqNode;

	this->ProcessEvent ( pFnOnAnimPlay, &OnAnimPlay_Parms, NULL );
};

// Function Engine.Actor.OnAnimEnd
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void AWwiseMicPosOrient::eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 4620 ];

	AWwiseMicPosOrient_eventOnAnimEnd_Parms OnAnimEnd_Parms;
	OnAnimEnd_Parms.SeqNode = SeqNode;
	OnAnimEnd_Parms.PlayedTime = PlayedTime;
	OnAnimEnd_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function Engine.Actor.DoKismetAttachment
// [0x00020002] 
// Parameters infos:
// class AActor*                  Attachment                     ( CPF_Parm )
// class USeqAct_AttachToActor*   Action                         ( CPF_Parm )

void AWwiseMicPosOrient::DoKismetAttachment ( class AActor* Attachment, class USeqAct_AttachToActor* Action )
{
	static UFunction* pFnDoKismetAttachment = NULL;

	if ( ! pFnDoKismetAttachment )
		pFnDoKismetAttachment = (UFunction*) UObject::GObjObjects()->Data[ 4612 ];

	AWwiseMicPosOrient_execDoKismetAttachment_Parms DoKismetAttachment_Parms;
	DoKismetAttachment_Parms.Attachment = Attachment;
	DoKismetAttachment_Parms.Action = Action;

	this->ProcessEvent ( pFnDoKismetAttachment, &DoKismetAttachment_Parms, NULL );
};

// Function Engine.Actor.OnAttachToActor
// [0x00020002] 
// Parameters infos:
// class USeqAct_AttachToActor*   Action                         ( CPF_Parm )

void AWwiseMicPosOrient::OnAttachToActor ( class USeqAct_AttachToActor* Action )
{
	static UFunction* pFnOnAttachToActor = NULL;

	if ( ! pFnOnAttachToActor )
		pFnOnAttachToActor = (UFunction*) UObject::GObjObjects()->Data[ 4604 ];

	AWwiseMicPosOrient_execOnAttachToActor_Parms OnAttachToActor_Parms;
	OnAttachToActor_Parms.Action = Action;

	this->ProcessEvent ( pFnOnAttachToActor, &OnAttachToActor_Parms, NULL );
};

// Function Engine.Actor.BioEnqueueDoKismetAttachment
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class AActor*                  InAttachment                   ( CPF_Parm )
// unsigned long                  bInDetach                      ( CPF_Parm )
// unsigned long                  bInHardAttach                  ( CPF_Parm )
// struct FName                   InBoneName                     ( CPF_Parm )
// unsigned long                  bInUseRelativeOffset           ( CPF_Parm )
// struct FVector                 InRelativeOffset               ( CPF_Parm )
// unsigned long                  bInUseRelativeRotation         ( CPF_Parm )
// struct FRotator                InRelativeRotation             ( CPF_Parm )

void AWwiseMicPosOrient::BioEnqueueDoKismetAttachment ( class AActor* InAttachment, unsigned long bInDetach, unsigned long bInHardAttach, struct FName InBoneName, unsigned long bInUseRelativeOffset, struct FVector InRelativeOffset, unsigned long bInUseRelativeRotation, struct FRotator InRelativeRotation )
{
	static UFunction* pFnBioEnqueueDoKismetAttachment = NULL;

	if ( ! pFnBioEnqueueDoKismetAttachment )
		pFnBioEnqueueDoKismetAttachment = (UFunction*) UObject::GObjObjects()->Data[ 4595 ];

	AWwiseMicPosOrient_execBioEnqueueDoKismetAttachment_Parms BioEnqueueDoKismetAttachment_Parms;
	BioEnqueueDoKismetAttachment_Parms.InAttachment = InAttachment;
	BioEnqueueDoKismetAttachment_Parms.bInDetach = bInDetach;
	BioEnqueueDoKismetAttachment_Parms.bInHardAttach = bInHardAttach;
	memcpy ( &BioEnqueueDoKismetAttachment_Parms.InBoneName, &InBoneName, 0x8 );
	BioEnqueueDoKismetAttachment_Parms.bInUseRelativeOffset = bInUseRelativeOffset;
	memcpy ( &BioEnqueueDoKismetAttachment_Parms.InRelativeOffset, &InRelativeOffset, 0xC );
	BioEnqueueDoKismetAttachment_Parms.bInUseRelativeRotation = bInUseRelativeRotation;
	memcpy ( &BioEnqueueDoKismetAttachment_Parms.InRelativeRotation, &InRelativeRotation, 0xC );

	pFnBioEnqueueDoKismetAttachment->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBioEnqueueDoKismetAttachment, &BioEnqueueDoKismetAttachment_Parms, NULL );

	pFnBioEnqueueDoKismetAttachment->FunctionFlags |= 0x400;
};

// Function Engine.Actor.BioDoKismetAttachment
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  InAttachment                   ( CPF_Parm )
// unsigned long                  bInDetach                      ( CPF_Parm )
// unsigned long                  bInHardAttach                  ( CPF_Parm )
// struct FName                   InBoneName                     ( CPF_Parm )
// unsigned long                  bInUseRelativeOffset           ( CPF_Parm )
// struct FVector                 InRelativeOffset               ( CPF_Parm )
// unsigned long                  bInUseRelativeRotation         ( CPF_Parm )
// struct FRotator                InRelativeRotation             ( CPF_Parm )

void AWwiseMicPosOrient::eventBioDoKismetAttachment ( class AActor* InAttachment, unsigned long bInDetach, unsigned long bInHardAttach, struct FName InBoneName, unsigned long bInUseRelativeOffset, struct FVector InRelativeOffset, unsigned long bInUseRelativeRotation, struct FRotator InRelativeRotation )
{
	static UFunction* pFnBioDoKismetAttachment = NULL;

	if ( ! pFnBioDoKismetAttachment )
		pFnBioDoKismetAttachment = (UFunction*) UObject::GObjObjects()->Data[ 4577 ];

	AWwiseMicPosOrient_eventBioDoKismetAttachment_Parms BioDoKismetAttachment_Parms;
	BioDoKismetAttachment_Parms.InAttachment = InAttachment;
	BioDoKismetAttachment_Parms.bInDetach = bInDetach;
	BioDoKismetAttachment_Parms.bInHardAttach = bInHardAttach;
	memcpy ( &BioDoKismetAttachment_Parms.InBoneName, &InBoneName, 0x8 );
	BioDoKismetAttachment_Parms.bInUseRelativeOffset = bInUseRelativeOffset;
	memcpy ( &BioDoKismetAttachment_Parms.InRelativeOffset, &InRelativeOffset, 0xC );
	BioDoKismetAttachment_Parms.bInUseRelativeRotation = bInUseRelativeRotation;
	memcpy ( &BioDoKismetAttachment_Parms.InRelativeRotation, &InRelativeRotation, 0xC );

	this->ProcessEvent ( pFnBioDoKismetAttachment, &BioDoKismetAttachment_Parms, NULL );
};

// Function Engine.Actor.OnToggleHidden
// [0x00020102] 
// Parameters infos:
// class USeqAct_ToggleHidden*    Action                         ( CPF_Parm )

void AWwiseMicPosOrient::OnToggleHidden ( class USeqAct_ToggleHidden* Action )
{
	static UFunction* pFnOnToggleHidden = NULL;

	if ( ! pFnOnToggleHidden )
		pFnOnToggleHidden = (UFunction*) UObject::GObjObjects()->Data[ 4569 ];

	AWwiseMicPosOrient_execOnToggleHidden_Parms OnToggleHidden_Parms;
	OnToggleHidden_Parms.Action = Action;

	this->ProcessEvent ( pFnOnToggleHidden, &OnToggleHidden_Parms, NULL );
};

// Function Engine.Actor.OnChangeCollision
// [0x00020002] 
// Parameters infos:
// class USeqAct_ChangeCollision* Action                         ( CPF_Parm )

void AWwiseMicPosOrient::OnChangeCollision ( class USeqAct_ChangeCollision* Action )
{
	static UFunction* pFnOnChangeCollision = NULL;

	if ( ! pFnOnChangeCollision )
		pFnOnChangeCollision = (UFunction*) UObject::GObjObjects()->Data[ 4559 ];

	AWwiseMicPosOrient_execOnChangeCollision_Parms OnChangeCollision_Parms;
	OnChangeCollision_Parms.Action = Action;

	this->ProcessEvent ( pFnOnChangeCollision, &OnChangeCollision_Parms, NULL );
};

// Function Engine.Actor.OnSetPhysics
// [0x00020102] 
// Parameters infos:
// class USeqAct_SetPhysics*      Action                         ( CPF_Parm )

void AWwiseMicPosOrient::OnSetPhysics ( class USeqAct_SetPhysics* Action )
{
	static UFunction* pFnOnSetPhysics = NULL;

	if ( ! pFnOnSetPhysics )
		pFnOnSetPhysics = (UFunction*) UObject::GObjObjects()->Data[ 4555 ];

	AWwiseMicPosOrient_execOnSetPhysics_Parms OnSetPhysics_Parms;
	OnSetPhysics_Parms.Action = Action;

	this->ProcessEvent ( pFnOnSetPhysics, &OnSetPhysics_Parms, NULL );
};

// Function Engine.Actor.OnSetBlockRigidBody
// [0x00020102] 
// Parameters infos:
// class USeqAct_SetBlockRigidBody* Action                         ( CPF_Parm )

void AWwiseMicPosOrient::OnSetBlockRigidBody ( class USeqAct_SetBlockRigidBody* Action )
{
	static UFunction* pFnOnSetBlockRigidBody = NULL;

	if ( ! pFnOnSetBlockRigidBody )
		pFnOnSetBlockRigidBody = (UFunction*) UObject::GObjObjects()->Data[ 4550 ];

	AWwiseMicPosOrient_execOnSetBlockRigidBody_Parms OnSetBlockRigidBody_Parms;
	OnSetBlockRigidBody_Parms.Action = Action;

	this->ProcessEvent ( pFnOnSetBlockRigidBody, &OnSetBlockRigidBody_Parms, NULL );
};

// Function Engine.Actor.OnSetVelocity
// [0x00020102] 
// Parameters infos:
// class USeqAct_SetVelocity*     Action                         ( CPF_Parm )

void AWwiseMicPosOrient::OnSetVelocity ( class USeqAct_SetVelocity* Action )
{
	static UFunction* pFnOnSetVelocity = NULL;

	if ( ! pFnOnSetVelocity )
		pFnOnSetVelocity = (UFunction*) UObject::GObjObjects()->Data[ 4541 ];

	AWwiseMicPosOrient_execOnSetVelocity_Parms OnSetVelocity_Parms;
	OnSetVelocity_Parms.Action = Action;

	this->ProcessEvent ( pFnOnSetVelocity, &OnSetVelocity_Parms, NULL );
};

// Function Engine.Actor.OnTeleport
// [0x00020102] 
// Parameters infos:
// class USeqAct_Teleport*        Action                         ( CPF_Parm )

void AWwiseMicPosOrient::OnTeleport ( class USeqAct_Teleport* Action )
{
	static UFunction* pFnOnTeleport = NULL;

	if ( ! pFnOnTeleport )
		pFnOnTeleport = (UFunction*) UObject::GObjObjects()->Data[ 4530 ];

	AWwiseMicPosOrient_execOnTeleport_Parms OnTeleport_Parms;
	OnTeleport_Parms.Action = Action;

	this->ProcessEvent ( pFnOnTeleport, &OnTeleport_Parms, NULL );
};

// Function Engine.Actor.OnModifyHealth
// [0x00020102] 
// Parameters infos:
// class USeqAct_ModifyHealth*    Action                         ( CPF_Parm )

void AWwiseMicPosOrient::OnModifyHealth ( class USeqAct_ModifyHealth* Action )
{
	static UFunction* pFnOnModifyHealth = NULL;

	if ( ! pFnOnModifyHealth )
		pFnOnModifyHealth = (UFunction*) UObject::GObjObjects()->Data[ 4521 ];

	AWwiseMicPosOrient_execOnModifyHealth_Parms OnModifyHealth_Parms;
	OnModifyHealth_Parms.Action = Action;

	this->ProcessEvent ( pFnOnModifyHealth, &OnModifyHealth_Parms, NULL );
};

// Function Engine.Actor.BlockForTextureStreaming
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseMicPosOrient::BlockForTextureStreaming ( )
{
	static UFunction* pFnBlockForTextureStreaming = NULL;

	if ( ! pFnBlockForTextureStreaming )
		pFnBlockForTextureStreaming = (UFunction*) UObject::GObjObjects()->Data[ 4520 ];

	AWwiseMicPosOrient_execBlockForTextureStreaming_Parms BlockForTextureStreaming_Parms;

	pFnBlockForTextureStreaming->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBlockForTextureStreaming, &BlockForTextureStreaming_Parms, NULL );

	pFnBlockForTextureStreaming->FunctionFlags |= 0x400;
};

// Function Engine.Actor.TexturePrestreamIsRequired
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMicPosOrient::TexturePrestreamIsRequired ( )
{
	static UFunction* pFnTexturePrestreamIsRequired = NULL;

	if ( ! pFnTexturePrestreamIsRequired )
		pFnTexturePrestreamIsRequired = (UFunction*) UObject::GObjObjects()->Data[ 4518 ];

	AWwiseMicPosOrient_execTexturePrestreamIsRequired_Parms TexturePrestreamIsRequired_Parms;

	pFnTexturePrestreamIsRequired->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTexturePrestreamIsRequired, &TexturePrestreamIsRequired_Parms, NULL );

	pFnTexturePrestreamIsRequired->FunctionFlags |= 0x400;

	return TexturePrestreamIsRequired_Parms.ReturnValue;
};

// Function Engine.Actor.PrestreamTextures
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// float                          Seconds                        ( CPF_Parm )
// unsigned long                  bEnableStreaming               ( CPF_Parm )
// int                            CinematicTextureGroups         ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::PrestreamTextures ( float Seconds, unsigned long bEnableStreaming, int CinematicTextureGroups )
{
	static UFunction* pFnPrestreamTextures = NULL;

	if ( ! pFnPrestreamTextures )
		pFnPrestreamTextures = (UFunction*) UObject::GObjObjects()->Data[ 4514 ];

	AWwiseMicPosOrient_execPrestreamTextures_Parms PrestreamTextures_Parms;
	PrestreamTextures_Parms.Seconds = Seconds;
	PrestreamTextures_Parms.bEnableStreaming = bEnableStreaming;
	PrestreamTextures_Parms.CinematicTextureGroups = CinematicTextureGroups;

	pFnPrestreamTextures->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPrestreamTextures, &PrestreamTextures_Parms, NULL );

	pFnPrestreamTextures->FunctionFlags |= 0x400;
};

// Function Engine.Actor.ShutDown
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventShutDown ( )
{
	static UFunction* pFnShutDown = NULL;

	if ( ! pFnShutDown )
		pFnShutDown = (UFunction*) UObject::GObjObjects()->Data[ 4510 ];

	AWwiseMicPosOrient_eventShutDown_Parms ShutDown_Parms;

	this->ProcessEvent ( pFnShutDown, &ShutDown_Parms, NULL );
};

// Function Engine.Actor.SetNetUpdateTime
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          NewUpdateTime                  ( CPF_Parm )

void AWwiseMicPosOrient::SetNetUpdateTime ( float NewUpdateTime )
{
	static UFunction* pFnSetNetUpdateTime = NULL;

	if ( ! pFnSetNetUpdateTime )
		pFnSetNetUpdateTime = (UFunction*) UObject::GObjObjects()->Data[ 4508 ];

	AWwiseMicPosOrient_execSetNetUpdateTime_Parms SetNetUpdateTime_Parms;
	SetNetUpdateTime_Parms.NewUpdateTime = NewUpdateTime;

	pFnSetNetUpdateTime->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetNetUpdateTime, &SetNetUpdateTime_Parms, NULL );

	pFnSetNetUpdateTime->FunctionFlags |= 0x400;
};

// Function Engine.Actor.ForceNetRelevant
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventForceNetRelevant ( )
{
	static UFunction* pFnForceNetRelevant = NULL;

	if ( ! pFnForceNetRelevant )
		pFnForceNetRelevant = (UFunction*) UObject::GObjObjects()->Data[ 4504 ];

	AWwiseMicPosOrient_eventForceNetRelevant_Parms ForceNetRelevant_Parms;

	this->ProcessEvent ( pFnForceNetRelevant, &ForceNetRelevant_Parms, NULL );
};

// Function Engine.Actor.OnDestroy
// [0x00020102] 
// Parameters infos:
// class USeqAct_Destroy*         Action                         ( CPF_Parm )

void AWwiseMicPosOrient::OnDestroy ( class USeqAct_Destroy* Action )
{
	static UFunction* pFnOnDestroy = NULL;

	if ( ! pFnOnDestroy )
		pFnOnDestroy = (UFunction*) UObject::GObjObjects()->Data[ 4496 ];

	AWwiseMicPosOrient_execOnDestroy_Parms OnDestroy_Parms;
	OnDestroy_Parms.Action = Action;

	this->ProcessEvent ( pFnOnDestroy, &OnDestroy_Parms, NULL );
};

// Function Engine.Actor.ClearLatentAction
// [0x00024103] ( FUNC_Final )
// Parameters infos:
// class UClass*                  actionClass                    ( CPF_Parm )
// unsigned long                  bAborted                       ( CPF_OptionalParm | CPF_Parm )
// class USeqAct_Latent*          exceptionAction                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bCancelled                     ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::ClearLatentAction ( class UClass* actionClass, unsigned long bAborted, class USeqAct_Latent* exceptionAction, unsigned long bCancelled )
{
	static UFunction* pFnClearLatentAction = NULL;

	if ( ! pFnClearLatentAction )
		pFnClearLatentAction = (UFunction*) UObject::GObjObjects()->Data[ 4489 ];

	AWwiseMicPosOrient_execClearLatentAction_Parms ClearLatentAction_Parms;
	ClearLatentAction_Parms.actionClass = actionClass;
	ClearLatentAction_Parms.bAborted = bAborted;
	ClearLatentAction_Parms.exceptionAction = exceptionAction;
	ClearLatentAction_Parms.bCancelled = bCancelled;

	this->ProcessEvent ( pFnClearLatentAction, &ClearLatentAction_Parms, NULL );
};

// Function Engine.Actor.FindEventsOfClass
// [0x00424103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  EventClass                     ( CPF_Parm )
// unsigned long                  bIncludeDisabled               ( CPF_OptionalParm | CPF_Parm )
// TArray< class USequenceEvent* > out_EventList                  ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AWwiseMicPosOrient::FindEventsOfClass ( class UClass* EventClass, unsigned long bIncludeDisabled, TArray< class USequenceEvent* >* out_EventList )
{
	static UFunction* pFnFindEventsOfClass = NULL;

	if ( ! pFnFindEventsOfClass )
		pFnFindEventsOfClass = (UFunction*) UObject::GObjObjects()->Data[ 4478 ];

	AWwiseMicPosOrient_execFindEventsOfClass_Parms FindEventsOfClass_Parms;
	FindEventsOfClass_Parms.EventClass = EventClass;
	FindEventsOfClass_Parms.bIncludeDisabled = bIncludeDisabled;

	this->ProcessEvent ( pFnFindEventsOfClass, &FindEventsOfClass_Parms, NULL );

	if ( out_EventList )
		memcpy ( out_EventList, &FindEventsOfClass_Parms.out_EventList, 0xC );

	return FindEventsOfClass_Parms.ReturnValue;
};

// Function Engine.Actor.ActivateEventClass
// [0x00424103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  InClass                        ( CPF_Parm )
// class AActor*                  inInstigator                   ( CPF_Parm )
// unsigned long                  bTest                          ( CPF_OptionalParm | CPF_Parm )
// TArray< class USequenceEvent* > EventList                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< int >                  ActivateIndices                ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< class USequenceEvent* > ActivatedEvents                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AWwiseMicPosOrient::ActivateEventClass ( class UClass* InClass, class AActor* inInstigator, unsigned long bTest, TArray< class USequenceEvent* >* EventList, TArray< int >* ActivateIndices, TArray< class USequenceEvent* >* ActivatedEvents )
{
	static UFunction* pFnActivateEventClass = NULL;

	if ( ! pFnActivateEventClass )
		pFnActivateEventClass = (UFunction*) UObject::GObjObjects()->Data[ 4447 ];

	AWwiseMicPosOrient_execActivateEventClass_Parms ActivateEventClass_Parms;
	ActivateEventClass_Parms.InClass = InClass;
	ActivateEventClass_Parms.inInstigator = inInstigator;
	ActivateEventClass_Parms.bTest = bTest;

	this->ProcessEvent ( pFnActivateEventClass, &ActivateEventClass_Parms, NULL );

	if ( EventList )
		memcpy ( EventList, &ActivateEventClass_Parms.EventList, 0xC );

	if ( ActivateIndices )
		memcpy ( ActivateIndices, &ActivateEventClass_Parms.ActivateIndices, 0xC );

	if ( ActivatedEvents )
		memcpy ( ActivatedEvents, &ActivateEventClass_Parms.ActivatedEvents, 0xC );

	return ActivateEventClass_Parms.ReturnValue;
};

// Function Engine.Actor.TriggerGlobalEventClass
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  InEventClass                   ( CPF_Parm )
// class AActor*                  inInstigator                   ( CPF_Parm )
// int                            ActivateIndex                  ( CPF_OptionalParm | CPF_Parm )

bool AWwiseMicPosOrient::TriggerGlobalEventClass ( class UClass* InEventClass, class AActor* inInstigator, int ActivateIndex )
{
	static UFunction* pFnTriggerGlobalEventClass = NULL;

	if ( ! pFnTriggerGlobalEventClass )
		pFnTriggerGlobalEventClass = (UFunction*) UObject::GObjObjects()->Data[ 4450 ];

	AWwiseMicPosOrient_execTriggerGlobalEventClass_Parms TriggerGlobalEventClass_Parms;
	TriggerGlobalEventClass_Parms.InEventClass = InEventClass;
	TriggerGlobalEventClass_Parms.inInstigator = inInstigator;
	TriggerGlobalEventClass_Parms.ActivateIndex = ActivateIndex;

	this->ProcessEvent ( pFnTriggerGlobalEventClass, &TriggerGlobalEventClass_Parms, NULL );

	return TriggerGlobalEventClass_Parms.ReturnValue;
};

// Function Engine.Actor.ReceivedNewEvent
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class USequenceEvent*          Evt                            ( CPF_Parm )

void AWwiseMicPosOrient::eventReceivedNewEvent ( class USequenceEvent* Evt )
{
	static UFunction* pFnReceivedNewEvent = NULL;

	if ( ! pFnReceivedNewEvent )
		pFnReceivedNewEvent = (UFunction*) UObject::GObjObjects()->Data[ 4448 ];

	AWwiseMicPosOrient_eventReceivedNewEvent_Parms ReceivedNewEvent_Parms;
	ReceivedNewEvent_Parms.Evt = Evt;

	this->ProcessEvent ( pFnReceivedNewEvent, &ReceivedNewEvent_Parms, NULL );
};

// Function Engine.Actor.TriggerEventClass
// [0x00424102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  InEventClass                   ( CPF_Parm )
// class AActor*                  inInstigator                   ( CPF_Parm )
// int                            ActivateIndex                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bTest                          ( CPF_OptionalParm | CPF_Parm )
// TArray< class USequenceEvent* > ActivatedEvents                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AWwiseMicPosOrient::TriggerEventClass ( class UClass* InEventClass, class AActor* inInstigator, int ActivateIndex, unsigned long bTest, TArray< class USequenceEvent* >* ActivatedEvents )
{
	static UFunction* pFnTriggerEventClass = NULL;

	if ( ! pFnTriggerEventClass )
		pFnTriggerEventClass = (UFunction*) UObject::GObjObjects()->Data[ 4437 ];

	AWwiseMicPosOrient_execTriggerEventClass_Parms TriggerEventClass_Parms;
	TriggerEventClass_Parms.InEventClass = InEventClass;
	TriggerEventClass_Parms.inInstigator = inInstigator;
	TriggerEventClass_Parms.ActivateIndex = ActivateIndex;
	TriggerEventClass_Parms.bTest = bTest;

	this->ProcessEvent ( pFnTriggerEventClass, &TriggerEventClass_Parms, NULL );

	if ( ActivatedEvents )
		memcpy ( ActivatedEvents, &TriggerEventClass_Parms.ActivatedEvents, 0xC );

	return TriggerEventClass_Parms.ReturnValue;
};

// Function Engine.Actor.EffectIsRelevant
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 SpawnLocation                  ( CPF_Parm )
// unsigned long                  bForceDedicated                ( CPF_Parm )
// float                          CullDistance                   ( CPF_OptionalParm | CPF_Parm )

bool AWwiseMicPosOrient::EffectIsRelevant ( struct FVector SpawnLocation, unsigned long bForceDedicated, float CullDistance )
{
	static UFunction* pFnEffectIsRelevant = NULL;

	if ( ! pFnEffectIsRelevant )
		pFnEffectIsRelevant = (UFunction*) UObject::GObjObjects()->Data[ 4422 ];

	AWwiseMicPosOrient_execEffectIsRelevant_Parms EffectIsRelevant_Parms;
	memcpy ( &EffectIsRelevant_Parms.SpawnLocation, &SpawnLocation, 0xC );
	EffectIsRelevant_Parms.bForceDedicated = bForceDedicated;
	EffectIsRelevant_Parms.CullDistance = CullDistance;

	this->ProcessEvent ( pFnEffectIsRelevant, &EffectIsRelevant_Parms, NULL );

	return EffectIsRelevant_Parms.ReturnValue;
};

// Function Engine.Actor.CheckMaxEffectDistance
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerController*       P                              ( CPF_Parm )
// struct FVector                 SpawnLocation                  ( CPF_Parm )
// float                          CullDistance                   ( CPF_OptionalParm | CPF_Parm )

bool AWwiseMicPosOrient::CheckMaxEffectDistance ( class APlayerController* P, struct FVector SpawnLocation, float CullDistance )
{
	static UFunction* pFnCheckMaxEffectDistance = NULL;

	if ( ! pFnCheckMaxEffectDistance )
		pFnCheckMaxEffectDistance = (UFunction*) UObject::GObjObjects()->Data[ 4412 ];

	AWwiseMicPosOrient_execCheckMaxEffectDistance_Parms CheckMaxEffectDistance_Parms;
	CheckMaxEffectDistance_Parms.P = P;
	memcpy ( &CheckMaxEffectDistance_Parms.SpawnLocation, &SpawnLocation, 0xC );
	CheckMaxEffectDistance_Parms.CullDistance = CullDistance;

	this->ProcessEvent ( pFnCheckMaxEffectDistance, &CheckMaxEffectDistance_Parms, NULL );

	return CheckMaxEffectDistance_Parms.ReturnValue;
};

// Function Engine.Actor.ApplyFluidSurfaceImpact
// [0x00020102] 
// Parameters infos:
// class AFluidSurfaceActor*      Fluid                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void AWwiseMicPosOrient::ApplyFluidSurfaceImpact ( class AFluidSurfaceActor* Fluid, struct FVector HitLocation )
{
	static UFunction* pFnApplyFluidSurfaceImpact = NULL;

	if ( ! pFnApplyFluidSurfaceImpact )
		pFnApplyFluidSurfaceImpact = (UFunction*) UObject::GObjObjects()->Data[ 4402 ];

	AWwiseMicPosOrient_execApplyFluidSurfaceImpact_Parms ApplyFluidSurfaceImpact_Parms;
	ApplyFluidSurfaceImpact_Parms.Fluid = Fluid;
	memcpy ( &ApplyFluidSurfaceImpact_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnApplyFluidSurfaceImpact, &ApplyFluidSurfaceImpact_Parms, NULL );
};

// Function Engine.Actor.CanSplash
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMicPosOrient::CanSplash ( )
{
	static UFunction* pFnCanSplash = NULL;

	if ( ! pFnCanSplash )
		pFnCanSplash = (UFunction*) UObject::GObjObjects()->Data[ 4400 ];

	AWwiseMicPosOrient_execCanSplash_Parms CanSplash_Parms;

	this->ProcessEvent ( pFnCanSplash, &CanSplash_Parms, NULL );

	return CanSplash_Parms.ReturnValue;
};

// Function Engine.Actor.PlayTeleportEffect
// [0x00020000] 
// Parameters infos:
// unsigned long                  bOut                           ( CPF_Parm )
// unsigned long                  bSound                         ( CPF_Parm )

void AWwiseMicPosOrient::PlayTeleportEffect ( unsigned long bOut, unsigned long bSound )
{
	static UFunction* pFnPlayTeleportEffect = NULL;

	if ( ! pFnPlayTeleportEffect )
		pFnPlayTeleportEffect = (UFunction*) UObject::GObjObjects()->Data[ 4397 ];

	AWwiseMicPosOrient_execPlayTeleportEffect_Parms PlayTeleportEffect_Parms;
	PlayTeleportEffect_Parms.bOut = bOut;
	PlayTeleportEffect_Parms.bSound = bSound;

	this->ProcessEvent ( pFnPlayTeleportEffect, &PlayTeleportEffect_Parms, NULL );
};

// Function Engine.Actor.IsInPain
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMicPosOrient::IsInPain ( )
{
	static UFunction* pFnIsInPain = NULL;

	if ( ! pFnIsInPain )
		pFnIsInPain = (UFunction*) UObject::GObjObjects()->Data[ 4392 ];

	AWwiseMicPosOrient_execIsInPain_Parms IsInPain_Parms;

	this->ProcessEvent ( pFnIsInPain, &IsInPain_Parms, NULL );

	return IsInPain_Parms.ReturnValue;
};

// Function Engine.Actor.IsInVolume
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AVolume*                 aVolume                        ( CPF_Parm )

bool AWwiseMicPosOrient::IsInVolume ( class AVolume* aVolume )
{
	static UFunction* pFnIsInVolume = NULL;

	if ( ! pFnIsInVolume )
		pFnIsInVolume = (UFunction*) UObject::GObjObjects()->Data[ 4388 ];

	AWwiseMicPosOrient_execIsInVolume_Parms IsInVolume_Parms;
	IsInVolume_Parms.aVolume = aVolume;

	this->ProcessEvent ( pFnIsInVolume, &IsInVolume_Parms, NULL );

	return IsInVolume_Parms.ReturnValue;
};

// Function Engine.Actor.Reset
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventReset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 4387 ];

	AWwiseMicPosOrient_eventReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function Engine.Actor.GetFaceFXAudioComponent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UAudioComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

class UAudioComponent* AWwiseMicPosOrient::eventGetFaceFXAudioComponent ( )
{
	static UFunction* pFnGetFaceFXAudioComponent = NULL;

	if ( ! pFnGetFaceFXAudioComponent )
		pFnGetFaceFXAudioComponent = (UFunction*) UObject::GObjObjects()->Data[ 4385 ];

	AWwiseMicPosOrient_eventGetFaceFXAudioComponent_Parms GetFaceFXAudioComponent_Parms;

	this->ProcessEvent ( pFnGetFaceFXAudioComponent, &GetFaceFXAudioComponent_Parms, NULL );

	return GetFaceFXAudioComponent_Parms.ReturnValue;
};

// Function Engine.Actor.ModifyHearSoundComponent
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class UAudioComponent*         AC                             ( CPF_Parm | CPF_EditInline )

void AWwiseMicPosOrient::eventModifyHearSoundComponent ( class UAudioComponent* AC )
{
	static UFunction* pFnModifyHearSoundComponent = NULL;

	if ( ! pFnModifyHearSoundComponent )
		pFnModifyHearSoundComponent = (UFunction*) UObject::GObjObjects()->Data[ 4383 ];

	AWwiseMicPosOrient_eventModifyHearSoundComponent_Parms ModifyHearSoundComponent_Parms;
	ModifyHearSoundComponent_Parms.AC = AC;

	this->ProcessEvent ( pFnModifyHearSoundComponent, &ModifyHearSoundComponent_Parms, NULL );
};

// Function Engine.Actor.GetPhysicsName
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AWwiseMicPosOrient::GetPhysicsName ( )
{
	static UFunction* pFnGetPhysicsName = NULL;

	if ( ! pFnGetPhysicsName )
		pFnGetPhysicsName = (UFunction*) UObject::GObjObjects()->Data[ 4380 ];

	AWwiseMicPosOrient_execGetPhysicsName_Parms GetPhysicsName_Parms;

	this->ProcessEvent ( pFnGetPhysicsName, &GetPhysicsName_Parms, NULL );

	return GetPhysicsName_Parms.ReturnValue;
};

// Function Engine.Actor.DisplayDebug
// [0x00420102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 4347 ];

	AWwiseMicPosOrient_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function Engine.Actor.GetDebugName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AWwiseMicPosOrient::GetDebugName ( )
{
	static UFunction* pFnGetDebugName = NULL;

	if ( ! pFnGetDebugName )
		pFnGetDebugName = (UFunction*) UObject::GObjObjects()->Data[ 4345 ];

	AWwiseMicPosOrient_execGetDebugName_Parms GetDebugName_Parms;

	this->ProcessEvent ( pFnGetDebugName, &GetDebugName_Parms, NULL );

	return GetDebugName_Parms.ReturnValue;
};

// Function Engine.Actor.MatchStarting
// [0x00020000] 
// Parameters infos:

void AWwiseMicPosOrient::MatchStarting ( )
{
	static UFunction* pFnMatchStarting = NULL;

	if ( ! pFnMatchStarting )
		pFnMatchStarting = (UFunction*) UObject::GObjObjects()->Data[ 4344 ];

	AWwiseMicPosOrient_execMatchStarting_Parms MatchStarting_Parms;

	this->ProcessEvent ( pFnMatchStarting, &MatchStarting_Parms, NULL );
};

// Function Engine.Actor.GetLocalString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )

struct FString AWwiseMicPosOrient::GetLocalString ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01 )
{
	static UFunction* pFnGetLocalString = NULL;

	if ( ! pFnGetLocalString )
		pFnGetLocalString = (UFunction*) UObject::GObjObjects()->Data[ 4339 ];

	AWwiseMicPosOrient_execGetLocalString_Parms GetLocalString_Parms;
	GetLocalString_Parms.Switch = Switch;
	GetLocalString_Parms.RelatedPRI = RelatedPRI;
	GetLocalString_Parms.RelatedPRI01 = RelatedPRI01;

	this->ProcessEvent ( pFnGetLocalString, &GetLocalString_Parms, NULL );

	return GetLocalString_Parms.ReturnValue;
};

// Function Engine.Actor.ReplaceText
// [0x00422002] 
// Parameters infos:
// struct FString                 Replace                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 With                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AWwiseMicPosOrient::ReplaceText ( struct FString Replace, struct FString With, struct FString* Text )
{
	static UFunction* pFnReplaceText = NULL;

	if ( ! pFnReplaceText )
		pFnReplaceText = (UFunction*) UObject::GObjObjects()->Data[ 4333 ];

	AWwiseMicPosOrient_execReplaceText_Parms ReplaceText_Parms;
	memcpy ( &ReplaceText_Parms.Replace, &Replace, 0xC );
	memcpy ( &ReplaceText_Parms.With, &With, 0xC );

	this->ProcessEvent ( pFnReplaceText, &ReplaceText_Parms, NULL );

	if ( Text )
		memcpy ( Text, &ReplaceText_Parms.Text, 0xC );
};

// Function Engine.Actor.GetHumanReadableName
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AWwiseMicPosOrient::GetHumanReadableName ( )
{
	static UFunction* pFnGetHumanReadableName = NULL;

	if ( ! pFnGetHumanReadableName )
		pFnGetHumanReadableName = (UFunction*) UObject::GObjObjects()->Data[ 4331 ];

	AWwiseMicPosOrient_execGetHumanReadableName_Parms GetHumanReadableName_Parms;

	this->ProcessEvent ( pFnGetHumanReadableName, &GetHumanReadableName_Parms, NULL );

	return GetHumanReadableName_Parms.ReturnValue;
};

// Function Engine.Actor.GetItemName
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 FullName                       ( CPF_Parm | CPF_NeedCtorLink )

struct FString AWwiseMicPosOrient::GetItemName ( struct FString FullName )
{
	static UFunction* pFnGetItemName = NULL;

	if ( ! pFnGetItemName )
		pFnGetItemName = (UFunction*) UObject::GObjObjects()->Data[ 4327 ];

	AWwiseMicPosOrient_execGetItemName_Parms GetItemName_Parms;
	memcpy ( &GetItemName_Parms.FullName, &FullName, 0xC );

	this->ProcessEvent ( pFnGetItemName, &GetItemName_Parms, NULL );

	return GetItemName_Parms.ReturnValue;
};

// Function Engine.Actor.CalcCamera
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool AWwiseMicPosOrient::CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcCamera = NULL;

	if ( ! pFnCalcCamera )
		pFnCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 4318 ];

	AWwiseMicPosOrient_execCalcCamera_Parms CalcCamera_Parms;
	CalcCamera_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnCalcCamera, &CalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &CalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &CalcCamera_Parms.out_CamRot, 0xC );

	if ( out_FOV )
		*out_FOV = CalcCamera_Parms.out_FOV;

	return CalcCamera_Parms.ReturnValue;
};

// Function Engine.Actor.EndViewTarget
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void AWwiseMicPosOrient::eventEndViewTarget ( class APlayerController* PC )
{
	static UFunction* pFnEndViewTarget = NULL;

	if ( ! pFnEndViewTarget )
		pFnEndViewTarget = (UFunction*) UObject::GObjObjects()->Data[ 4316 ];

	AWwiseMicPosOrient_eventEndViewTarget_Parms EndViewTarget_Parms;
	EndViewTarget_Parms.PC = PC;

	this->ProcessEvent ( pFnEndViewTarget, &EndViewTarget_Parms, NULL );
};

// Function Engine.Actor.BecomeViewTarget
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void AWwiseMicPosOrient::eventBecomeViewTarget ( class APlayerController* PC )
{
	static UFunction* pFnBecomeViewTarget = NULL;

	if ( ! pFnBecomeViewTarget )
		pFnBecomeViewTarget = (UFunction*) UObject::GObjObjects()->Data[ 4314 ];

	AWwiseMicPosOrient_eventBecomeViewTarget_Parms BecomeViewTarget_Parms;
	BecomeViewTarget_Parms.PC = PC;

	this->ProcessEvent ( pFnBecomeViewTarget, &BecomeViewTarget_Parms, NULL );
};

// Function Engine.Actor.CheckForErrors
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMicPosOrient::CheckForErrors ( )
{
	static UFunction* pFnCheckForErrors = NULL;

	if ( ! pFnCheckForErrors )
		pFnCheckForErrors = (UFunction*) UObject::GObjObjects()->Data[ 4312 ];

	AWwiseMicPosOrient_execCheckForErrors_Parms CheckForErrors_Parms;

	this->ProcessEvent ( pFnCheckForErrors, &CheckForErrors_Parms, NULL );

	return CheckForErrors_Parms.ReturnValue;
};

// Function Engine.Actor.DebugFreezeGame
// [0x00024800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  ActorToLookAt                  ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::eventDebugFreezeGame ( class AActor* ActorToLookAt )
{
	static UFunction* pFnDebugFreezeGame = NULL;

	if ( ! pFnDebugFreezeGame )
		pFnDebugFreezeGame = (UFunction*) UObject::GObjObjects()->Data[ 4310 ];

	AWwiseMicPosOrient_eventDebugFreezeGame_Parms DebugFreezeGame_Parms;
	DebugFreezeGame_Parms.ActorToLookAt = ActorToLookAt;

	this->ProcessEvent ( pFnDebugFreezeGame, &DebugFreezeGame_Parms, NULL );
};

// Function Engine.Actor.GetGravityZ
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AWwiseMicPosOrient::GetGravityZ ( )
{
	static UFunction* pFnGetGravityZ = NULL;

	if ( ! pFnGetGravityZ )
		pFnGetGravityZ = (UFunction*) UObject::GObjObjects()->Data[ 4308 ];

	AWwiseMicPosOrient_execGetGravityZ_Parms GetGravityZ_Parms;

	pFnGetGravityZ->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGravityZ, &GetGravityZ_Parms, NULL );

	pFnGetGravityZ->FunctionFlags |= 0x400;

	return GetGravityZ_Parms.ReturnValue;
};

// Function Engine.Actor.CheckHitInfo
// [0x00420103] ( FUNC_Final )
// Parameters infos:
// class UPrimitiveComponent*     FallBackComponent              ( CPF_Parm | CPF_EditInline )
// struct FVector                 Dir                            ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm | CPF_OutParm )
// struct FVector                 out_HitLocation                ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::CheckHitInfo ( class UPrimitiveComponent* FallBackComponent, struct FVector Dir, struct FTraceHitInfo* HitInfo, struct FVector* out_HitLocation )
{
	static UFunction* pFnCheckHitInfo = NULL;

	if ( ! pFnCheckHitInfo )
		pFnCheckHitInfo = (UFunction*) UObject::GObjObjects()->Data[ 4297 ];

	AWwiseMicPosOrient_execCheckHitInfo_Parms CheckHitInfo_Parms;
	CheckHitInfo_Parms.FallBackComponent = FallBackComponent;
	memcpy ( &CheckHitInfo_Parms.Dir, &Dir, 0xC );

	this->ProcessEvent ( pFnCheckHitInfo, &CheckHitInfo_Parms, NULL );

	if ( HitInfo )
		memcpy ( HitInfo, &CheckHitInfo_Parms.HitInfo, 0x1C );

	if ( out_HitLocation )
		memcpy ( out_HitLocation, &CheckHitInfo_Parms.out_HitLocation, 0xC );
};

// Function Engine.Actor.TakeRadiusDamage
// [0x00024902] ( FUNC_Event )
// Parameters infos:
// class AController*             instigatedBy                   ( CPF_Parm )
// float                          BaseDamage                     ( CPF_Parm )
// float                          DamageRadius                   ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// unsigned long                  bFullDamage                    ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )
// float                          DamageFalloffExponent          ( CPF_OptionalParm | CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::eventTakeRadiusDamage ( class AController* instigatedBy, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, float DamageFalloffExponent, struct FTraceHitInfo HitInfo )
{
	static UFunction* pFnTakeRadiusDamage = NULL;

	if ( ! pFnTakeRadiusDamage )
		pFnTakeRadiusDamage = (UFunction*) UObject::GObjObjects()->Data[ 4278 ];

	AWwiseMicPosOrient_eventTakeRadiusDamage_Parms TakeRadiusDamage_Parms;
	TakeRadiusDamage_Parms.instigatedBy = instigatedBy;
	TakeRadiusDamage_Parms.BaseDamage = BaseDamage;
	TakeRadiusDamage_Parms.DamageRadius = DamageRadius;
	TakeRadiusDamage_Parms.DamageType = DamageType;
	TakeRadiusDamage_Parms.Momentum = Momentum;
	memcpy ( &TakeRadiusDamage_Parms.HurtOrigin, &HurtOrigin, 0xC );
	TakeRadiusDamage_Parms.bFullDamage = bFullDamage;
	TakeRadiusDamage_Parms.DamageCauser = DamageCauser;
	TakeRadiusDamage_Parms.DamageFalloffExponent = DamageFalloffExponent;
	memcpy ( &TakeRadiusDamage_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnTakeRadiusDamage, &TakeRadiusDamage_Parms, NULL );
};

// Function Engine.Actor.HealDamage
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Amount                         ( CPF_Parm )
// class AController*             Healer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

bool AWwiseMicPosOrient::eventHealDamage ( int Amount, class AController* Healer, class UClass* DamageType )
{
	static UFunction* pFnHealDamage = NULL;

	if ( ! pFnHealDamage )
		pFnHealDamage = (UFunction*) UObject::GObjObjects()->Data[ 4273 ];

	AWwiseMicPosOrient_eventHealDamage_Parms HealDamage_Parms;
	HealDamage_Parms.Amount = Amount;
	HealDamage_Parms.Healer = Healer;
	HealDamage_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnHealDamage, &HealDamage_Parms, NULL );

	return HealDamage_Parms.ReturnValue;
};

// Function Engine.Actor.TakeDamage
// [0x00024902] ( FUNC_Event )
// Parameters infos:
// float                          DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::eventTakeDamage ( float DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 4261 ];

	AWwiseMicPosOrient_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.DamageAmount = DamageAmount;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function Engine.Actor.KilledBy
// [0x00020000] 
// Parameters infos:
// class APawn*                   EventInstigator                ( CPF_Parm )

void AWwiseMicPosOrient::KilledBy ( class APawn* EventInstigator )
{
	static UFunction* pFnKilledBy = NULL;

	if ( ! pFnKilledBy )
		pFnKilledBy = (UFunction*) UObject::GObjObjects()->Data[ 4259 ];

	AWwiseMicPosOrient_execKilledBy_Parms KilledBy_Parms;
	KilledBy_Parms.EventInstigator = EventInstigator;

	this->ProcessEvent ( pFnKilledBy, &KilledBy_Parms, NULL );
};

// Function Engine.Actor.HurtRadius
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          BaseDamage                     ( CPF_Parm )
// float                          DamageRadius                   ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// class AActor*                  IgnoredActor                   ( CPF_OptionalParm | CPF_Parm )
// class AController*             InstigatedByController         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bDoFullDamage                  ( CPF_OptionalParm | CPF_Parm )

bool AWwiseMicPosOrient::HurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage )
{
	static UFunction* pFnHurtRadius = NULL;

	if ( ! pFnHurtRadius )
		pFnHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 4236 ];

	AWwiseMicPosOrient_execHurtRadius_Parms HurtRadius_Parms;
	HurtRadius_Parms.BaseDamage = BaseDamage;
	HurtRadius_Parms.DamageRadius = DamageRadius;
	HurtRadius_Parms.DamageType = DamageType;
	HurtRadius_Parms.Momentum = Momentum;
	memcpy ( &HurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	HurtRadius_Parms.IgnoredActor = IgnoredActor;
	HurtRadius_Parms.InstigatedByController = InstigatedByController;
	HurtRadius_Parms.bDoFullDamage = bDoFullDamage;

	this->ProcessEvent ( pFnHurtRadius, &HurtRadius_Parms, NULL );

	return HurtRadius_Parms.ReturnValue;
};

// Function Engine.Actor.StopsProjectile
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AProjectile*             P                              ( CPF_Parm )

bool AWwiseMicPosOrient::StopsProjectile ( class AProjectile* P )
{
	static UFunction* pFnStopsProjectile = NULL;

	if ( ! pFnStopsProjectile )
		pFnStopsProjectile = (UFunction*) UObject::GObjObjects()->Data[ 4231 ];

	AWwiseMicPosOrient_execStopsProjectile_Parms StopsProjectile_Parms;
	StopsProjectile_Parms.P = P;

	this->ProcessEvent ( pFnStopsProjectile, &StopsProjectile_Parms, NULL );

	return StopsProjectile_Parms.ReturnValue;
};

// Function Engine.Actor.NotifySkelControlBeyondLimit
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class USkelControlLookAt*      LookAt                         ( CPF_Parm )

void AWwiseMicPosOrient::eventNotifySkelControlBeyondLimit ( class USkelControlLookAt* LookAt )
{
	static UFunction* pFnNotifySkelControlBeyondLimit = NULL;

	if ( ! pFnNotifySkelControlBeyondLimit )
		pFnNotifySkelControlBeyondLimit = (UFunction*) UObject::GObjObjects()->Data[ 4229 ];

	AWwiseMicPosOrient_eventNotifySkelControlBeyondLimit_Parms NotifySkelControlBeyondLimit_Parms;
	NotifySkelControlBeyondLimit_Parms.LookAt = LookAt;

	this->ProcessEvent ( pFnNotifySkelControlBeyondLimit, &NotifySkelControlBeyondLimit_Parms, NULL );
};

// Function Engine.Actor.ConstraintBrokenNotify
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class AActor*                  ConOwner                       ( CPF_Parm )
// class URB_ConstraintSetup*     ConSetup                       ( CPF_Parm )
// class URB_ConstraintInstance*  ConInstance                    ( CPF_Parm )

void AWwiseMicPosOrient::eventConstraintBrokenNotify ( class AActor* ConOwner, class URB_ConstraintSetup* ConSetup, class URB_ConstraintInstance* ConInstance )
{
	static UFunction* pFnConstraintBrokenNotify = NULL;

	if ( ! pFnConstraintBrokenNotify )
		pFnConstraintBrokenNotify = (UFunction*) UObject::GObjObjects()->Data[ 4225 ];

	AWwiseMicPosOrient_eventConstraintBrokenNotify_Parms ConstraintBrokenNotify_Parms;
	ConstraintBrokenNotify_Parms.ConOwner = ConOwner;
	ConstraintBrokenNotify_Parms.ConSetup = ConSetup;
	ConstraintBrokenNotify_Parms.ConInstance = ConInstance;

	this->ProcessEvent ( pFnConstraintBrokenNotify, &ConstraintBrokenNotify_Parms, NULL );
};

// Function Engine.Actor.SetInitialState
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventSetInitialState ( )
{
	static UFunction* pFnSetInitialState = NULL;

	if ( ! pFnSetInitialState )
		pFnSetInitialState = (UFunction*) UObject::GObjObjects()->Data[ 4222 ];

	AWwiseMicPosOrient_eventSetInitialState_Parms SetInitialState_Parms;

	this->ProcessEvent ( pFnSetInitialState, &SetInitialState_Parms, NULL );
};

// Function Engine.Actor.PostBeginPlay
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 4221 ];

	AWwiseMicPosOrient_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function Engine.Actor.BroadcastLocalizedTeamMessage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            TeamIndex                      ( CPF_Parm )
// class UClass*                  InMessageClass                 ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::eventBroadcastLocalizedTeamMessage ( int TeamIndex, class UClass* InMessageClass, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnBroadcastLocalizedTeamMessage = NULL;

	if ( ! pFnBroadcastLocalizedTeamMessage )
		pFnBroadcastLocalizedTeamMessage = (UFunction*) UObject::GObjObjects()->Data[ 4214 ];

	AWwiseMicPosOrient_eventBroadcastLocalizedTeamMessage_Parms BroadcastLocalizedTeamMessage_Parms;
	BroadcastLocalizedTeamMessage_Parms.TeamIndex = TeamIndex;
	BroadcastLocalizedTeamMessage_Parms.InMessageClass = InMessageClass;
	BroadcastLocalizedTeamMessage_Parms.Switch = Switch;
	BroadcastLocalizedTeamMessage_Parms.RelatedPRI = RelatedPRI;
	BroadcastLocalizedTeamMessage_Parms.RelatedPRI01 = RelatedPRI01;
	BroadcastLocalizedTeamMessage_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnBroadcastLocalizedTeamMessage, &BroadcastLocalizedTeamMessage_Parms, NULL );
};

// Function Engine.Actor.BroadcastLocalizedMessage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// class UClass*                  InMessageClass                 ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::eventBroadcastLocalizedMessage ( class UClass* InMessageClass, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnBroadcastLocalizedMessage = NULL;

	if ( ! pFnBroadcastLocalizedMessage )
		pFnBroadcastLocalizedMessage = (UFunction*) UObject::GObjObjects()->Data[ 4207 ];

	AWwiseMicPosOrient_eventBroadcastLocalizedMessage_Parms BroadcastLocalizedMessage_Parms;
	BroadcastLocalizedMessage_Parms.InMessageClass = InMessageClass;
	BroadcastLocalizedMessage_Parms.Switch = Switch;
	BroadcastLocalizedMessage_Parms.RelatedPRI = RelatedPRI;
	BroadcastLocalizedMessage_Parms.RelatedPRI01 = RelatedPRI01;
	BroadcastLocalizedMessage_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnBroadcastLocalizedMessage, &BroadcastLocalizedMessage_Parms, NULL );
};

// Function Engine.Actor.PreBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 4198 ];

	AWwiseMicPosOrient_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function Engine.Actor.FindActorsOfClass
// [0x00420003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  ActorClass                     ( CPF_Parm )
// TArray< class AActor* >        out_Actors                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AWwiseMicPosOrient::FindActorsOfClass ( class UClass* ActorClass, TArray< class AActor* >* out_Actors )
{
	static UFunction* pFnFindActorsOfClass = NULL;

	if ( ! pFnFindActorsOfClass )
		pFnFindActorsOfClass = (UFunction*) UObject::GObjObjects()->Data[ 4192 ];

	AWwiseMicPosOrient_execFindActorsOfClass_Parms FindActorsOfClass_Parms;
	FindActorsOfClass_Parms.ActorClass = ActorClass;

	this->ProcessEvent ( pFnFindActorsOfClass, &FindActorsOfClass_Parms, NULL );

	if ( out_Actors )
		memcpy ( out_Actors, &FindActorsOfClass_Parms.out_Actors, 0xC );

	return FindActorsOfClass_Parms.ReturnValue;
};

// Function Engine.Actor.MoveActorToFloor
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMicPosOrient::MoveActorToFloor ( )
{
	static UFunction* pFnMoveActorToFloor = NULL;

	if ( ! pFnMoveActorToFloor )
		pFnMoveActorToFloor = (UFunction*) UObject::GObjObjects()->Data[ 4190 ];

	AWwiseMicPosOrient_execMoveActorToFloor_Parms MoveActorToFloor_Parms;

	pFnMoveActorToFloor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMoveActorToFloor, &MoveActorToFloor_Parms, NULL );

	pFnMoveActorToFloor->FunctionFlags |= 0x400;

	return MoveActorToFloor_Parms.ReturnValue;
};

// Function Engine.Actor.GetALocalPlayerController
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class APlayerController*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class APlayerController* AWwiseMicPosOrient::GetALocalPlayerController ( )
{
	static UFunction* pFnGetALocalPlayerController = NULL;

	if ( ! pFnGetALocalPlayerController )
		pFnGetALocalPlayerController = (UFunction*) UObject::GObjObjects()->Data[ 4188 ];

	AWwiseMicPosOrient_execGetALocalPlayerController_Parms GetALocalPlayerController_Parms;

	pFnGetALocalPlayerController->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetALocalPlayerController, &GetALocalPlayerController_Parms, NULL );

	pFnGetALocalPlayerController->FunctionFlags |= 0x400;

	return GetALocalPlayerController_Parms.ReturnValue;
};

// Function Engine.Actor.LocalPlayerControllers
// [0x00420405] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UClass*                  BaseClass                      ( CPF_Parm )
// class APlayerController*       PC                             ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::LocalPlayerControllers ( class UClass* BaseClass, class APlayerController** PC )
{
	static UFunction* pFnLocalPlayerControllers = NULL;

	if ( ! pFnLocalPlayerControllers )
		pFnLocalPlayerControllers = (UFunction*) UObject::GObjObjects()->Data[ 4185 ];

	AWwiseMicPosOrient_execLocalPlayerControllers_Parms LocalPlayerControllers_Parms;
	LocalPlayerControllers_Parms.BaseClass = BaseClass;

	pFnLocalPlayerControllers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLocalPlayerControllers, &LocalPlayerControllers_Parms, NULL );

	pFnLocalPlayerControllers->FunctionFlags |= 0x400;

	if ( PC )
		*PC = LocalPlayerControllers_Parms.PC;
};

// Function Engine.Actor.AllOwnedComponents
// [0x00420405] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UClass*                  BaseClass                      ( CPF_Parm )
// class UActorComponent*         OutComponent                   ( CPF_Parm | CPF_OutParm | CPF_EditInline )

void AWwiseMicPosOrient::AllOwnedComponents ( class UClass* BaseClass, class UActorComponent** OutComponent )
{
	static UFunction* pFnAllOwnedComponents = NULL;

	if ( ! pFnAllOwnedComponents )
		pFnAllOwnedComponents = (UFunction*) UObject::GObjObjects()->Data[ 4182 ];

	AWwiseMicPosOrient_execAllOwnedComponents_Parms AllOwnedComponents_Parms;
	AllOwnedComponents_Parms.BaseClass = BaseClass;

	pFnAllOwnedComponents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAllOwnedComponents, &AllOwnedComponents_Parms, NULL );

	pFnAllOwnedComponents->FunctionFlags |= 0x400;

	if ( OutComponent )
		*OutComponent = AllOwnedComponents_Parms.OutComponent;
};

// Function Engine.Actor.ComponentList
// [0x00420405] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UClass*                  BaseClass                      ( CPF_Parm )
// class UActorComponent*         out_Component                  ( CPF_Parm | CPF_OutParm | CPF_EditInline )

void AWwiseMicPosOrient::ComponentList ( class UClass* BaseClass, class UActorComponent** out_Component )
{
	static UFunction* pFnComponentList = NULL;

	if ( ! pFnComponentList )
		pFnComponentList = (UFunction*) UObject::GObjObjects()->Data[ 4179 ];

	AWwiseMicPosOrient_execComponentList_Parms ComponentList_Parms;
	ComponentList_Parms.BaseClass = BaseClass;

	pFnComponentList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnComponentList, &ComponentList_Parms, NULL );

	pFnComponentList->FunctionFlags |= 0x400;

	if ( out_Component )
		*out_Component = ComponentList_Parms.out_Component;
};

// Function Engine.Actor.OverlappingActors
// [0x00424405] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UClass*                  BaseClass                      ( CPF_Parm )
// float                          Radius                         ( CPF_Parm )
// struct FVector                 Loc                            ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIgnoreHidden                  ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  out_Actor                      ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::OverlappingActors ( class UClass* BaseClass, float Radius, struct FVector Loc, unsigned long bIgnoreHidden, class AActor** out_Actor )
{
	static UFunction* pFnOverlappingActors = NULL;

	if ( ! pFnOverlappingActors )
		pFnOverlappingActors = (UFunction*) UObject::GObjObjects()->Data[ 4173 ];

	AWwiseMicPosOrient_execOverlappingActors_Parms OverlappingActors_Parms;
	OverlappingActors_Parms.BaseClass = BaseClass;
	OverlappingActors_Parms.Radius = Radius;
	memcpy ( &OverlappingActors_Parms.Loc, &Loc, 0xC );
	OverlappingActors_Parms.bIgnoreHidden = bIgnoreHidden;

	pFnOverlappingActors->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOverlappingActors, &OverlappingActors_Parms, NULL );

	pFnOverlappingActors->FunctionFlags |= 0x400;

	if ( out_Actor )
		*out_Actor = OverlappingActors_Parms.out_Actor;
};

// Function Engine.Actor.CollidingActors
// [0x00424405] ( FUNC_Final | FUNC_Native ) iNative [0x0141]
// Parameters infos:
// class UClass*                  BaseClass                      ( CPF_Parm )
// float                          Radius                         ( CPF_Parm )
// struct FVector                 Loc                            ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bUseOverlapCheck               ( CPF_OptionalParm | CPF_Parm )
// class UClass*                  InterfaceClass                 ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  Actor                          ( CPF_Parm | CPF_OutParm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::CollidingActors ( class UClass* BaseClass, float Radius, struct FVector Loc, unsigned long bUseOverlapCheck, class UClass* InterfaceClass, class AActor** Actor, struct FTraceHitInfo* HitInfo )
{
	static UFunction* pFnCollidingActors = NULL;

	if ( ! pFnCollidingActors )
		pFnCollidingActors = (UFunction*) UObject::GObjObjects()->Data[ 4165 ];

	AWwiseMicPosOrient_execCollidingActors_Parms CollidingActors_Parms;
	CollidingActors_Parms.BaseClass = BaseClass;
	CollidingActors_Parms.Radius = Radius;
	memcpy ( &CollidingActors_Parms.Loc, &Loc, 0xC );
	CollidingActors_Parms.bUseOverlapCheck = bUseOverlapCheck;
	CollidingActors_Parms.InterfaceClass = InterfaceClass;

	unsigned short NativeIndex = pFnCollidingActors->iNative;
	pFnCollidingActors->iNative = 0;

	pFnCollidingActors->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCollidingActors, &CollidingActors_Parms, NULL );

	pFnCollidingActors->FunctionFlags |= 0x400;

	pFnCollidingActors->iNative = NativeIndex;

	if ( Actor )
		*Actor = CollidingActors_Parms.Actor;

	if ( HitInfo )
		memcpy ( HitInfo, &CollidingActors_Parms.HitInfo, 0x1C );
};

// Function Engine.Actor.VisibleCollidingActors
// [0x00424405] ( FUNC_Final | FUNC_Native ) iNative [0x0138]
// Parameters infos:
// class UClass*                  BaseClass                      ( CPF_Parm )
// float                          Radius                         ( CPF_Parm )
// struct FVector                 Loc                            ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIgnoreHidden                  ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 Extent                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bTraceActors                   ( CPF_OptionalParm | CPF_Parm )
// class UClass*                  InterfaceClass                 ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  Actor                          ( CPF_Parm | CPF_OutParm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::VisibleCollidingActors ( class UClass* BaseClass, float Radius, struct FVector Loc, unsigned long bIgnoreHidden, struct FVector Extent, unsigned long bTraceActors, class UClass* InterfaceClass, class AActor** Actor, struct FTraceHitInfo* HitInfo )
{
	static UFunction* pFnVisibleCollidingActors = NULL;

	if ( ! pFnVisibleCollidingActors )
		pFnVisibleCollidingActors = (UFunction*) UObject::GObjObjects()->Data[ 4155 ];

	AWwiseMicPosOrient_execVisibleCollidingActors_Parms VisibleCollidingActors_Parms;
	VisibleCollidingActors_Parms.BaseClass = BaseClass;
	VisibleCollidingActors_Parms.Radius = Radius;
	memcpy ( &VisibleCollidingActors_Parms.Loc, &Loc, 0xC );
	VisibleCollidingActors_Parms.bIgnoreHidden = bIgnoreHidden;
	memcpy ( &VisibleCollidingActors_Parms.Extent, &Extent, 0xC );
	VisibleCollidingActors_Parms.bTraceActors = bTraceActors;
	VisibleCollidingActors_Parms.InterfaceClass = InterfaceClass;

	unsigned short NativeIndex = pFnVisibleCollidingActors->iNative;
	pFnVisibleCollidingActors->iNative = 0;

	pFnVisibleCollidingActors->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVisibleCollidingActors, &VisibleCollidingActors_Parms, NULL );

	pFnVisibleCollidingActors->FunctionFlags |= 0x400;

	pFnVisibleCollidingActors->iNative = NativeIndex;

	if ( Actor )
		*Actor = VisibleCollidingActors_Parms.Actor;

	if ( HitInfo )
		memcpy ( HitInfo, &VisibleCollidingActors_Parms.HitInfo, 0x1C );
};

// Function Engine.Actor.VisibleActors
// [0x00424405] ( FUNC_Final | FUNC_Native ) iNative [0x0137]
// Parameters infos:
// class UClass*                  BaseClass                      ( CPF_Parm )
// float                          Radius                         ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 Loc                            ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  Actor                          ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::VisibleActors ( class UClass* BaseClass, float Radius, struct FVector Loc, class AActor** Actor )
{
	static UFunction* pFnVisibleActors = NULL;

	if ( ! pFnVisibleActors )
		pFnVisibleActors = (UFunction*) UObject::GObjObjects()->Data[ 4150 ];

	AWwiseMicPosOrient_execVisibleActors_Parms VisibleActors_Parms;
	VisibleActors_Parms.BaseClass = BaseClass;
	VisibleActors_Parms.Radius = Radius;
	memcpy ( &VisibleActors_Parms.Loc, &Loc, 0xC );

	unsigned short NativeIndex = pFnVisibleActors->iNative;
	pFnVisibleActors->iNative = 0;

	pFnVisibleActors->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVisibleActors, &VisibleActors_Parms, NULL );

	pFnVisibleActors->FunctionFlags |= 0x400;

	pFnVisibleActors->iNative = NativeIndex;

	if ( Actor )
		*Actor = VisibleActors_Parms.Actor;
};

// Function Engine.Actor.TraceActors
// [0x00424405] ( FUNC_Final | FUNC_Native ) iNative [0x0135]
// Parameters infos:
// class UClass*                  BaseClass                      ( CPF_Parm )
// struct FVector                 End                            ( CPF_Parm )
// struct FVector                 Start                          ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 Extent                         ( CPF_OptionalParm | CPF_Parm )
// int                            ExtraTraceFlags                ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  Actor                          ( CPF_Parm | CPF_OutParm )
// struct FVector                 HitLoc                         ( CPF_Parm | CPF_OutParm )
// struct FVector                 HitNorm                        ( CPF_Parm | CPF_OutParm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::TraceActors ( class UClass* BaseClass, struct FVector End, struct FVector Start, struct FVector Extent, int ExtraTraceFlags, class AActor** Actor, struct FVector* HitLoc, struct FVector* HitNorm, struct FTraceHitInfo* HitInfo )
{
	static UFunction* pFnTraceActors = NULL;

	if ( ! pFnTraceActors )
		pFnTraceActors = (UFunction*) UObject::GObjObjects()->Data[ 4140 ];

	AWwiseMicPosOrient_execTraceActors_Parms TraceActors_Parms;
	TraceActors_Parms.BaseClass = BaseClass;
	memcpy ( &TraceActors_Parms.End, &End, 0xC );
	memcpy ( &TraceActors_Parms.Start, &Start, 0xC );
	memcpy ( &TraceActors_Parms.Extent, &Extent, 0xC );
	TraceActors_Parms.ExtraTraceFlags = ExtraTraceFlags;

	unsigned short NativeIndex = pFnTraceActors->iNative;
	pFnTraceActors->iNative = 0;

	pFnTraceActors->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTraceActors, &TraceActors_Parms, NULL );

	pFnTraceActors->FunctionFlags |= 0x400;

	pFnTraceActors->iNative = NativeIndex;

	if ( Actor )
		*Actor = TraceActors_Parms.Actor;

	if ( HitLoc )
		memcpy ( HitLoc, &TraceActors_Parms.HitLoc, 0xC );

	if ( HitNorm )
		memcpy ( HitNorm, &TraceActors_Parms.HitNorm, 0xC );

	if ( HitInfo )
		memcpy ( HitInfo, &TraceActors_Parms.HitInfo, 0x1C );
};

// Function Engine.Actor.TouchingActors
// [0x00424405] ( FUNC_Final | FUNC_Native ) iNative [0x0133]
// Parameters infos:
// class UClass*                  BaseClass                      ( CPF_Parm )
// unsigned long                  bReverse                       ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  Actor                          ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::TouchingActors ( class UClass* BaseClass, unsigned long bReverse, class AActor** Actor )
{
	static UFunction* pFnTouchingActors = NULL;

	if ( ! pFnTouchingActors )
		pFnTouchingActors = (UFunction*) UObject::GObjObjects()->Data[ 4136 ];

	AWwiseMicPosOrient_execTouchingActors_Parms TouchingActors_Parms;
	TouchingActors_Parms.BaseClass = BaseClass;
	TouchingActors_Parms.bReverse = bReverse;

	unsigned short NativeIndex = pFnTouchingActors->iNative;
	pFnTouchingActors->iNative = 0;

	pFnTouchingActors->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTouchingActors, &TouchingActors_Parms, NULL );

	pFnTouchingActors->FunctionFlags |= 0x400;

	pFnTouchingActors->iNative = NativeIndex;

	if ( Actor )
		*Actor = TouchingActors_Parms.Actor;
};

// Function Engine.Actor.BasedActors
// [0x00420405] ( FUNC_Final | FUNC_Native ) iNative [0x0132]
// Parameters infos:
// class UClass*                  BaseClass                      ( CPF_Parm )
// class AActor*                  Actor                          ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::BasedActors ( class UClass* BaseClass, class AActor** Actor )
{
	static UFunction* pFnBasedActors = NULL;

	if ( ! pFnBasedActors )
		pFnBasedActors = (UFunction*) UObject::GObjObjects()->Data[ 4133 ];

	AWwiseMicPosOrient_execBasedActors_Parms BasedActors_Parms;
	BasedActors_Parms.BaseClass = BaseClass;

	unsigned short NativeIndex = pFnBasedActors->iNative;
	pFnBasedActors->iNative = 0;

	pFnBasedActors->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBasedActors, &BasedActors_Parms, NULL );

	pFnBasedActors->FunctionFlags |= 0x400;

	pFnBasedActors->iNative = NativeIndex;

	if ( Actor )
		*Actor = BasedActors_Parms.Actor;
};

// Function Engine.Actor.ChildActors
// [0x00420405] ( FUNC_Final | FUNC_Native ) iNative [0x0131]
// Parameters infos:
// class UClass*                  BaseClass                      ( CPF_Parm )
// class AActor*                  Actor                          ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::ChildActors ( class UClass* BaseClass, class AActor** Actor )
{
	static UFunction* pFnChildActors = NULL;

	if ( ! pFnChildActors )
		pFnChildActors = (UFunction*) UObject::GObjObjects()->Data[ 4130 ];

	AWwiseMicPosOrient_execChildActors_Parms ChildActors_Parms;
	ChildActors_Parms.BaseClass = BaseClass;

	unsigned short NativeIndex = pFnChildActors->iNative;
	pFnChildActors->iNative = 0;

	pFnChildActors->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChildActors, &ChildActors_Parms, NULL );

	pFnChildActors->FunctionFlags |= 0x400;

	pFnChildActors->iNative = NativeIndex;

	if ( Actor )
		*Actor = ChildActors_Parms.Actor;
};

// Function Engine.Actor.DynamicActors
// [0x00424405] ( FUNC_Final | FUNC_Native ) iNative [0x0139]
// Parameters infos:
// class UClass*                  BaseClass                      ( CPF_Parm )
// class UClass*                  InterfaceClass                 ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  Actor                          ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::DynamicActors ( class UClass* BaseClass, class UClass* InterfaceClass, class AActor** Actor )
{
	static UFunction* pFnDynamicActors = NULL;

	if ( ! pFnDynamicActors )
		pFnDynamicActors = (UFunction*) UObject::GObjObjects()->Data[ 4126 ];

	AWwiseMicPosOrient_execDynamicActors_Parms DynamicActors_Parms;
	DynamicActors_Parms.BaseClass = BaseClass;
	DynamicActors_Parms.InterfaceClass = InterfaceClass;

	unsigned short NativeIndex = pFnDynamicActors->iNative;
	pFnDynamicActors->iNative = 0;

	pFnDynamicActors->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDynamicActors, &DynamicActors_Parms, NULL );

	pFnDynamicActors->FunctionFlags |= 0x400;

	pFnDynamicActors->iNative = NativeIndex;

	if ( Actor )
		*Actor = DynamicActors_Parms.Actor;
};

// Function Engine.Actor.AllActors
// [0x00424405] ( FUNC_Final | FUNC_Native ) iNative [0x0130]
// Parameters infos:
// class UClass*                  BaseClass                      ( CPF_Parm )
// class UClass*                  InterfaceClass                 ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  Actor                          ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::AllActors ( class UClass* BaseClass, class UClass* InterfaceClass, class AActor** Actor )
{
	static UFunction* pFnAllActors = NULL;

	if ( ! pFnAllActors )
		pFnAllActors = (UFunction*) UObject::GObjObjects()->Data[ 4122 ];

	AWwiseMicPosOrient_execAllActors_Parms AllActors_Parms;
	AllActors_Parms.BaseClass = BaseClass;
	AllActors_Parms.InterfaceClass = InterfaceClass;

	unsigned short NativeIndex = pFnAllActors->iNative;
	pFnAllActors->iNative = 0;

	pFnAllActors->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAllActors, &AllActors_Parms, NULL );

	pFnAllActors->FunctionFlags |= 0x400;

	pFnAllActors->iNative = NativeIndex;

	if ( Actor )
		*Actor = AllActors_Parms.Actor;
};

// Function Engine.Actor.GetURLMap
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0223]
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AWwiseMicPosOrient::GetURLMap ( )
{
	static UFunction* pFnGetURLMap = NULL;

	if ( ! pFnGetURLMap )
		pFnGetURLMap = (UFunction*) UObject::GObjObjects()->Data[ 4120 ];

	AWwiseMicPosOrient_execGetURLMap_Parms GetURLMap_Parms;

	unsigned short NativeIndex = pFnGetURLMap->iNative;
	pFnGetURLMap->iNative = 0;

	pFnGetURLMap->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetURLMap, &GetURLMap_Parms, NULL );

	pFnGetURLMap->FunctionFlags |= 0x400;

	pFnGetURLMap->iNative = NativeIndex;

	return GetURLMap_Parms.ReturnValue;
};

// Function Engine.Actor.PostTeleport
// [0x00020000] 
// Parameters infos:
// class ATeleporter*             OutTeleporter                  ( CPF_Parm )

void AWwiseMicPosOrient::PostTeleport ( class ATeleporter* OutTeleporter )
{
	static UFunction* pFnPostTeleport = NULL;

	if ( ! pFnPostTeleport )
		pFnPostTeleport = (UFunction*) UObject::GObjObjects()->Data[ 4118 ];

	AWwiseMicPosOrient_execPostTeleport_Parms PostTeleport_Parms;
	PostTeleport_Parms.OutTeleporter = OutTeleporter;

	this->ProcessEvent ( pFnPostTeleport, &PostTeleport_Parms, NULL );
};

// Function Engine.Actor.PreTeleport
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATeleporter*             InTeleporter                   ( CPF_Parm )

bool AWwiseMicPosOrient::PreTeleport ( class ATeleporter* InTeleporter )
{
	static UFunction* pFnPreTeleport = NULL;

	if ( ! pFnPreTeleport )
		pFnPreTeleport = (UFunction*) UObject::GObjObjects()->Data[ 4115 ];

	AWwiseMicPosOrient_execPreTeleport_Parms PreTeleport_Parms;
	PreTeleport_Parms.InTeleporter = InTeleporter;

	this->ProcessEvent ( pFnPreTeleport, &PreTeleport_Parms, NULL );

	return PreTeleport_Parms.ReturnValue;
};

// Function Engine.Actor.GetDestination
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             C                              ( CPF_Parm )

struct FVector AWwiseMicPosOrient::GetDestination ( class AController* C )
{
	static UFunction* pFnGetDestination = NULL;

	if ( ! pFnGetDestination )
		pFnGetDestination = (UFunction*) UObject::GObjObjects()->Data[ 4112 ];

	AWwiseMicPosOrient_execGetDestination_Parms GetDestination_Parms;
	GetDestination_Parms.C = C;

	pFnGetDestination->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDestination, &GetDestination_Parms, NULL );

	pFnGetDestination->FunctionFlags |= 0x400;

	return GetDestination_Parms.ReturnValue;
};

// Function Engine.Actor.SuggestTossVelocity
// [0x00424401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Destination                    ( CPF_Parm )
// struct FVector                 Start                          ( CPF_Parm )
// float                          TossSpeed                      ( CPF_Parm )
// float                          BaseTossZ                      ( CPF_OptionalParm | CPF_Parm )
// float                          DesiredZPct                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 CollisionSize                  ( CPF_OptionalParm | CPF_Parm )
// float                          TerminalVelocity               ( CPF_OptionalParm | CPF_Parm )
// float                          OverrideGravityZ               ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOnlyTraceUp                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 TossVelocity                   ( CPF_Parm | CPF_OutParm )

bool AWwiseMicPosOrient::SuggestTossVelocity ( struct FVector Destination, struct FVector Start, float TossSpeed, float BaseTossZ, float DesiredZPct, struct FVector CollisionSize, float TerminalVelocity, float OverrideGravityZ, unsigned long bOnlyTraceUp, struct FVector* TossVelocity )
{
	static UFunction* pFnSuggestTossVelocity = NULL;

	if ( ! pFnSuggestTossVelocity )
		pFnSuggestTossVelocity = (UFunction*) UObject::GObjObjects()->Data[ 4100 ];

	AWwiseMicPosOrient_execSuggestTossVelocity_Parms SuggestTossVelocity_Parms;
	memcpy ( &SuggestTossVelocity_Parms.Destination, &Destination, 0xC );
	memcpy ( &SuggestTossVelocity_Parms.Start, &Start, 0xC );
	SuggestTossVelocity_Parms.TossSpeed = TossSpeed;
	SuggestTossVelocity_Parms.BaseTossZ = BaseTossZ;
	SuggestTossVelocity_Parms.DesiredZPct = DesiredZPct;
	memcpy ( &SuggestTossVelocity_Parms.CollisionSize, &CollisionSize, 0xC );
	SuggestTossVelocity_Parms.TerminalVelocity = TerminalVelocity;
	SuggestTossVelocity_Parms.OverrideGravityZ = OverrideGravityZ;
	SuggestTossVelocity_Parms.bOnlyTraceUp = bOnlyTraceUp;

	pFnSuggestTossVelocity->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSuggestTossVelocity, &SuggestTossVelocity_Parms, NULL );

	pFnSuggestTossVelocity->FunctionFlags |= 0x400;

	if ( TossVelocity )
		memcpy ( TossVelocity, &SuggestTossVelocity_Parms.TossVelocity, 0xC );

	return SuggestTossVelocity_Parms.ReturnValue;
};

// Function Engine.Actor.PlayerCanSeeMe
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0214]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMicPosOrient::PlayerCanSeeMe ( )
{
	static UFunction* pFnPlayerCanSeeMe = NULL;

	if ( ! pFnPlayerCanSeeMe )
		pFnPlayerCanSeeMe = (UFunction*) UObject::GObjObjects()->Data[ 4098 ];

	AWwiseMicPosOrient_execPlayerCanSeeMe_Parms PlayerCanSeeMe_Parms;

	unsigned short NativeIndex = pFnPlayerCanSeeMe->iNative;
	pFnPlayerCanSeeMe->iNative = 0;

	pFnPlayerCanSeeMe->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayerCanSeeMe, &PlayerCanSeeMe_Parms, NULL );

	pFnPlayerCanSeeMe->FunctionFlags |= 0x400;

	pFnPlayerCanSeeMe->iNative = NativeIndex;

	return PlayerCanSeeMe_Parms.ReturnValue;
};

// Function Engine.Actor.MakeNoise
// [0x00024401] ( FUNC_Final | FUNC_Native ) iNative [0x0200]
// Parameters infos:
// float                          Loudness                       ( CPF_Parm )
// struct FName                   NoiseType                      ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::MakeNoise ( float Loudness, struct FName NoiseType )
{
	static UFunction* pFnMakeNoise = NULL;

	if ( ! pFnMakeNoise )
		pFnMakeNoise = (UFunction*) UObject::GObjObjects()->Data[ 4095 ];

	AWwiseMicPosOrient_execMakeNoise_Parms MakeNoise_Parms;
	MakeNoise_Parms.Loudness = Loudness;
	memcpy ( &MakeNoise_Parms.NoiseType, &NoiseType, 0x8 );

	unsigned short NativeIndex = pFnMakeNoise->iNative;
	pFnMakeNoise->iNative = 0;

	pFnMakeNoise->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMakeNoise, &MakeNoise_Parms, NULL );

	pFnMakeNoise->FunctionFlags |= 0x400;

	pFnMakeNoise->iNative = NativeIndex;
};

// Function Engine.Actor.StopSound
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UWwiseBaseSoundObject*   InSoundEvent                   ( CPF_Parm )

void AWwiseMicPosOrient::StopSound ( class UWwiseBaseSoundObject* InSoundEvent )
{
	static UFunction* pFnStopSound = NULL;

	if ( ! pFnStopSound )
		pFnStopSound = (UFunction*) UObject::GObjObjects()->Data[ 4093 ];

	AWwiseMicPosOrient_execStopSound_Parms StopSound_Parms;
	StopSound_Parms.InSoundEvent = InSoundEvent;

	pFnStopSound->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopSound, &StopSound_Parms, NULL );

	pFnStopSound->FunctionFlags |= 0x400;
};

// Function Engine.Actor.PlaySound
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UWwiseBaseSoundObject*   InSoundCue                     ( CPF_Parm )
// unsigned long                  bNotReplicated                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bNoRepToOwner                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bStopWhenOwnerDestroyed        ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 SoundLocation                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bNoRepToRelevant               ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::PlaySound ( class UWwiseBaseSoundObject* InSoundCue, unsigned long bNotReplicated, unsigned long bNoRepToOwner, unsigned long bStopWhenOwnerDestroyed, struct FVector SoundLocation, unsigned long bNoRepToRelevant )
{
	static UFunction* pFnPlaySound = NULL;

	if ( ! pFnPlaySound )
		pFnPlaySound = (UFunction*) UObject::GObjObjects()->Data[ 4086 ];

	AWwiseMicPosOrient_execPlaySound_Parms PlaySound_Parms;
	PlaySound_Parms.InSoundCue = InSoundCue;
	PlaySound_Parms.bNotReplicated = bNotReplicated;
	PlaySound_Parms.bNoRepToOwner = bNoRepToOwner;
	PlaySound_Parms.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;
	memcpy ( &PlaySound_Parms.SoundLocation, &SoundLocation, 0xC );
	PlaySound_Parms.bNoRepToRelevant = bNoRepToRelevant;

	pFnPlaySound->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlaySound, &PlaySound_Parms, NULL );

	pFnPlaySound->FunctionFlags |= 0x400;
};

// Function Engine.Actor.CreateAudioComponent
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UAudioComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USoundCue*               InSoundCue                     ( CPF_Parm )
// unsigned long                  bPlay                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bStopWhenOwnerDestroyed        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bUseLocation                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 SourceLocation                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAttachToSelf                  ( CPF_OptionalParm | CPF_Parm )

class UAudioComponent* AWwiseMicPosOrient::CreateAudioComponent ( class USoundCue* InSoundCue, unsigned long bPlay, unsigned long bStopWhenOwnerDestroyed, unsigned long bUseLocation, struct FVector SourceLocation, unsigned long bAttachToSelf )
{
	static UFunction* pFnCreateAudioComponent = NULL;

	if ( ! pFnCreateAudioComponent )
		pFnCreateAudioComponent = (UFunction*) UObject::GObjObjects()->Data[ 4078 ];

	AWwiseMicPosOrient_execCreateAudioComponent_Parms CreateAudioComponent_Parms;
	CreateAudioComponent_Parms.InSoundCue = InSoundCue;
	CreateAudioComponent_Parms.bPlay = bPlay;
	CreateAudioComponent_Parms.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;
	CreateAudioComponent_Parms.bUseLocation = bUseLocation;
	memcpy ( &CreateAudioComponent_Parms.SourceLocation, &SourceLocation, 0xC );
	CreateAudioComponent_Parms.bAttachToSelf = bAttachToSelf;

	pFnCreateAudioComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateAudioComponent, &CreateAudioComponent_Parms, NULL );

	pFnCreateAudioComponent->FunctionFlags |= 0x400;

	return CreateAudioComponent_Parms.ReturnValue;
};

// Function Engine.Actor.ResetTimerTimeDilation
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   TimerName                      ( CPF_Const | CPF_Parm )
// class UObject*                 inObj                          ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::ResetTimerTimeDilation ( struct FName TimerName, class UObject* inObj )
{
	static UFunction* pFnResetTimerTimeDilation = NULL;

	if ( ! pFnResetTimerTimeDilation )
		pFnResetTimerTimeDilation = (UFunction*) UObject::GObjObjects()->Data[ 4075 ];

	AWwiseMicPosOrient_execResetTimerTimeDilation_Parms ResetTimerTimeDilation_Parms;
	memcpy ( &ResetTimerTimeDilation_Parms.TimerName, &TimerName, 0x8 );
	ResetTimerTimeDilation_Parms.inObj = inObj;

	pFnResetTimerTimeDilation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetTimerTimeDilation, &ResetTimerTimeDilation_Parms, NULL );

	pFnResetTimerTimeDilation->FunctionFlags |= 0x400;
};

// Function Engine.Actor.ModifyTimerTimeDilation
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   TimerName                      ( CPF_Const | CPF_Parm )
// float                          InTimerTimeDilation            ( CPF_Const | CPF_Parm )
// class UObject*                 inObj                          ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::ModifyTimerTimeDilation ( struct FName TimerName, float InTimerTimeDilation, class UObject* inObj )
{
	static UFunction* pFnModifyTimerTimeDilation = NULL;

	if ( ! pFnModifyTimerTimeDilation )
		pFnModifyTimerTimeDilation = (UFunction*) UObject::GObjObjects()->Data[ 4071 ];

	AWwiseMicPosOrient_execModifyTimerTimeDilation_Parms ModifyTimerTimeDilation_Parms;
	memcpy ( &ModifyTimerTimeDilation_Parms.TimerName, &TimerName, 0x8 );
	ModifyTimerTimeDilation_Parms.InTimerTimeDilation = InTimerTimeDilation;
	ModifyTimerTimeDilation_Parms.inObj = inObj;

	pFnModifyTimerTimeDilation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnModifyTimerTimeDilation, &ModifyTimerTimeDilation_Parms, NULL );

	pFnModifyTimerTimeDilation->FunctionFlags |= 0x400;
};

// Function Engine.Actor.GetRemainingTimeForTimer
// [0x00024103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   TimerFuncName                  ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 inObj                          ( CPF_OptionalParm | CPF_Parm )

float AWwiseMicPosOrient::GetRemainingTimeForTimer ( struct FName TimerFuncName, class UObject* inObj )
{
	static UFunction* pFnGetRemainingTimeForTimer = NULL;

	if ( ! pFnGetRemainingTimeForTimer )
		pFnGetRemainingTimeForTimer = (UFunction*) UObject::GObjObjects()->Data[ 4065 ];

	AWwiseMicPosOrient_execGetRemainingTimeForTimer_Parms GetRemainingTimeForTimer_Parms;
	memcpy ( &GetRemainingTimeForTimer_Parms.TimerFuncName, &TimerFuncName, 0x8 );
	GetRemainingTimeForTimer_Parms.inObj = inObj;

	this->ProcessEvent ( pFnGetRemainingTimeForTimer, &GetRemainingTimeForTimer_Parms, NULL );

	return GetRemainingTimeForTimer_Parms.ReturnValue;
};

// Function Engine.Actor.GetTimerRate
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   TimerFuncName                  ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 inObj                          ( CPF_OptionalParm | CPF_Parm )

float AWwiseMicPosOrient::GetTimerRate ( struct FName TimerFuncName, class UObject* inObj )
{
	static UFunction* pFnGetTimerRate = NULL;

	if ( ! pFnGetTimerRate )
		pFnGetTimerRate = (UFunction*) UObject::GObjObjects()->Data[ 4061 ];

	AWwiseMicPosOrient_execGetTimerRate_Parms GetTimerRate_Parms;
	memcpy ( &GetTimerRate_Parms.TimerFuncName, &TimerFuncName, 0x8 );
	GetTimerRate_Parms.inObj = inObj;

	pFnGetTimerRate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTimerRate, &GetTimerRate_Parms, NULL );

	pFnGetTimerRate->FunctionFlags |= 0x400;

	return GetTimerRate_Parms.ReturnValue;
};

// Function Engine.Actor.GetTimerCount
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   inTimerFunc                    ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 inObj                          ( CPF_OptionalParm | CPF_Parm )

float AWwiseMicPosOrient::GetTimerCount ( struct FName inTimerFunc, class UObject* inObj )
{
	static UFunction* pFnGetTimerCount = NULL;

	if ( ! pFnGetTimerCount )
		pFnGetTimerCount = (UFunction*) UObject::GObjObjects()->Data[ 4057 ];

	AWwiseMicPosOrient_execGetTimerCount_Parms GetTimerCount_Parms;
	memcpy ( &GetTimerCount_Parms.inTimerFunc, &inTimerFunc, 0x8 );
	GetTimerCount_Parms.inObj = inObj;

	pFnGetTimerCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTimerCount, &GetTimerCount_Parms, NULL );

	pFnGetTimerCount->FunctionFlags |= 0x400;

	return GetTimerCount_Parms.ReturnValue;
};

// Function Engine.Actor.IsTimerActive
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   inTimerFunc                    ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 inObj                          ( CPF_OptionalParm | CPF_Parm )

bool AWwiseMicPosOrient::IsTimerActive ( struct FName inTimerFunc, class UObject* inObj )
{
	static UFunction* pFnIsTimerActive = NULL;

	if ( ! pFnIsTimerActive )
		pFnIsTimerActive = (UFunction*) UObject::GObjObjects()->Data[ 4053 ];

	AWwiseMicPosOrient_execIsTimerActive_Parms IsTimerActive_Parms;
	memcpy ( &IsTimerActive_Parms.inTimerFunc, &inTimerFunc, 0x8 );
	IsTimerActive_Parms.inObj = inObj;

	pFnIsTimerActive->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsTimerActive, &IsTimerActive_Parms, NULL );

	pFnIsTimerActive->FunctionFlags |= 0x400;

	return IsTimerActive_Parms.ReturnValue;
};

// Function Engine.Actor.PauseTimer
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bPause                         ( CPF_Parm )
// struct FName                   inTimerFunc                    ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 inObj                          ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::PauseTimer ( unsigned long bPause, struct FName inTimerFunc, class UObject* inObj )
{
	static UFunction* pFnPauseTimer = NULL;

	if ( ! pFnPauseTimer )
		pFnPauseTimer = (UFunction*) UObject::GObjObjects()->Data[ 4049 ];

	AWwiseMicPosOrient_execPauseTimer_Parms PauseTimer_Parms;
	PauseTimer_Parms.bPause = bPause;
	memcpy ( &PauseTimer_Parms.inTimerFunc, &inTimerFunc, 0x8 );
	PauseTimer_Parms.inObj = inObj;

	pFnPauseTimer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPauseTimer, &PauseTimer_Parms, NULL );

	pFnPauseTimer->FunctionFlags |= 0x400;
};

// Function Engine.Actor.ClearAllTimers
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UObject*                 inObj                          ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::ClearAllTimers ( class UObject* inObj )
{
	static UFunction* pFnClearAllTimers = NULL;

	if ( ! pFnClearAllTimers )
		pFnClearAllTimers = (UFunction*) UObject::GObjObjects()->Data[ 4047 ];

	AWwiseMicPosOrient_execClearAllTimers_Parms ClearAllTimers_Parms;
	ClearAllTimers_Parms.inObj = inObj;

	pFnClearAllTimers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearAllTimers, &ClearAllTimers_Parms, NULL );

	pFnClearAllTimers->FunctionFlags |= 0x400;
};

// Function Engine.Actor.ClearTimer
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   inTimerFunc                    ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 inObj                          ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::ClearTimer ( struct FName inTimerFunc, class UObject* inObj )
{
	static UFunction* pFnClearTimer = NULL;

	if ( ! pFnClearTimer )
		pFnClearTimer = (UFunction*) UObject::GObjObjects()->Data[ 4044 ];

	AWwiseMicPosOrient_execClearTimer_Parms ClearTimer_Parms;
	memcpy ( &ClearTimer_Parms.inTimerFunc, &inTimerFunc, 0x8 );
	ClearTimer_Parms.inObj = inObj;

	pFnClearTimer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearTimer, &ClearTimer_Parms, NULL );

	pFnClearTimer->FunctionFlags |= 0x400;
};

// Function Engine.Actor.SetTimer
// [0x00024401] ( FUNC_Final | FUNC_Native ) iNative [0x0118]
// Parameters infos:
// float                          InRate                         ( CPF_Parm )
// unsigned long                  inbLoop                        ( CPF_OptionalParm | CPF_Parm )
// struct FName                   inTimerFunc                    ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 inObj                          ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::SetTimer ( float InRate, unsigned long inbLoop, struct FName inTimerFunc, class UObject* inObj )
{
	static UFunction* pFnSetTimer = NULL;

	if ( ! pFnSetTimer )
		pFnSetTimer = (UFunction*) UObject::GObjObjects()->Data[ 4039 ];

	AWwiseMicPosOrient_execSetTimer_Parms SetTimer_Parms;
	SetTimer_Parms.InRate = InRate;
	SetTimer_Parms.inbLoop = inbLoop;
	memcpy ( &SetTimer_Parms.inTimerFunc, &inTimerFunc, 0x8 );
	SetTimer_Parms.inObj = inObj;

	unsigned short NativeIndex = pFnSetTimer->iNative;
	pFnSetTimer->iNative = 0;

	pFnSetTimer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetTimer, &SetTimer_Parms, NULL );

	pFnSetTimer->FunctionFlags |= 0x400;

	pFnSetTimer->iNative = NativeIndex;
};

// Function Engine.Actor.TornOff
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventTornOff ( )
{
	static UFunction* pFnTornOff = NULL;

	if ( ! pFnTornOff )
		pFnTornOff = (UFunction*) UObject::GObjObjects()->Data[ 4038 ];

	AWwiseMicPosOrient_eventTornOff_Parms TornOff_Parms;

	this->ProcessEvent ( pFnTornOff, &TornOff_Parms, NULL );
};

// Function Engine.Actor.Destroy
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0117]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMicPosOrient::Destroy ( )
{
	static UFunction* pFnDestroy = NULL;

	if ( ! pFnDestroy )
		pFnDestroy = (UFunction*) UObject::GObjObjects()->Data[ 4036 ];

	AWwiseMicPosOrient_execDestroy_Parms Destroy_Parms;

	unsigned short NativeIndex = pFnDestroy->iNative;
	pFnDestroy->iNative = 0;

	pFnDestroy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroy, &Destroy_Parms, NULL );

	pFnDestroy->FunctionFlags |= 0x400;

	pFnDestroy->iNative = NativeIndex;

	return Destroy_Parms.ReturnValue;
};

// Function Engine.Actor.Spawn
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm )
// class UClass*                  SpawnClass                     ( CPF_Parm )
// class AActor*                  SpawnOwner                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   SpawnTag                       ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 SpawnLocation                  ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                SpawnRotation                  ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  ActorTemplate                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bNoCollisionFail               ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFindSafeLocation              ( CPF_OptionalParm | CPF_Parm )

class AActor* AWwiseMicPosOrient::Spawn ( class UClass* SpawnClass, class AActor* SpawnOwner, struct FName SpawnTag, struct FVector SpawnLocation, struct FRotator SpawnRotation, class AActor* ActorTemplate, unsigned long bNoCollisionFail, unsigned long bFindSafeLocation )
{
	static UFunction* pFnSpawn = NULL;

	if ( ! pFnSpawn )
		pFnSpawn = (UFunction*) UObject::GObjObjects()->Data[ 4026 ];

	AWwiseMicPosOrient_execSpawn_Parms Spawn_Parms;
	Spawn_Parms.SpawnClass = SpawnClass;
	Spawn_Parms.SpawnOwner = SpawnOwner;
	memcpy ( &Spawn_Parms.SpawnTag, &SpawnTag, 0x8 );
	memcpy ( &Spawn_Parms.SpawnLocation, &SpawnLocation, 0xC );
	memcpy ( &Spawn_Parms.SpawnRotation, &SpawnRotation, 0xC );
	Spawn_Parms.ActorTemplate = ActorTemplate;
	Spawn_Parms.bNoCollisionFail = bNoCollisionFail;
	Spawn_Parms.bFindSafeLocation = bFindSafeLocation;

	pFnSpawn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSpawn, &Spawn_Parms, NULL );

	pFnSpawn->FunctionFlags |= 0x400;

	return Spawn_Parms.ReturnValue;
};

// Function Engine.Actor.GetBoundingCylinder
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// float                          CollisionRadius                ( CPF_Parm | CPF_OutParm )
// float                          CollisionHeight                ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::GetBoundingCylinder ( float* CollisionRadius, float* CollisionHeight )
{
	static UFunction* pFnGetBoundingCylinder = NULL;

	if ( ! pFnGetBoundingCylinder )
		pFnGetBoundingCylinder = (UFunction*) UObject::GObjObjects()->Data[ 4023 ];

	AWwiseMicPosOrient_execGetBoundingCylinder_Parms GetBoundingCylinder_Parms;

	pFnGetBoundingCylinder->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoundingCylinder, &GetBoundingCylinder_Parms, NULL );

	pFnGetBoundingCylinder->FunctionFlags |= 0x400;

	if ( CollisionRadius )
		*CollisionRadius = GetBoundingCylinder_Parms.CollisionRadius;

	if ( CollisionHeight )
		*CollisionHeight = GetBoundingCylinder_Parms.CollisionHeight;
};

// Function Engine.Actor.GetComponentsBoundingBox
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FBox                    ActorBox                       ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::GetComponentsBoundingBox ( struct FBox* ActorBox )
{
	static UFunction* pFnGetComponentsBoundingBox = NULL;

	if ( ! pFnGetComponentsBoundingBox )
		pFnGetComponentsBoundingBox = (UFunction*) UObject::GObjObjects()->Data[ 4021 ];

	AWwiseMicPosOrient_execGetComponentsBoundingBox_Parms GetComponentsBoundingBox_Parms;

	pFnGetComponentsBoundingBox->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetComponentsBoundingBox, &GetComponentsBoundingBox_Parms, NULL );

	pFnGetComponentsBoundingBox->FunctionFlags |= 0x400;

	if ( ActorBox )
		memcpy ( ActorBox, &GetComponentsBoundingBox_Parms.ActorBox, 0x1C );
};

// Function Engine.Actor.IsOverlapping
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  A                              ( CPF_Parm )

bool AWwiseMicPosOrient::IsOverlapping ( class AActor* A )
{
	static UFunction* pFnIsOverlapping = NULL;

	if ( ! pFnIsOverlapping )
		pFnIsOverlapping = (UFunction*) UObject::GObjObjects()->Data[ 4018 ];

	AWwiseMicPosOrient_execIsOverlapping_Parms IsOverlapping_Parms;
	IsOverlapping_Parms.A = A;

	pFnIsOverlapping->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsOverlapping, &IsOverlapping_Parms, NULL );

	pFnIsOverlapping->FunctionFlags |= 0x400;

	return IsOverlapping_Parms.ReturnValue;
};

// Function Engine.Actor.ContainsPoint
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Spot                           ( CPF_Parm )

bool AWwiseMicPosOrient::ContainsPoint ( struct FVector Spot )
{
	static UFunction* pFnContainsPoint = NULL;

	if ( ! pFnContainsPoint )
		pFnContainsPoint = (UFunction*) UObject::GObjObjects()->Data[ 4015 ];

	AWwiseMicPosOrient_execContainsPoint_Parms ContainsPoint_Parms;
	memcpy ( &ContainsPoint_Parms.Spot, &Spot, 0xC );

	pFnContainsPoint->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnContainsPoint, &ContainsPoint_Parms, NULL );

	pFnContainsPoint->FunctionFlags |= 0x400;

	return ContainsPoint_Parms.ReturnValue;
};

// Function Engine.Actor.FindSpot
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 BoxExtent                      ( CPF_Parm )
// struct FVector                 SpotLocation                   ( CPF_Parm | CPF_OutParm )

bool AWwiseMicPosOrient::FindSpot ( struct FVector BoxExtent, struct FVector* SpotLocation )
{
	static UFunction* pFnFindSpot = NULL;

	if ( ! pFnFindSpot )
		pFnFindSpot = (UFunction*) UObject::GObjObjects()->Data[ 4011 ];

	AWwiseMicPosOrient_execFindSpot_Parms FindSpot_Parms;
	memcpy ( &FindSpot_Parms.BoxExtent, &BoxExtent, 0xC );

	pFnFindSpot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindSpot, &FindSpot_Parms, NULL );

	pFnFindSpot->FunctionFlags |= 0x400;

	if ( SpotLocation )
		memcpy ( SpotLocation, &FindSpot_Parms.SpotLocation, 0xC );

	return FindSpot_Parms.ReturnValue;
};

// Function Engine.Actor.TraceAllPhysicsAssetInteractions
// [0x00424401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USkeletalMeshComponent*  SkelMeshComp                   ( CPF_Parm | CPF_EditInline )
// struct FVector                 EndTrace                       ( CPF_Parm )
// struct FVector                 StartTrace                     ( CPF_Parm )
// struct FVector                 Extent                         ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FImpactInfo >   out_Hits                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AWwiseMicPosOrient::TraceAllPhysicsAssetInteractions ( class USkeletalMeshComponent* SkelMeshComp, struct FVector EndTrace, struct FVector StartTrace, struct FVector Extent, TArray< struct FImpactInfo >* out_Hits )
{
	static UFunction* pFnTraceAllPhysicsAssetInteractions = NULL;

	if ( ! pFnTraceAllPhysicsAssetInteractions )
		pFnTraceAllPhysicsAssetInteractions = (UFunction*) UObject::GObjObjects()->Data[ 4003 ];

	AWwiseMicPosOrient_execTraceAllPhysicsAssetInteractions_Parms TraceAllPhysicsAssetInteractions_Parms;
	TraceAllPhysicsAssetInteractions_Parms.SkelMeshComp = SkelMeshComp;
	memcpy ( &TraceAllPhysicsAssetInteractions_Parms.EndTrace, &EndTrace, 0xC );
	memcpy ( &TraceAllPhysicsAssetInteractions_Parms.StartTrace, &StartTrace, 0xC );
	memcpy ( &TraceAllPhysicsAssetInteractions_Parms.Extent, &Extent, 0xC );

	pFnTraceAllPhysicsAssetInteractions->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTraceAllPhysicsAssetInteractions, &TraceAllPhysicsAssetInteractions_Parms, NULL );

	pFnTraceAllPhysicsAssetInteractions->FunctionFlags |= 0x400;

	if ( out_Hits )
		memcpy ( out_Hits, &TraceAllPhysicsAssetInteractions_Parms.out_Hits, 0xC );

	return TraceAllPhysicsAssetInteractions_Parms.ReturnValue;
};

// Function Engine.Actor.FastTrace
// [0x00024401] ( FUNC_Final | FUNC_Native ) iNative [0x0224]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 TraceEnd                       ( CPF_Parm )
// struct FVector                 TraceStart                     ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 BoxExtent                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bTraceBullet                   ( CPF_OptionalParm | CPF_Parm )

bool AWwiseMicPosOrient::FastTrace ( struct FVector TraceEnd, struct FVector TraceStart, struct FVector BoxExtent, unsigned long bTraceBullet )
{
	static UFunction* pFnFastTrace = NULL;

	if ( ! pFnFastTrace )
		pFnFastTrace = (UFunction*) UObject::GObjObjects()->Data[ 3997 ];

	AWwiseMicPosOrient_execFastTrace_Parms FastTrace_Parms;
	memcpy ( &FastTrace_Parms.TraceEnd, &TraceEnd, 0xC );
	memcpy ( &FastTrace_Parms.TraceStart, &TraceStart, 0xC );
	memcpy ( &FastTrace_Parms.BoxExtent, &BoxExtent, 0xC );
	FastTrace_Parms.bTraceBullet = bTraceBullet;

	unsigned short NativeIndex = pFnFastTrace->iNative;
	pFnFastTrace->iNative = 0;

	pFnFastTrace->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFastTrace, &FastTrace_Parms, NULL );

	pFnFastTrace->FunctionFlags |= 0x400;

	pFnFastTrace->iNative = NativeIndex;

	return FastTrace_Parms.ReturnValue;
};

// Function Engine.Actor.PointCheckComponent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPrimitiveComponent*     InComponent                    ( CPF_Parm | CPF_EditInline )
// struct FVector                 PointLocation                  ( CPF_Parm )
// struct FVector                 PointExtent                    ( CPF_Parm )

bool AWwiseMicPosOrient::PointCheckComponent ( class UPrimitiveComponent* InComponent, struct FVector PointLocation, struct FVector PointExtent )
{
	static UFunction* pFnPointCheckComponent = NULL;

	if ( ! pFnPointCheckComponent )
		pFnPointCheckComponent = (UFunction*) UObject::GObjObjects()->Data[ 3992 ];

	AWwiseMicPosOrient_execPointCheckComponent_Parms PointCheckComponent_Parms;
	PointCheckComponent_Parms.InComponent = InComponent;
	memcpy ( &PointCheckComponent_Parms.PointLocation, &PointLocation, 0xC );
	memcpy ( &PointCheckComponent_Parms.PointExtent, &PointExtent, 0xC );

	pFnPointCheckComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPointCheckComponent, &PointCheckComponent_Parms, NULL );

	pFnPointCheckComponent->FunctionFlags |= 0x400;

	return PointCheckComponent_Parms.ReturnValue;
};

// Function Engine.Actor.TraceComponent
// [0x00424401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPrimitiveComponent*     InComponent                    ( CPF_Parm | CPF_EditInline )
// struct FVector                 TraceEnd                       ( CPF_Parm )
// struct FVector                 TraceStart                     ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 Extent                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bComplexCollision              ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm | CPF_OutParm )
// struct FVector                 HitNormal                      ( CPF_Parm | CPF_OutParm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

bool AWwiseMicPosOrient::TraceComponent ( class UPrimitiveComponent* InComponent, struct FVector TraceEnd, struct FVector TraceStart, struct FVector Extent, unsigned long bComplexCollision, struct FVector* HitLocation, struct FVector* HitNormal, struct FTraceHitInfo* HitInfo )
{
	static UFunction* pFnTraceComponent = NULL;

	if ( ! pFnTraceComponent )
		pFnTraceComponent = (UFunction*) UObject::GObjObjects()->Data[ 3982 ];

	AWwiseMicPosOrient_execTraceComponent_Parms TraceComponent_Parms;
	TraceComponent_Parms.InComponent = InComponent;
	memcpy ( &TraceComponent_Parms.TraceEnd, &TraceEnd, 0xC );
	memcpy ( &TraceComponent_Parms.TraceStart, &TraceStart, 0xC );
	memcpy ( &TraceComponent_Parms.Extent, &Extent, 0xC );
	TraceComponent_Parms.bComplexCollision = bComplexCollision;

	pFnTraceComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTraceComponent, &TraceComponent_Parms, NULL );

	pFnTraceComponent->FunctionFlags |= 0x400;

	if ( HitLocation )
		memcpy ( HitLocation, &TraceComponent_Parms.HitLocation, 0xC );

	if ( HitNormal )
		memcpy ( HitNormal, &TraceComponent_Parms.HitNormal, 0xC );

	if ( HitInfo )
		memcpy ( HitInfo, &TraceComponent_Parms.HitInfo, 0x1C );

	return TraceComponent_Parms.ReturnValue;
};

// Function Engine.Actor.Trace
// [0x00424401] ( FUNC_Final | FUNC_Native ) iNative [0x0115]
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 TraceEnd                       ( CPF_Parm )
// struct FVector                 TraceStart                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bTraceActors                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 Extent                         ( CPF_OptionalParm | CPF_Parm )
// int                            ExtraTraceFlags                ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm | CPF_OutParm )
// struct FVector                 HitNormal                      ( CPF_Parm | CPF_OutParm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

class AActor* AWwiseMicPosOrient::Trace ( struct FVector TraceEnd, struct FVector TraceStart, unsigned long bTraceActors, struct FVector Extent, int ExtraTraceFlags, struct FVector* HitLocation, struct FVector* HitNormal, struct FTraceHitInfo* HitInfo )
{
	static UFunction* pFnTrace = NULL;

	if ( ! pFnTrace )
		pFnTrace = (UFunction*) UObject::GObjObjects()->Data[ 3972 ];

	AWwiseMicPosOrient_execTrace_Parms Trace_Parms;
	memcpy ( &Trace_Parms.TraceEnd, &TraceEnd, 0xC );
	memcpy ( &Trace_Parms.TraceStart, &TraceStart, 0xC );
	Trace_Parms.bTraceActors = bTraceActors;
	memcpy ( &Trace_Parms.Extent, &Extent, 0xC );
	Trace_Parms.ExtraTraceFlags = ExtraTraceFlags;

	unsigned short NativeIndex = pFnTrace->iNative;
	pFnTrace->iNative = 0;

	pFnTrace->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTrace, &Trace_Parms, NULL );

	pFnTrace->FunctionFlags |= 0x400;

	pFnTrace->iNative = NativeIndex;

	if ( HitLocation )
		memcpy ( HitLocation, &Trace_Parms.HitLocation, 0xC );

	if ( HitNormal )
		memcpy ( HitNormal, &Trace_Parms.HitNormal, 0xC );

	if ( HitInfo )
		memcpy ( HitInfo, &Trace_Parms.HitInfo, 0x1C );

	return Trace_Parms.ReturnValue;
};

// Function Engine.Actor.VolumeBasedDestroy
// [0x00020102] 
// Parameters infos:
// class APhysicsVolume*          PV                             ( CPF_Parm )

void AWwiseMicPosOrient::VolumeBasedDestroy ( class APhysicsVolume* PV )
{
	static UFunction* pFnVolumeBasedDestroy = NULL;

	if ( ! pFnVolumeBasedDestroy )
		pFnVolumeBasedDestroy = (UFunction*) UObject::GObjObjects()->Data[ 3970 ];

	AWwiseMicPosOrient_execVolumeBasedDestroy_Parms VolumeBasedDestroy_Parms;
	VolumeBasedDestroy_Parms.PV = PV;

	this->ProcessEvent ( pFnVolumeBasedDestroy, &VolumeBasedDestroy_Parms, NULL );
};

// Function Engine.Actor.OutsideWorldBounds
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventOutsideWorldBounds ( )
{
	static UFunction* pFnOutsideWorldBounds = NULL;

	if ( ! pFnOutsideWorldBounds )
		pFnOutsideWorldBounds = (UFunction*) UObject::GObjObjects()->Data[ 3969 ];

	AWwiseMicPosOrient_eventOutsideWorldBounds_Parms OutsideWorldBounds_Parms;

	this->ProcessEvent ( pFnOutsideWorldBounds, &OutsideWorldBounds_Parms, NULL );
};

// Function Engine.Actor.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UClass*                  dmgType                        ( CPF_Parm )

void AWwiseMicPosOrient::eventFellOutOfWorld ( class UClass* dmgType )
{
	static UFunction* pFnFellOutOfWorld = NULL;

	if ( ! pFnFellOutOfWorld )
		pFnFellOutOfWorld = (UFunction*) UObject::GObjObjects()->Data[ 3967 ];

	AWwiseMicPosOrient_eventFellOutOfWorld_Parms FellOutOfWorld_Parms;
	FellOutOfWorld_Parms.dmgType = dmgType;

	this->ProcessEvent ( pFnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
};

// Function Engine.Actor.UsedBy
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   User                           ( CPF_Parm )

bool AWwiseMicPosOrient::UsedBy ( class APawn* User )
{
	static UFunction* pFnUsedBy = NULL;

	if ( ! pFnUsedBy )
		pFnUsedBy = (UFunction*) UObject::GObjObjects()->Data[ 3964 ];

	AWwiseMicPosOrient_execUsedBy_Parms UsedBy_Parms;
	UsedBy_Parms.User = User;

	this->ProcessEvent ( pFnUsedBy, &UsedBy_Parms, NULL );

	return UsedBy_Parms.ReturnValue;
};

// Function Engine.Actor.OverRotated
// [0x00420900] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                out_Desired                    ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_Actual                     ( CPF_Parm | CPF_OutParm )

bool AWwiseMicPosOrient::eventOverRotated ( struct FRotator* out_Desired, struct FRotator* out_Actual )
{
	static UFunction* pFnOverRotated = NULL;

	if ( ! pFnOverRotated )
		pFnOverRotated = (UFunction*) UObject::GObjObjects()->Data[ 3960 ];

	AWwiseMicPosOrient_eventOverRotated_Parms OverRotated_Parms;

	this->ProcessEvent ( pFnOverRotated, &OverRotated_Parms, NULL );

	if ( out_Desired )
		memcpy ( out_Desired, &OverRotated_Parms.out_Desired, 0xC );

	if ( out_Actual )
		memcpy ( out_Actual, &OverRotated_Parms.out_Actual, 0xC );

	return OverRotated_Parms.ReturnValue;
};

// Function Engine.Actor.ClampRotation
// [0x00420501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                rBase                          ( CPF_Parm )
// struct FRotator                rUpperLimits                   ( CPF_Parm )
// struct FRotator                rLowerLimits                   ( CPF_Parm )
// struct FRotator                out_Rot                        ( CPF_Parm | CPF_OutParm )

bool AWwiseMicPosOrient::ClampRotation ( struct FRotator rBase, struct FRotator rUpperLimits, struct FRotator rLowerLimits, struct FRotator* out_Rot )
{
	static UFunction* pFnClampRotation = NULL;

	if ( ! pFnClampRotation )
		pFnClampRotation = (UFunction*) UObject::GObjObjects()->Data[ 3954 ];

	AWwiseMicPosOrient_execClampRotation_Parms ClampRotation_Parms;
	memcpy ( &ClampRotation_Parms.rBase, &rBase, 0xC );
	memcpy ( &ClampRotation_Parms.rUpperLimits, &rUpperLimits, 0xC );
	memcpy ( &ClampRotation_Parms.rLowerLimits, &rLowerLimits, 0xC );

	pFnClampRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClampRotation, &ClampRotation_Parms, NULL );

	pFnClampRotation->FunctionFlags |= 0x400;

	if ( out_Rot )
		memcpy ( out_Rot, &ClampRotation_Parms.out_Rot, 0xC );

	return ClampRotation_Parms.ReturnValue;
};

// Function Engine.Actor.OnSleepRBPhysics
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventOnSleepRBPhysics ( )
{
	static UFunction* pFnOnSleepRBPhysics = NULL;

	if ( ! pFnOnSleepRBPhysics )
		pFnOnSleepRBPhysics = (UFunction*) UObject::GObjObjects()->Data[ 3953 ];

	AWwiseMicPosOrient_eventOnSleepRBPhysics_Parms OnSleepRBPhysics_Parms;

	this->ProcessEvent ( pFnOnSleepRBPhysics, &OnSleepRBPhysics_Parms, NULL );
};

// Function Engine.Actor.OnWakeRBPhysics
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventOnWakeRBPhysics ( )
{
	static UFunction* pFnOnWakeRBPhysics = NULL;

	if ( ! pFnOnWakeRBPhysics )
		pFnOnWakeRBPhysics = (UFunction*) UObject::GObjObjects()->Data[ 3952 ];

	AWwiseMicPosOrient_eventOnWakeRBPhysics_Parms OnWakeRBPhysics_Parms;

	this->ProcessEvent ( pFnOnWakeRBPhysics, &OnWakeRBPhysics_Parms, NULL );
};

// Function Engine.Actor.RanInto
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AWwiseMicPosOrient::eventRanInto ( class AActor* Other )
{
	static UFunction* pFnRanInto = NULL;

	if ( ! pFnRanInto )
		pFnRanInto = (UFunction*) UObject::GObjObjects()->Data[ 3950 ];

	AWwiseMicPosOrient_eventRanInto_Parms RanInto_Parms;
	RanInto_Parms.Other = Other;

	this->ProcessEvent ( pFnRanInto, &RanInto_Parms, NULL );
};

// Function Engine.Actor.EncroachedBy
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AWwiseMicPosOrient::eventEncroachedBy ( class AActor* Other )
{
	static UFunction* pFnEncroachedBy = NULL;

	if ( ! pFnEncroachedBy )
		pFnEncroachedBy = (UFunction*) UObject::GObjObjects()->Data[ 3948 ];

	AWwiseMicPosOrient_eventEncroachedBy_Parms EncroachedBy_Parms;
	EncroachedBy_Parms.Other = Other;

	this->ProcessEvent ( pFnEncroachedBy, &EncroachedBy_Parms, NULL );
};

// Function Engine.Actor.EncroachingOn
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )

bool AWwiseMicPosOrient::eventEncroachingOn ( class AActor* Other )
{
	static UFunction* pFnEncroachingOn = NULL;

	if ( ! pFnEncroachingOn )
		pFnEncroachingOn = (UFunction*) UObject::GObjObjects()->Data[ 3945 ];

	AWwiseMicPosOrient_eventEncroachingOn_Parms EncroachingOn_Parms;
	EncroachingOn_Parms.Other = Other;

	this->ProcessEvent ( pFnEncroachingOn, &EncroachingOn_Parms, NULL );

	return EncroachingOn_Parms.ReturnValue;
};

// Function Engine.Actor.CollisionChanged
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventCollisionChanged ( )
{
	static UFunction* pFnCollisionChanged = NULL;

	if ( ! pFnCollisionChanged )
		pFnCollisionChanged = (UFunction*) UObject::GObjObjects()->Data[ 3944 ];

	AWwiseMicPosOrient_eventCollisionChanged_Parms CollisionChanged_Parms;

	this->ProcessEvent ( pFnCollisionChanged, &CollisionChanged_Parms, NULL );
};

// Function Engine.Actor.SpecialHandling
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   Other                          ( CPF_Parm )

class AActor* AWwiseMicPosOrient::eventSpecialHandling ( class APawn* Other )
{
	static UFunction* pFnSpecialHandling = NULL;

	if ( ! pFnSpecialHandling )
		pFnSpecialHandling = (UFunction*) UObject::GObjObjects()->Data[ 3941 ];

	AWwiseMicPosOrient_eventSpecialHandling_Parms SpecialHandling_Parms;
	SpecialHandling_Parms.Other = Other;

	this->ProcessEvent ( pFnSpecialHandling, &SpecialHandling_Parms, NULL );

	return SpecialHandling_Parms.ReturnValue;
};

// Function Engine.Actor.Detach
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AWwiseMicPosOrient::eventDetach ( class AActor* Other )
{
	static UFunction* pFnDetach = NULL;

	if ( ! pFnDetach )
		pFnDetach = (UFunction*) UObject::GObjObjects()->Data[ 3939 ];

	AWwiseMicPosOrient_eventDetach_Parms Detach_Parms;
	Detach_Parms.Other = Other;

	this->ProcessEvent ( pFnDetach, &Detach_Parms, NULL );
};

// Function Engine.Actor.Attach
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AWwiseMicPosOrient::eventAttach ( class AActor* Other )
{
	static UFunction* pFnAttach = NULL;

	if ( ! pFnAttach )
		pFnAttach = (UFunction*) UObject::GObjObjects()->Data[ 3937 ];

	AWwiseMicPosOrient_eventAttach_Parms Attach_Parms;
	Attach_Parms.Other = Other;

	this->ProcessEvent ( pFnAttach, &Attach_Parms, NULL );
};

// Function Engine.Actor.BaseChange
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventBaseChange ( )
{
	static UFunction* pFnBaseChange = NULL;

	if ( ! pFnBaseChange )
		pFnBaseChange = (UFunction*) UObject::GObjObjects()->Data[ 3936 ];

	AWwiseMicPosOrient_eventBaseChange_Parms BaseChange_Parms;

	this->ProcessEvent ( pFnBaseChange, &BaseChange_Parms, NULL );
};

// Function Engine.Actor.Bump
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AWwiseMicPosOrient::eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal )
{
	static UFunction* pFnBump = NULL;

	if ( ! pFnBump )
		pFnBump = (UFunction*) UObject::GObjObjects()->Data[ 3932 ];

	AWwiseMicPosOrient_eventBump_Parms Bump_Parms;
	Bump_Parms.Other = Other;
	Bump_Parms.OtherComp = OtherComp;
	memcpy ( &Bump_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnBump, &Bump_Parms, NULL );
};

// Function Engine.Actor.UnTouch
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AWwiseMicPosOrient::eventUnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 3930 ];

	AWwiseMicPosOrient_eventUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function Engine.Actor.PostTouch
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AWwiseMicPosOrient::eventPostTouch ( class AActor* Other )
{
	static UFunction* pFnPostTouch = NULL;

	if ( ! pFnPostTouch )
		pFnPostTouch = (UFunction*) UObject::GObjObjects()->Data[ 3928 ];

	AWwiseMicPosOrient_eventPostTouch_Parms PostTouch_Parms;
	PostTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnPostTouch, &PostTouch_Parms, NULL );
};

// Function Engine.Actor.Touch
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AWwiseMicPosOrient::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 3923 ];

	AWwiseMicPosOrient_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function Engine.Actor.PhysicsVolumeChange
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class APhysicsVolume*          NewVolume                      ( CPF_Parm )

void AWwiseMicPosOrient::eventPhysicsVolumeChange ( class APhysicsVolume* NewVolume )
{
	static UFunction* pFnPhysicsVolumeChange = NULL;

	if ( ! pFnPhysicsVolumeChange )
		pFnPhysicsVolumeChange = (UFunction*) UObject::GObjObjects()->Data[ 3921 ];

	AWwiseMicPosOrient_eventPhysicsVolumeChange_Parms PhysicsVolumeChange_Parms;
	PhysicsVolumeChange_Parms.NewVolume = NewVolume;

	this->ProcessEvent ( pFnPhysicsVolumeChange, &PhysicsVolumeChange_Parms, NULL );
};

// Function Engine.Actor.Landed
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  FloorActor                     ( CPF_Parm )

void AWwiseMicPosOrient::eventLanded ( struct FVector HitNormal, class AActor* FloorActor )
{
	static UFunction* pFnLanded = NULL;

	if ( ! pFnLanded )
		pFnLanded = (UFunction*) UObject::GObjObjects()->Data[ 3918 ];

	AWwiseMicPosOrient_eventLanded_Parms Landed_Parms;
	memcpy ( &Landed_Parms.HitNormal, &HitNormal, 0xC );
	Landed_Parms.FloorActor = FloorActor;

	this->ProcessEvent ( pFnLanded, &Landed_Parms, NULL );
};

// Function Engine.Actor.Falling
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventFalling ( )
{
	static UFunction* pFnFalling = NULL;

	if ( ! pFnFalling )
		pFnFalling = (UFunction*) UObject::GObjObjects()->Data[ 3917 ];

	AWwiseMicPosOrient_eventFalling_Parms Falling_Parms;

	this->ProcessEvent ( pFnFalling, &Falling_Parms, NULL );
};

// Function Engine.Actor.HitWall
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void AWwiseMicPosOrient::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 3912 ];

	AWwiseMicPosOrient_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function Engine.Actor.Timer
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventTimer ( )
{
	static UFunction* pFnTimer = NULL;

	if ( ! pFnTimer )
		pFnTimer = (UFunction*) UObject::GObjObjects()->Data[ 3911 ];

	AWwiseMicPosOrient_eventTimer_Parms Timer_Parms;

	this->ProcessEvent ( pFnTimer, &Timer_Parms, NULL );
};

// Function Engine.Actor.Tick
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AWwiseMicPosOrient::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 3909 ];

	AWwiseMicPosOrient_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function Engine.Actor.LostChild
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AWwiseMicPosOrient::eventLostChild ( class AActor* Other )
{
	static UFunction* pFnLostChild = NULL;

	if ( ! pFnLostChild )
		pFnLostChild = (UFunction*) UObject::GObjObjects()->Data[ 3907 ];

	AWwiseMicPosOrient_eventLostChild_Parms LostChild_Parms;
	LostChild_Parms.Other = Other;

	this->ProcessEvent ( pFnLostChild, &LostChild_Parms, NULL );
};

// Function Engine.Actor.GainedChild
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AWwiseMicPosOrient::eventGainedChild ( class AActor* Other )
{
	static UFunction* pFnGainedChild = NULL;

	if ( ! pFnGainedChild )
		pFnGainedChild = (UFunction*) UObject::GObjObjects()->Data[ 3905 ];

	AWwiseMicPosOrient_eventGainedChild_Parms GainedChild_Parms;
	GainedChild_Parms.Other = Other;

	this->ProcessEvent ( pFnGainedChild, &GainedChild_Parms, NULL );
};

// Function Engine.Actor.Destroyed
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AWwiseMicPosOrient::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 3904 ];

	AWwiseMicPosOrient_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function Engine.Actor.SetTickIsDisabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bInDisabled                    ( CPF_Parm )

void AWwiseMicPosOrient::SetTickIsDisabled ( unsigned long bInDisabled )
{
	static UFunction* pFnSetTickIsDisabled = NULL;

	if ( ! pFnSetTickIsDisabled )
		pFnSetTickIsDisabled = (UFunction*) UObject::GObjObjects()->Data[ 3902 ];

	AWwiseMicPosOrient_execSetTickIsDisabled_Parms SetTickIsDisabled_Parms;
	SetTickIsDisabled_Parms.bInDisabled = bInDisabled;

	pFnSetTickIsDisabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetTickIsDisabled, &SetTickIsDisabled_Parms, NULL );

	pFnSetTickIsDisabled->FunctionFlags |= 0x400;
};

// Function Engine.Actor.SetTickGroup
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  NewTickGroup                   ( CPF_Parm )

void AWwiseMicPosOrient::SetTickGroup ( unsigned char NewTickGroup )
{
	static UFunction* pFnSetTickGroup = NULL;

	if ( ! pFnSetTickGroup )
		pFnSetTickGroup = (UFunction*) UObject::GObjObjects()->Data[ 3900 ];

	AWwiseMicPosOrient_execSetTickGroup_Parms SetTickGroup_Parms;
	SetTickGroup_Parms.NewTickGroup = NewTickGroup;

	pFnSetTickGroup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetTickGroup, &SetTickGroup_Parms, NULL );

	pFnSetTickGroup->FunctionFlags |= 0x400;
};

// Function Engine.Actor.ReattachComponent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UActorComponent*         ComponentToReattach            ( CPF_Parm | CPF_EditInline )

void AWwiseMicPosOrient::ReattachComponent ( class UActorComponent* ComponentToReattach )
{
	static UFunction* pFnReattachComponent = NULL;

	if ( ! pFnReattachComponent )
		pFnReattachComponent = (UFunction*) UObject::GObjObjects()->Data[ 3898 ];

	AWwiseMicPosOrient_execReattachComponent_Parms ReattachComponent_Parms;
	ReattachComponent_Parms.ComponentToReattach = ComponentToReattach;

	pFnReattachComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReattachComponent, &ReattachComponent_Parms, NULL );

	pFnReattachComponent->FunctionFlags |= 0x400;
};

// Function Engine.Actor.DetachComponent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UActorComponent*         ExComponent                    ( CPF_Parm | CPF_EditInline )

void AWwiseMicPosOrient::DetachComponent ( class UActorComponent* ExComponent )
{
	static UFunction* pFnDetachComponent = NULL;

	if ( ! pFnDetachComponent )
		pFnDetachComponent = (UFunction*) UObject::GObjObjects()->Data[ 3896 ];

	AWwiseMicPosOrient_execDetachComponent_Parms DetachComponent_Parms;
	DetachComponent_Parms.ExComponent = ExComponent;

	pFnDetachComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDetachComponent, &DetachComponent_Parms, NULL );

	pFnDetachComponent->FunctionFlags |= 0x400;
};

// Function Engine.Actor.AttachComponent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UActorComponent*         NewComponent                   ( CPF_Parm | CPF_EditInline )

void AWwiseMicPosOrient::AttachComponent ( class UActorComponent* NewComponent )
{
	static UFunction* pFnAttachComponent = NULL;

	if ( ! pFnAttachComponent )
		pFnAttachComponent = (UFunction*) UObject::GObjObjects()->Data[ 3894 ];

	AWwiseMicPosOrient_execAttachComponent_Parms AttachComponent_Parms;
	AttachComponent_Parms.NewComponent = NewComponent;

	pFnAttachComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAttachComponent, &AttachComponent_Parms, NULL );

	pFnAttachComponent->FunctionFlags |= 0x400;
};

// Function Engine.Actor.UnClock
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          Time                           ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::UnClock ( float* Time )
{
	static UFunction* pFnUnClock = NULL;

	if ( ! pFnUnClock )
		pFnUnClock = (UFunction*) UObject::GObjObjects()->Data[ 3892 ];

	AWwiseMicPosOrient_execUnClock_Parms UnClock_Parms;

	pFnUnClock->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnClock, &UnClock_Parms, NULL );

	pFnUnClock->FunctionFlags |= 0x400;

	if ( Time )
		*Time = UnClock_Parms.Time;
};

// Function Engine.Actor.Clock
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          Time                           ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::Clock ( float* Time )
{
	static UFunction* pFnClock = NULL;

	if ( ! pFnClock )
		pFnClock = (UFunction*) UObject::GObjObjects()->Data[ 3890 ];

	AWwiseMicPosOrient_execClock_Parms Clock_Parms;

	pFnClock->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClock, &Clock_Parms, NULL );

	pFnClock->FunctionFlags |= 0x400;

	if ( Time )
		*Time = Clock_Parms.Time;
};

// Function Engine.Actor.SetPhysics
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0F82]
// Parameters infos:
// unsigned char                  newPhysics                     ( CPF_Parm )

void AWwiseMicPosOrient::SetPhysics ( unsigned char newPhysics )
{
	static UFunction* pFnSetPhysics = NULL;

	if ( ! pFnSetPhysics )
		pFnSetPhysics = (UFunction*) UObject::GObjObjects()->Data[ 3888 ];

	AWwiseMicPosOrient_execSetPhysics_Parms SetPhysics_Parms;
	SetPhysics_Parms.newPhysics = newPhysics;

	unsigned short NativeIndex = pFnSetPhysics->iNative;
	pFnSetPhysics->iNative = 0;

	pFnSetPhysics->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPhysics, &SetPhysics_Parms, NULL );

	pFnSetPhysics->FunctionFlags |= 0x400;

	pFnSetPhysics->iNative = NativeIndex;
};

// Function Engine.Actor.SetOnlyOwnerSee
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bNewOnlyOwnerSee               ( CPF_Parm )

void AWwiseMicPosOrient::SetOnlyOwnerSee ( unsigned long bNewOnlyOwnerSee )
{
	static UFunction* pFnSetOnlyOwnerSee = NULL;

	if ( ! pFnSetOnlyOwnerSee )
		pFnSetOnlyOwnerSee = (UFunction*) UObject::GObjObjects()->Data[ 3886 ];

	AWwiseMicPosOrient_execSetOnlyOwnerSee_Parms SetOnlyOwnerSee_Parms;
	SetOnlyOwnerSee_Parms.bNewOnlyOwnerSee = bNewOnlyOwnerSee;

	pFnSetOnlyOwnerSee->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOnlyOwnerSee, &SetOnlyOwnerSee_Parms, NULL );

	pFnSetOnlyOwnerSee->FunctionFlags |= 0x400;
};

// Function Engine.Actor.SetHidden
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bNewHidden                     ( CPF_Parm )

void AWwiseMicPosOrient::SetHidden ( unsigned long bNewHidden )
{
	static UFunction* pFnSetHidden = NULL;

	if ( ! pFnSetHidden )
		pFnSetHidden = (UFunction*) UObject::GObjObjects()->Data[ 3884 ];

	AWwiseMicPosOrient_execSetHidden_Parms SetHidden_Parms;
	SetHidden_Parms.bNewHidden = bNewHidden;

	pFnSetHidden->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHidden, &SetHidden_Parms, NULL );

	pFnSetHidden->FunctionFlags |= 0x400;
};

// Function Engine.Actor.ChartData
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 DataName                       ( CPF_Parm | CPF_NeedCtorLink )
// float                          DataValue                      ( CPF_Parm )

void AWwiseMicPosOrient::ChartData ( struct FString DataName, float DataValue )
{
	static UFunction* pFnChartData = NULL;

	if ( ! pFnChartData )
		pFnChartData = (UFunction*) UObject::GObjObjects()->Data[ 3881 ];

	AWwiseMicPosOrient_execChartData_Parms ChartData_Parms;
	memcpy ( &ChartData_Parms.DataName, &DataName, 0xC );
	ChartData_Parms.DataValue = DataValue;

	pFnChartData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChartData, &ChartData_Parms, NULL );

	pFnChartData->FunctionFlags |= 0x400;
};

// Function Engine.Actor.FlushDebugStrings
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseMicPosOrient::FlushDebugStrings ( )
{
	static UFunction* pFnFlushDebugStrings = NULL;

	if ( ! pFnFlushDebugStrings )
		pFnFlushDebugStrings = (UFunction*) UObject::GObjObjects()->Data[ 3880 ];

	AWwiseMicPosOrient_execFlushDebugStrings_Parms FlushDebugStrings_Parms;

	pFnFlushDebugStrings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushDebugStrings, &FlushDebugStrings_Parms, NULL );

	pFnFlushDebugStrings->FunctionFlags |= 0x400;
};

// Function Engine.Actor.DrawDebugFrustrum
// [0x00426401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  R                              ( CPF_Parm )
// unsigned char                  G                              ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )
// unsigned long                  bPersistentLines               ( CPF_OptionalParm | CPF_Parm )
// struct FMatrix                 FrustumToWorld                 ( CPF_Const | CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::DrawDebugFrustrum ( unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines, struct FMatrix* FrustumToWorld )
{
	static UFunction* pFnDrawDebugFrustrum = NULL;

	if ( ! pFnDrawDebugFrustrum )
		pFnDrawDebugFrustrum = (UFunction*) UObject::GObjObjects()->Data[ 3874 ];

	AWwiseMicPosOrient_execDrawDebugFrustrum_Parms DrawDebugFrustrum_Parms;
	DrawDebugFrustrum_Parms.R = R;
	DrawDebugFrustrum_Parms.G = G;
	DrawDebugFrustrum_Parms.B = B;
	DrawDebugFrustrum_Parms.bPersistentLines = bPersistentLines;

	pFnDrawDebugFrustrum->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawDebugFrustrum, &DrawDebugFrustrum_Parms, NULL );

	pFnDrawDebugFrustrum->FunctionFlags |= 0x400;

	if ( FrustumToWorld )
		memcpy ( FrustumToWorld, &DrawDebugFrustrum_Parms.FrustumToWorld, 0x40 );
};

// Function Engine.Actor.DrawDebugString
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 TextLocation                   ( CPF_Parm )
// struct FString                 Text                           ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// class AActor*                  TestBaseActor                  ( CPF_OptionalParm | CPF_Parm )
// struct FColor                  TextColor                      ( CPF_OptionalParm | CPF_Parm )
// float                          Duration                       ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::DrawDebugString ( struct FVector TextLocation, struct FString Text, class AActor* TestBaseActor, struct FColor TextColor, float Duration )
{
	static UFunction* pFnDrawDebugString = NULL;

	if ( ! pFnDrawDebugString )
		pFnDrawDebugString = (UFunction*) UObject::GObjObjects()->Data[ 3868 ];

	AWwiseMicPosOrient_execDrawDebugString_Parms DrawDebugString_Parms;
	memcpy ( &DrawDebugString_Parms.TextLocation, &TextLocation, 0xC );
	memcpy ( &DrawDebugString_Parms.Text, &Text, 0xC );
	DrawDebugString_Parms.TestBaseActor = TestBaseActor;
	memcpy ( &DrawDebugString_Parms.TextColor, &TextColor, 0x4 );
	DrawDebugString_Parms.Duration = Duration;

	pFnDrawDebugString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawDebugString, &DrawDebugString_Parms, NULL );

	pFnDrawDebugString->FunctionFlags |= 0x400;
};

// Function Engine.Actor.DrawDebugCone
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 Origin                         ( CPF_Parm )
// struct FVector                 Direction                      ( CPF_Parm )
// float                          Length                         ( CPF_Parm )
// float                          AngleWidth                     ( CPF_Parm )
// float                          AngleHeight                    ( CPF_Parm )
// int                            NumSides                       ( CPF_Parm )
// struct FColor                  DrawColor                      ( CPF_Parm )
// unsigned long                  bPersistentLines               ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::DrawDebugCone ( struct FVector Origin, struct FVector Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, struct FColor DrawColor, unsigned long bPersistentLines )
{
	static UFunction* pFnDrawDebugCone = NULL;

	if ( ! pFnDrawDebugCone )
		pFnDrawDebugCone = (UFunction*) UObject::GObjObjects()->Data[ 3859 ];

	AWwiseMicPosOrient_execDrawDebugCone_Parms DrawDebugCone_Parms;
	memcpy ( &DrawDebugCone_Parms.Origin, &Origin, 0xC );
	memcpy ( &DrawDebugCone_Parms.Direction, &Direction, 0xC );
	DrawDebugCone_Parms.Length = Length;
	DrawDebugCone_Parms.AngleWidth = AngleWidth;
	DrawDebugCone_Parms.AngleHeight = AngleHeight;
	DrawDebugCone_Parms.NumSides = NumSides;
	memcpy ( &DrawDebugCone_Parms.DrawColor, &DrawColor, 0x4 );
	DrawDebugCone_Parms.bPersistentLines = bPersistentLines;

	pFnDrawDebugCone->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawDebugCone, &DrawDebugCone_Parms, NULL );

	pFnDrawDebugCone->FunctionFlags |= 0x400;
};

// Function Engine.Actor.DrawDebugCylinder
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 Start                          ( CPF_Parm )
// struct FVector                 End                            ( CPF_Parm )
// float                          Radius                         ( CPF_Parm )
// int                            Segments                       ( CPF_Parm )
// unsigned char                  R                              ( CPF_Parm )
// unsigned char                  G                              ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )
// unsigned long                  bPersistentLines               ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::DrawDebugCylinder ( struct FVector Start, struct FVector End, float Radius, int Segments, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines )
{
	static UFunction* pFnDrawDebugCylinder = NULL;

	if ( ! pFnDrawDebugCylinder )
		pFnDrawDebugCylinder = (UFunction*) UObject::GObjObjects()->Data[ 3850 ];

	AWwiseMicPosOrient_execDrawDebugCylinder_Parms DrawDebugCylinder_Parms;
	memcpy ( &DrawDebugCylinder_Parms.Start, &Start, 0xC );
	memcpy ( &DrawDebugCylinder_Parms.End, &End, 0xC );
	DrawDebugCylinder_Parms.Radius = Radius;
	DrawDebugCylinder_Parms.Segments = Segments;
	DrawDebugCylinder_Parms.R = R;
	DrawDebugCylinder_Parms.G = G;
	DrawDebugCylinder_Parms.B = B;
	DrawDebugCylinder_Parms.bPersistentLines = bPersistentLines;

	pFnDrawDebugCylinder->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawDebugCylinder, &DrawDebugCylinder_Parms, NULL );

	pFnDrawDebugCylinder->FunctionFlags |= 0x400;
};

// Function Engine.Actor.DrawDebugSphere
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 Center                         ( CPF_Parm )
// float                          Radius                         ( CPF_Parm )
// int                            Segments                       ( CPF_Parm )
// unsigned char                  R                              ( CPF_Parm )
// unsigned char                  G                              ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )
// unsigned long                  bPersistentLines               ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::DrawDebugSphere ( struct FVector Center, float Radius, int Segments, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines )
{
	static UFunction* pFnDrawDebugSphere = NULL;

	if ( ! pFnDrawDebugSphere )
		pFnDrawDebugSphere = (UFunction*) UObject::GObjObjects()->Data[ 3842 ];

	AWwiseMicPosOrient_execDrawDebugSphere_Parms DrawDebugSphere_Parms;
	memcpy ( &DrawDebugSphere_Parms.Center, &Center, 0xC );
	DrawDebugSphere_Parms.Radius = Radius;
	DrawDebugSphere_Parms.Segments = Segments;
	DrawDebugSphere_Parms.R = R;
	DrawDebugSphere_Parms.G = G;
	DrawDebugSphere_Parms.B = B;
	DrawDebugSphere_Parms.bPersistentLines = bPersistentLines;

	pFnDrawDebugSphere->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawDebugSphere, &DrawDebugSphere_Parms, NULL );

	pFnDrawDebugSphere->FunctionFlags |= 0x400;
};

// Function Engine.Actor.DrawDebugCoordinateSystem
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 AxisLoc                        ( CPF_Parm )
// struct FRotator                AxisRot                        ( CPF_Parm )
// float                          Scale                          ( CPF_Parm )
// unsigned long                  bPersistentLines               ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::DrawDebugCoordinateSystem ( struct FVector AxisLoc, struct FRotator AxisRot, float Scale, unsigned long bPersistentLines )
{
	static UFunction* pFnDrawDebugCoordinateSystem = NULL;

	if ( ! pFnDrawDebugCoordinateSystem )
		pFnDrawDebugCoordinateSystem = (UFunction*) UObject::GObjObjects()->Data[ 3837 ];

	AWwiseMicPosOrient_execDrawDebugCoordinateSystem_Parms DrawDebugCoordinateSystem_Parms;
	memcpy ( &DrawDebugCoordinateSystem_Parms.AxisLoc, &AxisLoc, 0xC );
	memcpy ( &DrawDebugCoordinateSystem_Parms.AxisRot, &AxisRot, 0xC );
	DrawDebugCoordinateSystem_Parms.Scale = Scale;
	DrawDebugCoordinateSystem_Parms.bPersistentLines = bPersistentLines;

	pFnDrawDebugCoordinateSystem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawDebugCoordinateSystem, &DrawDebugCoordinateSystem_Parms, NULL );

	pFnDrawDebugCoordinateSystem->FunctionFlags |= 0x400;
};

// Function Engine.Actor.DrawDebugStar
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 Position                       ( CPF_Parm )
// float                          Size                           ( CPF_Parm )
// unsigned char                  R                              ( CPF_Parm )
// unsigned char                  G                              ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )
// unsigned long                  bPersistentLines               ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::DrawDebugStar ( struct FVector Position, float Size, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines )
{
	static UFunction* pFnDrawDebugStar = NULL;

	if ( ! pFnDrawDebugStar )
		pFnDrawDebugStar = (UFunction*) UObject::GObjObjects()->Data[ 3830 ];

	AWwiseMicPosOrient_execDrawDebugStar_Parms DrawDebugStar_Parms;
	memcpy ( &DrawDebugStar_Parms.Position, &Position, 0xC );
	DrawDebugStar_Parms.Size = Size;
	DrawDebugStar_Parms.R = R;
	DrawDebugStar_Parms.G = G;
	DrawDebugStar_Parms.B = B;
	DrawDebugStar_Parms.bPersistentLines = bPersistentLines;

	pFnDrawDebugStar->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawDebugStar, &DrawDebugStar_Parms, NULL );

	pFnDrawDebugStar->FunctionFlags |= 0x400;
};

// Function Engine.Actor.DrawDebugBox
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 Center                         ( CPF_Parm )
// struct FVector                 Extent                         ( CPF_Parm )
// unsigned char                  R                              ( CPF_Parm )
// unsigned char                  G                              ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )
// unsigned long                  bPersistentLines               ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::DrawDebugBox ( struct FVector Center, struct FVector Extent, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines )
{
	static UFunction* pFnDrawDebugBox = NULL;

	if ( ! pFnDrawDebugBox )
		pFnDrawDebugBox = (UFunction*) UObject::GObjObjects()->Data[ 3823 ];

	AWwiseMicPosOrient_execDrawDebugBox_Parms DrawDebugBox_Parms;
	memcpy ( &DrawDebugBox_Parms.Center, &Center, 0xC );
	memcpy ( &DrawDebugBox_Parms.Extent, &Extent, 0xC );
	DrawDebugBox_Parms.R = R;
	DrawDebugBox_Parms.G = G;
	DrawDebugBox_Parms.B = B;
	DrawDebugBox_Parms.bPersistentLines = bPersistentLines;

	pFnDrawDebugBox->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawDebugBox, &DrawDebugBox_Parms, NULL );

	pFnDrawDebugBox->FunctionFlags |= 0x400;
};

// Function Engine.Actor.DrawDebugPoint
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 Position                       ( CPF_Parm )
// float                          Size                           ( CPF_Parm )
// struct FLinearColor            PointColor                     ( CPF_Parm )
// unsigned long                  bPersistentLines               ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::DrawDebugPoint ( struct FVector Position, float Size, struct FLinearColor PointColor, unsigned long bPersistentLines )
{
	static UFunction* pFnDrawDebugPoint = NULL;

	if ( ! pFnDrawDebugPoint )
		pFnDrawDebugPoint = (UFunction*) UObject::GObjObjects()->Data[ 3818 ];

	AWwiseMicPosOrient_execDrawDebugPoint_Parms DrawDebugPoint_Parms;
	memcpy ( &DrawDebugPoint_Parms.Position, &Position, 0xC );
	DrawDebugPoint_Parms.Size = Size;
	memcpy ( &DrawDebugPoint_Parms.PointColor, &PointColor, 0x10 );
	DrawDebugPoint_Parms.bPersistentLines = bPersistentLines;

	pFnDrawDebugPoint->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawDebugPoint, &DrawDebugPoint_Parms, NULL );

	pFnDrawDebugPoint->FunctionFlags |= 0x400;
};

// Function Engine.Actor.DrawDebugLine
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 LineStart                      ( CPF_Parm )
// struct FVector                 LineEnd                        ( CPF_Parm )
// unsigned char                  R                              ( CPF_Parm )
// unsigned char                  G                              ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )
// unsigned long                  bPersistentLines               ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::DrawDebugLine ( struct FVector LineStart, struct FVector LineEnd, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines )
{
	static UFunction* pFnDrawDebugLine = NULL;

	if ( ! pFnDrawDebugLine )
		pFnDrawDebugLine = (UFunction*) UObject::GObjObjects()->Data[ 3811 ];

	AWwiseMicPosOrient_execDrawDebugLine_Parms DrawDebugLine_Parms;
	memcpy ( &DrawDebugLine_Parms.LineStart, &LineStart, 0xC );
	memcpy ( &DrawDebugLine_Parms.LineEnd, &LineEnd, 0xC );
	DrawDebugLine_Parms.R = R;
	DrawDebugLine_Parms.G = G;
	DrawDebugLine_Parms.B = B;
	DrawDebugLine_Parms.bPersistentLines = bPersistentLines;

	pFnDrawDebugLine->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawDebugLine, &DrawDebugLine_Parms, NULL );

	pFnDrawDebugLine->FunctionFlags |= 0x400;
};

// Function Engine.Actor.FlushPersistentDebugLines
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseMicPosOrient::FlushPersistentDebugLines ( )
{
	static UFunction* pFnFlushPersistentDebugLines = NULL;

	if ( ! pFnFlushPersistentDebugLines )
		pFnFlushPersistentDebugLines = (UFunction*) UObject::GObjObjects()->Data[ 3810 ];

	AWwiseMicPosOrient_execFlushPersistentDebugLines_Parms FlushPersistentDebugLines_Parms;

	pFnFlushPersistentDebugLines->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushPersistentDebugLines, &FlushPersistentDebugLines_Parms, NULL );

	pFnFlushPersistentDebugLines->FunctionFlags |= 0x400;
};

// Function Engine.Actor.GetBasedPosition
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FBasedPosition          BP                             ( CPF_Parm )

struct FVector AWwiseMicPosOrient::GetBasedPosition ( struct FBasedPosition BP )
{
	static UFunction* pFnGetBasedPosition = NULL;

	if ( ! pFnGetBasedPosition )
		pFnGetBasedPosition = (UFunction*) UObject::GObjObjects()->Data[ 3807 ];

	AWwiseMicPosOrient_execGetBasedPosition_Parms GetBasedPosition_Parms;
	memcpy ( &GetBasedPosition_Parms.BP, &BP, 0x34 );

	pFnGetBasedPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBasedPosition, &GetBasedPosition_Parms, NULL );

	pFnGetBasedPosition->FunctionFlags |= 0x400;

	return GetBasedPosition_Parms.ReturnValue;
};

// Function Engine.Actor.SetBasedPosition
// [0x00426401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 pos                            ( CPF_Parm )
// class AActor*                  ForcedBase                     ( CPF_OptionalParm | CPF_Parm )
// struct FBasedPosition          BP                             ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::SetBasedPosition ( struct FVector pos, class AActor* ForcedBase, struct FBasedPosition* BP )
{
	static UFunction* pFnSetBasedPosition = NULL;

	if ( ! pFnSetBasedPosition )
		pFnSetBasedPosition = (UFunction*) UObject::GObjObjects()->Data[ 3803 ];

	AWwiseMicPosOrient_execSetBasedPosition_Parms SetBasedPosition_Parms;
	memcpy ( &SetBasedPosition_Parms.pos, &pos, 0xC );
	SetBasedPosition_Parms.ForcedBase = ForcedBase;

	pFnSetBasedPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetBasedPosition, &SetBasedPosition_Parms, NULL );

	pFnSetBasedPosition->FunctionFlags |= 0x400;

	if ( BP )
		memcpy ( BP, &SetBasedPosition_Parms.BP, 0x34 );
};

// Function Engine.Actor.BP2Vect
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FBasedPosition          BP                             ( CPF_Parm )

struct FVector AWwiseMicPosOrient::BP2Vect ( struct FBasedPosition BP )
{
	static UFunction* pFnBP2Vect = NULL;

	if ( ! pFnBP2Vect )
		pFnBP2Vect = (UFunction*) UObject::GObjObjects()->Data[ 3800 ];

	AWwiseMicPosOrient_execBP2Vect_Parms BP2Vect_Parms;
	memcpy ( &BP2Vect_Parms.BP, &BP, 0x34 );

	pFnBP2Vect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBP2Vect, &BP2Vect_Parms, NULL );

	pFnBP2Vect->FunctionFlags |= 0x400;

	return BP2Vect_Parms.ReturnValue;
};

// Function Engine.Actor.Vect2BP
// [0x00426401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 pos                            ( CPF_Parm )
// class AActor*                  ForcedBase                     ( CPF_OptionalParm | CPF_Parm )
// struct FBasedPosition          BP                             ( CPF_Parm | CPF_OutParm )

void AWwiseMicPosOrient::Vect2BP ( struct FVector pos, class AActor* ForcedBase, struct FBasedPosition* BP )
{
	static UFunction* pFnVect2BP = NULL;

	if ( ! pFnVect2BP )
		pFnVect2BP = (UFunction*) UObject::GObjObjects()->Data[ 3790 ];

	AWwiseMicPosOrient_execVect2BP_Parms Vect2BP_Parms;
	memcpy ( &Vect2BP_Parms.pos, &pos, 0xC );
	Vect2BP_Parms.ForcedBase = ForcedBase;

	pFnVect2BP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVect2BP, &Vect2BP_Parms, NULL );

	pFnVect2BP->FunctionFlags |= 0x400;

	if ( BP )
		memcpy ( BP, &Vect2BP_Parms.BP, 0x34 );
};

// Function Engine.Actor.SetForcedInitialReplicatedProperty
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UProperty*               PropToReplicate                ( CPF_Parm )
// unsigned long                  bAdd                           ( CPF_Parm )

void AWwiseMicPosOrient::SetForcedInitialReplicatedProperty ( class UProperty* PropToReplicate, unsigned long bAdd )
{
	static UFunction* pFnSetForcedInitialReplicatedProperty = NULL;

	if ( ! pFnSetForcedInitialReplicatedProperty )
		pFnSetForcedInitialReplicatedProperty = (UFunction*) UObject::GObjObjects()->Data[ 3787 ];

	AWwiseMicPosOrient_execSetForcedInitialReplicatedProperty_Parms SetForcedInitialReplicatedProperty_Parms;
	SetForcedInitialReplicatedProperty_Parms.PropToReplicate = PropToReplicate;
	SetForcedInitialReplicatedProperty_Parms.bAdd = bAdd;

	pFnSetForcedInitialReplicatedProperty->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetForcedInitialReplicatedProperty, &SetForcedInitialReplicatedProperty_Parms, NULL );

	pFnSetForcedInitialReplicatedProperty->FunctionFlags |= 0x400;
};

// Function Engine.Actor.ReplicatedDataBinding
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AWwiseMicPosOrient::eventReplicatedDataBinding ( struct FName VarName )
{
	static UFunction* pFnReplicatedDataBinding = NULL;

	if ( ! pFnReplicatedDataBinding )
		pFnReplicatedDataBinding = (UFunction*) UObject::GObjObjects()->Data[ 3785 ];

	AWwiseMicPosOrient_eventReplicatedDataBinding_Parms ReplicatedDataBinding_Parms;
	memcpy ( &ReplicatedDataBinding_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedDataBinding, &ReplicatedDataBinding_Parms, NULL );
};

// Function Engine.Actor.ReplicatedEvent
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AWwiseMicPosOrient::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 3783 ];

	AWwiseMicPosOrient_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function Engine.Actor.IsOwnedBy
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  TestActor                      ( CPF_Parm )

bool AWwiseMicPosOrient::IsOwnedBy ( class AActor* TestActor )
{
	static UFunction* pFnIsOwnedBy = NULL;

	if ( ! pFnIsOwnedBy )
		pFnIsOwnedBy = (UFunction*) UObject::GObjObjects()->Data[ 3780 ];

	AWwiseMicPosOrient_execIsOwnedBy_Parms IsOwnedBy_Parms;
	IsOwnedBy_Parms.TestActor = TestActor;

	pFnIsOwnedBy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsOwnedBy, &IsOwnedBy_Parms, NULL );

	pFnIsOwnedBy->FunctionFlags |= 0x400;

	return IsOwnedBy_Parms.ReturnValue;
};

// Function Engine.Actor.GetBaseMost
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* AWwiseMicPosOrient::GetBaseMost ( )
{
	static UFunction* pFnGetBaseMost = NULL;

	if ( ! pFnGetBaseMost )
		pFnGetBaseMost = (UFunction*) UObject::GObjObjects()->Data[ 3778 ];

	AWwiseMicPosOrient_execGetBaseMost_Parms GetBaseMost_Parms;

	pFnGetBaseMost->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBaseMost, &GetBaseMost_Parms, NULL );

	pFnGetBaseMost->FunctionFlags |= 0x400;

	return GetBaseMost_Parms.ReturnValue;
};

// Function Engine.Actor.IsBasedOn
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  TestActor                      ( CPF_Parm )

bool AWwiseMicPosOrient::IsBasedOn ( class AActor* TestActor )
{
	static UFunction* pFnIsBasedOn = NULL;

	if ( ! pFnIsBasedOn )
		pFnIsBasedOn = (UFunction*) UObject::GObjObjects()->Data[ 3775 ];

	AWwiseMicPosOrient_execIsBasedOn_Parms IsBasedOn_Parms;
	IsBasedOn_Parms.TestActor = TestActor;

	pFnIsBasedOn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsBasedOn, &IsBasedOn_Parms, NULL );

	pFnIsBasedOn->FunctionFlags |= 0x400;

	return IsBasedOn_Parms.ReturnValue;
};

// Function Engine.Actor.FindBase
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AWwiseMicPosOrient::FindBase ( )
{
	static UFunction* pFnFindBase = NULL;

	if ( ! pFnFindBase )
		pFnFindBase = (UFunction*) UObject::GObjObjects()->Data[ 3774 ];

	AWwiseMicPosOrient_execFindBase_Parms FindBase_Parms;

	pFnFindBase->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindBase, &FindBase_Parms, NULL );

	pFnFindBase->FunctionFlags |= 0x400;
};

// Function Engine.Actor.SetOwner
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0110]
// Parameters infos:
// class AActor*                  NewOwner                       ( CPF_Parm )

void AWwiseMicPosOrient::SetOwner ( class AActor* NewOwner )
{
	static UFunction* pFnSetOwner = NULL;

	if ( ! pFnSetOwner )
		pFnSetOwner = (UFunction*) UObject::GObjObjects()->Data[ 3772 ];

	AWwiseMicPosOrient_execSetOwner_Parms SetOwner_Parms;
	SetOwner_Parms.NewOwner = NewOwner;

	unsigned short NativeIndex = pFnSetOwner->iNative;
	pFnSetOwner->iNative = 0;

	pFnSetOwner->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOwner, &SetOwner_Parms, NULL );

	pFnSetOwner->FunctionFlags |= 0x400;

	pFnSetOwner->iNative = NativeIndex;
};

// Function Engine.Actor.SetBase
// [0x00024401] ( FUNC_Final | FUNC_Native ) iNative [0x012A]
// Parameters infos:
// class AActor*                  NewBase                        ( CPF_Parm )
// struct FVector                 NewFloor                       ( CPF_OptionalParm | CPF_Parm )
// class USkeletalMeshComponent*  SkelComp                       ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
// struct FName                   AttachName                     ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::SetBase ( class AActor* NewBase, struct FVector NewFloor, class USkeletalMeshComponent* SkelComp, struct FName AttachName )
{
	static UFunction* pFnSetBase = NULL;

	if ( ! pFnSetBase )
		pFnSetBase = (UFunction*) UObject::GObjObjects()->Data[ 3767 ];

	AWwiseMicPosOrient_execSetBase_Parms SetBase_Parms;
	SetBase_Parms.NewBase = NewBase;
	memcpy ( &SetBase_Parms.NewFloor, &NewFloor, 0xC );
	SetBase_Parms.SkelComp = SkelComp;
	memcpy ( &SetBase_Parms.AttachName, &AttachName, 0x8 );

	unsigned short NativeIndex = pFnSetBase->iNative;
	pFnSetBase->iNative = 0;

	pFnSetBase->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetBase, &SetBase_Parms, NULL );

	pFnSetBase->FunctionFlags |= 0x400;

	pFnSetBase->iNative = NativeIndex;
};

// Function Engine.Actor.GetTerminalVelocity
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AWwiseMicPosOrient::GetTerminalVelocity ( )
{
	static UFunction* pFnGetTerminalVelocity = NULL;

	if ( ! pFnGetTerminalVelocity )
		pFnGetTerminalVelocity = (UFunction*) UObject::GObjObjects()->Data[ 3765 ];

	AWwiseMicPosOrient_execGetTerminalVelocity_Parms GetTerminalVelocity_Parms;

	pFnGetTerminalVelocity->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTerminalVelocity, &GetTerminalVelocity_Parms, NULL );

	pFnGetTerminalVelocity->FunctionFlags |= 0x400;

	return GetTerminalVelocity_Parms.ReturnValue;
};

// Function Engine.Actor.AutonomousPhysics
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0F83]
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void AWwiseMicPosOrient::AutonomousPhysics ( float DeltaSeconds )
{
	static UFunction* pFnAutonomousPhysics = NULL;

	if ( ! pFnAutonomousPhysics )
		pFnAutonomousPhysics = (UFunction*) UObject::GObjObjects()->Data[ 3763 ];

	AWwiseMicPosOrient_execAutonomousPhysics_Parms AutonomousPhysics_Parms;
	AutonomousPhysics_Parms.DeltaSeconds = DeltaSeconds;

	unsigned short NativeIndex = pFnAutonomousPhysics->iNative;
	pFnAutonomousPhysics->iNative = 0;

	pFnAutonomousPhysics->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAutonomousPhysics, &AutonomousPhysics_Parms, NULL );

	pFnAutonomousPhysics->FunctionFlags |= 0x400;

	pFnAutonomousPhysics->iNative = NativeIndex;
};

// Function Engine.Actor.MoveSmooth
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0F81]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Delta                          ( CPF_Parm )

bool AWwiseMicPosOrient::MoveSmooth ( struct FVector Delta )
{
	static UFunction* pFnMoveSmooth = NULL;

	if ( ! pFnMoveSmooth )
		pFnMoveSmooth = (UFunction*) UObject::GObjObjects()->Data[ 3760 ];

	AWwiseMicPosOrient_execMoveSmooth_Parms MoveSmooth_Parms;
	memcpy ( &MoveSmooth_Parms.Delta, &Delta, 0xC );

	unsigned short NativeIndex = pFnMoveSmooth->iNative;
	pFnMoveSmooth->iNative = 0;

	pFnMoveSmooth->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMoveSmooth, &MoveSmooth_Parms, NULL );

	pFnMoveSmooth->FunctionFlags |= 0x400;

	pFnMoveSmooth->iNative = NativeIndex;

	return MoveSmooth_Parms.ReturnValue;
};

// Function Engine.Actor.fixedTurn
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Current                        ( CPF_Parm )
// int                            Desired                        ( CPF_Parm )
// int                            DeltaRate                      ( CPF_Parm )

int AWwiseMicPosOrient::fixedTurn ( int Current, int Desired, int DeltaRate )
{
	static UFunction* pFnfixedTurn = NULL;

	if ( ! pFnfixedTurn )
		pFnfixedTurn = (UFunction*) UObject::GObjObjects()->Data[ 3755 ];

	AWwiseMicPosOrient_execfixedTurn_Parms fixedTurn_Parms;
	fixedTurn_Parms.Current = Current;
	fixedTurn_Parms.Desired = Desired;
	fixedTurn_Parms.DeltaRate = DeltaRate;

	pFnfixedTurn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnfixedTurn, &fixedTurn_Parms, NULL );

	pFnfixedTurn->FunctionFlags |= 0x400;

	return fixedTurn_Parms.ReturnValue;
};

// Function Engine.Actor.SetHardAttach
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bNewHardAttach                 ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::SetHardAttach ( unsigned long bNewHardAttach )
{
	static UFunction* pFnSetHardAttach = NULL;

	if ( ! pFnSetHardAttach )
		pFnSetHardAttach = (UFunction*) UObject::GObjObjects()->Data[ 3753 ];

	AWwiseMicPosOrient_execSetHardAttach_Parms SetHardAttach_Parms;
	SetHardAttach_Parms.bNewHardAttach = bNewHardAttach;

	pFnSetHardAttach->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHardAttach, &SetHardAttach_Parms, NULL );

	pFnSetHardAttach->FunctionFlags |= 0x400;
};

// Function Engine.Actor.SetRelativeLocation
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 NewLocation                    ( CPF_Parm )

bool AWwiseMicPosOrient::SetRelativeLocation ( struct FVector NewLocation )
{
	static UFunction* pFnSetRelativeLocation = NULL;

	if ( ! pFnSetRelativeLocation )
		pFnSetRelativeLocation = (UFunction*) UObject::GObjObjects()->Data[ 3750 ];

	AWwiseMicPosOrient_execSetRelativeLocation_Parms SetRelativeLocation_Parms;
	memcpy ( &SetRelativeLocation_Parms.NewLocation, &NewLocation, 0xC );

	pFnSetRelativeLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRelativeLocation, &SetRelativeLocation_Parms, NULL );

	pFnSetRelativeLocation->FunctionFlags |= 0x400;

	return SetRelativeLocation_Parms.ReturnValue;
};

// Function Engine.Actor.SetRelativeRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                NewRotation                    ( CPF_Parm )

bool AWwiseMicPosOrient::SetRelativeRotation ( struct FRotator NewRotation )
{
	static UFunction* pFnSetRelativeRotation = NULL;

	if ( ! pFnSetRelativeRotation )
		pFnSetRelativeRotation = (UFunction*) UObject::GObjObjects()->Data[ 3747 ];

	AWwiseMicPosOrient_execSetRelativeRotation_Parms SetRelativeRotation_Parms;
	memcpy ( &SetRelativeRotation_Parms.NewRotation, &NewRotation, 0xC );

	pFnSetRelativeRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRelativeRotation, &SetRelativeRotation_Parms, NULL );

	pFnSetRelativeRotation->FunctionFlags |= 0x400;

	return SetRelativeRotation_Parms.ReturnValue;
};

// Function Engine.Actor.SetZone
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bForceRefresh                  ( CPF_Parm )

void AWwiseMicPosOrient::SetZone ( unsigned long bForceRefresh )
{
	static UFunction* pFnSetZone = NULL;

	if ( ! pFnSetZone )
		pFnSetZone = (UFunction*) UObject::GObjObjects()->Data[ 3745 ];

	AWwiseMicPosOrient_execSetZone_Parms SetZone_Parms;
	SetZone_Parms.bForceRefresh = bForceRefresh;

	pFnSetZone->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetZone, &SetZone_Parms, NULL );

	pFnSetZone->FunctionFlags |= 0x400;
};

// Function Engine.Actor.MovingWhichWay
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Amount                         ( CPF_Parm | CPF_OutParm )

unsigned char AWwiseMicPosOrient::MovingWhichWay ( float* Amount )
{
	static UFunction* pFnMovingWhichWay = NULL;

	if ( ! pFnMovingWhichWay )
		pFnMovingWhichWay = (UFunction*) UObject::GObjObjects()->Data[ 3742 ];

	AWwiseMicPosOrient_execMovingWhichWay_Parms MovingWhichWay_Parms;

	pFnMovingWhichWay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMovingWhichWay, &MovingWhichWay_Parms, NULL );

	pFnMovingWhichWay->FunctionFlags |= 0x400;

	if ( Amount )
		*Amount = MovingWhichWay_Parms.Amount;

	return MovingWhichWay_Parms.ReturnValue;
};

// Function Engine.Actor.SetRotation
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x012B]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                NewRotation                    ( CPF_Parm )

bool AWwiseMicPosOrient::SetRotation ( struct FRotator NewRotation )
{
	static UFunction* pFnSetRotation = NULL;

	if ( ! pFnSetRotation )
		pFnSetRotation = (UFunction*) UObject::GObjObjects()->Data[ 3739 ];

	AWwiseMicPosOrient_execSetRotation_Parms SetRotation_Parms;
	memcpy ( &SetRotation_Parms.NewRotation, &NewRotation, 0xC );

	unsigned short NativeIndex = pFnSetRotation->iNative;
	pFnSetRotation->iNative = 0;

	pFnSetRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRotation, &SetRotation_Parms, NULL );

	pFnSetRotation->FunctionFlags |= 0x400;

	pFnSetRotation->iNative = NativeIndex;

	return SetRotation_Parms.ReturnValue;
};

// Function Engine.Actor.SetLocation
// [0x00024401] ( FUNC_Final | FUNC_Native ) iNative [0x010B]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 NewLocation                    ( CPF_Parm )
// unsigned long                  bDebugFailure                  ( CPF_OptionalParm | CPF_Parm )

bool AWwiseMicPosOrient::SetLocation ( struct FVector NewLocation, unsigned long bDebugFailure )
{
	static UFunction* pFnSetLocation = NULL;

	if ( ! pFnSetLocation )
		pFnSetLocation = (UFunction*) UObject::GObjObjects()->Data[ 3735 ];

	AWwiseMicPosOrient_execSetLocation_Parms SetLocation_Parms;
	memcpy ( &SetLocation_Parms.NewLocation, &NewLocation, 0xC );
	SetLocation_Parms.bDebugFailure = bDebugFailure;

	unsigned short NativeIndex = pFnSetLocation->iNative;
	pFnSetLocation->iNative = 0;

	pFnSetLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLocation, &SetLocation_Parms, NULL );

	pFnSetLocation->FunctionFlags |= 0x400;

	pFnSetLocation->iNative = NativeIndex;

	return SetLocation_Parms.ReturnValue;
};

// Function Engine.Actor.Move
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x010A]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Delta                          ( CPF_Parm )

bool AWwiseMicPosOrient::Move ( struct FVector Delta )
{
	static UFunction* pFnMove = NULL;

	if ( ! pFnMove )
		pFnMove = (UFunction*) UObject::GObjObjects()->Data[ 3732 ];

	AWwiseMicPosOrient_execMove_Parms Move_Parms;
	memcpy ( &Move_Parms.Delta, &Delta, 0xC );

	unsigned short NativeIndex = pFnMove->iNative;
	pFnMove->iNative = 0;

	pFnMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMove, &Move_Parms, NULL );

	pFnMove->FunctionFlags |= 0x400;

	pFnMove->iNative = NativeIndex;

	return Move_Parms.ReturnValue;
};

// Function Engine.Actor.SetDrawScale3D
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 NewScale3D                     ( CPF_Parm )

void AWwiseMicPosOrient::SetDrawScale3D ( struct FVector NewScale3D )
{
	static UFunction* pFnSetDrawScale3D = NULL;

	if ( ! pFnSetDrawScale3D )
		pFnSetDrawScale3D = (UFunction*) UObject::GObjObjects()->Data[ 3730 ];

	AWwiseMicPosOrient_execSetDrawScale3D_Parms SetDrawScale3D_Parms;
	memcpy ( &SetDrawScale3D_Parms.NewScale3D, &NewScale3D, 0xC );

	pFnSetDrawScale3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDrawScale3D, &SetDrawScale3D_Parms, NULL );

	pFnSetDrawScale3D->FunctionFlags |= 0x400;
};

// Function Engine.Actor.SetDrawScale
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          NewScale                       ( CPF_Parm )

void AWwiseMicPosOrient::SetDrawScale ( float NewScale )
{
	static UFunction* pFnSetDrawScale = NULL;

	if ( ! pFnSetDrawScale )
		pFnSetDrawScale = (UFunction*) UObject::GObjObjects()->Data[ 3728 ];

	AWwiseMicPosOrient_execSetDrawScale_Parms SetDrawScale_Parms;
	SetDrawScale_Parms.NewScale = NewScale;

	pFnSetDrawScale->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDrawScale, &SetDrawScale_Parms, NULL );

	pFnSetDrawScale->FunctionFlags |= 0x400;
};

// Function Engine.Actor.SetCollisionType
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  NewCollisionType               ( CPF_Parm )

void AWwiseMicPosOrient::SetCollisionType ( unsigned char NewCollisionType )
{
	static UFunction* pFnSetCollisionType = NULL;

	if ( ! pFnSetCollisionType )
		pFnSetCollisionType = (UFunction*) UObject::GObjObjects()->Data[ 3726 ];

	AWwiseMicPosOrient_execSetCollisionType_Parms SetCollisionType_Parms;
	SetCollisionType_Parms.NewCollisionType = NewCollisionType;

	pFnSetCollisionType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCollisionType, &SetCollisionType_Parms, NULL );

	pFnSetCollisionType->FunctionFlags |= 0x400;
};

// Function Engine.Actor.SetCollisionSize
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x011B]
// Parameters infos:
// float                          NewRadius                      ( CPF_Parm )
// float                          NewHeight                      ( CPF_Parm )

void AWwiseMicPosOrient::SetCollisionSize ( float NewRadius, float NewHeight )
{
	static UFunction* pFnSetCollisionSize = NULL;

	if ( ! pFnSetCollisionSize )
		pFnSetCollisionSize = (UFunction*) UObject::GObjObjects()->Data[ 3723 ];

	AWwiseMicPosOrient_execSetCollisionSize_Parms SetCollisionSize_Parms;
	SetCollisionSize_Parms.NewRadius = NewRadius;
	SetCollisionSize_Parms.NewHeight = NewHeight;

	unsigned short NativeIndex = pFnSetCollisionSize->iNative;
	pFnSetCollisionSize->iNative = 0;

	pFnSetCollisionSize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCollisionSize, &SetCollisionSize_Parms, NULL );

	pFnSetCollisionSize->FunctionFlags |= 0x400;

	pFnSetCollisionSize->iNative = NativeIndex;
};

// Function Engine.Actor.SetCollision
// [0x00024401] ( FUNC_Final | FUNC_Native ) iNative [0x0106]
// Parameters infos:
// unsigned long                  bNewColActors                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bNewBlockActors                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bNewIgnoreEncroachers          ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::SetCollision ( unsigned long bNewColActors, unsigned long bNewBlockActors, unsigned long bNewIgnoreEncroachers )
{
	static UFunction* pFnSetCollision = NULL;

	if ( ! pFnSetCollision )
		pFnSetCollision = (UFunction*) UObject::GObjObjects()->Data[ 3719 ];

	AWwiseMicPosOrient_execSetCollision_Parms SetCollision_Parms;
	SetCollision_Parms.bNewColActors = bNewColActors;
	SetCollision_Parms.bNewBlockActors = bNewBlockActors;
	SetCollision_Parms.bNewIgnoreEncroachers = bNewIgnoreEncroachers;

	unsigned short NativeIndex = pFnSetCollision->iNative;
	pFnSetCollision->iNative = 0;

	pFnSetCollision->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCollision, &SetCollision_Parms, NULL );

	pFnSetCollision->FunctionFlags |= 0x400;

	pFnSetCollision->iNative = NativeIndex;
};

// Function Engine.Actor.FinishAnim
// [0x00020409] ( FUNC_Final | FUNC_Native ) iNative [0x0105]
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )

void AWwiseMicPosOrient::FinishAnim ( class UAnimNodeSequence* SeqNode )
{
	static UFunction* pFnFinishAnim = NULL;

	if ( ! pFnFinishAnim )
		pFnFinishAnim = (UFunction*) UObject::GObjObjects()->Data[ 3717 ];

	AWwiseMicPosOrient_execFinishAnim_Parms FinishAnim_Parms;
	FinishAnim_Parms.SeqNode = SeqNode;

	unsigned short NativeIndex = pFnFinishAnim->iNative;
	pFnFinishAnim->iNative = 0;

	pFnFinishAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFinishAnim, &FinishAnim_Parms, NULL );

	pFnFinishAnim->FunctionFlags |= 0x400;

	pFnFinishAnim->iNative = NativeIndex;
};

// Function Engine.Actor.Sleep
// [0x00020409] ( FUNC_Final | FUNC_Native ) iNative [0x0100]
// Parameters infos:
// float                          Seconds                        ( CPF_Parm )

void AWwiseMicPosOrient::Sleep ( float Seconds )
{
	static UFunction* pFnSleep = NULL;

	if ( ! pFnSleep )
		pFnSleep = (UFunction*) UObject::GObjObjects()->Data[ 3715 ];

	AWwiseMicPosOrient_execSleep_Parms Sleep_Parms;
	Sleep_Parms.Seconds = Seconds;

	unsigned short NativeIndex = pFnSleep->iNative;
	pFnSleep->iNative = 0;

	pFnSleep->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSleep, &Sleep_Parms, NULL );

	pFnSleep->FunctionFlags |= 0x400;

	pFnSleep->iNative = NativeIndex;
};

// Function Engine.Actor.ConsoleCommand
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWriteToLog                    ( CPF_OptionalParm | CPF_Parm )

struct FString AWwiseMicPosOrient::ConsoleCommand ( struct FString Command, unsigned long bWriteToLog )
{
	static UFunction* pFnConsoleCommand = NULL;

	if ( ! pFnConsoleCommand )
		pFnConsoleCommand = (UFunction*) UObject::GObjObjects()->Data[ 3711 ];

	AWwiseMicPosOrient_execConsoleCommand_Parms ConsoleCommand_Parms;
	memcpy ( &ConsoleCommand_Parms.Command, &Command, 0xC );
	ConsoleCommand_Parms.bWriteToLog = bWriteToLog;

	pFnConsoleCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnConsoleCommand, &ConsoleCommand_Parms, NULL );

	pFnConsoleCommand->FunctionFlags |= 0x400;

	return ConsoleCommand_Parms.ReturnValue;
};

// Function Engine.Actor.ForceUpdateComponents
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bCollisionUpdate               ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bTransformOnly                 ( CPF_OptionalParm | CPF_Parm )

void AWwiseMicPosOrient::ForceUpdateComponents ( unsigned long bCollisionUpdate, unsigned long bTransformOnly )
{
	static UFunction* pFnForceUpdateComponents = NULL;

	if ( ! pFnForceUpdateComponents )
		pFnForceUpdateComponents = (UFunction*) UObject::GObjObjects()->Data[ 3708 ];

	AWwiseMicPosOrient_execForceUpdateComponents_Parms ForceUpdateComponents_Parms;
	ForceUpdateComponents_Parms.bCollisionUpdate = bCollisionUpdate;
	ForceUpdateComponents_Parms.bTransformOnly = bTransformOnly;

	pFnForceUpdateComponents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnForceUpdateComponents, &ForceUpdateComponents_Parms, NULL );

	pFnForceUpdateComponents->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseProcFoleyComponent.GetMAX_PROC_FOLEY_BONES
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UWwiseProcFoleyComponent::eventGetMAX_PROC_FOLEY_BONES ( )
{
	static UFunction* pFnGetMAX_PROC_FOLEY_BONES = NULL;

	if ( ! pFnGetMAX_PROC_FOLEY_BONES )
		pFnGetMAX_PROC_FOLEY_BONES = (UFunction*) UObject::GObjObjects()->Data[ 35324 ];

	UWwiseProcFoleyComponent_eventGetMAX_PROC_FOLEY_BONES_Parms GetMAX_PROC_FOLEY_BONES_Parms;

	this->ProcessEvent ( pFnGetMAX_PROC_FOLEY_BONES, &GetMAX_PROC_FOLEY_BONES_Parms, NULL );

	return GetMAX_PROC_FOLEY_BONES_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseVolume.TimerPop
// [0x00020000] 
// Parameters infos:
// class AWwiseVolumeTimer*       T                              ( CPF_Parm )

void AWwiseVolume::TimerPop ( class AWwiseVolumeTimer* T )
{
	static UFunction* pFnTimerPop = NULL;

	if ( ! pFnTimerPop )
		pFnTimerPop = (UFunction*) UObject::GObjObjects()->Data[ 35182 ];

	AWwiseVolume_execTimerPop_Parms TimerPop_Parms;
	TimerPop_Parms.T = T;

	this->ProcessEvent ( pFnTimerPop, &TimerPop_Parms, NULL );
};

// Function WwiseAudio.WwiseVolume.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AWwiseVolume::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 35179 ];

	AWwiseVolume_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function WwiseAudio.WwiseAudioVolume.HideVolume
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseAudioVolume::HideVolume ( )
{
	static UFunction* pFnHideVolume = NULL;

	if ( ! pFnHideVolume )
		pFnHideVolume = (UFunction*) UObject::GObjObjects()->Data[ 35195 ];

	AWwiseAudioVolume_execHideVolume_Parms HideVolume_Parms;

	pFnHideVolume->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHideVolume, &HideVolume_Parms, NULL );

	pFnHideVolume->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioVolume.DrawVolume
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseAudioVolume::DrawVolume ( )
{
	static UFunction* pFnDrawVolume = NULL;

	if ( ! pFnDrawVolume )
		pFnDrawVolume = (UFunction*) UObject::GObjObjects()->Data[ 35194 ];

	AWwiseAudioVolume_execDrawVolume_Parms DrawVolume_Parms;

	pFnDrawVolume->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawVolume, &DrawVolume_Parms, NULL );

	pFnDrawVolume->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioVolume.Stop
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseAudioVolume::Stop ( )
{
	static UFunction* pFnStop = NULL;

	if ( ! pFnStop )
		pFnStop = (UFunction*) UObject::GObjObjects()->Data[ 35193 ];

	AWwiseAudioVolume_execStop_Parms Stop_Parms;

	pFnStop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStop, &Stop_Parms, NULL );

	pFnStop->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioVolume.Start
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseAudioVolume::Start ( )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = (UFunction*) UObject::GObjObjects()->Data[ 35192 ];

	AWwiseAudioVolume_execStart_Parms Start_Parms;

	pFnStart->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	pFnStart->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioVolume.myTimerPop
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseAudioVolume::myTimerPop ( )
{
	static UFunction* pFnmyTimerPop = NULL;

	if ( ! pFnmyTimerPop )
		pFnmyTimerPop = (UFunction*) UObject::GObjObjects()->Data[ 35191 ];

	AWwiseAudioVolume_execmyTimerPop_Parms myTimerPop_Parms;

	pFnmyTimerPop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnmyTimerPop, &myTimerPop_Parms, NULL );

	pFnmyTimerPop->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioVolume.TimerPop
// [0x00020002] 
// Parameters infos:
// class AWwiseVolumeTimer*       T                              ( CPF_Parm )

void AWwiseAudioVolume::TimerPop ( class AWwiseVolumeTimer* T )
{
	static UFunction* pFnTimerPop = NULL;

	if ( ! pFnTimerPop )
		pFnTimerPop = (UFunction*) UObject::GObjObjects()->Data[ 35189 ];

	AWwiseAudioVolume_execTimerPop_Parms TimerPop_Parms;
	TimerPop_Parms.T = T;

	this->ProcessEvent ( pFnTimerPop, &TimerPop_Parms, NULL );
};

// Function WwiseAudio.WwiseAudioVolume.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AWwiseAudioVolume::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 35187 ];

	AWwiseAudioVolume_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function WwiseAudio.WwiseMusicVolume.myTimerPop
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseMusicVolume::myTimerPop ( )
{
	static UFunction* pFnmyTimerPop = NULL;

	if ( ! pFnmyTimerPop )
		pFnmyTimerPop = (UFunction*) UObject::GObjObjects()->Data[ 35298 ];

	AWwiseMusicVolume_execmyTimerPop_Parms myTimerPop_Parms;

	pFnmyTimerPop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnmyTimerPop, &myTimerPop_Parms, NULL );

	pFnmyTimerPop->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseMusicVolume.SetContainsPlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bContainsPlayer                ( CPF_Parm )

void AWwiseMusicVolume::SetContainsPlayer ( unsigned long bContainsPlayer )
{
	static UFunction* pFnSetContainsPlayer = NULL;

	if ( ! pFnSetContainsPlayer )
		pFnSetContainsPlayer = (UFunction*) UObject::GObjObjects()->Data[ 35305 ];

	AWwiseMusicVolume_execSetContainsPlayer_Parms SetContainsPlayer_Parms;
	SetContainsPlayer_Parms.bContainsPlayer = bContainsPlayer;

	pFnSetContainsPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetContainsPlayer, &SetContainsPlayer_Parms, NULL );

	pFnSetContainsPlayer->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseMusicVolume.SetEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void AWwiseMusicVolume::SetEnabled ( unsigned long bEnabled )
{
	static UFunction* pFnSetEnabled = NULL;

	if ( ! pFnSetEnabled )
		pFnSetEnabled = (UFunction*) UObject::GObjObjects()->Data[ 35303 ];

	AWwiseMusicVolume_execSetEnabled_Parms SetEnabled_Parms;
	SetEnabled_Parms.bEnabled = bEnabled;

	pFnSetEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetEnabled, &SetEnabled_Parms, NULL );

	pFnSetEnabled->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseMusicVolume.StopMusic
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseMusicVolume::StopMusic ( )
{
	static UFunction* pFnStopMusic = NULL;

	if ( ! pFnStopMusic )
		pFnStopMusic = (UFunction*) UObject::GObjObjects()->Data[ 35302 ];

	AWwiseMusicVolume_execStopMusic_Parms StopMusic_Parms;

	pFnStopMusic->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopMusic, &StopMusic_Parms, NULL );

	pFnStopMusic->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseMusicVolume.StartMusic
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseMusicVolume::StartMusic ( )
{
	static UFunction* pFnStartMusic = NULL;

	if ( ! pFnStartMusic )
		pFnStartMusic = (UFunction*) UObject::GObjObjects()->Data[ 35301 ];

	AWwiseMusicVolume_execStartMusic_Parms StartMusic_Parms;

	pFnStartMusic->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartMusic, &StartMusic_Parms, NULL );

	pFnStartMusic->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseMusicVolume.CheckPriority
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMusicVolume::CheckPriority ( )
{
	static UFunction* pFnCheckPriority = NULL;

	if ( ! pFnCheckPriority )
		pFnCheckPriority = (UFunction*) UObject::GObjObjects()->Data[ 35299 ];

	AWwiseMusicVolume_execCheckPriority_Parms CheckPriority_Parms;

	pFnCheckPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckPriority, &CheckPriority_Parms, NULL );

	pFnCheckPriority->FunctionFlags |= 0x400;

	return CheckPriority_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseMusicVolume.TimerPop
// [0x00020002] 
// Parameters infos:
// class AWwiseVolumeTimer*       T                              ( CPF_Parm )

void AWwiseMusicVolume::TimerPop ( class AWwiseVolumeTimer* T )
{
	static UFunction* pFnTimerPop = NULL;

	if ( ! pFnTimerPop )
		pFnTimerPop = (UFunction*) UObject::GObjObjects()->Data[ 35296 ];

	AWwiseMusicVolume_execTimerPop_Parms TimerPop_Parms;
	TimerPop_Parms.T = T;

	this->ProcessEvent ( pFnTimerPop, &TimerPop_Parms, NULL );
};

// Function WwiseAudio.WwiseMusicVolume.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AWwiseMusicVolume::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 35293 ];

	AWwiseMusicVolume_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function WwiseAudio.WwiseVolumeTimer.Timer
// [0x00020002] 
// Parameters infos:

void AWwiseVolumeTimer::Timer ( )
{
	static UFunction* pFnTimer = NULL;

	if ( ! pFnTimer )
		pFnTimer = (UFunction*) UObject::GObjObjects()->Data[ 35343 ];

	AWwiseVolumeTimer_execTimer_Parms Timer_Parms;

	this->ProcessEvent ( pFnTimer, &Timer_Parms, NULL );
};

// Function Engine.ActorFactory.PostCreateActor
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class AActor*                  NewActor                       ( CPF_Parm )

void UActorFactoryWwiseDistanceRTPC::eventPostCreateActor ( class AActor* NewActor )
{
	static UFunction* pFnPostCreateActor = NULL;

	if ( ! pFnPostCreateActor )
		pFnPostCreateActor = (UFunction*) UObject::GObjObjects()->Data[ 5133 ];

	UActorFactoryWwiseDistanceRTPC_eventPostCreateActor_Parms PostCreateActor_Parms;
	PostCreateActor_Parms.NewActor = NewActor;

	this->ProcessEvent ( pFnPostCreateActor, &PostCreateActor_Parms, NULL );
};

// Function WwiseAudio.WwiseDistanceRTPC.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AWwiseDistanceRTPC::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 35262 ];

	AWwiseDistanceRTPC_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function Engine.ActorFactory.PostCreateActor
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class AActor*                  NewActor                       ( CPF_Parm )

void UActorFactoryWwiseMicPosOrient::eventPostCreateActor ( class AActor* NewActor )
{
	static UFunction* pFnPostCreateActor = NULL;

	if ( ! pFnPostCreateActor )
		pFnPostCreateActor = (UFunction*) UObject::GObjObjects()->Data[ 5133 ];

	UActorFactoryWwiseMicPosOrient_eventPostCreateActor_Parms PostCreateActor_Parms;
	PostCreateActor_Parms.NewActor = NewActor;

	this->ProcessEvent ( pFnPostCreateActor, &PostCreateActor_Parms, NULL );
};

// Function Engine.Volume.ProcessActorSetVolume
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AWwiseOcclusionVolume::eventProcessActorSetVolume ( class AActor* Other )
{
	static UFunction* pFnProcessActorSetVolume = NULL;

	if ( ! pFnProcessActorSetVolume )
		pFnProcessActorSetVolume = (UFunction*) UObject::GObjObjects()->Data[ 10916 ];

	AWwiseOcclusionVolume_eventProcessActorSetVolume_Parms ProcessActorSetVolume_Parms;
	ProcessActorSetVolume_Parms.Other = Other;

	this->ProcessEvent ( pFnProcessActorSetVolume, &ProcessActorSetVolume_Parms, NULL );
};

// Function Engine.Volume.CollisionChanged
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AWwiseOcclusionVolume::eventCollisionChanged ( )
{
	static UFunction* pFnCollisionChanged = NULL;

	if ( ! pFnCollisionChanged )
		pFnCollisionChanged = (UFunction*) UObject::GObjObjects()->Data[ 10915 ];

	AWwiseOcclusionVolume_eventCollisionChanged_Parms CollisionChanged_Parms;

	this->ProcessEvent ( pFnCollisionChanged, &CollisionChanged_Parms, NULL );
};

// Function Engine.Volume.OnToggle
// [0x00020102] 
// Parameters infos:
// class USeqAct_Toggle*          Action                         ( CPF_Parm )

void AWwiseOcclusionVolume::OnToggle ( class USeqAct_Toggle* Action )
{
	static UFunction* pFnOnToggle = NULL;

	if ( ! pFnOnToggle )
		pFnOnToggle = (UFunction*) UObject::GObjObjects()->Data[ 10913 ];

	AWwiseOcclusionVolume_execOnToggle_Parms OnToggle_Parms;
	OnToggle_Parms.Action = Action;

	this->ProcessEvent ( pFnOnToggle, &OnToggle_Parms, NULL );
};

// Function Engine.Volume.DisplayDebug
// [0x00420102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void AWwiseOcclusionVolume::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 10898 ];

	AWwiseOcclusionVolume_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function Engine.Volume.GetLocationStringFor
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class APlayerReplicationInfo*  PRI                            ( CPF_Parm )

struct FString AWwiseOcclusionVolume::GetLocationStringFor ( class APlayerReplicationInfo* PRI )
{
	static UFunction* pFnGetLocationStringFor = NULL;

	if ( ! pFnGetLocationStringFor )
		pFnGetLocationStringFor = (UFunction*) UObject::GObjObjects()->Data[ 10894 ];

	AWwiseOcclusionVolume_execGetLocationStringFor_Parms GetLocationStringFor_Parms;
	GetLocationStringFor_Parms.PRI = PRI;

	this->ProcessEvent ( pFnGetLocationStringFor, &GetLocationStringFor_Parms, NULL );

	return GetLocationStringFor_Parms.ReturnValue;
};

// Function Engine.Volume.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AWwiseOcclusionVolume::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 10892 ];

	AWwiseOcclusionVolume_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function Engine.Volume.ScriptLineCheck
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 End                            ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FVector                 Start                          ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FVector                 Extent                         ( CPF_Const | CPF_Parm | CPF_OutParm )

bool AWwiseOcclusionVolume::ScriptLineCheck ( struct FVector* End, struct FVector* Start, struct FVector* Extent )
{
	static UFunction* pFnScriptLineCheck = NULL;

	if ( ! pFnScriptLineCheck )
		pFnScriptLineCheck = (UFunction*) UObject::GObjObjects()->Data[ 10887 ];

	AWwiseOcclusionVolume_execScriptLineCheck_Parms ScriptLineCheck_Parms;

	pFnScriptLineCheck->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnScriptLineCheck, &ScriptLineCheck_Parms, NULL );

	pFnScriptLineCheck->FunctionFlags |= 0x400;

	if ( End )
		memcpy ( End, &ScriptLineCheck_Parms.End, 0xC );

	if ( Start )
		memcpy ( Start, &ScriptLineCheck_Parms.Start, 0xC );

	if ( Extent )
		memcpy ( Extent, &ScriptLineCheck_Parms.Extent, 0xC );

	return ScriptLineCheck_Parms.ReturnValue;
};

// Function Engine.Volume.EncompassesPoint
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Loc                            ( CPF_Parm )

bool AWwiseOcclusionVolume::EncompassesPoint ( struct FVector Loc )
{
	static UFunction* pFnEncompassesPoint = NULL;

	if ( ! pFnEncompassesPoint )
		pFnEncompassesPoint = (UFunction*) UObject::GObjObjects()->Data[ 10884 ];

	AWwiseOcclusionVolume_execEncompassesPoint_Parms EncompassesPoint_Parms;
	memcpy ( &EncompassesPoint_Parms.Loc, &Loc, 0xC );

	pFnEncompassesPoint->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEncompassesPoint, &EncompassesPoint_Parms, NULL );

	pFnEncompassesPoint->FunctionFlags |= 0x400;

	return EncompassesPoint_Parms.ReturnValue;
};

// Function Engine.Volume.Encompasses
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )

bool AWwiseOcclusionVolume::Encompasses ( class AActor* Other )
{
	static UFunction* pFnEncompasses = NULL;

	if ( ! pFnEncompasses )
		pFnEncompasses = (UFunction*) UObject::GObjObjects()->Data[ 10881 ];

	AWwiseOcclusionVolume_execEncompasses_Parms Encompasses_Parms;
	Encompasses_Parms.Other = Other;

	pFnEncompasses->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEncompasses, &Encompasses_Parms, NULL );

	pFnEncompasses->FunctionFlags |= 0x400;

	return Encompasses_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif