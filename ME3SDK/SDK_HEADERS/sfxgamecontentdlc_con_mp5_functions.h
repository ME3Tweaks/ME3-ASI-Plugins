/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_con_mp5_functions.h
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

// Function SFXGame.SFXDamageType.CalculateDamageMultiplier
// [0x00422002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FDamageCalculationAlgorithm DamageCalc                     ( CPF_Parm | CPF_OutParm )

float USFXDamageType_SalarianBlast_MP::CalculateDamageMultiplier ( struct FDamageCalculationAlgorithm* DamageCalc )
{
	static UFunction* pFnCalculateDamageMultiplier = NULL;

	if ( ! pFnCalculateDamageMultiplier )
		pFnCalculateDamageMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 44579 ];

	USFXDamageType_SalarianBlast_MP_execCalculateDamageMultiplier_Parms CalculateDamageMultiplier_Parms;

	this->ProcessEvent ( pFnCalculateDamageMultiplier, &CalculateDamageMultiplier_Parms, NULL );

	if ( DamageCalc )
		memcpy ( DamageCalc, &CalculateDamageMultiplier_Parms.DamageCalc, 0x60 );

	return CalculateDamageMultiplier_Parms.ReturnValue;
};

// Function SFXGame.SFXDamageType.ResetDamageCalc
// [0x00422002] 
// Parameters infos:
// struct FDamageCalculationAlgorithm DamageCalc                     ( CPF_Parm | CPF_OutParm )

void USFXDamageType_SalarianBlast_MP::ResetDamageCalc ( struct FDamageCalculationAlgorithm* DamageCalc )
{
	static UFunction* pFnResetDamageCalc = NULL;

	if ( ! pFnResetDamageCalc )
		pFnResetDamageCalc = (UFunction*) UObject::GObjObjects()->Data[ 44554 ];

	USFXDamageType_SalarianBlast_MP_execResetDamageCalc_Parms ResetDamageCalc_Parms;

	this->ProcessEvent ( pFnResetDamageCalc, &ResetDamageCalc_Parms, NULL );

	if ( DamageCalc )
		memcpy ( DamageCalc, &ResetDamageCalc_Parms.DamageCalc, 0x60 );
};

// Function SFXGame.SFXDamageType.CanPlayDeathEffect
// [0x00026002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                Target                         ( CPF_Parm )
// class AController*             Killer                         ( CPF_OptionalParm | CPF_Parm )

bool USFXDamageType_SalarianBlast_MP::CanPlayDeathEffect ( class ABioPawn* Target, class AController* Killer )
{
	static UFunction* pFnCanPlayDeathEffect = NULL;

	if ( ! pFnCanPlayDeathEffect )
		pFnCanPlayDeathEffect = (UFunction*) UObject::GObjObjects()->Data[ 44550 ];

	USFXDamageType_SalarianBlast_MP_execCanPlayDeathEffect_Parms CanPlayDeathEffect_Parms;
	CanPlayDeathEffect_Parms.Target = Target;
	CanPlayDeathEffect_Parms.Killer = Killer;

	this->ProcessEvent ( pFnCanPlayDeathEffect, &CanPlayDeathEffect_Parms, NULL );

	return CanPlayDeathEffect_Parms.ReturnValue;
};

// Function SFXGame.SFXDamageType.CalculateDamageMultiplier
// [0x00422002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FDamageCalculationAlgorithm DamageCalc                     ( CPF_Parm | CPF_OutParm )

float USFXDamageType_SalarianShard_MP::CalculateDamageMultiplier ( struct FDamageCalculationAlgorithm* DamageCalc )
{
	static UFunction* pFnCalculateDamageMultiplier = NULL;

	if ( ! pFnCalculateDamageMultiplier )
		pFnCalculateDamageMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 44579 ];

	USFXDamageType_SalarianShard_MP_execCalculateDamageMultiplier_Parms CalculateDamageMultiplier_Parms;

	this->ProcessEvent ( pFnCalculateDamageMultiplier, &CalculateDamageMultiplier_Parms, NULL );

	if ( DamageCalc )
		memcpy ( DamageCalc, &CalculateDamageMultiplier_Parms.DamageCalc, 0x60 );

	return CalculateDamageMultiplier_Parms.ReturnValue;
};

// Function SFXGame.SFXDamageType.ResetDamageCalc
// [0x00422002] 
// Parameters infos:
// struct FDamageCalculationAlgorithm DamageCalc                     ( CPF_Parm | CPF_OutParm )

void USFXDamageType_SalarianShard_MP::ResetDamageCalc ( struct FDamageCalculationAlgorithm* DamageCalc )
{
	static UFunction* pFnResetDamageCalc = NULL;

	if ( ! pFnResetDamageCalc )
		pFnResetDamageCalc = (UFunction*) UObject::GObjObjects()->Data[ 44554 ];

	USFXDamageType_SalarianShard_MP_execResetDamageCalc_Parms ResetDamageCalc_Parms;

	this->ProcessEvent ( pFnResetDamageCalc, &ResetDamageCalc_Parms, NULL );

	if ( DamageCalc )
		memcpy ( DamageCalc, &ResetDamageCalc_Parms.DamageCalc, 0x60 );
};

// Function SFXGame.SFXDamageType.CanPlayDeathEffect
// [0x00026002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                Target                         ( CPF_Parm )
// class AController*             Killer                         ( CPF_OptionalParm | CPF_Parm )

bool USFXDamageType_SalarianShard_MP::CanPlayDeathEffect ( class ABioPawn* Target, class AController* Killer )
{
	static UFunction* pFnCanPlayDeathEffect = NULL;

	if ( ! pFnCanPlayDeathEffect )
		pFnCanPlayDeathEffect = (UFunction*) UObject::GObjObjects()->Data[ 44550 ];

	USFXDamageType_SalarianShard_MP_execCanPlayDeathEffect_Parms CanPlayDeathEffect_Parms;
	CanPlayDeathEffect_Parms.Target = Target;
	CanPlayDeathEffect_Parms.Killer = Killer;

	this->ProcessEvent ( pFnCanPlayDeathEffect, &CanPlayDeathEffect_Parms, NULL );

	return CanPlayDeathEffect_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlast_MP.SpawnExplosionEffects
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASFXProjectile_SalarianBlast_MP::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 138427 ];

	ASFXProjectile_SalarianBlast_MP_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlast_MP.Init
// [0x00020102] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void ASFXProjectile_SalarianBlast_MP::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 138424 ];

	ASFXProjectile_SalarianBlast_MP_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlast_MP.DoImpact
// [0x00420002] 
// Parameters infos:
// class AActor*                  InImpactedActor                ( CPF_Parm )
// class AController*             InInstigatorController         ( CPF_Parm )
// float                          BaseDamage                     ( CPF_Parm )
// float                          InDamageRadius                 ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// unsigned long                  bFullDamage                    ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm | CPF_OutParm )

void ASFXProjectile_SalarianBlast_MP::DoImpact ( class AActor* InImpactedActor, class AController* InInstigatorController, float BaseDamage, float InDamageRadius, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, struct FTraceHitInfo* HitInfo )
{
	static UFunction* pFnDoImpact = NULL;

	if ( ! pFnDoImpact )
		pFnDoImpact = (UFunction*) UObject::GObjObjects()->Data[ 138413 ];

	ASFXProjectile_SalarianBlast_MP_execDoImpact_Parms DoImpact_Parms;
	DoImpact_Parms.InImpactedActor = InImpactedActor;
	DoImpact_Parms.InInstigatorController = InInstigatorController;
	DoImpact_Parms.BaseDamage = BaseDamage;
	DoImpact_Parms.InDamageRadius = InDamageRadius;
	DoImpact_Parms.Momentum = Momentum;
	memcpy ( &DoImpact_Parms.HurtOrigin, &HurtOrigin, 0xC );
	DoImpact_Parms.bFullDamage = bFullDamage;

	this->ProcessEvent ( pFnDoImpact, &DoImpact_Parms, NULL );

	if ( HitInfo )
		memcpy ( HitInfo, &DoImpact_Parms.HitInfo, 0x1C );
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastShard_MP.Recycle
// [0x00020102] 
// Parameters infos:

void ASFXProjectile_SalarianBlastShard_MP::Recycle ( )
{
	static UFunction* pFnRecycle = NULL;

	if ( ! pFnRecycle )
		pFnRecycle = (UFunction*) UObject::GObjObjects()->Data[ 138483 ];

	ASFXProjectile_SalarianBlastShard_MP_execRecycle_Parms Recycle_Parms;

	this->ProcessEvent ( pFnRecycle, &Recycle_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastShard_MP.SpawnExplosionEffects
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASFXProjectile_SalarianBlastShard_MP::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 138477 ];

	ASFXProjectile_SalarianBlastShard_MP_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastShard_MP.Explode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASFXProjectile_SalarianBlastShard_MP::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 138470 ];

	ASFXProjectile_SalarianBlastShard_MP_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastShard_MP.ProcessTouch
// [0x00020002] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASFXProjectile_SalarianBlastShard_MP::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 138463 ];

	ASFXProjectile_SalarianBlastShard_MP_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastShard_MP.DoImpact
// [0x00420002] 
// Parameters infos:
// class AActor*                  InImpactedActor                ( CPF_Parm )
// class AController*             InInstigatorController         ( CPF_Parm )
// float                          BaseDamage                     ( CPF_Parm )
// float                          InDamageRadius                 ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// unsigned long                  bFullDamage                    ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm | CPF_OutParm )

void ASFXProjectile_SalarianBlastShard_MP::DoImpact ( class AActor* InImpactedActor, class AController* InInstigatorController, float BaseDamage, float InDamageRadius, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, struct FTraceHitInfo* HitInfo )
{
	static UFunction* pFnDoImpact = NULL;

	if ( ! pFnDoImpact )
		pFnDoImpact = (UFunction*) UObject::GObjObjects()->Data[ 138452 ];

	ASFXProjectile_SalarianBlastShard_MP_execDoImpact_Parms DoImpact_Parms;
	DoImpact_Parms.InImpactedActor = InImpactedActor;
	DoImpact_Parms.InInstigatorController = InInstigatorController;
	DoImpact_Parms.BaseDamage = BaseDamage;
	DoImpact_Parms.InDamageRadius = InDamageRadius;
	DoImpact_Parms.Momentum = Momentum;
	memcpy ( &DoImpact_Parms.HurtOrigin, &HurtOrigin, 0xC );
	DoImpact_Parms.bFullDamage = bFullDamage;

	this->ProcessEvent ( pFnDoImpact, &DoImpact_Parms, NULL );

	if ( HitInfo )
		memcpy ( HitInfo, &DoImpact_Parms.HitInfo, 0x1C );
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastShard_MP.Detonate
// [0x00020002] 
// Parameters infos:

void ASFXProjectile_SalarianBlastShard_MP::Detonate ( )
{
	static UFunction* pFnDetonate = NULL;

	if ( ! pFnDetonate )
		pFnDetonate = (UFunction*) UObject::GObjObjects()->Data[ 138451 ];

	ASFXProjectile_SalarianBlastShard_MP_execDetonate_Parms Detonate_Parms;

	this->ProcessEvent ( pFnDetonate, &Detonate_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastShard_MP.Init
// [0x00020102] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void ASFXProjectile_SalarianBlastShard_MP::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 138445 ];

	ASFXProjectile_SalarianBlastShard_MP_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastSplitter_MP.GetDamage
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ASFXProjectile_SalarianBlastSplitter_MP::GetDamage ( )
{
	static UFunction* pFnGetDamage = NULL;

	if ( ! pFnGetDamage )
		pFnGetDamage = (UFunction*) UObject::GObjObjects()->Data[ 138534 ];

	ASFXProjectile_SalarianBlastSplitter_MP_execGetDamage_Parms GetDamage_Parms;

	this->ProcessEvent ( pFnGetDamage, &GetDamage_Parms, NULL );

	return GetDamage_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastSplitter_MP.SpawnExplosionEffects
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASFXProjectile_SalarianBlastSplitter_MP::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 138528 ];

	ASFXProjectile_SalarianBlastSplitter_MP_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastSplitter_MP.Explode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASFXProjectile_SalarianBlastSplitter_MP::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 138512 ];

	ASFXProjectile_SalarianBlastSplitter_MP_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastSplitter_MP.DoImpact
// [0x00420002] 
// Parameters infos:
// class AActor*                  InImpactedActor                ( CPF_Parm )
// class AController*             InInstigatorController         ( CPF_Parm )
// float                          BaseDamage                     ( CPF_Parm )
// float                          InDamageRadius                 ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// unsigned long                  bFullDamage                    ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm | CPF_OutParm )

void ASFXProjectile_SalarianBlastSplitter_MP::DoImpact ( class AActor* InImpactedActor, class AController* InInstigatorController, float BaseDamage, float InDamageRadius, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, struct FTraceHitInfo* HitInfo )
{
	static UFunction* pFnDoImpact = NULL;

	if ( ! pFnDoImpact )
		pFnDoImpact = (UFunction*) UObject::GObjObjects()->Data[ 138501 ];

	ASFXProjectile_SalarianBlastSplitter_MP_execDoImpact_Parms DoImpact_Parms;
	DoImpact_Parms.InImpactedActor = InImpactedActor;
	DoImpact_Parms.InInstigatorController = InInstigatorController;
	DoImpact_Parms.BaseDamage = BaseDamage;
	DoImpact_Parms.InDamageRadius = InDamageRadius;
	DoImpact_Parms.Momentum = Momentum;
	memcpy ( &DoImpact_Parms.HurtOrigin, &HurtOrigin, 0xC );
	DoImpact_Parms.bFullDamage = bFullDamage;

	this->ProcessEvent ( pFnDoImpact, &DoImpact_Parms, NULL );

	if ( HitInfo )
		memcpy ( HitInfo, &DoImpact_Parms.HitInfo, 0x1C );
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastSplitter_MP.ProcessTouch
// [0x00020002] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASFXProjectile_SalarianBlastSplitter_MP::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 138496 ];

	ASFXProjectile_SalarianBlastSplitter_MP_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastSplitter_MP.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASFXProjectile_SalarianBlastSplitter_MP::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 138494 ];

	ASFXProjectile_SalarianBlastSplitter_MP_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastSplitter_MP.Init
// [0x00020102] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void ASFXProjectile_SalarianBlastSplitter_MP::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 138491 ];

	ASFXProjectile_SalarianBlastSplitter_MP_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp5.SFXWeapon_Shotgun_Salarian_MP.PlayOwnedFireEffects
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ASFXWeapon_Shotgun_Salarian_MP::PlayOwnedFireEffects ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayOwnedFireEffects = NULL;

	if ( ! pFnPlayOwnedFireEffects )
		pFnPlayOwnedFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 138567 ];

	ASFXWeapon_Shotgun_Salarian_MP_execPlayOwnedFireEffects_Parms PlayOwnedFireEffects_Parms;
	PlayOwnedFireEffects_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayOwnedFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayOwnedFireEffects, &PlayOwnedFireEffects_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp5.SFXWeapon_Shotgun_Salarian_MP.StopChargeEffects
// [0x00020102] 
// Parameters infos:

void ASFXWeapon_Shotgun_Salarian_MP::StopChargeEffects ( )
{
	static UFunction* pFnStopChargeEffects = NULL;

	if ( ! pFnStopChargeEffects )
		pFnStopChargeEffects = (UFunction*) UObject::GObjObjects()->Data[ 138565 ];

	ASFXWeapon_Shotgun_Salarian_MP_execStopChargeEffects_Parms StopChargeEffects_Parms;

	this->ProcessEvent ( pFnStopChargeEffects, &StopChargeEffects_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp5.SFXWeapon_Shotgun_Salarian_MP.StartChargeEffects
// [0x00020102] 
// Parameters infos:

void ASFXWeapon_Shotgun_Salarian_MP::StartChargeEffects ( )
{
	static UFunction* pFnStartChargeEffects = NULL;

	if ( ! pFnStartChargeEffects )
		pFnStartChargeEffects = (UFunction*) UObject::GObjObjects()->Data[ 138562 ];

	ASFXWeapon_Shotgun_Salarian_MP_execStartChargeEffects_Parms StartChargeEffects_Parms;

	this->ProcessEvent ( pFnStartChargeEffects, &StartChargeEffects_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp5.SFXWeapon_Shotgun_Salarian_MP.GetProjectileClass
// [0x00020102] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UClass* ASFXWeapon_Shotgun_Salarian_MP::GetProjectileClass ( )
{
	static UFunction* pFnGetProjectileClass = NULL;

	if ( ! pFnGetProjectileClass )
		pFnGetProjectileClass = (UFunction*) UObject::GObjObjects()->Data[ 138560 ];

	ASFXWeapon_Shotgun_Salarian_MP_execGetProjectileClass_Parms GetProjectileClass_Parms;

	this->ProcessEvent ( pFnGetProjectileClass, &GetProjectileClass_Parms, NULL );

	return GetProjectileClass_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp5.SFXWeapon_Shotgun_Salarian_MP.GetFireModeBaseDamage
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ASFXWeapon_Shotgun_Salarian_MP::GetFireModeBaseDamage ( )
{
	static UFunction* pFnGetFireModeBaseDamage = NULL;

	if ( ! pFnGetFireModeBaseDamage )
		pFnGetFireModeBaseDamage = (UFunction*) UObject::GObjObjects()->Data[ 138557 ];

	ASFXWeapon_Shotgun_Salarian_MP_execGetFireModeBaseDamage_Parms GetFireModeBaseDamage_Parms;

	this->ProcessEvent ( pFnGetFireModeBaseDamage, &GetFireModeBaseDamage_Parms, NULL );

	return GetFireModeBaseDamage_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp5.SFXWeapon_Shotgun_Salarian_MP.HackLoadWeaponMods
// [0x00020102] 
// Parameters infos:

void ASFXWeapon_Shotgun_Salarian_MP::HackLoadWeaponMods ( )
{
	static UFunction* pFnHackLoadWeaponMods = NULL;

	if ( ! pFnHackLoadWeaponMods )
		pFnHackLoadWeaponMods = (UFunction*) UObject::GObjObjects()->Data[ 138547 ];

	ASFXWeapon_Shotgun_Salarian_MP_execHackLoadWeaponMods_Parms HackLoadWeaponMods_Parms;

	this->ProcessEvent ( pFnHackLoadWeaponMods, &HackLoadWeaponMods_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp5.SFXWeapon_Shotgun_Salarian_MP.InitializeWeapon
// [0x00020102] 
// Parameters infos:

void ASFXWeapon_Shotgun_Salarian_MP::InitializeWeapon ( )
{
	static UFunction* pFnInitializeWeapon = NULL;

	if ( ! pFnInitializeWeapon )
		pFnInitializeWeapon = (UFunction*) UObject::GObjObjects()->Data[ 138546 ];

	ASFXWeapon_Shotgun_Salarian_MP_execInitializeWeapon_Parms InitializeWeapon_Parms;

	this->ProcessEvent ( pFnInitializeWeapon, &InitializeWeapon_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif