/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_con_mp4_functions.h
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

// Function SFXGame.SFXCameraMode_Combat.MakeInactive
// [0x00020002] 
// Parameters infos:

void USFXCameraMode_TurianPack::MakeInactive ( )
{
	static UFunction* pFnMakeInactive = NULL;

	if ( ! pFnMakeInactive )
		pFnMakeInactive = (UFunction*) UObject::GObjObjects()->Data[ 65526 ];

	USFXCameraMode_TurianPack_execMakeInactive_Parms MakeInactive_Parms;

	this->ProcessEvent ( pFnMakeInactive, &MakeInactive_Parms, NULL );
};

// Function SFXGame.SFXCameraMode_Combat.MakeActive
// [0x00020002] 
// Parameters infos:

void USFXCameraMode_TurianPack::MakeActive ( )
{
	static UFunction* pFnMakeActive = NULL;

	if ( ! pFnMakeActive )
		pFnMakeActive = (UFunction*) UObject::GObjObjects()->Data[ 65523 ];

	USFXCameraMode_TurianPack_execMakeActive_Parms MakeActive_Parms;

	this->ProcessEvent ( pFnMakeActive, &MakeActive_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge.PopulatePowerStatBarEvolves
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_JetPackCharge::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = (UFunction*) UObject::GObjObjects()->Data[ 136244 ];

	USFXPowerCustomActionMP_JetPackCharge_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge.RecalculateAllPowerData
// [0x00024002] 
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomActionMP_JetPackCharge::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = (UFunction*) UObject::GObjObjects()->Data[ 136242 ];

	USFXPowerCustomActionMP_JetPackCharge_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge.EvolvePower
// [0x00020002] 
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomActionMP_JetPackCharge::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = (UFunction*) UObject::GObjObjects()->Data[ 136235 ];

	USFXPowerCustomActionMP_JetPackCharge_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge.Impact
// [0x00820002] 
// Parameters infos:

void USFXPowerCustomActionMP_JetPackCharge::Impact ( )
{
	static UFunction* pFnImpact = NULL;

	if ( ! pFnImpact )
		pFnImpact = (UFunction*) UObject::GObjObjects()->Data[ 136225 ];

	USFXPowerCustomActionMP_JetPackCharge_execImpact_Parms Impact_Parms;

	this->ProcessEvent ( pFnImpact, &Impact_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge.StartPower
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_JetPackCharge::StartPower ( )
{
	static UFunction* pFnStartPower = NULL;

	if ( ! pFnStartPower )
		pFnStartPower = (UFunction*) UObject::GObjObjects()->Data[ 136223 ];

	USFXPowerCustomActionMP_JetPackCharge_execStartPower_Parms StartPower_Parms;

	this->ProcessEvent ( pFnStartPower, &StartPower_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge.CanOverrideCustomAction
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            OldCustomAction                ( CPF_Parm )
// int                            InCustomAction                 ( CPF_Parm )

bool USFXPowerCustomActionMP_JetPackCharge::CanOverrideCustomAction ( int OldCustomAction, int InCustomAction )
{
	static UFunction* pFnCanOverrideCustomAction = NULL;

	if ( ! pFnCanOverrideCustomAction )
		pFnCanOverrideCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136219 ];

	USFXPowerCustomActionMP_JetPackCharge_execCanOverrideCustomAction_Parms CanOverrideCustomAction_Parms;
	CanOverrideCustomAction_Parms.OldCustomAction = OldCustomAction;
	CanOverrideCustomAction_Parms.InCustomAction = InCustomAction;

	this->ProcessEvent ( pFnCanOverrideCustomAction, &CanOverrideCustomAction_Parms, NULL );

	return CanOverrideCustomAction_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.Replicate
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_JetPackCharge_Base::Replicate ( )
{
	static UFunction* pFnReplicate = NULL;

	if ( ! pFnReplicate )
		pFnReplicate = (UFunction*) UObject::GObjObjects()->Data[ 136208 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execReplicate_Parms Replicate_Parms;

	this->ProcessEvent ( pFnReplicate, &Replicate_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.DoPowerDetonatedForActor
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oActor                         ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// int                            nImpactCount                   ( CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_Parm )
// class ASFXProjectile_PowerCustomAction* oProjectile                    ( CPF_OptionalParm | CPF_Parm )

bool USFXPowerCustomActionMP_JetPackCharge_Base::DoPowerDetonatedForActor ( class AActor* oActor, struct FVector HitLocation, struct FVector HitNormal, int nImpactCount, unsigned long bFirstTarget, class ASFXProjectile_PowerCustomAction* oProjectile )
{
	static UFunction* pFnDoPowerDetonatedForActor = NULL;

	if ( ! pFnDoPowerDetonatedForActor )
		pFnDoPowerDetonatedForActor = (UFunction*) UObject::GObjObjects()->Data[ 136200 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execDoPowerDetonatedForActor_Parms DoPowerDetonatedForActor_Parms;
	DoPowerDetonatedForActor_Parms.oActor = oActor;
	memcpy ( &DoPowerDetonatedForActor_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &DoPowerDetonatedForActor_Parms.HitNormal, &HitNormal, 0xC );
	DoPowerDetonatedForActor_Parms.nImpactCount = nImpactCount;
	DoPowerDetonatedForActor_Parms.bFirstTarget = bFirstTarget;
	DoPowerDetonatedForActor_Parms.oProjectile = oProjectile;

	this->ProcessEvent ( pFnDoPowerDetonatedForActor, &DoPowerDetonatedForActor_Parms, NULL );

	return DoPowerDetonatedForActor_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.PlayFailedChargeEffects
// [0x00820002] 
// Parameters infos:

void USFXPowerCustomActionMP_JetPackCharge_Base::PlayFailedChargeEffects ( )
{
	static UFunction* pFnPlayFailedChargeEffects = NULL;

	if ( ! pFnPlayFailedChargeEffects )
		pFnPlayFailedChargeEffects = (UFunction*) UObject::GObjObjects()->Data[ 136197 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execPlayFailedChargeEffects_Parms PlayFailedChargeEffects_Parms;

	this->ProcessEvent ( pFnPlayFailedChargeEffects, &PlayFailedChargeEffects_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.SpawnProjectile
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_JetPackCharge_Base::SpawnProjectile ( )
{
	static UFunction* pFnSpawnProjectile = NULL;

	if ( ! pFnSpawnProjectile )
		pFnSpawnProjectile = (UFunction*) UObject::GObjObjects()->Data[ 136195 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execSpawnProjectile_Parms SpawnProjectile_Parms;

	this->ProcessEvent ( pFnSpawnProjectile, &SpawnProjectile_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.OnRagdollPhysicsImpact
// [0x00020002] 
// Parameters infos:
// class APawn*                   oPawn                          ( CPF_Parm )
// class AActor*                  oImpactActor                   ( CPF_Parm )
// struct FVector                 vImpactDir                     ( CPF_Parm )

void USFXPowerCustomActionMP_JetPackCharge_Base::OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir )
{
	static UFunction* pFnOnRagdollPhysicsImpact = NULL;

	if ( ! pFnOnRagdollPhysicsImpact )
		pFnOnRagdollPhysicsImpact = (UFunction*) UObject::GObjObjects()->Data[ 136190 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execOnRagdollPhysicsImpact_Parms OnRagdollPhysicsImpact_Parms;
	OnRagdollPhysicsImpact_Parms.oPawn = oPawn;
	OnRagdollPhysicsImpact_Parms.oImpactActor = oImpactActor;
	memcpy ( &OnRagdollPhysicsImpact_Parms.vImpactDir, &vImpactDir, 0xC );

	this->ProcessEvent ( pFnOnRagdollPhysicsImpact, &OnRagdollPhysicsImpact_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.GetImpactForce
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )

float USFXPowerCustomActionMP_JetPackCharge_Base::GetImpactForce ( class AActor* oImpacted )
{
	static UFunction* pFnGetImpactForce = NULL;

	if ( ! pFnGetImpactForce )
		pFnGetImpactForce = (UFunction*) UObject::GObjObjects()->Data[ 136184 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execGetImpactForce_Parms GetImpactForce_Parms;
	GetImpactForce_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnGetImpactForce, &GetImpactForce_Parms, NULL );

	return GetImpactForce_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.ClientDoPowerSubsequentImpact
// [0x00024002] 
// Parameters infos:
// class AActor*                  oActor                         ( CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )
// float                          Duration                       ( CPF_OptionalParm | CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// float                          Delay                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  DoCallback                     ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomActionMP_JetPackCharge_Base::ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback )
{
	static UFunction* pFnClientDoPowerSubsequentImpact = NULL;

	if ( ! pFnClientDoPowerSubsequentImpact )
		pFnClientDoPowerSubsequentImpact = (UFunction*) UObject::GObjObjects()->Data[ 136177 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execClientDoPowerSubsequentImpact_Parms ClientDoPowerSubsequentImpact_Parms;
	ClientDoPowerSubsequentImpact_Parms.oActor = oActor;
	ClientDoPowerSubsequentImpact_Parms.CustomActionReactionType = CustomActionReactionType;
	ClientDoPowerSubsequentImpact_Parms.Duration = Duration;
	ClientDoPowerSubsequentImpact_Parms.ImpactCount = ImpactCount;
	ClientDoPowerSubsequentImpact_Parms.Delay = Delay;
	ClientDoPowerSubsequentImpact_Parms.DoCallback = DoCallback;

	this->ProcessEvent ( pFnClientDoPowerSubsequentImpact, &ClientDoPowerSubsequentImpact_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.OnChargeImpact
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomActionMP_JetPackCharge_Base::OnChargeImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnOnChargeImpact = NULL;

	if ( ! pFnOnChargeImpact )
		pFnOnChargeImpact = (UFunction*) UObject::GObjObjects()->Data[ 136162 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execOnChargeImpact_Parms OnChargeImpact_Parms;
	OnChargeImpact_Parms.Resistance = Resistance;
	OnChargeImpact_Parms.oImpacted = oImpacted;
	OnChargeImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnChargeImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnChargeImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnChargeImpact, &OnChargeImpact_Parms, NULL );

	return OnChargeImpact_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.Teleport
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_JetPackCharge_Base::Teleport ( )
{
	static UFunction* pFnTeleport = NULL;

	if ( ! pFnTeleport )
		pFnTeleport = (UFunction*) UObject::GObjObjects()->Data[ 136161 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execTeleport_Parms Teleport_Parms;

	this->ProcessEvent ( pFnTeleport, &Teleport_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.StartTeleport
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_JetPackCharge_Base::StartTeleport ( )
{
	static UFunction* pFnStartTeleport = NULL;

	if ( ! pFnStartTeleport )
		pFnStartTeleport = (UFunction*) UObject::GObjObjects()->Data[ 136157 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execStartTeleport_Parms StartTeleport_Parms;

	this->ProcessEvent ( pFnStartTeleport, &StartTeleport_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.PrecacheVFX
// [0x00022002] 
// Parameters infos:
// class ASFXObjectPool*          ObjectPool                     ( CPF_Parm )
// class URvrClientEffectManager* ClientEffects                  ( CPF_Parm )

void USFXPowerCustomActionMP_JetPackCharge_Base::PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects )
{
	static UFunction* pFnPrecacheVFX = NULL;

	if ( ! pFnPrecacheVFX )
		pFnPrecacheVFX = (UFunction*) UObject::GObjObjects()->Data[ 136152 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execPrecacheVFX_Parms PrecacheVFX_Parms;
	PrecacheVFX_Parms.ObjectPool = ObjectPool;
	PrecacheVFX_Parms.ClientEffects = ClientEffects;

	this->ProcessEvent ( pFnPrecacheVFX, &PrecacheVFX_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.StopCustomAction
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_JetPackCharge_Base::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136150 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.InterruptThisCustomAction
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_JetPackCharge_Base::InterruptThisCustomAction ( )
{
	static UFunction* pFnInterruptThisCustomAction = NULL;

	if ( ! pFnInterruptThisCustomAction )
		pFnInterruptThisCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136148 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execInterruptThisCustomAction_Parms InterruptThisCustomAction_Parms;

	this->ProcessEvent ( pFnInterruptThisCustomAction, &InterruptThisCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.CameraMove
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_JetPackCharge_Base::CameraMove ( )
{
	static UFunction* pFnCameraMove = NULL;

	if ( ! pFnCameraMove )
		pFnCameraMove = (UFunction*) UObject::GObjObjects()->Data[ 136140 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execCameraMove_Parms CameraMove_Parms;

	this->ProcessEvent ( pFnCameraMove, &CameraMove_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.StartCustomAction
// [0x00820002] 
// Parameters infos:

void USFXPowerCustomActionMP_JetPackCharge_Base::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136127 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.FinalizePawnMove
// [0x00444003] ( FUNC_Final )
// Parameters infos:
// struct FVector                 Loc                            ( CPF_Parm | CPF_OutParm )
// struct FVector                 TargetLoc                      ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

void USFXPowerCustomActionMP_JetPackCharge_Base::FinalizePawnMove ( struct FVector* Loc, struct FVector* TargetLoc )
{
	static UFunction* pFnFinalizePawnMove = NULL;

	if ( ! pFnFinalizePawnMove )
		pFnFinalizePawnMove = (UFunction*) UObject::GObjObjects()->Data[ 136122 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execFinalizePawnMove_Parms FinalizePawnMove_Parms;

	this->ProcessEvent ( pFnFinalizePawnMove, &FinalizePawnMove_Parms, NULL );

	if ( Loc )
		memcpy ( Loc, &FinalizePawnMove_Parms.Loc, 0xC );

	if ( TargetLoc )
		memcpy ( TargetLoc, &FinalizePawnMove_Parms.TargetLoc, 0xC );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.ValidateTarget
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXPowerCustomActionMP_JetPackCharge_Base::ValidateTarget ( )
{
	static UFunction* pFnValidateTarget = NULL;

	if ( ! pFnValidateTarget )
		pFnValidateTarget = (UFunction*) UObject::GObjObjects()->Data[ 136115 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execValidateTarget_Parms ValidateTarget_Parms;

	this->ProcessEvent ( pFnValidateTarget, &ValidateTarget_Parms, NULL );

	return ValidateTarget_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.FindSpace
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Extent                         ( CPF_Parm )
// class AActor*                  TraceActor                     ( CPF_Parm )
// struct FVector                 NearLocation                   ( CPF_Parm | CPF_OutParm )

bool USFXPowerCustomActionMP_JetPackCharge_Base::FindSpace ( struct FVector Extent, class AActor* TraceActor, struct FVector* NearLocation )
{
	static UFunction* pFnFindSpace = NULL;

	if ( ! pFnFindSpace )
		pFnFindSpace = (UFunction*) UObject::GObjObjects()->Data[ 136101 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execFindSpace_Parms FindSpace_Parms;
	memcpy ( &FindSpace_Parms.Extent, &Extent, 0xC );
	FindSpace_Parms.TraceActor = TraceActor;

	this->ProcessEvent ( pFnFindSpace, &FindSpace_Parms, NULL );

	if ( NearLocation )
		memcpy ( NearLocation, &FindSpace_Parms.NearLocation, 0xC );

	return FindSpace_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.TryMove
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 NewLocation                    ( CPF_Parm )
// struct FVector                 Dir                            ( CPF_Parm )
// class APawn*                   CollisionActor                 ( CPF_Parm )

bool USFXPowerCustomActionMP_JetPackCharge_Base::TryMove ( struct FVector NewLocation, struct FVector Dir, class APawn* CollisionActor )
{
	static UFunction* pFnTryMove = NULL;

	if ( ! pFnTryMove )
		pFnTryMove = (UFunction*) UObject::GObjObjects()->Data[ 136096 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execTryMove_Parms TryMove_Parms;
	memcpy ( &TryMove_Parms.NewLocation, &NewLocation, 0xC );
	memcpy ( &TryMove_Parms.Dir, &Dir, 0xC );
	TryMove_Parms.CollisionActor = CollisionActor;

	this->ProcessEvent ( pFnTryMove, &TryMove_Parms, NULL );

	return TryMove_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.CollectVolumes
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_JetPackCharge_Base::CollectVolumes ( )
{
	static UFunction* pFnCollectVolumes = NULL;

	if ( ! pFnCollectVolumes )
		pFnCollectVolumes = (UFunction*) UObject::GObjObjects()->Data[ 136085 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execCollectVolumes_Parms CollectVolumes_Parms;

	this->ProcessEvent ( pFnCollectVolumes, &CollectVolumes_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.ValidateTargetLocation
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 TargetLocation                 ( CPF_Parm )

bool USFXPowerCustomActionMP_JetPackCharge_Base::ValidateTargetLocation ( struct FVector TargetLocation )
{
	static UFunction* pFnValidateTargetLocation = NULL;

	if ( ! pFnValidateTargetLocation )
		pFnValidateTargetLocation = (UFunction*) UObject::GObjObjects()->Data[ 136070 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execValidateTargetLocation_Parms ValidateTargetLocation_Parms;
	memcpy ( &ValidateTargetLocation_Parms.TargetLocation, &TargetLocation, 0xC );

	this->ProcessEvent ( pFnValidateTargetLocation, &ValidateTargetLocation_Parms, NULL );

	return ValidateTargetLocation_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.TestPathReachability
// [0x00420003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ANavigationPoint*        Anchor                         ( CPF_Parm )
// struct FVector                 Extent                         ( CPF_Parm )
// struct FVector                 StartLocation                  ( CPF_Const | CPF_Parm | CPF_OutParm )

bool USFXPowerCustomActionMP_JetPackCharge_Base::TestPathReachability ( class ANavigationPoint* Anchor, struct FVector Extent, struct FVector* StartLocation )
{
	static UFunction* pFnTestPathReachability = NULL;

	if ( ! pFnTestPathReachability )
		pFnTestPathReachability = (UFunction*) UObject::GObjObjects()->Data[ 136064 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execTestPathReachability_Parms TestPathReachability_Parms;
	TestPathReachability_Parms.Anchor = Anchor;
	memcpy ( &TestPathReachability_Parms.Extent, &Extent, 0xC );

	this->ProcessEvent ( pFnTestPathReachability, &TestPathReachability_Parms, NULL );

	if ( StartLocation )
		memcpy ( StartLocation, &TestPathReachability_Parms.StartLocation, 0xC );

	return TestPathReachability_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.NewVector
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Z                              ( CPF_Parm )

struct FVector USFXPowerCustomActionMP_JetPackCharge_Base::NewVector ( float X, float Y, float Z )
{
	static UFunction* pFnNewVector = NULL;

	if ( ! pFnNewVector )
		pFnNewVector = (UFunction*) UObject::GObjObjects()->Data[ 136058 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execNewVector_Parms NewVector_Parms;
	NewVector_Parms.X = X;
	NewVector_Parms.Y = Y;
	NewVector_Parms.Z = Z;

	this->ProcessEvent ( pFnNewVector, &NewVector_Parms, NULL );

	return NewVector_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.CanUsePower
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oTarget                        ( CPF_Parm )

bool USFXPowerCustomActionMP_JetPackCharge_Base::CanUsePower ( class AActor* oTarget )
{
	static UFunction* pFnCanUsePower = NULL;

	if ( ! pFnCanUsePower )
		pFnCanUsePower = (UFunction*) UObject::GObjObjects()->Data[ 136045 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execCanUsePower_Parms CanUsePower_Parms;
	CanUsePower_Parms.oTarget = oTarget;

	this->ProcessEvent ( pFnCanUsePower, &CanUsePower_Parms, NULL );

	return CanUsePower_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.InternalCanDoCustomAction
// [0x00080002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                SyncPawn                       ( CPF_Parm )
// unsigned long                  bForced                        ( CPF_Parm )

bool USFXPowerCustomActionMP_JetPackCharge_Base::InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced )
{
	static UFunction* pFnInternalCanDoCustomAction = NULL;

	if ( ! pFnInternalCanDoCustomAction )
		pFnInternalCanDoCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 136041 ];

	USFXPowerCustomActionMP_JetPackCharge_Base_execInternalCanDoCustomAction_Parms InternalCanDoCustomAction_Parms;
	InternalCanDoCustomAction_Parms.SyncPawn = SyncPawn;
	InternalCanDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnInternalCanDoCustomAction, &InternalCanDoCustomAction_Parms, NULL );

	return InternalCanDoCustomAction_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_StimPack.PopulatePowerStatBarEvolves
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_StimPack::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = (UFunction*) UObject::GObjObjects()->Data[ 136312 ];

	USFXPowerCustomActionMP_StimPack_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_StimPack.RecalculateAllPowerData
// [0x00024002] 
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomActionMP_StimPack::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = (UFunction*) UObject::GObjObjects()->Data[ 136310 ];

	USFXPowerCustomActionMP_StimPack_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_StimPack.EvolvePower
// [0x00020002] 
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomActionMP_StimPack::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = (UFunction*) UObject::GObjObjects()->Data[ 136303 ];

	USFXPowerCustomActionMP_StimPack_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_StimPack.ApplyGrenadeBonus
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_StimPack::ApplyGrenadeBonus ( )
{
	static UFunction* pFnApplyGrenadeBonus = NULL;

	if ( ! pFnApplyGrenadeBonus )
		pFnApplyGrenadeBonus = (UFunction*) UObject::GObjObjects()->Data[ 136300 ];

	USFXPowerCustomActionMP_StimPack_execApplyGrenadeBonus_Parms ApplyGrenadeBonus_Parms;

	this->ProcessEvent ( pFnApplyGrenadeBonus, &ApplyGrenadeBonus_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_StimPack.RemoveImmunity
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void USFXPowerCustomActionMP_StimPack::RemoveImmunity ( )
{
	static UFunction* pFnRemoveImmunity = NULL;

	if ( ! pFnRemoveImmunity )
		pFnRemoveImmunity = (UFunction*) UObject::GObjObjects()->Data[ 136297 ];

	USFXPowerCustomActionMP_StimPack_execRemoveImmunity_Parms RemoveImmunity_Parms;

	this->ProcessEvent ( pFnRemoveImmunity, &RemoveImmunity_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_StimPack.OnImpact
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXPowerCustomActionMP_StimPack::OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 136278 ];

	USFXPowerCustomActionMP_StimPack_execOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.Resistance = Resistance;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnImpact_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpowercustomactionmp_turianpassive.PopulatePowerStatBarEvolves
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_N7TurianPassive::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = (UFunction*) UObject::GObjObjects()->Data[ 136275 ];

	USFXPowerCustomActionMP_N7TurianPassive_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function sfxgamempcontent.sfxpowercustomactionmp_turianpassive.RecalculateAllPowerData
// [0x00024002] 
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomActionMP_N7TurianPassive::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = (UFunction*) UObject::GObjObjects()->Data[ 136273 ];

	USFXPowerCustomActionMP_N7TurianPassive_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function sfxgamempcontent.sfxpowercustomactionmp_turianpassive.EvolvePower
// [0x00020002] 
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomActionMP_N7TurianPassive::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = (UFunction*) UObject::GObjObjects()->Data[ 136269 ];

	USFXPowerCustomActionMP_N7TurianPassive_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function sfxgamempcontent.sfxpowercustomactionmp_turianpassive.ApplyGlobalBonus
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_N7TurianPassive::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = (UFunction*) UObject::GObjObjects()->Data[ 136265 ];

	USFXPowerCustomActionMP_N7TurianPassive_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.PopulatePowerStatBarEvolves
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_N7TurianMeleePassive::PopulatePowerStatBarEvolves ( )
{
	static UFunction* pFnPopulatePowerStatBarEvolves = NULL;

	if ( ! pFnPopulatePowerStatBarEvolves )
		pFnPopulatePowerStatBarEvolves = (UFunction*) UObject::GObjObjects()->Data[ 129504 ];

	USFXPowerCustomActionMP_N7TurianMeleePassive_execPopulatePowerStatBarEvolves_Parms PopulatePowerStatBarEvolves_Parms;

	this->ProcessEvent ( pFnPopulatePowerStatBarEvolves, &PopulatePowerStatBarEvolves_Parms, NULL );
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.ApplyBonus
// [0x00024002] 
// Parameters infos:
// struct FName                   Parameter                      ( CPF_Parm )
// class USFXGameEffect*          Bonus                          ( CPF_Parm )
// unsigned long                  bRemove                        ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomActionMP_N7TurianMeleePassive::ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove )
{
	static UFunction* pFnApplyBonus = NULL;

	if ( ! pFnApplyBonus )
		pFnApplyBonus = (UFunction*) UObject::GObjObjects()->Data[ 129500 ];

	USFXPowerCustomActionMP_N7TurianMeleePassive_execApplyBonus_Parms ApplyBonus_Parms;
	memcpy ( &ApplyBonus_Parms.Parameter, &Parameter, 0x8 );
	ApplyBonus_Parms.Bonus = Bonus;
	ApplyBonus_Parms.bRemove = bRemove;

	this->ProcessEvent ( pFnApplyBonus, &ApplyBonus_Parms, NULL );
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.RecalculateAllPowerData
// [0x00024002] 
// Parameters infos:
// unsigned long                  bReset                         ( CPF_OptionalParm | CPF_Parm )

void USFXPowerCustomActionMP_N7TurianMeleePassive::RecalculateAllPowerData ( unsigned long bReset )
{
	static UFunction* pFnRecalculateAllPowerData = NULL;

	if ( ! pFnRecalculateAllPowerData )
		pFnRecalculateAllPowerData = (UFunction*) UObject::GObjObjects()->Data[ 129498 ];

	USFXPowerCustomActionMP_N7TurianMeleePassive_execRecalculateAllPowerData_Parms RecalculateAllPowerData_Parms;
	RecalculateAllPowerData_Parms.bReset = bReset;

	this->ProcessEvent ( pFnRecalculateAllPowerData, &RecalculateAllPowerData_Parms, NULL );
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.EvolvePower
// [0x00020002] 
// Parameters infos:
// unsigned char                  choice                         ( CPF_Parm )

void USFXPowerCustomActionMP_N7TurianMeleePassive::EvolvePower ( unsigned char choice )
{
	static UFunction* pFnEvolvePower = NULL;

	if ( ! pFnEvolvePower )
		pFnEvolvePower = (UFunction*) UObject::GObjObjects()->Data[ 129492 ];

	USFXPowerCustomActionMP_N7TurianMeleePassive_execEvolvePower_Parms EvolvePower_Parms;
	EvolvePower_Parms.choice = choice;

	this->ProcessEvent ( pFnEvolvePower, &EvolvePower_Parms, NULL );
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.ApplyGlobalBonus
// [0x00020002] 
// Parameters infos:

void USFXPowerCustomActionMP_N7TurianMeleePassive::ApplyGlobalBonus ( )
{
	static UFunction* pFnApplyGlobalBonus = NULL;

	if ( ! pFnApplyGlobalBonus )
		pFnApplyGlobalBonus = (UFunction*) UObject::GObjObjects()->Data[ 129488 ];

	USFXPowerCustomActionMP_N7TurianMeleePassive_execApplyGlobalBonus_Parms ApplyGlobalBonus_Parms;

	this->ProcessEvent ( pFnApplyGlobalBonus, &ApplyGlobalBonus_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.RollOverride
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianEvadeLeft::RollOverride ( )
{
	static UFunction* pFnRollOverride = NULL;

	if ( ! pFnRollOverride )
		pFnRollOverride = (UFunction*) UObject::GObjObjects()->Data[ 135783 ];

	USFXCustomAction_TurianEvadeLeft_execRollOverride_Parms RollOverride_Parms;

	this->ProcessEvent ( pFnRollOverride, &RollOverride_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StopCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianEvadeLeft::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135782 ];

	USFXCustomAction_TurianEvadeLeft_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.TickCustomAction
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void USFXCustomAction_TurianEvadeLeft::eventTickCustomAction ( float DeltaTime )
{
	static UFunction* pFnTickCustomAction = NULL;

	if ( ! pFnTickCustomAction )
		pFnTickCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135778 ];

	USFXCustomAction_TurianEvadeLeft_eventTickCustomAction_Parms TickCustomAction_Parms;
	TickCustomAction_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickCustomAction, &TickCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianEvadeLeft::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135774 ];

	USFXCustomAction_TurianEvadeLeft_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.RollOverride
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianEvadeBase::RollOverride ( )
{
	static UFunction* pFnRollOverride = NULL;

	if ( ! pFnRollOverride )
		pFnRollOverride = (UFunction*) UObject::GObjObjects()->Data[ 135783 ];

	USFXCustomAction_TurianEvadeBase_execRollOverride_Parms RollOverride_Parms;

	this->ProcessEvent ( pFnRollOverride, &RollOverride_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StopCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianEvadeBase::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135782 ];

	USFXCustomAction_TurianEvadeBase_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.TickCustomAction
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void USFXCustomAction_TurianEvadeBase::eventTickCustomAction ( float DeltaTime )
{
	static UFunction* pFnTickCustomAction = NULL;

	if ( ! pFnTickCustomAction )
		pFnTickCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135778 ];

	USFXCustomAction_TurianEvadeBase_eventTickCustomAction_Parms TickCustomAction_Parms;
	TickCustomAction_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickCustomAction, &TickCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianEvadeBase::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135774 ];

	USFXCustomAction_TurianEvadeBase_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.RollOverride
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianEvadeRight::RollOverride ( )
{
	static UFunction* pFnRollOverride = NULL;

	if ( ! pFnRollOverride )
		pFnRollOverride = (UFunction*) UObject::GObjObjects()->Data[ 135783 ];

	USFXCustomAction_TurianEvadeRight_execRollOverride_Parms RollOverride_Parms;

	this->ProcessEvent ( pFnRollOverride, &RollOverride_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StopCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianEvadeRight::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135782 ];

	USFXCustomAction_TurianEvadeRight_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.TickCustomAction
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void USFXCustomAction_TurianEvadeRight::eventTickCustomAction ( float DeltaTime )
{
	static UFunction* pFnTickCustomAction = NULL;

	if ( ! pFnTickCustomAction )
		pFnTickCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135778 ];

	USFXCustomAction_TurianEvadeRight_eventTickCustomAction_Parms TickCustomAction_Parms;
	TickCustomAction_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickCustomAction, &TickCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianEvadeRight::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135774 ];

	USFXCustomAction_TurianEvadeRight_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.RollOverride
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianEvadeForward::RollOverride ( )
{
	static UFunction* pFnRollOverride = NULL;

	if ( ! pFnRollOverride )
		pFnRollOverride = (UFunction*) UObject::GObjObjects()->Data[ 135783 ];

	USFXCustomAction_TurianEvadeForward_execRollOverride_Parms RollOverride_Parms;

	this->ProcessEvent ( pFnRollOverride, &RollOverride_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StopCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianEvadeForward::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135782 ];

	USFXCustomAction_TurianEvadeForward_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.TickCustomAction
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void USFXCustomAction_TurianEvadeForward::eventTickCustomAction ( float DeltaTime )
{
	static UFunction* pFnTickCustomAction = NULL;

	if ( ! pFnTickCustomAction )
		pFnTickCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135778 ];

	USFXCustomAction_TurianEvadeForward_eventTickCustomAction_Parms TickCustomAction_Parms;
	TickCustomAction_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickCustomAction, &TickCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianEvadeForward::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135774 ];

	USFXCustomAction_TurianEvadeForward_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.RollOverride
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianEvadeBackward::RollOverride ( )
{
	static UFunction* pFnRollOverride = NULL;

	if ( ! pFnRollOverride )
		pFnRollOverride = (UFunction*) UObject::GObjObjects()->Data[ 135783 ];

	USFXCustomAction_TurianEvadeBackward_execRollOverride_Parms RollOverride_Parms;

	this->ProcessEvent ( pFnRollOverride, &RollOverride_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StopCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianEvadeBackward::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135782 ];

	USFXCustomAction_TurianEvadeBackward_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.TickCustomAction
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void USFXCustomAction_TurianEvadeBackward::eventTickCustomAction ( float DeltaTime )
{
	static UFunction* pFnTickCustomAction = NULL;

	if ( ! pFnTickCustomAction )
		pFnTickCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135778 ];

	USFXCustomAction_TurianEvadeBackward_eventTickCustomAction_Parms TickCustomAction_Parms;
	TickCustomAction_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickCustomAction, &TickCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianEvadeBackward::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135774 ];

	USFXCustomAction_TurianEvadeBackward_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPunch.ClientDoCustomAction
// [0x00024002] 
// Parameters infos:
// unsigned long                  bForced                        ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_TurianPunch::ClientDoCustomAction ( unsigned long bForced )
{
	static UFunction* pFnClientDoCustomAction = NULL;

	if ( ! pFnClientDoCustomAction )
		pFnClientDoCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135936 ];

	USFXCustomAction_TurianPunch_execClientDoCustomAction_Parms ClientDoCustomAction_Parms;
	ClientDoCustomAction_Parms.bForced = bForced;

	this->ProcessEvent ( pFnClientDoCustomAction, &ClientDoCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPunch.Replicate
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPunch::Replicate ( )
{
	static UFunction* pFnReplicate = NULL;

	if ( ! pFnReplicate )
		pFnReplicate = (UFunction*) UObject::GObjObjects()->Data[ 135935 ];

	USFXCustomAction_TurianPunch_execReplicate_Parms Replicate_Parms;

	this->ProcessEvent ( pFnReplicate, &Replicate_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPunch.ServerStartCustomAction
// [0x00024002] 
// Parameters infos:
// int                            NewAction                      ( CPF_Parm )
// class ABioPawn*                Sync                           ( CPF_OptionalParm | CPF_Parm )
// int                            NewPowerAction                 ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_TurianPunch::ServerStartCustomAction ( int NewAction, class ABioPawn* Sync, int NewPowerAction )
{
	static UFunction* pFnServerStartCustomAction = NULL;

	if ( ! pFnServerStartCustomAction )
		pFnServerStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135930 ];

	USFXCustomAction_TurianPunch_execServerStartCustomAction_Parms ServerStartCustomAction_Parms;
	ServerStartCustomAction_Parms.NewAction = NewAction;
	ServerStartCustomAction_Parms.Sync = Sync;
	ServerStartCustomAction_Parms.NewPowerAction = NewPowerAction;

	this->ProcessEvent ( pFnServerStartCustomAction, &ServerStartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPunch.StopMove
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPunch::StopMove ( )
{
	static UFunction* pFnStopMove = NULL;

	if ( ! pFnStopMove )
		pFnStopMove = (UFunction*) UObject::GObjObjects()->Data[ 135929 ];

	USFXCustomAction_TurianPunch_execStopMove_Parms StopMove_Parms;

	this->ProcessEvent ( pFnStopMove, &StopMove_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPunch.OnActorImpacted
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXCustomAction_TurianPunch::OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnOnActorImpacted = NULL;

	if ( ! pFnOnActorImpacted )
		pFnOnActorImpacted = (UFunction*) UObject::GObjObjects()->Data[ 135921 ];

	USFXCustomAction_TurianPunch_execOnActorImpacted_Parms OnActorImpacted_Parms;
	OnActorImpacted_Parms.Resistance = Resistance;
	OnActorImpacted_Parms.oImpacted = oImpacted;
	OnActorImpacted_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnActorImpacted_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnActorImpacted_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnActorImpacted, &OnActorImpacted_Parms, NULL );

	return OnActorImpacted_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPunch.GetMeleeDirection
// [0x00020002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector USFXCustomAction_TurianPunch::GetMeleeDirection ( )
{
	static UFunction* pFnGetMeleeDirection = NULL;

	if ( ! pFnGetMeleeDirection )
		pFnGetMeleeDirection = (UFunction*) UObject::GObjObjects()->Data[ 135917 ];

	USFXCustomAction_TurianPunch_execGetMeleeDirection_Parms GetMeleeDirection_Parms;

	this->ProcessEvent ( pFnGetMeleeDirection, &GetMeleeDirection_Parms, NULL );

	return GetMeleeDirection_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPunch.Translate
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPunch::Translate ( )
{
	static UFunction* pFnTranslate = NULL;

	if ( ! pFnTranslate )
		pFnTranslate = (UFunction*) UObject::GObjObjects()->Data[ 135915 ];

	USFXCustomAction_TurianPunch_execTranslate_Parms Translate_Parms;

	this->ProcessEvent ( pFnTranslate, &Translate_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPunch.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPunch::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135913 ];

	USFXCustomAction_TurianPunch_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StopMove
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianMeleeOne::StopMove ( )
{
	static UFunction* pFnStopMove = NULL;

	if ( ! pFnStopMove )
		pFnStopMove = (UFunction*) UObject::GObjObjects()->Data[ 135838 ];

	USFXCustomAction_TurianMeleeOne_execStopMove_Parms StopMove_Parms;

	this->ProcessEvent ( pFnStopMove, &StopMove_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.OnActorImpacted
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXCustomAction_TurianMeleeOne::OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnOnActorImpacted = NULL;

	if ( ! pFnOnActorImpacted )
		pFnOnActorImpacted = (UFunction*) UObject::GObjObjects()->Data[ 135825 ];

	USFXCustomAction_TurianMeleeOne_execOnActorImpacted_Parms OnActorImpacted_Parms;
	OnActorImpacted_Parms.Resistance = Resistance;
	OnActorImpacted_Parms.oImpacted = oImpacted;
	OnActorImpacted_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnActorImpacted_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnActorImpacted_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnActorImpacted, &OnActorImpacted_Parms, NULL );

	return OnActorImpacted_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.ReplicateImpact
// [0x00024002] 
// Parameters infos:
// class ABioPawn*                Target                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_TurianMeleeOne::ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnReplicateImpact = NULL;

	if ( ! pFnReplicateImpact )
		pFnReplicateImpact = (UFunction*) UObject::GObjObjects()->Data[ 135818 ];

	USFXCustomAction_TurianMeleeOne_execReplicateImpact_Parms ReplicateImpact_Parms;
	ReplicateImpact_Parms.Target = Target;
	ReplicateImpact_Parms.ImpactCount = ImpactCount;
	ReplicateImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ReplicateImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ReplicateImpact_Parms.HitNormal, &HitNormal, 0xC );
	ReplicateImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnReplicateImpact, &ReplicateImpact_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StopCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianMeleeOne::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135817 ];

	USFXCustomAction_TurianMeleeOne_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.EndAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianMeleeOne::EndAction ( )
{
	static UFunction* pFnEndAction = NULL;

	if ( ! pFnEndAction )
		pFnEndAction = (UFunction*) UObject::GObjObjects()->Data[ 135816 ];

	USFXCustomAction_TurianMeleeOne_execEndAction_Parms EndAction_Parms;

	this->ProcessEvent ( pFnEndAction, &EndAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.HeavyMelee
// [0x00020000] 
// Parameters infos:

void USFXCustomAction_TurianMeleeOne::HeavyMelee ( )
{
	static UFunction* pFnHeavyMelee = NULL;

	if ( ! pFnHeavyMelee )
		pFnHeavyMelee = (UFunction*) UObject::GObjObjects()->Data[ 135815 ];

	USFXCustomAction_TurianMeleeOne_execHeavyMelee_Parms HeavyMelee_Parms;

	this->ProcessEvent ( pFnHeavyMelee, &HeavyMelee_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.NoHeavyMelee
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianMeleeOne::NoHeavyMelee ( )
{
	static UFunction* pFnNoHeavyMelee = NULL;

	if ( ! pFnNoHeavyMelee )
		pFnNoHeavyMelee = (UFunction*) UObject::GObjObjects()->Data[ 135814 ];

	USFXCustomAction_TurianMeleeOne_execNoHeavyMelee_Parms NoHeavyMelee_Parms;

	this->ProcessEvent ( pFnNoHeavyMelee, &NoHeavyMelee_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.DoRifleMeleeTwo
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianMeleeOne::DoRifleMeleeTwo ( )
{
	static UFunction* pFnDoRifleMeleeTwo = NULL;

	if ( ! pFnDoRifleMeleeTwo )
		pFnDoRifleMeleeTwo = (UFunction*) UObject::GObjObjects()->Data[ 135812 ];

	USFXCustomAction_TurianMeleeOne_execDoRifleMeleeTwo_Parms DoRifleMeleeTwo_Parms;

	this->ProcessEvent ( pFnDoRifleMeleeTwo, &DoRifleMeleeTwo_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.RifleMeleeSecondary
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianMeleeOne::RifleMeleeSecondary ( )
{
	static UFunction* pFnRifleMeleeSecondary = NULL;

	if ( ! pFnRifleMeleeSecondary )
		pFnRifleMeleeSecondary = (UFunction*) UObject::GObjObjects()->Data[ 135811 ];

	USFXCustomAction_TurianMeleeOne_execRifleMeleeSecondary_Parms RifleMeleeSecondary_Parms;

	this->ProcessEvent ( pFnRifleMeleeSecondary, &RifleMeleeSecondary_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianMeleeOne::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135809 ];

	USFXCustomAction_TurianMeleeOne_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StopMove
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianRifleMeleeTwo::StopMove ( )
{
	static UFunction* pFnStopMove = NULL;

	if ( ! pFnStopMove )
		pFnStopMove = (UFunction*) UObject::GObjObjects()->Data[ 135838 ];

	USFXCustomAction_TurianRifleMeleeTwo_execStopMove_Parms StopMove_Parms;

	this->ProcessEvent ( pFnStopMove, &StopMove_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.OnActorImpacted
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXCustomAction_TurianRifleMeleeTwo::OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnOnActorImpacted = NULL;

	if ( ! pFnOnActorImpacted )
		pFnOnActorImpacted = (UFunction*) UObject::GObjObjects()->Data[ 135825 ];

	USFXCustomAction_TurianRifleMeleeTwo_execOnActorImpacted_Parms OnActorImpacted_Parms;
	OnActorImpacted_Parms.Resistance = Resistance;
	OnActorImpacted_Parms.oImpacted = oImpacted;
	OnActorImpacted_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnActorImpacted_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnActorImpacted_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnActorImpacted, &OnActorImpacted_Parms, NULL );

	return OnActorImpacted_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.ReplicateImpact
// [0x00024002] 
// Parameters infos:
// class ABioPawn*                Target                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_TurianRifleMeleeTwo::ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnReplicateImpact = NULL;

	if ( ! pFnReplicateImpact )
		pFnReplicateImpact = (UFunction*) UObject::GObjObjects()->Data[ 135818 ];

	USFXCustomAction_TurianRifleMeleeTwo_execReplicateImpact_Parms ReplicateImpact_Parms;
	ReplicateImpact_Parms.Target = Target;
	ReplicateImpact_Parms.ImpactCount = ImpactCount;
	ReplicateImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ReplicateImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ReplicateImpact_Parms.HitNormal, &HitNormal, 0xC );
	ReplicateImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnReplicateImpact, &ReplicateImpact_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StopCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianRifleMeleeTwo::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135817 ];

	USFXCustomAction_TurianRifleMeleeTwo_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.EndAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianRifleMeleeTwo::EndAction ( )
{
	static UFunction* pFnEndAction = NULL;

	if ( ! pFnEndAction )
		pFnEndAction = (UFunction*) UObject::GObjObjects()->Data[ 135816 ];

	USFXCustomAction_TurianRifleMeleeTwo_execEndAction_Parms EndAction_Parms;

	this->ProcessEvent ( pFnEndAction, &EndAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.HeavyMelee
// [0x00020000] 
// Parameters infos:

void USFXCustomAction_TurianRifleMeleeTwo::HeavyMelee ( )
{
	static UFunction* pFnHeavyMelee = NULL;

	if ( ! pFnHeavyMelee )
		pFnHeavyMelee = (UFunction*) UObject::GObjObjects()->Data[ 135815 ];

	USFXCustomAction_TurianRifleMeleeTwo_execHeavyMelee_Parms HeavyMelee_Parms;

	this->ProcessEvent ( pFnHeavyMelee, &HeavyMelee_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.NoHeavyMelee
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianRifleMeleeTwo::NoHeavyMelee ( )
{
	static UFunction* pFnNoHeavyMelee = NULL;

	if ( ! pFnNoHeavyMelee )
		pFnNoHeavyMelee = (UFunction*) UObject::GObjObjects()->Data[ 135814 ];

	USFXCustomAction_TurianRifleMeleeTwo_execNoHeavyMelee_Parms NoHeavyMelee_Parms;

	this->ProcessEvent ( pFnNoHeavyMelee, &NoHeavyMelee_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.DoRifleMeleeTwo
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianRifleMeleeTwo::DoRifleMeleeTwo ( )
{
	static UFunction* pFnDoRifleMeleeTwo = NULL;

	if ( ! pFnDoRifleMeleeTwo )
		pFnDoRifleMeleeTwo = (UFunction*) UObject::GObjObjects()->Data[ 135812 ];

	USFXCustomAction_TurianRifleMeleeTwo_execDoRifleMeleeTwo_Parms DoRifleMeleeTwo_Parms;

	this->ProcessEvent ( pFnDoRifleMeleeTwo, &DoRifleMeleeTwo_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.RifleMeleeSecondary
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianRifleMeleeTwo::RifleMeleeSecondary ( )
{
	static UFunction* pFnRifleMeleeSecondary = NULL;

	if ( ! pFnRifleMeleeSecondary )
		pFnRifleMeleeSecondary = (UFunction*) UObject::GObjObjects()->Data[ 135811 ];

	USFXCustomAction_TurianRifleMeleeTwo_execRifleMeleeSecondary_Parms RifleMeleeSecondary_Parms;

	this->ProcessEvent ( pFnRifleMeleeSecondary, &RifleMeleeSecondary_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianRifleMeleeTwo::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135809 ];

	USFXCustomAction_TurianRifleMeleeTwo_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StopMove
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianRifleMeleeThree::StopMove ( )
{
	static UFunction* pFnStopMove = NULL;

	if ( ! pFnStopMove )
		pFnStopMove = (UFunction*) UObject::GObjObjects()->Data[ 135838 ];

	USFXCustomAction_TurianRifleMeleeThree_execStopMove_Parms StopMove_Parms;

	this->ProcessEvent ( pFnStopMove, &StopMove_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.OnActorImpacted
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXCustomAction_TurianRifleMeleeThree::OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnOnActorImpacted = NULL;

	if ( ! pFnOnActorImpacted )
		pFnOnActorImpacted = (UFunction*) UObject::GObjObjects()->Data[ 135825 ];

	USFXCustomAction_TurianRifleMeleeThree_execOnActorImpacted_Parms OnActorImpacted_Parms;
	OnActorImpacted_Parms.Resistance = Resistance;
	OnActorImpacted_Parms.oImpacted = oImpacted;
	OnActorImpacted_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnActorImpacted_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnActorImpacted_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnActorImpacted, &OnActorImpacted_Parms, NULL );

	return OnActorImpacted_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.ReplicateImpact
// [0x00024002] 
// Parameters infos:
// class ABioPawn*                Target                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_TurianRifleMeleeThree::ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnReplicateImpact = NULL;

	if ( ! pFnReplicateImpact )
		pFnReplicateImpact = (UFunction*) UObject::GObjObjects()->Data[ 135818 ];

	USFXCustomAction_TurianRifleMeleeThree_execReplicateImpact_Parms ReplicateImpact_Parms;
	ReplicateImpact_Parms.Target = Target;
	ReplicateImpact_Parms.ImpactCount = ImpactCount;
	ReplicateImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ReplicateImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ReplicateImpact_Parms.HitNormal, &HitNormal, 0xC );
	ReplicateImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnReplicateImpact, &ReplicateImpact_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StopCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianRifleMeleeThree::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135817 ];

	USFXCustomAction_TurianRifleMeleeThree_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.EndAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianRifleMeleeThree::EndAction ( )
{
	static UFunction* pFnEndAction = NULL;

	if ( ! pFnEndAction )
		pFnEndAction = (UFunction*) UObject::GObjObjects()->Data[ 135816 ];

	USFXCustomAction_TurianRifleMeleeThree_execEndAction_Parms EndAction_Parms;

	this->ProcessEvent ( pFnEndAction, &EndAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.HeavyMelee
// [0x00020000] 
// Parameters infos:

void USFXCustomAction_TurianRifleMeleeThree::HeavyMelee ( )
{
	static UFunction* pFnHeavyMelee = NULL;

	if ( ! pFnHeavyMelee )
		pFnHeavyMelee = (UFunction*) UObject::GObjObjects()->Data[ 135815 ];

	USFXCustomAction_TurianRifleMeleeThree_execHeavyMelee_Parms HeavyMelee_Parms;

	this->ProcessEvent ( pFnHeavyMelee, &HeavyMelee_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.NoHeavyMelee
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianRifleMeleeThree::NoHeavyMelee ( )
{
	static UFunction* pFnNoHeavyMelee = NULL;

	if ( ! pFnNoHeavyMelee )
		pFnNoHeavyMelee = (UFunction*) UObject::GObjObjects()->Data[ 135814 ];

	USFXCustomAction_TurianRifleMeleeThree_execNoHeavyMelee_Parms NoHeavyMelee_Parms;

	this->ProcessEvent ( pFnNoHeavyMelee, &NoHeavyMelee_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.DoRifleMeleeTwo
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianRifleMeleeThree::DoRifleMeleeTwo ( )
{
	static UFunction* pFnDoRifleMeleeTwo = NULL;

	if ( ! pFnDoRifleMeleeTwo )
		pFnDoRifleMeleeTwo = (UFunction*) UObject::GObjObjects()->Data[ 135812 ];

	USFXCustomAction_TurianRifleMeleeThree_execDoRifleMeleeTwo_Parms DoRifleMeleeTwo_Parms;

	this->ProcessEvent ( pFnDoRifleMeleeTwo, &DoRifleMeleeTwo_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.RifleMeleeSecondary
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianRifleMeleeThree::RifleMeleeSecondary ( )
{
	static UFunction* pFnRifleMeleeSecondary = NULL;

	if ( ! pFnRifleMeleeSecondary )
		pFnRifleMeleeSecondary = (UFunction*) UObject::GObjObjects()->Data[ 135811 ];

	USFXCustomAction_TurianRifleMeleeThree_execRifleMeleeSecondary_Parms RifleMeleeSecondary_Parms;

	this->ProcessEvent ( pFnRifleMeleeSecondary, &RifleMeleeSecondary_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianRifleMeleeThree::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135809 ];

	USFXCustomAction_TurianRifleMeleeThree_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StopMove
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeOne::StopMove ( )
{
	static UFunction* pFnStopMove = NULL;

	if ( ! pFnStopMove )
		pFnStopMove = (UFunction*) UObject::GObjObjects()->Data[ 135875 ];

	USFXCustomAction_TurianPistolMeleeOne_execStopMove_Parms StopMove_Parms;

	this->ProcessEvent ( pFnStopMove, &StopMove_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.OnActorImpacted
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXCustomAction_TurianPistolMeleeOne::OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnOnActorImpacted = NULL;

	if ( ! pFnOnActorImpacted )
		pFnOnActorImpacted = (UFunction*) UObject::GObjObjects()->Data[ 135862 ];

	USFXCustomAction_TurianPistolMeleeOne_execOnActorImpacted_Parms OnActorImpacted_Parms;
	OnActorImpacted_Parms.Resistance = Resistance;
	OnActorImpacted_Parms.oImpacted = oImpacted;
	OnActorImpacted_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnActorImpacted_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnActorImpacted_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnActorImpacted, &OnActorImpacted_Parms, NULL );

	return OnActorImpacted_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.ReplicateImpact
// [0x00024002] 
// Parameters infos:
// class ABioPawn*                Target                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_TurianPistolMeleeOne::ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnReplicateImpact = NULL;

	if ( ! pFnReplicateImpact )
		pFnReplicateImpact = (UFunction*) UObject::GObjObjects()->Data[ 135855 ];

	USFXCustomAction_TurianPistolMeleeOne_execReplicateImpact_Parms ReplicateImpact_Parms;
	ReplicateImpact_Parms.Target = Target;
	ReplicateImpact_Parms.ImpactCount = ImpactCount;
	ReplicateImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ReplicateImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ReplicateImpact_Parms.HitNormal, &HitNormal, 0xC );
	ReplicateImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnReplicateImpact, &ReplicateImpact_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StopCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeOne::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135854 ];

	USFXCustomAction_TurianPistolMeleeOne_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.EndAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeOne::EndAction ( )
{
	static UFunction* pFnEndAction = NULL;

	if ( ! pFnEndAction )
		pFnEndAction = (UFunction*) UObject::GObjObjects()->Data[ 135853 ];

	USFXCustomAction_TurianPistolMeleeOne_execEndAction_Parms EndAction_Parms;

	this->ProcessEvent ( pFnEndAction, &EndAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.HeavyMelee
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeOne::HeavyMelee ( )
{
	static UFunction* pFnHeavyMelee = NULL;

	if ( ! pFnHeavyMelee )
		pFnHeavyMelee = (UFunction*) UObject::GObjObjects()->Data[ 135851 ];

	USFXCustomAction_TurianPistolMeleeOne_execHeavyMelee_Parms HeavyMelee_Parms;

	this->ProcessEvent ( pFnHeavyMelee, &HeavyMelee_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.NoHeavyMelee
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeOne::NoHeavyMelee ( )
{
	static UFunction* pFnNoHeavyMelee = NULL;

	if ( ! pFnNoHeavyMelee )
		pFnNoHeavyMelee = (UFunction*) UObject::GObjObjects()->Data[ 135850 ];

	USFXCustomAction_TurianPistolMeleeOne_execNoHeavyMelee_Parms NoHeavyMelee_Parms;

	this->ProcessEvent ( pFnNoHeavyMelee, &NoHeavyMelee_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.DoPistolMeleeTwo
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeOne::DoPistolMeleeTwo ( )
{
	static UFunction* pFnDoPistolMeleeTwo = NULL;

	if ( ! pFnDoPistolMeleeTwo )
		pFnDoPistolMeleeTwo = (UFunction*) UObject::GObjObjects()->Data[ 135848 ];

	USFXCustomAction_TurianPistolMeleeOne_execDoPistolMeleeTwo_Parms DoPistolMeleeTwo_Parms;

	this->ProcessEvent ( pFnDoPistolMeleeTwo, &DoPistolMeleeTwo_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.PistolMeleeSecondary
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeOne::PistolMeleeSecondary ( )
{
	static UFunction* pFnPistolMeleeSecondary = NULL;

	if ( ! pFnPistolMeleeSecondary )
		pFnPistolMeleeSecondary = (UFunction*) UObject::GObjObjects()->Data[ 135847 ];

	USFXCustomAction_TurianPistolMeleeOne_execPistolMeleeSecondary_Parms PistolMeleeSecondary_Parms;

	this->ProcessEvent ( pFnPistolMeleeSecondary, &PistolMeleeSecondary_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeOne::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135845 ];

	USFXCustomAction_TurianPistolMeleeOne_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StopMove
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeTwo::StopMove ( )
{
	static UFunction* pFnStopMove = NULL;

	if ( ! pFnStopMove )
		pFnStopMove = (UFunction*) UObject::GObjObjects()->Data[ 135875 ];

	USFXCustomAction_TurianPistolMeleeTwo_execStopMove_Parms StopMove_Parms;

	this->ProcessEvent ( pFnStopMove, &StopMove_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.OnActorImpacted
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXCustomAction_TurianPistolMeleeTwo::OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnOnActorImpacted = NULL;

	if ( ! pFnOnActorImpacted )
		pFnOnActorImpacted = (UFunction*) UObject::GObjObjects()->Data[ 135862 ];

	USFXCustomAction_TurianPistolMeleeTwo_execOnActorImpacted_Parms OnActorImpacted_Parms;
	OnActorImpacted_Parms.Resistance = Resistance;
	OnActorImpacted_Parms.oImpacted = oImpacted;
	OnActorImpacted_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnActorImpacted_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnActorImpacted_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnActorImpacted, &OnActorImpacted_Parms, NULL );

	return OnActorImpacted_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.ReplicateImpact
// [0x00024002] 
// Parameters infos:
// class ABioPawn*                Target                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_TurianPistolMeleeTwo::ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnReplicateImpact = NULL;

	if ( ! pFnReplicateImpact )
		pFnReplicateImpact = (UFunction*) UObject::GObjObjects()->Data[ 135855 ];

	USFXCustomAction_TurianPistolMeleeTwo_execReplicateImpact_Parms ReplicateImpact_Parms;
	ReplicateImpact_Parms.Target = Target;
	ReplicateImpact_Parms.ImpactCount = ImpactCount;
	ReplicateImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ReplicateImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ReplicateImpact_Parms.HitNormal, &HitNormal, 0xC );
	ReplicateImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnReplicateImpact, &ReplicateImpact_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StopCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeTwo::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135854 ];

	USFXCustomAction_TurianPistolMeleeTwo_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.EndAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeTwo::EndAction ( )
{
	static UFunction* pFnEndAction = NULL;

	if ( ! pFnEndAction )
		pFnEndAction = (UFunction*) UObject::GObjObjects()->Data[ 135853 ];

	USFXCustomAction_TurianPistolMeleeTwo_execEndAction_Parms EndAction_Parms;

	this->ProcessEvent ( pFnEndAction, &EndAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.HeavyMelee
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeTwo::HeavyMelee ( )
{
	static UFunction* pFnHeavyMelee = NULL;

	if ( ! pFnHeavyMelee )
		pFnHeavyMelee = (UFunction*) UObject::GObjObjects()->Data[ 135851 ];

	USFXCustomAction_TurianPistolMeleeTwo_execHeavyMelee_Parms HeavyMelee_Parms;

	this->ProcessEvent ( pFnHeavyMelee, &HeavyMelee_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.NoHeavyMelee
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeTwo::NoHeavyMelee ( )
{
	static UFunction* pFnNoHeavyMelee = NULL;

	if ( ! pFnNoHeavyMelee )
		pFnNoHeavyMelee = (UFunction*) UObject::GObjObjects()->Data[ 135850 ];

	USFXCustomAction_TurianPistolMeleeTwo_execNoHeavyMelee_Parms NoHeavyMelee_Parms;

	this->ProcessEvent ( pFnNoHeavyMelee, &NoHeavyMelee_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.DoPistolMeleeTwo
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeTwo::DoPistolMeleeTwo ( )
{
	static UFunction* pFnDoPistolMeleeTwo = NULL;

	if ( ! pFnDoPistolMeleeTwo )
		pFnDoPistolMeleeTwo = (UFunction*) UObject::GObjObjects()->Data[ 135848 ];

	USFXCustomAction_TurianPistolMeleeTwo_execDoPistolMeleeTwo_Parms DoPistolMeleeTwo_Parms;

	this->ProcessEvent ( pFnDoPistolMeleeTwo, &DoPistolMeleeTwo_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.PistolMeleeSecondary
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeTwo::PistolMeleeSecondary ( )
{
	static UFunction* pFnPistolMeleeSecondary = NULL;

	if ( ! pFnPistolMeleeSecondary )
		pFnPistolMeleeSecondary = (UFunction*) UObject::GObjObjects()->Data[ 135847 ];

	USFXCustomAction_TurianPistolMeleeTwo_execPistolMeleeSecondary_Parms PistolMeleeSecondary_Parms;

	this->ProcessEvent ( pFnPistolMeleeSecondary, &PistolMeleeSecondary_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeTwo::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135845 ];

	USFXCustomAction_TurianPistolMeleeTwo_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StopMove
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeThree::StopMove ( )
{
	static UFunction* pFnStopMove = NULL;

	if ( ! pFnStopMove )
		pFnStopMove = (UFunction*) UObject::GObjObjects()->Data[ 135875 ];

	USFXCustomAction_TurianPistolMeleeThree_execStopMove_Parms StopMove_Parms;

	this->ProcessEvent ( pFnStopMove, &StopMove_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.OnActorImpacted
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Resistance                     ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool USFXCustomAction_TurianPistolMeleeThree::OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnOnActorImpacted = NULL;

	if ( ! pFnOnActorImpacted )
		pFnOnActorImpacted = (UFunction*) UObject::GObjObjects()->Data[ 135862 ];

	USFXCustomAction_TurianPistolMeleeThree_execOnActorImpacted_Parms OnActorImpacted_Parms;
	OnActorImpacted_Parms.Resistance = Resistance;
	OnActorImpacted_Parms.oImpacted = oImpacted;
	OnActorImpacted_Parms.nPreviouslyImpacted = nPreviouslyImpacted;
	memcpy ( &OnActorImpacted_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &OnActorImpacted_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnOnActorImpacted, &OnActorImpacted_Parms, NULL );

	return OnActorImpacted_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.ReplicateImpact
// [0x00024002] 
// Parameters infos:
// class ABioPawn*                Target                         ( CPF_Parm )
// int                            ImpactCount                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bFirstTarget                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_OptionalParm | CPF_Parm )
// int                            CustomActionReactionType       ( CPF_OptionalParm | CPF_Parm )

void USFXCustomAction_TurianPistolMeleeThree::ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType )
{
	static UFunction* pFnReplicateImpact = NULL;

	if ( ! pFnReplicateImpact )
		pFnReplicateImpact = (UFunction*) UObject::GObjObjects()->Data[ 135855 ];

	USFXCustomAction_TurianPistolMeleeThree_execReplicateImpact_Parms ReplicateImpact_Parms;
	ReplicateImpact_Parms.Target = Target;
	ReplicateImpact_Parms.ImpactCount = ImpactCount;
	ReplicateImpact_Parms.bFirstTarget = bFirstTarget;
	memcpy ( &ReplicateImpact_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ReplicateImpact_Parms.HitNormal, &HitNormal, 0xC );
	ReplicateImpact_Parms.CustomActionReactionType = CustomActionReactionType;

	this->ProcessEvent ( pFnReplicateImpact, &ReplicateImpact_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StopCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeThree::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135854 ];

	USFXCustomAction_TurianPistolMeleeThree_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.EndAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeThree::EndAction ( )
{
	static UFunction* pFnEndAction = NULL;

	if ( ! pFnEndAction )
		pFnEndAction = (UFunction*) UObject::GObjObjects()->Data[ 135853 ];

	USFXCustomAction_TurianPistolMeleeThree_execEndAction_Parms EndAction_Parms;

	this->ProcessEvent ( pFnEndAction, &EndAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.HeavyMelee
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeThree::HeavyMelee ( )
{
	static UFunction* pFnHeavyMelee = NULL;

	if ( ! pFnHeavyMelee )
		pFnHeavyMelee = (UFunction*) UObject::GObjObjects()->Data[ 135851 ];

	USFXCustomAction_TurianPistolMeleeThree_execHeavyMelee_Parms HeavyMelee_Parms;

	this->ProcessEvent ( pFnHeavyMelee, &HeavyMelee_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.NoHeavyMelee
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeThree::NoHeavyMelee ( )
{
	static UFunction* pFnNoHeavyMelee = NULL;

	if ( ! pFnNoHeavyMelee )
		pFnNoHeavyMelee = (UFunction*) UObject::GObjObjects()->Data[ 135850 ];

	USFXCustomAction_TurianPistolMeleeThree_execNoHeavyMelee_Parms NoHeavyMelee_Parms;

	this->ProcessEvent ( pFnNoHeavyMelee, &NoHeavyMelee_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.DoPistolMeleeTwo
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeThree::DoPistolMeleeTwo ( )
{
	static UFunction* pFnDoPistolMeleeTwo = NULL;

	if ( ! pFnDoPistolMeleeTwo )
		pFnDoPistolMeleeTwo = (UFunction*) UObject::GObjObjects()->Data[ 135848 ];

	USFXCustomAction_TurianPistolMeleeThree_execDoPistolMeleeTwo_Parms DoPistolMeleeTwo_Parms;

	this->ProcessEvent ( pFnDoPistolMeleeTwo, &DoPistolMeleeTwo_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.PistolMeleeSecondary
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeThree::PistolMeleeSecondary ( )
{
	static UFunction* pFnPistolMeleeSecondary = NULL;

	if ( ! pFnPistolMeleeSecondary )
		pFnPistolMeleeSecondary = (UFunction*) UObject::GObjObjects()->Data[ 135847 ];

	USFXCustomAction_TurianPistolMeleeThree_execPistolMeleeSecondary_Parms PistolMeleeSecondary_Parms;

	this->ProcessEvent ( pFnPistolMeleeSecondary, &PistolMeleeSecondary_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StartCustomAction
// [0x00020002] 
// Parameters infos:

void USFXCustomAction_TurianPistolMeleeThree::StartCustomAction ( )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 135845 ];

	USFXCustomAction_TurianPistolMeleeThree_execStartCustomAction_Parms StartCustomAction_Parms;

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXGameEffect_StimPack.OnRemoved
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_StimPack::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = (UFunction*) UObject::GObjObjects()->Data[ 135979 ];

	USFXGameEffect_StimPack_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4.SFXGameEffect_StimPack.OnApplied
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_StimPack::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = (UFunction*) UObject::GObjObjects()->Data[ 135977 ];

	USFXGameEffect_StimPack_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.HealthFailsafe
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::HealthFailsafe ( )
{
	static UFunction* pFnHealthFailsafe = NULL;

	if ( ! pFnHealthFailsafe )
		pFnHealthFailsafe = (UFunction*) UObject::GObjObjects()->Data[ 112047 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execHealthFailsafe_Parms HealthFailsafe_Parms;

	this->ProcessEvent ( pFnHealthFailsafe, &HealthFailsafe_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.RagdollFailsafe
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::RagdollFailsafe ( )
{
	static UFunction* pFnRagdollFailsafe = NULL;

	if ( ! pFnRagdollFailsafe )
		pFnRagdollFailsafe = (UFunction*) UObject::GObjObjects()->Data[ 112045 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execRagdollFailsafe_Parms RagdollFailsafe_Parms;

	this->ProcessEvent ( pFnRagdollFailsafe, &RagdollFailsafe_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.ResetSyncMovementFailsafeInfo
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::ResetSyncMovementFailsafeInfo ( )
{
	static UFunction* pFnResetSyncMovementFailsafeInfo = NULL;

	if ( ! pFnResetSyncMovementFailsafeInfo )
		pFnResetSyncMovementFailsafeInfo = (UFunction*) UObject::GObjObjects()->Data[ 112046 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execResetSyncMovementFailsafeInfo_Parms ResetSyncMovementFailsafeInfo_Parms;

	this->ProcessEvent ( pFnResetSyncMovementFailsafeInfo, &ResetSyncMovementFailsafeInfo_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.ProcessSyncMovementFailsafe
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::ProcessSyncMovementFailsafe ( )
{
	static UFunction* pFnProcessSyncMovementFailsafe = NULL;

	if ( ! pFnProcessSyncMovementFailsafe )
		pFnProcessSyncMovementFailsafe = (UFunction*) UObject::GObjObjects()->Data[ 112059 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execProcessSyncMovementFailsafe_Parms ProcessSyncMovementFailsafe_Parms;

	this->ProcessEvent ( pFnProcessSyncMovementFailsafe, &ProcessSyncMovementFailsafe_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXPawn_PlayerMP_N7Soldier_Turian::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 112060 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.CanDoCustomAction
// [0x00024902] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            CAction                        ( CPF_Parm )
// class APawn*                   Sync                           ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bForced                        ( CPF_OptionalParm | CPF_Parm )
// int                            PowerCustomAction              ( CPF_OptionalParm | CPF_Parm )

bool ASFXPawn_PlayerMP_N7Soldier_Turian::eventCanDoCustomAction ( int CAction, class APawn* Sync, unsigned long bForced, int PowerCustomAction )
{
	static UFunction* pFnCanDoCustomAction = NULL;

	if ( ! pFnCanDoCustomAction )
		pFnCanDoCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 112039 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_eventCanDoCustomAction_Parms CanDoCustomAction_Parms;
	CanDoCustomAction_Parms.CAction = CAction;
	CanDoCustomAction_Parms.Sync = Sync;
	CanDoCustomAction_Parms.bForced = bForced;
	CanDoCustomAction_Parms.PowerCustomAction = PowerCustomAction;

	this->ProcessEvent ( pFnCanDoCustomAction, &CanDoCustomAction_Parms, NULL );

	return CanDoCustomAction_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.ShouldShowHUDGrenadeCounter
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXPawn_PlayerMP_N7Soldier_Turian::ShouldShowHUDGrenadeCounter ( )
{
	static UFunction* pFnShouldShowHUDGrenadeCounter = NULL;

	if ( ! pFnShouldShowHUDGrenadeCounter )
		pFnShouldShowHUDGrenadeCounter = (UFunction*) UObject::GObjObjects()->Data[ 112037 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execShouldShowHUDGrenadeCounter_Parms ShouldShowHUDGrenadeCounter_Parms;

	this->ProcessEvent ( pFnShouldShowHUDGrenadeCounter, &ShouldShowHUDGrenadeCounter_Parms, NULL );

	return ShouldShowHUDGrenadeCounter_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.UpdateGameEffects
// [0x00020100] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::UpdateGameEffects ( )
{
	static UFunction* pFnUpdateGameEffects = NULL;

	if ( ! pFnUpdateGameEffects )
		pFnUpdateGameEffects = (UFunction*) UObject::GObjObjects()->Data[ 112036 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execUpdateGameEffects_Parms UpdateGameEffects_Parms;

	this->ProcessEvent ( pFnUpdateGameEffects, &UpdateGameEffects_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.GetUIAppearanceTag
// [0x00020002] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName ASFXPawn_PlayerMP_N7Soldier_Turian::GetUIAppearanceTag ( )
{
	static UFunction* pFnGetUIAppearanceTag = NULL;

	if ( ! pFnGetUIAppearanceTag )
		pFnGetUIAppearanceTag = (UFunction*) UObject::GObjObjects()->Data[ 112034 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execGetUIAppearanceTag_Parms GetUIAppearanceTag_Parms;

	this->ProcessEvent ( pFnGetUIAppearanceTag, &GetUIAppearanceTag_Parms, NULL );

	return GetUIAppearanceTag_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.Destroyed
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 112027 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASFXPawn_PlayerMP_N7Soldier_Turian::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 112020 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.SetExecutioner
// [0x00020002] 
// Parameters infos:
// class APawn*                   Killer                         ( CPF_Parm )

void ASFXPawn_PlayerMP_N7Soldier_Turian::SetExecutioner ( class APawn* Killer )
{
	static UFunction* pFnSetExecutioner = NULL;

	if ( ! pFnSetExecutioner )
		pFnSetExecutioner = (UFunction*) UObject::GObjObjects()->Data[ 112018 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execSetExecutioner_Parms SetExecutioner_Parms;
	SetExecutioner_Parms.Killer = Killer;

	this->ProcessEvent ( pFnSetExecutioner, &SetExecutioner_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.AttemptKillingBlow
// [0x00020002] 
// Parameters infos:
// class APawn*                   Killer                         ( CPF_Parm )

void ASFXPawn_PlayerMP_N7Soldier_Turian::AttemptKillingBlow ( class APawn* Killer )
{
	static UFunction* pFnAttemptKillingBlow = NULL;

	if ( ! pFnAttemptKillingBlow )
		pFnAttemptKillingBlow = (UFunction*) UObject::GObjObjects()->Data[ 112015 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execAttemptKillingBlow_Parms AttemptKillingBlow_Parms;
	AttemptKillingBlow_Parms.Killer = Killer;

	this->ProcessEvent ( pFnAttemptKillingBlow, &AttemptKillingBlow_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.UpdateMappedPowerDisplay
// [0x00020002] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::UpdateMappedPowerDisplay ( )
{
	static UFunction* pFnUpdateMappedPowerDisplay = NULL;

	if ( ! pFnUpdateMappedPowerDisplay )
		pFnUpdateMappedPowerDisplay = (UFunction*) UObject::GObjObjects()->Data[ 112011 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execUpdateMappedPowerDisplay_Parms UpdateMappedPowerDisplay_Parms;

	this->ProcessEvent ( pFnUpdateMappedPowerDisplay, &UpdateMappedPowerDisplay_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.CanPlayDeathEffect
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXPawn_PlayerMP_N7Soldier_Turian::CanPlayDeathEffect ( )
{
	static UFunction* pFnCanPlayDeathEffect = NULL;

	if ( ! pFnCanPlayDeathEffect )
		pFnCanPlayDeathEffect = (UFunction*) UObject::GObjObjects()->Data[ 112009 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execCanPlayDeathEffect_Parms CanPlayDeathEffect_Parms;

	this->ProcessEvent ( pFnCanPlayDeathEffect, &CanPlayDeathEffect_Parms, NULL );

	return CanPlayDeathEffect_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.UseReviveConsumablePower
// [0x00020002] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::UseReviveConsumablePower ( )
{
	static UFunction* pFnUseReviveConsumablePower = NULL;

	if ( ! pFnUseReviveConsumablePower )
		pFnUseReviveConsumablePower = (UFunction*) UObject::GObjObjects()->Data[ 112006 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execUseReviveConsumablePower_Parms UseReviveConsumablePower_Parms;

	this->ProcessEvent ( pFnUseReviveConsumablePower, &UseReviveConsumablePower_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.AutoMapPC
// [0x00020002] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::AutoMapPC ( )
{
	static UFunction* pFnAutoMapPC = NULL;

	if ( ! pFnAutoMapPC )
		pFnAutoMapPC = (UFunction*) UObject::GObjObjects()->Data[ 111997 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execAutoMapPC_Parms AutoMapPC_Parms;

	this->ProcessEvent ( pFnAutoMapPC, &AutoMapPC_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.AutoMapXbox
// [0x00020002] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::AutoMapXbox ( )
{
	static UFunction* pFnAutoMapXbox = NULL;

	if ( ! pFnAutoMapXbox )
		pFnAutoMapXbox = (UFunction*) UObject::GObjObjects()->Data[ 111995 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execAutoMapXbox_Parms AutoMapXbox_Parms;

	this->ProcessEvent ( pFnAutoMapXbox, &AutoMapXbox_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.ShouldTossWeapon
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFXWeapon*              ChkWeapon                      ( CPF_Parm )
// class ASFXWeapon*              NewWeapon                      ( CPF_Parm )

bool ASFXPawn_PlayerMP_N7Soldier_Turian::ShouldTossWeapon ( class ASFXWeapon* ChkWeapon, class ASFXWeapon* NewWeapon )
{
	static UFunction* pFnShouldTossWeapon = NULL;

	if ( ! pFnShouldTossWeapon )
		pFnShouldTossWeapon = (UFunction*) UObject::GObjObjects()->Data[ 111991 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execShouldTossWeapon_Parms ShouldTossWeapon_Parms;
	ShouldTossWeapon_Parms.ChkWeapon = ChkWeapon;
	ShouldTossWeapon_Parms.NewWeapon = NewWeapon;

	this->ProcessEvent ( pFnShouldTossWeapon, &ShouldTossWeapon_Parms, NULL );

	return ShouldTossWeapon_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.InCombat
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXPawn_PlayerMP_N7Soldier_Turian::InCombat ( )
{
	static UFunction* pFnInCombat = NULL;

	if ( ! pFnInCombat )
		pFnInCombat = (UFunction*) UObject::GObjObjects()->Data[ 111989 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execInCombat_Parms InCombat_Parms;

	this->ProcessEvent ( pFnInCombat, &InCombat_Parms, NULL );

	return InCombat_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ASFXPawn_PlayerMP_N7Soldier_Turian::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 111983 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.PossessedBy
// [0x00020002] 
// Parameters infos:
// class AController*             C                              ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ASFXPawn_PlayerMP_N7Soldier_Turian::PossessedBy ( class AController* C, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 111980 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execPossessedBy_Parms PossessedBy_Parms;
	PossessedBy_Parms.C = C;
	PossessedBy_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.LoadWeaponModData
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::LoadWeaponModData ( )
{
	static UFunction* pFnLoadWeaponModData = NULL;

	if ( ! pFnLoadWeaponModData )
		pFnLoadWeaponModData = (UFunction*) UObject::GObjObjects()->Data[ 111970 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execLoadWeaponModData_Parms LoadWeaponModData_Parms;

	this->ProcessEvent ( pFnLoadWeaponModData, &LoadWeaponModData_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.LoadPowerData
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::LoadPowerData ( )
{
	static UFunction* pFnLoadPowerData = NULL;

	if ( ! pFnLoadPowerData )
		pFnLoadPowerData = (UFunction*) UObject::GObjObjects()->Data[ 111955 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execLoadPowerData_Parms LoadPowerData_Parms;

	this->ProcessEvent ( pFnLoadPowerData, &LoadPowerData_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.IsTestFrameworkSetupComplete
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXPawn_PlayerMP_N7Soldier_Turian::IsTestFrameworkSetupComplete ( )
{
	static UFunction* pFnIsTestFrameworkSetupComplete = NULL;

	if ( ! pFnIsTestFrameworkSetupComplete )
		pFnIsTestFrameworkSetupComplete = (UFunction*) UObject::GObjObjects()->Data[ 111953 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execIsTestFrameworkSetupComplete_Parms IsTestFrameworkSetupComplete_Parms;

	this->ProcessEvent ( pFnIsTestFrameworkSetupComplete, &IsTestFrameworkSetupComplete_Parms, NULL );

	return IsTestFrameworkSetupComplete_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.LoadWeapons
// [0x00020002] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::LoadWeapons ( )
{
	static UFunction* pFnLoadWeapons = NULL;

	if ( ! pFnLoadWeapons )
		pFnLoadWeapons = (UFunction*) UObject::GObjObjects()->Data[ 111945 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execLoadWeapons_Parms LoadWeapons_Parms;

	this->ProcessEvent ( pFnLoadWeapons, &LoadWeapons_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.CreateWeapons
// [0x00024002] 
// Parameters infos:
// class USFXLoadoutData*         ChkLoadout                     ( CPF_Parm )
// unsigned long                  bForceFromEngineLoadout        ( CPF_OptionalParm | CPF_Parm )

void ASFXPawn_PlayerMP_N7Soldier_Turian::CreateWeapons ( class USFXLoadoutData* ChkLoadout, unsigned long bForceFromEngineLoadout )
{
	static UFunction* pFnCreateWeapons = NULL;

	if ( ! pFnCreateWeapons )
		pFnCreateWeapons = (UFunction*) UObject::GObjObjects()->Data[ 111942 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execCreateWeapons_Parms CreateWeapons_Parms;
	CreateWeapons_Parms.ChkLoadout = ChkLoadout;
	CreateWeapons_Parms.bForceFromEngineLoadout = bForceFromEngineLoadout;

	this->ProcessEvent ( pFnCreateWeapons, &CreateWeapons_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.GetFullName
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ASFXPawn_PlayerMP_N7Soldier_Turian::GetFullName ( )
{
	static UFunction* pFnGetFullName = NULL;

	if ( ! pFnGetFullName )
		pFnGetFullName = (UFunction*) UObject::GObjObjects()->Data[ 111940 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execGetFullName_Parms GetFullName_Parms;

	this->ProcessEvent ( pFnGetFullName, &GetFullName_Parms, NULL );

	return GetFullName_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.DeferredSetRichPresence
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::DeferredSetRichPresence ( )
{
	static UFunction* pFnDeferredSetRichPresence = NULL;

	if ( ! pFnDeferredSetRichPresence )
		pFnDeferredSetRichPresence = (UFunction*) UObject::GObjObjects()->Data[ 111939 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execDeferredSetRichPresence_Parms DeferredSetRichPresence_Parms;

	this->ProcessEvent ( pFnDeferredSetRichPresence, &DeferredSetRichPresence_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.StopLoadingMovie
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::StopLoadingMovie ( )
{
	static UFunction* pFnStopLoadingMovie = NULL;

	if ( ! pFnStopLoadingMovie )
		pFnStopLoadingMovie = (UFunction*) UObject::GObjObjects()->Data[ 111937 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execStopLoadingMovie_Parms StopLoadingMovie_Parms;

	this->ProcessEvent ( pFnStopLoadingMovie, &StopLoadingMovie_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.DeferredPostBeginPlay
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::DeferredPostBeginPlay ( )
{
	static UFunction* pFnDeferredPostBeginPlay = NULL;

	if ( ! pFnDeferredPostBeginPlay )
		pFnDeferredPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 111904 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execDeferredPostBeginPlay_Parms DeferredPostBeginPlay_Parms;

	this->ProcessEvent ( pFnDeferredPostBeginPlay, &DeferredPostBeginPlay_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 111902 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.ServerPermaDeath
// [0x002200C2] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::ServerPermaDeath ( )
{
	static UFunction* pFnServerPermaDeath = NULL;

	if ( ! pFnServerPermaDeath )
		pFnServerPermaDeath = (UFunction*) UObject::GObjObjects()->Data[ 111899 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execServerPermaDeath_Parms ServerPermaDeath_Parms;

	this->ProcessEvent ( pFnServerPermaDeath, &ServerPermaDeath_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.PermaDeath
// [0x00020002] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::PermaDeath ( )
{
	static UFunction* pFnPermaDeath = NULL;

	if ( ! pFnPermaDeath )
		pFnPermaDeath = (UFunction*) UObject::GObjObjects()->Data[ 111897 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execPermaDeath_Parms PermaDeath_Parms;

	this->ProcessEvent ( pFnPermaDeath, &PermaDeath_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.StartSpectatorCam
// [0x00020002] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::StartSpectatorCam ( )
{
	static UFunction* pFnStartSpectatorCam = NULL;

	if ( ! pFnStartSpectatorCam )
		pFnStartSpectatorCam = (UFunction*) UObject::GObjObjects()->Data[ 111895 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execStartSpectatorCam_Parms StartSpectatorCam_Parms;

	this->ProcessEvent ( pFnStartSpectatorCam, &StartSpectatorCam_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.PermaDeadChanged
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::PermaDeadChanged ( )
{
	static UFunction* pFnPermaDeadChanged = NULL;

	if ( ! pFnPermaDeadChanged )
		pFnPermaDeadChanged = (UFunction*) UObject::GObjObjects()->Data[ 111891 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execPermaDeadChanged_Parms PermaDeadChanged_Parms;

	this->ProcessEvent ( pFnPermaDeadChanged, &PermaDeadChanged_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.Resurrect
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          PercentOfHealthRegained        ( CPF_Parm )
// unsigned long                  bIsInstantaneous               ( CPF_Parm )

bool ASFXPawn_PlayerMP_N7Soldier_Turian::eventResurrect ( float PercentOfHealthRegained, unsigned long bIsInstantaneous )
{
	static UFunction* pFnResurrect = NULL;

	if ( ! pFnResurrect )
		pFnResurrect = (UFunction*) UObject::GObjObjects()->Data[ 111887 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_eventResurrect_Parms Resurrect_Parms;
	Resurrect_Parms.PercentOfHealthRegained = PercentOfHealthRegained;
	Resurrect_Parms.bIsInstantaneous = bIsInstantaneous;

	this->ProcessEvent ( pFnResurrect, &Resurrect_Parms, NULL );

	return Resurrect_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.PreClientTravel
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::PreClientTravel ( )
{
	static UFunction* pFnPreClientTravel = NULL;

	if ( ! pFnPreClientTravel )
		pFnPreClientTravel = (UFunction*) UObject::GObjObjects()->Data[ 111884 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execPreClientTravel_Parms PreClientTravel_Parms;

	this->ProcessEvent ( pFnPreClientTravel, &PreClientTravel_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.IsReadyForExecution
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class Asfxpawn*                Killer                         ( CPF_Parm )

bool ASFXPawn_PlayerMP_N7Soldier_Turian::IsReadyForExecution ( class Asfxpawn* Killer )
{
	static UFunction* pFnIsReadyForExecution = NULL;

	if ( ! pFnIsReadyForExecution )
		pFnIsReadyForExecution = (UFunction*) UObject::GObjObjects()->Data[ 111880 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execIsReadyForExecution_Parms IsReadyForExecution_Parms;
	IsReadyForExecution_Parms.Killer = Killer;

	this->ProcessEvent ( pFnIsReadyForExecution, &IsReadyForExecution_Parms, NULL );

	return IsReadyForExecution_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxpawn_playermp.IsDeadUpdated
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::IsDeadUpdated ( )
{
	static UFunction* pFnIsDeadUpdated = NULL;

	if ( ! pFnIsDeadUpdated )
		pFnIsDeadUpdated = (UFunction*) UObject::GObjObjects()->Data[ 111850 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execIsDeadUpdated_Parms IsDeadUpdated_Parms;

	this->ProcessEvent ( pFnIsDeadUpdated, &IsDeadUpdated_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.StartRevive
// [0x00020102] 
// Parameters infos:
// class ASFXPawn_PlayerParty*    TargetPawn                     ( CPF_Parm )

void ASFXPawn_PlayerMP_N7Soldier_Turian::StartRevive ( class ASFXPawn_PlayerParty* TargetPawn )
{
	static UFunction* pFnStartRevive = NULL;

	if ( ! pFnStartRevive )
		pFnStartRevive = (UFunction*) UObject::GObjObjects()->Data[ 111848 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execStartRevive_Parms StartRevive_Parms;
	StartRevive_Parms.TargetPawn = TargetPawn;

	this->ProcessEvent ( pFnStartRevive, &StartRevive_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.FinalizeProcessFellOutOfWorld
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::FinalizeProcessFellOutOfWorld ( )
{
	static UFunction* pFnFinalizeProcessFellOutOfWorld = NULL;

	if ( ! pFnFinalizeProcessFellOutOfWorld )
		pFnFinalizeProcessFellOutOfWorld = (UFunction*) UObject::GObjObjects()->Data[ 111846 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execFinalizeProcessFellOutOfWorld_Parms FinalizeProcessFellOutOfWorld_Parms;

	this->ProcessEvent ( pFnFinalizeProcessFellOutOfWorld, &FinalizeProcessFellOutOfWorld_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.ServerFellOutOfWorldImpl
// [0x002200C2] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::ServerFellOutOfWorldImpl ( )
{
	static UFunction* pFnServerFellOutOfWorldImpl = NULL;

	if ( ! pFnServerFellOutOfWorldImpl )
		pFnServerFellOutOfWorldImpl = (UFunction*) UObject::GObjObjects()->Data[ 111847 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execServerFellOutOfWorldImpl_Parms ServerFellOutOfWorldImpl_Parms;

	this->ProcessEvent ( pFnServerFellOutOfWorldImpl, &ServerFellOutOfWorldImpl_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.FellOutOfWorldImpl
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::eventFellOutOfWorldImpl ( )
{
	static UFunction* pFnFellOutOfWorldImpl = NULL;

	if ( ! pFnFellOutOfWorldImpl )
		pFnFellOutOfWorldImpl = (UFunction*) UObject::GObjObjects()->Data[ 111844 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_eventFellOutOfWorldImpl_Parms FellOutOfWorldImpl_Parms;

	this->ProcessEvent ( pFnFellOutOfWorldImpl, &FellOutOfWorldImpl_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.BioBaseRemovedFromWorld
// [0x00020100] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::BioBaseRemovedFromWorld ( )
{
	static UFunction* pFnBioBaseRemovedFromWorld = NULL;

	if ( ! pFnBioBaseRemovedFromWorld )
		pFnBioBaseRemovedFromWorld = (UFunction*) UObject::GObjObjects()->Data[ 111843 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execBioBaseRemovedFromWorld_Parms BioBaseRemovedFromWorld_Parms;

	this->ProcessEvent ( pFnBioBaseRemovedFromWorld, &BioBaseRemovedFromWorld_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.OutsideWorldBounds
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::OutsideWorldBounds ( )
{
	static UFunction* pFnOutsideWorldBounds = NULL;

	if ( ! pFnOutsideWorldBounds )
		pFnOutsideWorldBounds = (UFunction*) UObject::GObjObjects()->Data[ 111842 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execOutsideWorldBounds_Parms OutsideWorldBounds_Parms;

	this->ProcessEvent ( pFnOutsideWorldBounds, &OutsideWorldBounds_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.FellOutOfWorld
// [0x00020102] 
// Parameters infos:
// class UClass*                  dmgType                        ( CPF_Parm )

void ASFXPawn_PlayerMP_N7Soldier_Turian::FellOutOfWorld ( class UClass* dmgType )
{
	static UFunction* pFnFellOutOfWorld = NULL;

	if ( ! pFnFellOutOfWorld )
		pFnFellOutOfWorld = (UFunction*) UObject::GObjObjects()->Data[ 111840 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execFellOutOfWorld_Parms FellOutOfWorld_Parms;
	FellOutOfWorld_Parms.dmgType = dmgType;

	this->ProcessEvent ( pFnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.ApplyCustomizationToActor
// [0x00024002] 
// Parameters infos:
// class AActor*                  InTarget                       ( CPF_Parm )
// class USFXCustomizationInstance* InSettings                     ( CPF_OptionalParm | CPF_Parm )
// int                            UIWorldConfigFlags             ( CPF_OptionalParm | CPF_Parm )

void ASFXPawn_PlayerMP_N7Soldier_Turian::ApplyCustomizationToActor ( class AActor* InTarget, class USFXCustomizationInstance* InSettings, int UIWorldConfigFlags )
{
	static UFunction* pFnApplyCustomizationToActor = NULL;

	if ( ! pFnApplyCustomizationToActor )
		pFnApplyCustomizationToActor = (UFunction*) UObject::GObjObjects()->Data[ 111836 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execApplyCustomizationToActor_Parms ApplyCustomizationToActor_Parms;
	ApplyCustomizationToActor_Parms.InTarget = InTarget;
	ApplyCustomizationToActor_Parms.InSettings = InSettings;
	ApplyCustomizationToActor_Parms.UIWorldConfigFlags = UIWorldConfigFlags;

	this->ProcessEvent ( pFnApplyCustomizationToActor, &ApplyCustomizationToActor_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.GetMPAppearanceVariables
// [0x00420102] 
// Parameters infos:
// int                            Tint1                          ( CPF_Parm | CPF_OutParm )
// int                            Tint2                          ( CPF_Parm | CPF_OutParm )
// int                            Pattern                        ( CPF_Parm | CPF_OutParm )
// int                            PatternColor                   ( CPF_Parm | CPF_OutParm )
// int                            Phong                          ( CPF_Parm | CPF_OutParm )
// int                            Emissive                       ( CPF_Parm | CPF_OutParm )
// int                            SkinTone                       ( CPF_Parm | CPF_OutParm )

void ASFXPawn_PlayerMP_N7Soldier_Turian::GetMPAppearanceVariables ( int* Tint1, int* Tint2, int* Pattern, int* PatternColor, int* Phong, int* Emissive, int* SkinTone )
{
	static UFunction* pFnGetMPAppearanceVariables = NULL;

	if ( ! pFnGetMPAppearanceVariables )
		pFnGetMPAppearanceVariables = (UFunction*) UObject::GObjObjects()->Data[ 111828 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execGetMPAppearanceVariables_Parms GetMPAppearanceVariables_Parms;

	this->ProcessEvent ( pFnGetMPAppearanceVariables, &GetMPAppearanceVariables_Parms, NULL );

	if ( Tint1 )
		*Tint1 = GetMPAppearanceVariables_Parms.Tint1;

	if ( Tint2 )
		*Tint2 = GetMPAppearanceVariables_Parms.Tint2;

	if ( Pattern )
		*Pattern = GetMPAppearanceVariables_Parms.Pattern;

	if ( PatternColor )
		*PatternColor = GetMPAppearanceVariables_Parms.PatternColor;

	if ( Phong )
		*Phong = GetMPAppearanceVariables_Parms.Phong;

	if ( Emissive )
		*Emissive = GetMPAppearanceVariables_Parms.Emissive;

	if ( SkinTone )
		*SkinTone = GetMPAppearanceVariables_Parms.SkinTone;
};

// Function sfxgamempcontent.sfxpawn_playermp.SetMPAppearanceVariables
// [0x00020102] 
// Parameters infos:
// int                            Tint1                          ( CPF_Parm )
// int                            Tint2                          ( CPF_Parm )
// int                            Pattern                        ( CPF_Parm )
// int                            PatternColor                   ( CPF_Parm )
// int                            Phong                          ( CPF_Parm )
// int                            Emissive                       ( CPF_Parm )
// int                            SkinTone                       ( CPF_Parm )

void ASFXPawn_PlayerMP_N7Soldier_Turian::SetMPAppearanceVariables ( int Tint1, int Tint2, int Pattern, int PatternColor, int Phong, int Emissive, int SkinTone )
{
	static UFunction* pFnSetMPAppearanceVariables = NULL;

	if ( ! pFnSetMPAppearanceVariables )
		pFnSetMPAppearanceVariables = (UFunction*) UObject::GObjObjects()->Data[ 111820 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execSetMPAppearanceVariables_Parms SetMPAppearanceVariables_Parms;
	SetMPAppearanceVariables_Parms.Tint1 = Tint1;
	SetMPAppearanceVariables_Parms.Tint2 = Tint2;
	SetMPAppearanceVariables_Parms.Pattern = Pattern;
	SetMPAppearanceVariables_Parms.PatternColor = PatternColor;
	SetMPAppearanceVariables_Parms.Phong = Phong;
	SetMPAppearanceVariables_Parms.Emissive = Emissive;
	SetMPAppearanceVariables_Parms.SkinTone = SkinTone;

	this->ProcessEvent ( pFnSetMPAppearanceVariables, &SetMPAppearanceVariables_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.UpdateAppearance
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::UpdateAppearance ( )
{
	static UFunction* pFnUpdateAppearance = NULL;

	if ( ! pFnUpdateAppearance )
		pFnUpdateAppearance = (UFunction*) UObject::GObjObjects()->Data[ 111819 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execUpdateAppearance_Parms UpdateAppearance_Parms;

	this->ProcessEvent ( pFnUpdateAppearance, &UpdateAppearance_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.CopyPawnAppearance
// [0x00020102] 
// Parameters infos:
// class ABioPawn*                SourcePawn                     ( CPF_Parm )

void ASFXPawn_PlayerMP_N7Soldier_Turian::CopyPawnAppearance ( class ABioPawn* SourcePawn )
{
	static UFunction* pFnCopyPawnAppearance = NULL;

	if ( ! pFnCopyPawnAppearance )
		pFnCopyPawnAppearance = (UFunction*) UObject::GObjObjects()->Data[ 111809 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execCopyPawnAppearance_Parms CopyPawnAppearance_Parms;
	CopyPawnAppearance_Parms.SourcePawn = SourcePawn;

	this->ProcessEvent ( pFnCopyPawnAppearance, &CopyPawnAppearance_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.CheckEnterCombat
// [0x00020000] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::CheckEnterCombat ( )
{
	static UFunction* pFnCheckEnterCombat = NULL;

	if ( ! pFnCheckEnterCombat )
		pFnCheckEnterCombat = (UFunction*) UObject::GObjObjects()->Data[ 111808 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execCheckEnterCombat_Parms CheckEnterCombat_Parms;

	this->ProcessEvent ( pFnCheckEnterCombat, &CheckEnterCombat_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.PlayerRevivedMessage
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::PlayerRevivedMessage ( )
{
	static UFunction* pFnPlayerRevivedMessage = NULL;

	if ( ! pFnPlayerRevivedMessage )
		pFnPlayerRevivedMessage = (UFunction*) UObject::GObjObjects()->Data[ 111805 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execPlayerRevivedMessage_Parms PlayerRevivedMessage_Parms;

	this->ProcessEvent ( pFnPlayerRevivedMessage, &PlayerRevivedMessage_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.PlayerKilledMessage
// [0x00020102] 
// Parameters infos:

void ASFXPawn_PlayerMP_N7Soldier_Turian::PlayerKilledMessage ( )
{
	static UFunction* pFnPlayerKilledMessage = NULL;

	if ( ! pFnPlayerKilledMessage )
		pFnPlayerKilledMessage = (UFunction*) UObject::GObjObjects()->Data[ 111800 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execPlayerKilledMessage_Parms PlayerKilledMessage_Parms;

	this->ProcessEvent ( pFnPlayerKilledMessage, &PlayerKilledMessage_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ASFXPawn_PlayerMP_N7Soldier_Turian::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 111798 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function sfxgamempcontent.sfxpawn_playermp.GetActorGameName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ASFXPawn_PlayerMP_N7Soldier_Turian::GetActorGameName ( )
{
	static UFunction* pFnGetActorGameName = NULL;

	if ( ! pFnGetActorGameName )
		pFnGetActorGameName = (UFunction*) UObject::GObjObjects()->Data[ 111795 ];

	ASFXPawn_PlayerMP_N7Soldier_Turian_execGetActorGameName_Parms GetActorGameName_Parms;

	this->ProcessEvent ( pFnGetActorGameName, &GetActorGameName_Parms, NULL );

	return GetActorGameName_Parms.ReturnValue;
};

// Function SFXGame.SFXProjectile.PrecacheVFX
// [0x00022002] 
// Parameters infos:
// class ASFXObjectPool*          ObjectPool                     ( CPF_Parm )
// class URvrClientEffectManager* ClientEffects                  ( CPF_Parm )

void ASFXProjectile_PowerCustomActionMP_JetPack::PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects )
{
	static UFunction* pFnPrecacheVFX = NULL;

	if ( ! pFnPrecacheVFX )
		pFnPrecacheVFX = (UFunction*) UObject::GObjObjects()->Data[ 83104 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execPrecacheVFX_Parms PrecacheVFX_Parms;
	PrecacheVFX_Parms.ObjectPool = ObjectPool;
	PrecacheVFX_Parms.ClientEffects = ClientEffects;

	this->ProcessEvent ( pFnPrecacheVFX, &PrecacheVFX_Parms, NULL );
};

// Function SFXGame.SFXProjectile.IsTargettedProjectile
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXProjectile_PowerCustomActionMP_JetPack::IsTargettedProjectile ( )
{
	static UFunction* pFnIsTargettedProjectile = NULL;

	if ( ! pFnIsTargettedProjectile )
		pFnIsTargettedProjectile = (UFunction*) UObject::GObjObjects()->Data[ 83102 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execIsTargettedProjectile_Parms IsTargettedProjectile_Parms;

	this->ProcessEvent ( pFnIsTargettedProjectile, &IsTargettedProjectile_Parms, NULL );

	return IsTargettedProjectile_Parms.ReturnValue;
};

// Function SFXGame.SFXProjectile.Destroyed
// [0x00020102] 
// Parameters infos:

void ASFXProjectile_PowerCustomActionMP_JetPack::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 83101 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function SFXGame.SFXProjectile.Tick_Prediction
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXProjectile_PowerCustomActionMP_JetPack::Tick_Prediction ( float DeltaTime )
{
	static UFunction* pFnTick_Prediction = NULL;

	if ( ! pFnTick_Prediction )
		pFnTick_Prediction = (UFunction*) UObject::GObjObjects()->Data[ 83095 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execTick_Prediction_Parms Tick_Prediction_Parms;
	Tick_Prediction_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick_Prediction, &Tick_Prediction_Parms, NULL );
};

// Function SFXGame.SFXProjectile.SetPredictionTarget
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class ASFXProjectile*          NewTargetProjectile            ( CPF_Parm )

void ASFXProjectile_PowerCustomActionMP_JetPack::SetPredictionTarget ( class ASFXProjectile* NewTargetProjectile )
{
	static UFunction* pFnSetPredictionTarget = NULL;

	if ( ! pFnSetPredictionTarget )
		pFnSetPredictionTarget = (UFunction*) UObject::GObjObjects()->Data[ 75444 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execSetPredictionTarget_Parms SetPredictionTarget_Parms;
	SetPredictionTarget_Parms.NewTargetProjectile = NewTargetProjectile;

	this->ProcessEvent ( pFnSetPredictionTarget, &SetPredictionTarget_Parms, NULL );
};

// Function SFXGame.SFXProjectile.SetPrediction
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  bIsATarget                     ( CPF_Parm )

void ASFXProjectile_PowerCustomActionMP_JetPack::SetPrediction ( unsigned long Active, unsigned long bIsATarget )
{
	static UFunction* pFnSetPrediction = NULL;

	if ( ! pFnSetPrediction )
		pFnSetPrediction = (UFunction*) UObject::GObjObjects()->Data[ 75435 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execSetPrediction_Parms SetPrediction_Parms;
	SetPrediction_Parms.Active = Active;
	SetPrediction_Parms.bIsATarget = bIsATarget;

	this->ProcessEvent ( pFnSetPrediction, &SetPrediction_Parms, NULL );
};

// Function SFXGame.SFXProjectile.SetPredictedInitialSpeed
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void ASFXProjectile_PowerCustomActionMP_JetPack::SetPredictedInitialSpeed ( )
{
	static UFunction* pFnSetPredictedInitialSpeed = NULL;

	if ( ! pFnSetPredictedInitialSpeed )
		pFnSetPredictedInitialSpeed = (UFunction*) UObject::GObjObjects()->Data[ 83024 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execSetPredictedInitialSpeed_Parms SetPredictedInitialSpeed_Parms;

	this->ProcessEvent ( pFnSetPredictedInitialSpeed, &SetPredictedInitialSpeed_Parms, NULL );
};

// Function SFXGame.SFXProjectile.Reset
// [0x00020102] 
// Parameters infos:

void ASFXProjectile_PowerCustomActionMP_JetPack::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 83090 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function SFXGame.SFXProjectile.ReplicatedExplosionUpdated
// [0x00020102] 
// Parameters infos:

void ASFXProjectile_PowerCustomActionMP_JetPack::ReplicatedExplosionUpdated ( )
{
	static UFunction* pFnReplicatedExplosionUpdated = NULL;

	if ( ! pFnReplicatedExplosionUpdated )
		pFnReplicatedExplosionUpdated = (UFunction*) UObject::GObjObjects()->Data[ 83089 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execReplicatedExplosionUpdated_Parms ReplicatedExplosionUpdated_Parms;

	this->ProcessEvent ( pFnReplicatedExplosionUpdated, &ReplicatedExplosionUpdated_Parms, NULL );
};

// Function SFXGame.SFXProjectile.ReplicatedInitUpdated
// [0x00020102] 
// Parameters infos:

void ASFXProjectile_PowerCustomActionMP_JetPack::ReplicatedInitUpdated ( )
{
	static UFunction* pFnReplicatedInitUpdated = NULL;

	if ( ! pFnReplicatedInitUpdated )
		pFnReplicatedInitUpdated = (UFunction*) UObject::GObjObjects()->Data[ 83086 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execReplicatedInitUpdated_Parms ReplicatedInitUpdated_Parms;

	this->ProcessEvent ( pFnReplicatedInitUpdated, &ReplicatedInitUpdated_Parms, NULL );
};

// Function SFXGame.SFXProjectile.ReplicateExplode
// [0x00020002] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASFXProjectile_PowerCustomActionMP_JetPack::ReplicateExplode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnReplicateExplode = NULL;

	if ( ! pFnReplicateExplode )
		pFnReplicateExplode = (UFunction*) UObject::GObjObjects()->Data[ 83081 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execReplicateExplode_Parms ReplicateExplode_Parms;
	memcpy ( &ReplicateExplode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ReplicateExplode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnReplicateExplode, &ReplicateExplode_Parms, NULL );
};

// Function SFXGame.SFXProjectile.ReplicateInit
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void ASFXProjectile_PowerCustomActionMP_JetPack::ReplicateInit ( struct FVector Direction )
{
	static UFunction* pFnReplicateInit = NULL;

	if ( ! pFnReplicateInit )
		pFnReplicateInit = (UFunction*) UObject::GObjObjects()->Data[ 83078 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execReplicateInit_Parms ReplicateInit_Parms;
	memcpy ( &ReplicateInit_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnReplicateInit, &ReplicateInit_Parms, NULL );
};

// Function SFXGame.SFXProjectile.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ASFXProjectile_PowerCustomActionMP_JetPack::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 83075 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function SFXGame.SFXProjectile.SpawnImpactEffect
// [0x00020100] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASFXProjectile_PowerCustomActionMP_JetPack::SpawnImpactEffect ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnImpactEffect = NULL;

	if ( ! pFnSpawnImpactEffect )
		pFnSpawnImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 83072 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execSpawnImpactEffect_Parms SpawnImpactEffect_Parms;
	memcpy ( &SpawnImpactEffect_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnImpactEffect_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnImpactEffect, &SpawnImpactEffect_Parms, NULL );
};

// Function SFXGame.SFXProjectile.GetMomentum
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ASFXProjectile_PowerCustomActionMP_JetPack::GetMomentum ( )
{
	static UFunction* pFnGetMomentum = NULL;

	if ( ! pFnGetMomentum )
		pFnGetMomentum = (UFunction*) UObject::GObjObjects()->Data[ 83068 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execGetMomentum_Parms GetMomentum_Parms;

	this->ProcessEvent ( pFnGetMomentum, &GetMomentum_Parms, NULL );

	return GetMomentum_Parms.ReturnValue;
};

// Function SFXGame.SFXProjectile.GetDamageRadius
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ASFXProjectile_PowerCustomActionMP_JetPack::GetDamageRadius ( )
{
	static UFunction* pFnGetDamageRadius = NULL;

	if ( ! pFnGetDamageRadius )
		pFnGetDamageRadius = (UFunction*) UObject::GObjObjects()->Data[ 83065 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execGetDamageRadius_Parms GetDamageRadius_Parms;

	this->ProcessEvent ( pFnGetDamageRadius, &GetDamageRadius_Parms, NULL );

	return GetDamageRadius_Parms.ReturnValue;
};

// Function SFXGame.SFXProjectile.GetDamage
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ASFXProjectile_PowerCustomActionMP_JetPack::GetDamage ( )
{
	static UFunction* pFnGetDamage = NULL;

	if ( ! pFnGetDamage )
		pFnGetDamage = (UFunction*) UObject::GObjObjects()->Data[ 83062 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execGetDamage_Parms GetDamage_Parms;

	this->ProcessEvent ( pFnGetDamage, &GetDamage_Parms, NULL );

	return GetDamage_Parms.ReturnValue;
};

// Function SFXGame.SFXProjectile.Bounce
// [0x00020102] 
// Parameters infos:
// class AActor*                  HitActor                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASFXProjectile_PowerCustomActionMP_JetPack::Bounce ( class AActor* HitActor, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnBounce = NULL;

	if ( ! pFnBounce )
		pFnBounce = (UFunction*) UObject::GObjObjects()->Data[ 83053 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execBounce_Parms Bounce_Parms;
	Bounce_Parms.HitActor = HitActor;
	memcpy ( &Bounce_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Bounce_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnBounce, &Bounce_Parms, NULL );
};

// Function SFXGame.SFXProjectile.ProcessTouch
// [0x00020002] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASFXProjectile_PowerCustomActionMP_JetPack::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 83049 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function SFXGame.SFXProjectile.ApplyExternalForce
// [0x00020102] 
// Parameters infos:

void ASFXProjectile_PowerCustomActionMP_JetPack::ApplyExternalForce ( )
{
	static UFunction* pFnApplyExternalForce = NULL;

	if ( ! pFnApplyExternalForce )
		pFnApplyExternalForce = (UFunction*) UObject::GObjObjects()->Data[ 83048 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execApplyExternalForce_Parms ApplyExternalForce_Parms;

	this->ProcessEvent ( pFnApplyExternalForce, &ApplyExternalForce_Parms, NULL );
};

// Function SFXGame.SFXProjectile.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXProjectile_PowerCustomActionMP_JetPack::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 83043 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SFXGame.SFXProjectile.ProjEffectsTrailFinished
// [0x00040103] ( FUNC_Final )
// Parameters infos:
// class UParticleSystemComponent* PSC                            ( CPF_Parm | CPF_EditInline )

void ASFXProjectile_PowerCustomActionMP_JetPack::ProjEffectsTrailFinished ( class UParticleSystemComponent* PSC )
{
	static UFunction* pFnProjEffectsTrailFinished = NULL;

	if ( ! pFnProjEffectsTrailFinished )
		pFnProjEffectsTrailFinished = (UFunction*) UObject::GObjObjects()->Data[ 83041 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execProjEffectsTrailFinished_Parms ProjEffectsTrailFinished_Parms;
	ProjEffectsTrailFinished_Parms.PSC = PSC;

	this->ProcessEvent ( pFnProjEffectsTrailFinished, &ProjEffectsTrailFinished_Parms, NULL );
};

// Function SFXGame.SFXProjectile.SetProjectileHidden
// [0x00020102] 
// Parameters infos:
// unsigned long                  bHide                          ( CPF_Parm )

void ASFXProjectile_PowerCustomActionMP_JetPack::SetProjectileHidden ( unsigned long bHide )
{
	static UFunction* pFnSetProjectileHidden = NULL;

	if ( ! pFnSetProjectileHidden )
		pFnSetProjectileHidden = (UFunction*) UObject::GObjObjects()->Data[ 83038 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execSetProjectileHidden_Parms SetProjectileHidden_Parms;
	SetProjectileHidden_Parms.bHide = bHide;

	this->ProcessEvent ( pFnSetProjectileHidden, &SetProjectileHidden_Parms, NULL );
};

// Function SFXGame.SFXProjectile.Explode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASFXProjectile_PowerCustomActionMP_JetPack::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 83035 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function SFXGame.SFXProjectile.HitWall
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ASFXProjectile_PowerCustomActionMP_JetPack::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 83030 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function SFXGame.SFXProjectile.OutsideWorldBounds
// [0x00020102] 
// Parameters infos:

void ASFXProjectile_PowerCustomActionMP_JetPack::OutsideWorldBounds ( )
{
	static UFunction* pFnOutsideWorldBounds = NULL;

	if ( ! pFnOutsideWorldBounds )
		pFnOutsideWorldBounds = (UFunction*) UObject::GObjObjects()->Data[ 83029 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execOutsideWorldBounds_Parms OutsideWorldBounds_Parms;

	this->ProcessEvent ( pFnOutsideWorldBounds, &OutsideWorldBounds_Parms, NULL );
};

// Function SFXGame.SFXProjectile.FellOutOfWorld
// [0x00020100] 
// Parameters infos:
// class UClass*                  dmgType                        ( CPF_Parm )

void ASFXProjectile_PowerCustomActionMP_JetPack::FellOutOfWorld ( class UClass* dmgType )
{
	static UFunction* pFnFellOutOfWorld = NULL;

	if ( ! pFnFellOutOfWorld )
		pFnFellOutOfWorld = (UFunction*) UObject::GObjObjects()->Data[ 83027 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execFellOutOfWorld_Parms FellOutOfWorld_Parms;
	FellOutOfWorld_Parms.dmgType = dmgType;

	this->ProcessEvent ( pFnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
};

// Function SFXGame.SFXProjectile.IsShuttingDown
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASFXProjectile_PowerCustomActionMP_JetPack::IsShuttingDown ( )
{
	static UFunction* pFnIsShuttingDown = NULL;

	if ( ! pFnIsShuttingDown )
		pFnIsShuttingDown = (UFunction*) UObject::GObjObjects()->Data[ 75442 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execIsShuttingDown_Parms IsShuttingDown_Parms;

	this->ProcessEvent ( pFnIsShuttingDown, &IsShuttingDown_Parms, NULL );

	return IsShuttingDown_Parms.ReturnValue;
};

// Function SFXGame.SFXProjectile.ShutDown
// [0x00020102] 
// Parameters infos:

void ASFXProjectile_PowerCustomActionMP_JetPack::ShutDown ( )
{
	static UFunction* pFnShutDown = NULL;

	if ( ! pFnShutDown )
		pFnShutDown = (UFunction*) UObject::GObjObjects()->Data[ 83025 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execShutDown_Parms ShutDown_Parms;

	this->ProcessEvent ( pFnShutDown, &ShutDown_Parms, NULL );
};

// Function SFXGame.SFXProjectile.Init
// [0x00020102] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void ASFXProjectile_PowerCustomActionMP_JetPack::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 83022 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function SFXGame.SFXProjectile.ShutdownPostEffects
// [0x00020102] 
// Parameters infos:

void ASFXProjectile_PowerCustomActionMP_JetPack::ShutdownPostEffects ( )
{
	static UFunction* pFnShutdownPostEffects = NULL;

	if ( ! pFnShutdownPostEffects )
		pFnShutdownPostEffects = (UFunction*) UObject::GObjObjects()->Data[ 83021 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execShutdownPostEffects_Parms ShutdownPostEffects_Parms;

	this->ProcessEvent ( pFnShutdownPostEffects, &ShutdownPostEffects_Parms, NULL );
};

// Function SFXGame.SFXProjectile.Reuse
// [0x00020903] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void ASFXProjectile_PowerCustomActionMP_JetPack::eventReuse ( )
{
	static UFunction* pFnReuse = NULL;

	if ( ! pFnReuse )
		pFnReuse = (UFunction*) UObject::GObjObjects()->Data[ 78095 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_eventReuse_Parms Reuse_Parms;

	this->ProcessEvent ( pFnReuse, &Reuse_Parms, NULL );
};

// Function SFXGame.SFXProjectile.Recycle
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ASFXProjectile_PowerCustomActionMP_JetPack::eventRecycle ( )
{
	static UFunction* pFnRecycle = NULL;

	if ( ! pFnRecycle )
		pFnRecycle = (UFunction*) UObject::GObjObjects()->Data[ 83014 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_eventRecycle_Parms Recycle_Parms;

	this->ProcessEvent ( pFnRecycle, &Recycle_Parms, NULL );
};

// Function SFXGame.SFXProjectile.SpawnFlightEffects
// [0x00040103] ( FUNC_Final )
// Parameters infos:

void ASFXProjectile_PowerCustomActionMP_JetPack::SpawnFlightEffects ( )
{
	static UFunction* pFnSpawnFlightEffects = NULL;

	if ( ! pFnSpawnFlightEffects )
		pFnSpawnFlightEffects = (UFunction*) UObject::GObjObjects()->Data[ 83006 ];

	ASFXProjectile_PowerCustomActionMP_JetPack_execSpawnFlightEffects_Parms SpawnFlightEffects_Parms;

	this->ProcessEvent ( pFnSpawnFlightEffects, &SpawnFlightEffects_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif