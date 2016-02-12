/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_con_mp4_classes.h
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

#define CONST_TELEPORT_HEIGHT_THRESHOLD                          1000.f
#define CONST_TELEPORT_VISIBLE_THRESHOLD                         0.5f

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class sfxgamecontentdlc_con_mp4.SFXCameraMode_TurianPack
// 0x0000 (0x00F0 - 0x00F0)
class USFXCameraMode_TurianPack : public USFXCameraMode_Combat
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135748 ];

		return pClassPointer;
	};

	void MakeInactive ( );
	void MakeActive ( );
};

UClass* USFXCameraMode_TurianPack::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCharacterClassMP_N7Soldier_Turian
// 0x0000 (0x01CD - 0x01CD)
class USFXCharacterClassMP_N7Soldier_Turian : public USFXCharacterClass_ContentMP
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135752 ];

		return pClassPointer;
	};

};

UClass* USFXCharacterClassMP_N7Soldier_Turian::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base
// 0x0147 (0x07DC - 0x0695)
class USFXPowerCustomActionMP_JetPackCharge_Base : public Usfxpowercustomaction
{
public:
	struct FString                                     FailedLineCheckName;                              		// 0x0698 (0x000C) [0x0000000000402001]              ( CPF_Edit | CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FCharge_PendingVolume >             VolumeList;                                       		// 0x06A4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UClass*                                      CustomDetonationRumbleClass;                      		// 0x06B0 (0x0004) [0x0000000000000000]              
	class UClass*                                      CustomDetonationScreenShakeClass;                 		// 0x06B4 (0x0004) [0x0000000000000000]              
	struct FScreenShakeStruct                          HitShake;                                         		// 0x06B8 (0x0078) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     CachedTeleportLocation;                           		// 0x0730 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector                                     CachedTargetLocation;                             		// 0x073C (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector                                     CachedStartingLocation;                           		// 0x0748 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector                                     FailedLineCheckStart;                             		// 0x0754 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector                                     FailedLineCheckEnd;                               		// 0x0760 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              FrozenTargetForceMult;                            		// 0x076C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ConeAngle;                                        		// 0x0770 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class APawn*                                       CachedTarget;                                     		// 0x0774 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              TeleportStartDelay;                               		// 0x0778 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TeleportDelay;                                    		// 0x077C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ImpactDelay;                                      		// 0x0780 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ImpactDelay_Min;                                  		// 0x0784 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ImpactDelay_Max;                                  		// 0x0788 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeStingerDelay;                                 		// 0x078C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CameraImpactDelay;                                		// 0x0790 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PS_TeleportIn;                                    		// 0x0794 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PS_TeleportOut;                                   		// 0x0798 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class URvrClientEffectInterface*                   CE_CrustEffect;                                   		// 0x079C (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_JetCrustEffect;                                		// 0x07A0 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ChargeImpact;                                  		// 0x07A4 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_HeavyChargeImpact;                             		// 0x07A8 (0x0004) [0x0000000000000000]              
	class ASFXProjectile_PowerCustomActionMP_JetPack*  ChargeProjectile;                                 		// 0x07AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USFXCameraTransition_VanguardSlam*           CamTransition;                                    		// 0x07B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USFXCameraMode_TurianPack*                   CamMode;                                          		// 0x07B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UForceFeedbackWaveform*                      HitForceFeedback;                                 		// 0x07B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CameraDelay;                                      		// 0x07BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 ChargeCast;                                       		// 0x07C0 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 HenchChargeCast;                                  		// 0x07C4 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 ChargeImpact;                                     		// 0x07C8 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 HenchChargeImpact;                                		// 0x07CC (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 ChargeTakeoff;                                    		// 0x07D0 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 HenchChargeTakeoff;                               		// 0x07D4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCachedTargetImpacted : 1;                        		// 0x07D8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseOwnerRotation : 1;                            		// 0x07D8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsInputLocked : 1;                               		// 0x07D8 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bFailedToMoveCaster : 1;                          		// 0x07D8 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bCollectedVolumes : 1;                            		// 0x07D8 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bLineCheckToHead : 1;                             		// 0x07D8 (0x0004) [0x0000000000000000] [0x00000020] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135755 ];

		return pClassPointer;
	};

	void Replicate ( );
	bool DoPowerDetonatedForActor ( class AActor* oActor, struct FVector HitLocation, struct FVector HitNormal, int nImpactCount, unsigned long bFirstTarget, class ASFXProjectile_PowerCustomAction* oProjectile );
	void PlayFailedChargeEffects ( );
	void SpawnProjectile ( );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	float GetImpactForce ( class AActor* oImpacted );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	bool OnChargeImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void Teleport ( );
	void StartTeleport ( );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void StopCustomAction ( );
	void InterruptThisCustomAction ( );
	void CameraMove ( );
	void StartCustomAction ( );
	void FinalizePawnMove ( struct FVector* Loc, struct FVector* TargetLoc );
	bool ValidateTarget ( );
	bool FindSpace ( struct FVector Extent, class AActor* TraceActor, struct FVector* NearLocation );
	bool TryMove ( struct FVector NewLocation, struct FVector Dir, class APawn* CollisionActor );
	void CollectVolumes ( );
	bool ValidateTargetLocation ( struct FVector TargetLocation );
	bool TestPathReachability ( class ANavigationPoint* Anchor, struct FVector Extent, struct FVector* StartLocation );
	struct FVector NewVector ( float X, float Y, float Z );
	bool CanUsePower ( class AActor* oTarget );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

UClass* USFXPowerCustomActionMP_JetPackCharge_Base::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge
// 0x0090 (0x086C - 0x07DC)
class USFXPowerCustomActionMP_JetPackCharge : public USFXPowerCustomActionMP_JetPackCharge_Base
{
public:
	struct FPowerData                                  DamageReduction;                                  		// 0x07DC (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  DamageReductionDuration;                          		// 0x080C (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              ChargeSpeedMultiplier;                            		// 0x083C (0x0004) [0x0000000000000000]              
	float                                              Evolve_CooldownBonus;                             		// 0x0840 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_TimedMeleeDamageDuration;                  		// 0x0844 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_MeleeDamageBonus;                          		// 0x0848 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageForceBonus2;                         		// 0x084C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageForceBonus;                          		// 0x0850 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ImpactRadiusBonus;                         		// 0x0854 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_MaxImpactTargetsBonus;                     		// 0x0858 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_TimedWeaponDamageBonus;                    		// 0x085C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_TimedWeaponDamageDuration;                 		// 0x0860 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_TimedPowerDamageBonus;                     		// 0x0864 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_TimedPowerDamageDuration;                  		// 0x0868 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135754 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	void Impact ( );
	void StartPower ( );
	bool CanOverrideCustomAction ( int OldCustomAction, int InCustomAction );
};

UClass* USFXPowerCustomActionMP_JetPackCharge::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_StimPack
// 0x00EC (0x0788 - 0x069C)
class USFXPowerCustomActionMP_StimPack : public USFXPowerCustomAction_GrenadeBase
{
public:
	struct FPowerData                                  MaxGrenadeBonus;                                  		// 0x069C (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ShieldStrength;                                   		// 0x06CC (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  Duration;                                         		// 0x06FC (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  DamageBonus;                                      		// 0x072C (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                Evolve_GrenadeCountBonus;                         		// 0x075C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                Rank2GrenadeUpgrade;                              		// 0x0760 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus;                               		// 0x0764 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_Duration;                                  		// 0x0768 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldStrengthBonus;                       		// 0x076C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldStrengthBonus2;                      		// 0x0770 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_WeaponDamageBonus;                         		// 0x0774 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_MeleeDamageBonus;                          		// 0x0778 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class URvrClientEffectInterface*                   CE_HealCrust;                                     		// 0x077C (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_SuperHealCrust;                                		// 0x0780 (0x0004) [0x0000000000000000]              
	float                                              DamageImmunityLength;                             		// 0x0784 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135756 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	void ApplyGrenadeBonus ( );
	void RemoveImmunity ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* USFXPowerCustomActionMP_StimPack::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_N7TurianPassive
// 0x0000 (0x0788 - 0x0788)
class USFXPowerCustomActionMP_N7TurianPassive : public Usfxpowercustomactionmp_turianpassive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135758 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	void ApplyGlobalBonus ( );
};

UClass* USFXPowerCustomActionMP_N7TurianPassive::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_N7TurianMeleePassive
// 0x0000 (0x08D4 - 0x08D4)
class USFXPowerCustomActionMP_N7TurianMeleePassive : public USFXPowerCustomActionMP_MeleePassiveBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135760 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	void ApplyGlobalBonus ( );
};

UClass* USFXPowerCustomActionMP_N7TurianMeleePassive::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase
// 0x001E (0x010C - 0x00EE)
class USFXCustomAction_TurianEvadeBase : public USFXCustomAction_PlayerEvadeBase
{
public:
	struct FVector                                     MoveOffset;                                       		// 0x00F0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSet*                                    AnimSet;                                          		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FinalMoveSpeed;                                   		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Decay;                                            		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GravityCompensationForExtremeDistance;            		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135763 ];

		return pClassPointer;
	};

	void RollOverride ( );
	void StopCustomAction ( );
	void eventTickCustomAction ( float DeltaTime );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_TurianEvadeBase::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeLeft
// 0x0000 (0x010C - 0x010C)
class USFXCustomAction_TurianEvadeLeft : public USFXCustomAction_TurianEvadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135762 ];

		return pClassPointer;
	};

	void RollOverride ( );
	void StopCustomAction ( );
	void eventTickCustomAction ( float DeltaTime );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_TurianEvadeLeft::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeRight
// 0x0000 (0x010C - 0x010C)
class USFXCustomAction_TurianEvadeRight : public USFXCustomAction_TurianEvadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135764 ];

		return pClassPointer;
	};

	void RollOverride ( );
	void StopCustomAction ( );
	void eventTickCustomAction ( float DeltaTime );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_TurianEvadeRight::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeForward
// 0x0000 (0x010C - 0x010C)
class USFXCustomAction_TurianEvadeForward : public USFXCustomAction_TurianEvadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135765 ];

		return pClassPointer;
	};

	void RollOverride ( );
	void StopCustomAction ( );
	void eventTickCustomAction ( float DeltaTime );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_TurianEvadeForward::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBackward
// 0x0000 (0x010C - 0x010C)
class USFXCustomAction_TurianEvadeBackward : public USFXCustomAction_TurianEvadeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135766 ];

		return pClassPointer;
	};

	void RollOverride ( );
	void StopCustomAction ( );
	void eventTickCustomAction ( float DeltaTime );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_TurianEvadeBackward::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPunch
// 0x0010 (0x0154 - 0x0144)
class USFXCustomAction_TurianPunch : public USFXCustomAction_PlayerHeavyMeleeBase
{
public:
	struct FVector                                     ToEnd2D;                                          		// 0x0144 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              MoveDist;                                         		// 0x0150 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135767 ];

		return pClassPointer;
	};

	void ClientDoCustomAction ( unsigned long bForced );
	void Replicate ( );
	void ServerStartCustomAction ( int NewAction, class ABioPawn* Sync, int NewPowerAction );
	void StopMove ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	struct FVector GetMeleeDirection ( );
	void Translate ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_TurianPunch::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne
// 0x0008 (0x01E4 - 0x01DC)
class USFXCustomAction_TurianMeleeOne : public USFXCustomAction_PlayerMeleeBase
{
public:
	class UAnimSet*                                    AnimSet;                                          		// 0x01DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BladeImpactScale;                                 		// 0x01E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135768 ];

		return pClassPointer;
	};

	void StopMove ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void StopCustomAction ( );
	void EndAction ( );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void DoRifleMeleeTwo ( );
	void RifleMeleeSecondary ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_TurianMeleeOne::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianRifleMeleeTwo
// 0x0000 (0x01E4 - 0x01E4)
class USFXCustomAction_TurianRifleMeleeTwo : public USFXCustomAction_TurianMeleeOne
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135769 ];

		return pClassPointer;
	};

	void StopMove ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void StopCustomAction ( );
	void EndAction ( );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void DoRifleMeleeTwo ( );
	void RifleMeleeSecondary ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_TurianRifleMeleeTwo::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianRifleMeleeThree
// 0x0000 (0x01E4 - 0x01E4)
class USFXCustomAction_TurianRifleMeleeThree : public USFXCustomAction_TurianRifleMeleeTwo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135770 ];

		return pClassPointer;
	};

	void StopMove ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void StopCustomAction ( );
	void EndAction ( );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void DoRifleMeleeTwo ( );
	void RifleMeleeSecondary ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_TurianRifleMeleeThree::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne
// 0x0004 (0x01E0 - 0x01DC)
class USFXCustomAction_TurianPistolMeleeOne : public USFXCustomAction_PlayerMeleeBase
{
public:
	class UAnimSet*                                    AnimSet;                                          		// 0x01DC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135771 ];

		return pClassPointer;
	};

	void StopMove ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void StopCustomAction ( );
	void EndAction ( );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void DoPistolMeleeTwo ( );
	void PistolMeleeSecondary ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_TurianPistolMeleeOne::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeTwo
// 0x0000 (0x01E0 - 0x01E0)
class USFXCustomAction_TurianPistolMeleeTwo : public USFXCustomAction_TurianPistolMeleeOne
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135772 ];

		return pClassPointer;
	};

	void StopMove ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void StopCustomAction ( );
	void EndAction ( );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void DoPistolMeleeTwo ( );
	void PistolMeleeSecondary ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_TurianPistolMeleeTwo::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeThree
// 0x0000 (0x01E0 - 0x01E0)
class USFXCustomAction_TurianPistolMeleeThree : public USFXCustomAction_TurianPistolMeleeTwo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135773 ];

		return pClassPointer;
	};

	void StopMove ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void StopCustomAction ( );
	void EndAction ( );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void DoPistolMeleeTwo ( );
	void PistolMeleeSecondary ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_TurianPistolMeleeThree::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXDamageType_TurianHeavyMelee
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_TurianHeavyMelee : public USFXDamageType_HeavyMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135939 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_TurianHeavyMelee::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXDamageType_JetPackCharge
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_JetPackCharge : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135971 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_JetPackCharge::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXGameEffect_StimPack
// 0x0006 (0x0068 - 0x0062)
class USFXGameEffect_StimPack : public USFXGameEffect
{
public:
	class USFXPowerCustomActionMP_StimPack*            StimPack;                                         		// 0x0064 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135976 ];

		return pClassPointer;
	};

	void OnRemoved ( );
	void OnApplied ( );
};

UClass* USFXGameEffect_StimPack::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXPawn_PlayerMP_N7Soldier_Turian
// 0x0000 (0x1288 - 0x1288)
class ASFXPawn_PlayerMP_N7Soldier_Turian : public ASFXPawn_PlayerMP_Soldier
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 136011 ];

		return pClassPointer;
	};

	void HealthFailsafe ( );
	void RagdollFailsafe ( );
	void ResetSyncMovementFailsafeInfo ( );
	void ProcessSyncMovementFailsafe ( );
	void Tick ( float DeltaTime );
	bool eventCanDoCustomAction ( int CAction, class APawn* Sync, unsigned long bForced, int PowerCustomAction );
	bool ShouldShowHUDGrenadeCounter ( );
	void UpdateGameEffects ( );
	struct FName GetUIAppearanceTag ( );
	void Destroyed ( );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void SetExecutioner ( class APawn* Killer );
	void AttemptKillingBlow ( class APawn* Killer );
	void UpdateMappedPowerDisplay ( );
	bool CanPlayDeathEffect ( );
	void UseReviveConsumablePower ( );
	void AutoMapPC ( );
	void AutoMapXbox ( );
	bool ShouldTossWeapon ( class ASFXWeapon* ChkWeapon, class ASFXWeapon* NewWeapon );
	bool InCombat ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void LoadWeaponModData ( );
	void LoadPowerData ( );
	bool IsTestFrameworkSetupComplete ( );
	void LoadWeapons ( );
	void CreateWeapons ( class USFXLoadoutData* ChkLoadout, unsigned long bForceFromEngineLoadout );
	struct FString GetFullName ( );
	void DeferredSetRichPresence ( );
	void StopLoadingMovie ( );
	void DeferredPostBeginPlay ( );
	void PostBeginPlay ( );
	void ServerPermaDeath ( );
	void PermaDeath ( );
	void StartSpectatorCam ( );
	void PermaDeadChanged ( );
	bool eventResurrect ( float PercentOfHealthRegained, unsigned long bIsInstantaneous );
	void PreClientTravel ( );
	bool IsReadyForExecution ( class Asfxpawn* Killer );
	void IsDeadUpdated ( );
	void StartRevive ( class ASFXPawn_PlayerParty* TargetPawn );
	void FinalizeProcessFellOutOfWorld ( );
	void ServerFellOutOfWorldImpl ( );
	void eventFellOutOfWorldImpl ( );
	void BioBaseRemovedFromWorld ( );
	void OutsideWorldBounds ( );
	void FellOutOfWorld ( class UClass* dmgType );
	void ApplyCustomizationToActor ( class AActor* InTarget, class USFXCustomizationInstance* InSettings, int UIWorldConfigFlags );
	void GetMPAppearanceVariables ( int* Tint1, int* Tint2, int* Pattern, int* PatternColor, int* Phong, int* Emissive, int* SkinTone );
	void SetMPAppearanceVariables ( int Tint1, int Tint2, int Pattern, int PatternColor, int Phong, int Emissive, int SkinTone );
	void UpdateAppearance ( );
	void CopyPawnAppearance ( class ABioPawn* SourcePawn );
	void CheckEnterCombat ( );
	void PlayerRevivedMessage ( );
	void PlayerKilledMessage ( );
	void eventReplicatedEvent ( struct FName VarName );
	struct FString GetActorGameName ( );
};

UClass* ASFXPawn_PlayerMP_N7Soldier_Turian::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4.SFXProjectile_PowerCustomActionMP_JetPack
// 0x0000 (0x02E1 - 0x02E1)
class ASFXProjectile_PowerCustomActionMP_JetPack : public ASFXProjectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 136196 ];

		return pClassPointer;
	};

	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	bool IsTargettedProjectile ( );
	void Destroyed ( );
	void Tick_Prediction ( float DeltaTime );
	void SetPredictionTarget ( class ASFXProjectile* NewTargetProjectile );
	void SetPrediction ( unsigned long Active, unsigned long bIsATarget );
	void SetPredictedInitialSpeed ( );
	void Reset ( );
	void ReplicatedExplosionUpdated ( );
	void ReplicatedInitUpdated ( );
	void ReplicateExplode ( struct FVector HitLocation, struct FVector HitNormal );
	void ReplicateInit ( struct FVector Direction );
	void eventReplicatedEvent ( struct FName VarName );
	void SpawnImpactEffect ( struct FVector HitLocation, struct FVector HitNormal );
	float GetMomentum ( );
	float GetDamageRadius ( );
	float GetDamage ( );
	void Bounce ( class AActor* HitActor, struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void ApplyExternalForce ( );
	void Tick ( float DeltaTime );
	void ProjEffectsTrailFinished ( class UParticleSystemComponent* PSC );
	void SetProjectileHidden ( unsigned long bHide );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void OutsideWorldBounds ( );
	void FellOutOfWorld ( class UClass* dmgType );
	bool IsShuttingDown ( );
	void ShutDown ( );
	void Init ( struct FVector Direction );
	void ShutdownPostEffects ( );
	void eventReuse ( );
	void eventRecycle ( );
	void SpawnFlightEffects ( );
};

UClass* ASFXProjectile_PowerCustomActionMP_JetPack::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif