/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontent_classes.h
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

#define CONST_SHOTGUN_SMOOTHING_BUFFER                           3

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

// Class sfxgamecontent.sfxprojectile_powercustomaction_seeking
// 0x0041 (0x0465 - 0x0424)
class Asfxprojectile_powercustomaction_seeking : public ASFXProjectile_PowerCustomAction
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0424 (0x000C) MISSED OFFSET
	struct FQuat                                       StartRotation;                                    		// 0x0430 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastValidSeekLocation;                            		// 0x0440 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeAlive;                                        		// 0x044C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurveShape;                                       		// 0x0450 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              UpperBound;                                       		// 0x0454 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              InterpRate;                                       		// 0x0458 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PawnEvadedStopSeekingTime;                        		// 0x045C (0x0004) [0x0000000000000000]              
	unsigned long                                      bSeekingEnabled : 1;                              		// 0x0460 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bExplodeNextFrame : 1;                            		// 0x0460 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bPawnEvaded : 1;                                  		// 0x0460 (0x0004) [0x0000000000002020] [0x00000004] ( CPF_Net | CPF_Transient )
	unsigned char                                      SeekAimNode;                                      		// 0x0464 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106343 ];

		return pClassPointer;
	};

	void Tick_Prediction ( float DeltaTime );
	void Recycle ( );
	void InitializeRotation ( class APawn* oCasterPawn );
	bool InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class Usfxpowercustomaction* oPower );
	void PawnEvadedPower ( class ABioPawn* Pawn, struct FName Label, float TimeBeforeImpact );
	bool CanLockOn ( class AActor* Target, class APawn* CasterPawn );
	void Tick ( float DeltaTime );
	void TickAimRotation ( float DeltaTime, struct FVector SeekVector );
	void TickAim ( float DeltaTime );
	struct FVector GetAimLocation ( class AActor* Target );
	void Timer ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* Asfxprojectile_powercustomaction_seeking::pClassPointer = NULL;

// Class sfxgamecontent.SFXProjectile_PowerCustomAction_SentryTurretRocket
// 0x0000 (0x0465 - 0x0465)
class ASFXProjectile_PowerCustomAction_SentryTurretRocket : public Asfxprojectile_powercustomaction_seeking
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106025 ];

		return pClassPointer;
	};

	void Tick_Prediction ( float DeltaTime );
	void Recycle ( );
	void InitializeRotation ( class APawn* oCasterPawn );
	bool InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class Usfxpowercustomaction* oPower );
	void PawnEvadedPower ( class ABioPawn* Pawn, struct FName Label, float TimeBeforeImpact );
	bool CanLockOn ( class AActor* Target, class APawn* CasterPawn );
	void Tick ( float DeltaTime );
	void TickAimRotation ( float DeltaTime, struct FVector SeekVector );
	void TickAim ( float DeltaTime );
	struct FVector GetAimLocation ( class AActor* Target );
	void Timer ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASFXProjectile_PowerCustomAction_SentryTurretRocket::pClassPointer = NULL;

// Class sfxgamecontent.SFXProjectile_PowerCustomAction_BouncingGrenade
// 0x0000 (0x0444 - 0x0444)
class ASFXProjectile_PowerCustomAction_BouncingGrenade : public ASFXProjectile_PowerCustomAction_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106077 ];

		return pClassPointer;
	};

	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void Recycle ( );
	void Bounce ( class AActor* HitActor, struct FVector HitLocation, struct FVector HitNormal );
	void Tick ( float DeltaTime );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	bool InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class Usfxpowercustomaction* oPower );
	void FuseDone ( );
};

UClass* ASFXProjectile_PowerCustomAction_BouncingGrenade::pClassPointer = NULL;

// Class sfxgamecontent.SFXProjectile_PowerCustomAction_SentryTurret
// 0x0000 (0x0444 - 0x0444)
class ASFXProjectile_PowerCustomAction_SentryTurret : public ASFXProjectile_PowerCustomAction_BouncingGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106078 ];

		return pClassPointer;
	};

	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void Recycle ( );
	void Bounce ( class AActor* HitActor, struct FVector HitLocation, struct FVector HitNormal );
	void Tick ( float DeltaTime );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	bool InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class Usfxpowercustomaction* oPower );
	void FuseDone ( );
};

UClass* ASFXProjectile_PowerCustomAction_SentryTurret::pClassPointer = NULL;

// Class sfxgamecontent.SFXProjectile_PowerCustomAction_CombatDroneRocket
// 0x0000 (0x0465 - 0x0465)
class ASFXProjectile_PowerCustomAction_CombatDroneRocket : public Asfxprojectile_powercustomaction_seeking
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106344 ];

		return pClassPointer;
	};

	void Tick_Prediction ( float DeltaTime );
	void Recycle ( );
	void InitializeRotation ( class APawn* oCasterPawn );
	bool InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class Usfxpowercustomaction* oPower );
	void PawnEvadedPower ( class ABioPawn* Pawn, struct FName Label, float TimeBeforeImpact );
	bool CanLockOn ( class AActor* Target, class APawn* CasterPawn );
	void Tick ( float DeltaTime );
	void TickAimRotation ( float DeltaTime, struct FVector SeekVector );
	void TickAim ( float DeltaTime );
	struct FVector GetAimLocation ( class AActor* Target );
	void Timer ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASFXProjectile_PowerCustomAction_CombatDroneRocket::pClassPointer = NULL;

// Class sfxgamecontent.SFXPowerCustomAction_CombatDroneBase
// 0x000F (0x06A4 - 0x0695)
class USFXPowerCustomAction_CombatDroneBase : public Usfxpowercustomaction
{
public:
	class UClass*                                      DroneClass;                                       		// 0x0698 (0x0004) [0x0000000000000000]              
	class UClass*                                      DroneAIClass;                                     		// 0x069C (0x0004) [0x0000000000000000]              
	float                                              DroneSpawnOffset;                                 		// 0x06A0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106877 ];

		return pClassPointer;
	};

	struct FVector GetBackLocation ( class AActor* Target );
	struct FVector GetFrontLocation ( class AActor* Target, float YawOffset );
	bool IsSafeSpawnLocation ( struct FVector* SpawnLocation );
	void OnDroneKilled ( class ASFXPawn_CombatDroneBase* oDrone );
	void DespawnDrone ( class ASFXPawn_CombatDroneBase* oDrone );
	void SetupSpawnedDrone ( class ASFXPawn_CombatDroneBase* SpawnedDrone );
	class ASFXPawn_CombatDroneBase* SpawnDrone ( struct FVector location, struct FRotator Rotation );
};

UClass* USFXPowerCustomAction_CombatDroneBase::pClassPointer = NULL;

// Class sfxgamecontent.SFXPowerCustomAction_CombatDrone
// 0x0304 (0x09A8 - 0x06A4)
class USFXPowerCustomAction_CombatDrone : public USFXPowerCustomAction_CombatDroneBase
{
public:
	struct FPowerData                                  DroneZapCooldown;                                 		// 0x06A4 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  DroneShields;                                     		// 0x06D4 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  DroneDamage;                                      		// 0x0704 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ExplosionDamage;                                  		// 0x0734 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ExplosionRadius;                                  		// 0x0764 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ExplosionForce;                                   		// 0x0794 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  RocketCooldown;                                   		// 0x07C4 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  RocketDamage;                                     		// 0x07F4 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  RocketForce;                                      		// 0x0824 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  RocketRadius;                                     		// 0x0854 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ShockCooldown;                                    		// 0x0884 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ShockDamage;                                      		// 0x08B4 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ShockForce;                                       		// 0x08E4 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ShockRadius;                                      		// 0x0914 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FAreaEffectParameters                       ExplosionParameters;                              		// 0x0944 (0x0020) [0x0000000000004000]              ( CPF_Config )
	struct FVector                                     DroneDiedLocation;                                		// 0x0964 (0x000C) [0x0000000000000000]              
	int                                                Evolve_NumExtraTargets;                           		// 0x0970 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus;                               		// 0x0974 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldBonus;                               		// 0x0978 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus2;                              		// 0x097C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldBonus2;                              		// 0x0980 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldDamageBonus;                         		// 0x0984 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class Asfxpawn_combatdrone*                        Drone;                                            		// 0x0988 (0x0004) [0x0000000000000000]              
	void*                                              NotRecommended_DroneDeployed;                     		// 0x098C (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_DroneExplosionTemplate;                        		// 0x0990 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_DroneDeathTemplate;                            		// 0x0994 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 DroneExplosionSound;                              		// 0x0998 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 DroneDeathSound;                                  		// 0x099C (0x0004) [0x0000000000000000]              
	float                                              NonCombatTimeout_Length;                          		// 0x09A0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              NonCombatTimeout_UpdateFrequency;                 		// 0x09A4 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106454 ];

		return pClassPointer;
	};

	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void PopulatePowerStatBarEvolves ( );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool OnDeathExplosionImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void OnDroneKilled ( class ASFXPawn_CombatDroneBase* oDrone );
	class UClass* GetDamageType ( );
	void OnPowerRankIncreased ( );
	bool IsDroneAlive ( );
	void SetupSpawnedDrone ( class ASFXPawn_CombatDroneBase* SpawnedDrone );
	void NonCombatDespawnDrone ( );
	void DroneNonCombatCheck ( );
	class ASFXPawn_CombatDroneBase* SpawnDrone ( struct FVector location, struct FRotator Rotation );
	void OnPowerDetonated ( struct FVector HitLocation, struct FVector HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	void StartCustomAction ( );
};

UClass* USFXPowerCustomAction_CombatDrone::pClassPointer = NULL;

// Class sfxgamecontent.SFXSeqEvt_PlaceableActivated
// 0x0000 (0x00D2 - 0x00D2)
class USFXSeqEvt_PlaceableActivated : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106593 ];

		return pClassPointer;
	};

	void eventToggled ( );
	void Reset ( );
	bool PassesWhoTriggers ( class AActor* inInstigator );
	bool CheckActivate ( class AActor* inOriginator, class AActor* inInstigator, unsigned long bTest, unsigned long bPushTop, unsigned long bSFXForceThisFrame, TArray< int >* ActivateIndices );
	void eventRegisterEvent ( );
};

UClass* USFXSeqEvt_PlaceableActivated::pClassPointer = NULL;

// Class sfxgamecontent.SFXSeqEvt_PlaceableDeactivated
// 0x0000 (0x00D2 - 0x00D2)
class USFXSeqEvt_PlaceableDeactivated : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106595 ];

		return pClassPointer;
	};

	void eventToggled ( );
	void Reset ( );
	bool PassesWhoTriggers ( class AActor* inInstigator );
	bool CheckActivate ( class AActor* inOriginator, class AActor* inInstigator, unsigned long bTest, unsigned long bPushTop, unsigned long bSFXForceThisFrame, TArray< int >* ActivateIndices );
	void eventRegisterEvent ( );
};

UClass* USFXSeqEvt_PlaceableDeactivated::pClassPointer = NULL;

// Class sfxgamecontent.SFXSeqEvt_PlaceableDestroyed
// 0x0000 (0x00D2 - 0x00D2)
class USFXSeqEvt_PlaceableDestroyed : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106621 ];

		return pClassPointer;
	};

	void eventToggled ( );
	void Reset ( );
	bool PassesWhoTriggers ( class AActor* inInstigator );
	bool CheckActivate ( class AActor* inOriginator, class AActor* inInstigator, unsigned long bTest, unsigned long bPushTop, unsigned long bSFXForceThisFrame, TArray< int >* ActivateIndices );
	void eventRegisterEvent ( );
};

UClass* USFXSeqEvt_PlaceableDestroyed::pClassPointer = NULL;

// Class sfxgamecontent.SFXSeqEvt_PlaceableReset
// 0x0000 (0x00D2 - 0x00D2)
class USFXSeqEvt_PlaceableReset : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106623 ];

		return pClassPointer;
	};

	void eventToggled ( );
	void Reset ( );
	bool PassesWhoTriggers ( class AActor* inInstigator );
	bool CheckActivate ( class AActor* inOriginator, class AActor* inInstigator, unsigned long bTest, unsigned long bPushTop, unsigned long bSFXForceThisFrame, TArray< int >* ActivateIndices );
	void eventRegisterEvent ( );
};

UClass* USFXSeqEvt_PlaceableReset::pClassPointer = NULL;

// Class sfxgamecontent.SFXPlaceable
// 0x0004 (0x0274 - 0x0270)
class ASFXPlaceable : public ASFXPlaceableBase
{
public:
	unsigned long                                      bReplicatedIsDestroyed : 1;                       		// 0x0270 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bReplicatedIsDeactivated : 1;                     		// 0x0270 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106629 ];

		return pClassPointer;
	};

	void ActivatePlaceable ( );
	void DeactivatePlaceable ( );
	bool AllowPlaceableDamageEvents ( class AController* EventInstigator );
	bool ImpactWithPower ( unsigned char Resistance, class APawn* Caster, struct FVector HitLocation, struct FVector HitNormal, float Damage, struct FVector Force, class UClass* DamageType );
	void AreaDamage ( float Damage, float Force, class UClass* DamageType, float ImpactRadius );
	void AreaDamageForActor ( class AActor* HitActor );
	void PlaceableDestroyed ( );
	void ResetPlaceable ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASFXPlaceable::pClassPointer = NULL;

// Class sfxgamecontent.sfxpowercustomaction_sentryturretshock
// 0x0000 (0x0695 - 0x0695)
class Usfxpowercustomaction_sentryturretshock : public Usfxpowercustomaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106641 ];

		return pClassPointer;
	};

	int GetSaveGamePowerState ( );
	void SetSaveGamePowerState ( int nState );
	struct FName GetUniquePowerPlayerVariable ( );
	void RestoreSaveState ( );
	void ReplicationDecodeDelayAndResistance ( int EncodedData, float* fDelay, unsigned char* Resistance );
	int ReplicationEncodeDelayAndResistance ( float fDelay, unsigned char Resistance );
	void OnSourcePowerBioticDetonation ( );
	struct FString GetPowerComboClassFromUniqueID ( int PowerComboTypeUniqueID );
	int GetPowerComboTypeUniqueIDFromClass ( struct FString className );
	void ClientDoPowerComboImpactFromEffect ( class AActor* oTarget, int CustomActionReactionType, struct FString EffectClassName, float DetonatorPowerRank, int MiscFlags );
	void ClientDoPowerCombo ( class UClass* EffectClass, int SourcePowerID, class ABioPawn* SourcePowerInstigator, class ABioPawn* TargetPawn, struct FVector HitLocation, struct FVector HitNormal );
	void ReplicatePowerCombo ( class Usfxgameeffect_powercombo* ComboEffect, class ABioPawn* TargetPawn, struct FVector HitLocation, struct FVector HitNormal );
	void DelayedDoPowerCombo ( );
	void DoPowerCombo ( class Usfxgameeffect_powercombo* ComboEffect, class ABioPawn* TargetPawn, struct FVector HitLocation, struct FVector HitNormal, unsigned long bDelayed );
	void CheckForPowerCombo ( class AActor* Target, unsigned char Resistance, struct FVector HitLocation, struct FVector HitNormal );
	class Usfxgameeffect_powercombo* AddComboEffect ( class AActor* Target, class UClass* ComboClass, float Duration );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CombatEnded ( );
	void ReplaceAnimSetWithDynamic ( class UAnimSet* DynAnimSet );
	void GetPowerAnimInfo ( class UAnimSet** AnimSet, TArray< struct FName >* AnimNames );
	void CleanUpProjectile ( class ASFXProjectile_PowerCustomAction* oProjectile );
	void ReplicatePowerComboImpact ( class ABioPawn* Target, int CustomActionReactionType, float PowerRank, int PowerComboTypeUniqueID, int MiscFlags );
	void ReplicatePowerSubsequentImpact ( class ABioPawn* Target, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void ClientDoCustomAction ( unsigned long bForced );
	void Replicate ( );
	void PlayPowerScreenShake ( class UClass* ScreenShakeClass, struct FVector HitLocation );
	void PlayPowerControllerRumble ( class UClass* RumbleClass, struct FVector HitLocation );
	struct FVector GetDefaultClientEffectParams ( );
	void AddEvolvedRankBonus ( float Bonus, struct FPowerData* Data );
	void ApplyForceToActor ( class AActor* oActor, struct FVector vForce );
	void ApplyShieldBonus ( class ABioPawn* oPawn, float fShieldValue, unsigned long bShieldValueIsPercent, float fDuration, struct FName Category, unsigned long bRemoveEffectWhenShieldsDown );
	void ApplyHealthBonus ( class ABioPawn* oPawn, float fHealthValue, unsigned long bHealthValueIsPercent, float fDuration, struct FName Category );
	void PlayParticleSystemOnSocket ( class UParticleSystem* PS_Template, class ABioPawn* TargetPawn, struct FName SocketName, struct FRotator Rotation );
	bool HasRemainingShieldOfType ( class ABioPawn* oPawn, class UClass* ShieldClass );
	bool IsPlaceable ( class AActor* oImpacted );
	bool ApplyPermanentGameEffect ( class AActor* oTarget, class UClass* className, float fEffectValue, struct FName nmCategory, class AController* Instigator );
	bool ApplyTemporaryGameEffect ( class AActor* oTarget, class UClass* className, float fDuration, float fEffectValue, struct FName nmCategory, class AController* Instigator );
	bool IsOfRace ( class AActor* oImpacted, unsigned char eRace );
	bool CanBeRagdolledByPowers ( class ABioPawn* oPawn );
	bool ImpactPlaceable ( class AActor* oCaster, class AActor* oImpacted, struct FVector Momentum, float PlotPlaceableDamage, unsigned long bForceDamage );
	float GetPhysicsLevelResistance ( class AActor* oTarget );
	int GetPhysicsLevel ( class AActor* oImpacted, unsigned long bIgnoreResistance );
	bool IsMachineRace ( class AActor* oImpacted );
	bool ShouldUsePowerOnShields ( class ABioPawn* Target, class UClass* DamageType, struct FString* sOptionalInfo );
	void RagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	bool CanImpactActor ( class AActor* oActor );
	bool AddActorToImpactedList ( class AActor* oActor, struct FVector vImpactLocation, TArray< class AActor* >* ImpactedActors );
	bool DetonationHitsTarget ( struct FVector HitLocation, float MaxRange, class AActor* HitActor, struct FAreaEffectParameters DetonationParams );
	bool GetNearbyActors ( struct FVector HitLocation, float Radius, float MaxRange, struct FAreaEffectParameters Param, TArray< class AActor* >* ImpactedActors );
	void ApplyBonusToParameter ( class USFXGameEffect* Bonus, unsigned long bRemove, struct FPowerData* Parameter );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void PlayImpactEffects ( class AActor* oImpacted, struct FVector ImpactLocation, struct FVector ImpactNormal );
	void PlayImpactSounds ( struct FVector ImpactLocation, class UWwiseEvent* BaseSound, TArray< struct FEvolvedSoundStruct >* EvolvedSounds );
	void PlayCasterSounds ( class UWwiseEvent* BaseSound, TArray< struct FEvolvedSoundStruct >* EvolvedSounds );
	void PlayDetonationEffects ( struct FVector ImpactLocation, struct FVector ImpactNormal, class ASFXProjectile_PowerCustomAction* oProjectile );
	void PlayReleaseEffects ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	float GetImpactForce ( class AActor* oImpacted );
	class UClass* GetNonRagdollDamageType ( );
	float GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType );
	bool DoAreaExplosionForActor ( class AActor* oActor, struct FVector location, int ImpactCount, float fDamage, class UClass* DamageType, float fForce, struct FAreaEffectParameters Param, int MaxRagdollOverride, struct FScriptDelegate ImpactCallback, class UClass* MaxRagdollDmgTypeOverride );
	void AreaExplosion ( struct FVector location, float fRadius, float fDamage, class UClass* DamageType, float fForce, struct FAreaEffectParameters Param, int MaxImpactCount, struct FScriptDelegate ImpactCallback, int MaxRagdollOverride, class UClass* MaxRagdollDmgTypeOverride );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ClientDoPowerComboImpact ( class AActor* oActor, int CustomActionReactionType, float PowerRank, int PowerComboTypeUniqueID, int MiscFlags );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	bool DoPowerDetonatedForActor ( class AActor* oActor, struct FVector HitLocation, struct FVector HitNormal, int nImpactCount, unsigned long bFirstTarget, class ASFXProjectile_PowerCustomAction* oProjectile );
	void OnPowerDetonated ( struct FVector HitLocation, struct FVector HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	void ReleaseBuffPower ( );
	void ReleaseMeleePower ( );
	void ReleaseInstantPower ( );
	void OnClientPowerProjectileSpawned ( class ASFXProjectile_PowerCustomAction* NewProjectile );
	class ASFXProjectile_PowerCustomAction* ReleaseProjectilePower ( );
	bool GetProjectileAttachPoint ( struct FVector* AttachPoint );
	void ReleasePower ( );
	void ResetPowerCooldown ( );
	void StartPowerCooldown ( );
	float GetPowerCooldown ( );
	void eventTickCustomAction ( float fDeltaTime );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void EndThisCustomAction ( );
	bool PlayBodyStance ( struct FBodyStance BodyStance, float fStanceBlendInTime, float fStanceBlendOutTime );
	void StartCastAnimations ( );
	void StartPower ( );
	void StartCustomAction ( );
	bool ChangeCoverAction ( );
	struct FBodyStance GetCurrentBodyStance ( );
	bool LoadAnimSet ( );
	bool CanUsePower ( class AActor* oTarget );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* Usfxpowercustomaction_sentryturretshock::pClassPointer = NULL;

// Class sfxgamecontent.sfxpowercustomaction_sentryturretrocket
// 0x0000 (0x0695 - 0x0695)
class Usfxpowercustomaction_sentryturretrocket : public Usfxpowercustomaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106642 ];

		return pClassPointer;
	};

	int GetSaveGamePowerState ( );
	void SetSaveGamePowerState ( int nState );
	struct FName GetUniquePowerPlayerVariable ( );
	void RestoreSaveState ( );
	void ReplicationDecodeDelayAndResistance ( int EncodedData, float* fDelay, unsigned char* Resistance );
	int ReplicationEncodeDelayAndResistance ( float fDelay, unsigned char Resistance );
	void OnSourcePowerBioticDetonation ( );
	struct FString GetPowerComboClassFromUniqueID ( int PowerComboTypeUniqueID );
	int GetPowerComboTypeUniqueIDFromClass ( struct FString className );
	void ClientDoPowerComboImpactFromEffect ( class AActor* oTarget, int CustomActionReactionType, struct FString EffectClassName, float DetonatorPowerRank, int MiscFlags );
	void ClientDoPowerCombo ( class UClass* EffectClass, int SourcePowerID, class ABioPawn* SourcePowerInstigator, class ABioPawn* TargetPawn, struct FVector HitLocation, struct FVector HitNormal );
	void ReplicatePowerCombo ( class Usfxgameeffect_powercombo* ComboEffect, class ABioPawn* TargetPawn, struct FVector HitLocation, struct FVector HitNormal );
	void DelayedDoPowerCombo ( );
	void DoPowerCombo ( class Usfxgameeffect_powercombo* ComboEffect, class ABioPawn* TargetPawn, struct FVector HitLocation, struct FVector HitNormal, unsigned long bDelayed );
	void CheckForPowerCombo ( class AActor* Target, unsigned char Resistance, struct FVector HitLocation, struct FVector HitNormal );
	class Usfxgameeffect_powercombo* AddComboEffect ( class AActor* Target, class UClass* ComboClass, float Duration );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CombatEnded ( );
	void ReplaceAnimSetWithDynamic ( class UAnimSet* DynAnimSet );
	void GetPowerAnimInfo ( class UAnimSet** AnimSet, TArray< struct FName >* AnimNames );
	void CleanUpProjectile ( class ASFXProjectile_PowerCustomAction* oProjectile );
	void ReplicatePowerComboImpact ( class ABioPawn* Target, int CustomActionReactionType, float PowerRank, int PowerComboTypeUniqueID, int MiscFlags );
	void ReplicatePowerSubsequentImpact ( class ABioPawn* Target, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void ClientDoCustomAction ( unsigned long bForced );
	void Replicate ( );
	void PlayPowerScreenShake ( class UClass* ScreenShakeClass, struct FVector HitLocation );
	void PlayPowerControllerRumble ( class UClass* RumbleClass, struct FVector HitLocation );
	struct FVector GetDefaultClientEffectParams ( );
	void AddEvolvedRankBonus ( float Bonus, struct FPowerData* Data );
	void ApplyForceToActor ( class AActor* oActor, struct FVector vForce );
	void ApplyShieldBonus ( class ABioPawn* oPawn, float fShieldValue, unsigned long bShieldValueIsPercent, float fDuration, struct FName Category, unsigned long bRemoveEffectWhenShieldsDown );
	void ApplyHealthBonus ( class ABioPawn* oPawn, float fHealthValue, unsigned long bHealthValueIsPercent, float fDuration, struct FName Category );
	void PlayParticleSystemOnSocket ( class UParticleSystem* PS_Template, class ABioPawn* TargetPawn, struct FName SocketName, struct FRotator Rotation );
	bool HasRemainingShieldOfType ( class ABioPawn* oPawn, class UClass* ShieldClass );
	bool IsPlaceable ( class AActor* oImpacted );
	bool ApplyPermanentGameEffect ( class AActor* oTarget, class UClass* className, float fEffectValue, struct FName nmCategory, class AController* Instigator );
	bool ApplyTemporaryGameEffect ( class AActor* oTarget, class UClass* className, float fDuration, float fEffectValue, struct FName nmCategory, class AController* Instigator );
	bool IsOfRace ( class AActor* oImpacted, unsigned char eRace );
	bool CanBeRagdolledByPowers ( class ABioPawn* oPawn );
	bool ImpactPlaceable ( class AActor* oCaster, class AActor* oImpacted, struct FVector Momentum, float PlotPlaceableDamage, unsigned long bForceDamage );
	float GetPhysicsLevelResistance ( class AActor* oTarget );
	int GetPhysicsLevel ( class AActor* oImpacted, unsigned long bIgnoreResistance );
	bool IsMachineRace ( class AActor* oImpacted );
	bool ShouldUsePowerOnShields ( class ABioPawn* Target, class UClass* DamageType, struct FString* sOptionalInfo );
	void RagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	bool CanImpactActor ( class AActor* oActor );
	bool AddActorToImpactedList ( class AActor* oActor, struct FVector vImpactLocation, TArray< class AActor* >* ImpactedActors );
	bool DetonationHitsTarget ( struct FVector HitLocation, float MaxRange, class AActor* HitActor, struct FAreaEffectParameters DetonationParams );
	bool GetNearbyActors ( struct FVector HitLocation, float Radius, float MaxRange, struct FAreaEffectParameters Param, TArray< class AActor* >* ImpactedActors );
	void ApplyBonusToParameter ( class USFXGameEffect* Bonus, unsigned long bRemove, struct FPowerData* Parameter );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void PlayImpactEffects ( class AActor* oImpacted, struct FVector ImpactLocation, struct FVector ImpactNormal );
	void PlayImpactSounds ( struct FVector ImpactLocation, class UWwiseEvent* BaseSound, TArray< struct FEvolvedSoundStruct >* EvolvedSounds );
	void PlayCasterSounds ( class UWwiseEvent* BaseSound, TArray< struct FEvolvedSoundStruct >* EvolvedSounds );
	void PlayDetonationEffects ( struct FVector ImpactLocation, struct FVector ImpactNormal, class ASFXProjectile_PowerCustomAction* oProjectile );
	void PlayReleaseEffects ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	float GetImpactForce ( class AActor* oImpacted );
	class UClass* GetNonRagdollDamageType ( );
	float GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType );
	bool DoAreaExplosionForActor ( class AActor* oActor, struct FVector location, int ImpactCount, float fDamage, class UClass* DamageType, float fForce, struct FAreaEffectParameters Param, int MaxRagdollOverride, struct FScriptDelegate ImpactCallback, class UClass* MaxRagdollDmgTypeOverride );
	void AreaExplosion ( struct FVector location, float fRadius, float fDamage, class UClass* DamageType, float fForce, struct FAreaEffectParameters Param, int MaxImpactCount, struct FScriptDelegate ImpactCallback, int MaxRagdollOverride, class UClass* MaxRagdollDmgTypeOverride );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ClientDoPowerComboImpact ( class AActor* oActor, int CustomActionReactionType, float PowerRank, int PowerComboTypeUniqueID, int MiscFlags );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	bool DoPowerDetonatedForActor ( class AActor* oActor, struct FVector HitLocation, struct FVector HitNormal, int nImpactCount, unsigned long bFirstTarget, class ASFXProjectile_PowerCustomAction* oProjectile );
	void OnPowerDetonated ( struct FVector HitLocation, struct FVector HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	void ReleaseBuffPower ( );
	void ReleaseMeleePower ( );
	void ReleaseInstantPower ( );
	void OnClientPowerProjectileSpawned ( class ASFXProjectile_PowerCustomAction* NewProjectile );
	class ASFXProjectile_PowerCustomAction* ReleaseProjectilePower ( );
	bool GetProjectileAttachPoint ( struct FVector* AttachPoint );
	void ReleasePower ( );
	void ResetPowerCooldown ( );
	void StartPowerCooldown ( );
	float GetPowerCooldown ( );
	void eventTickCustomAction ( float fDeltaTime );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void EndThisCustomAction ( );
	bool PlayBodyStance ( struct FBodyStance BodyStance, float fStanceBlendInTime, float fStanceBlendOutTime );
	void StartCastAnimations ( );
	void StartPower ( );
	void StartCustomAction ( );
	bool ChangeCoverAction ( );
	struct FBodyStance GetCurrentBodyStance ( );
	bool LoadAnimSet ( );
	bool CanUsePower ( class AActor* oTarget );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* Usfxpowercustomaction_sentryturretrocket::pClassPointer = NULL;

// Class sfxgamecontent.SFXPowerCustomAction_AmmoPower
// 0x0057 (0x06EC - 0x0695)
class USFXPowerCustomAction_AmmoPower : public USFXPowerCustomAction_AmmoPowerBase
{
public:
	class UClass*                                      WeaponPowerEffectClass;                           		// 0x0698 (0x0004) [0x0000000000000000]              
	class UClass*                                      ConcussiveShotDamageType;                         		// 0x069C (0x0004) [0x0000000000000000]              
	struct FGuid                                       OmniToolGuid;                                     		// 0x06A0 (0x0010) [0x0000000000000000]              
	class UStaticMesh*                                 oTracer;                                          		// 0x06B0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             oImpactVFX;                                       		// 0x06B4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             oMuzzleVFX;                                       		// 0x06B8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             oMuzzleLoopVFX;                                   		// 0x06BC (0x0004) [0x0000000000000000]              
	float                                              SquadEffectiveness;                               		// 0x06C0 (0x0004) [0x0000000000000000]              
	void*                                              NotRecommended_HeavyWeaponEquipped;               		// 0x06C4 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ConcussiveShotImpact;                          		// 0x06C8 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ConcussiveShotProjectile;                      		// 0x06CC (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 ConcussiveShotImpactSound;                        		// 0x06D0 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 LoadAmmoPowerSound;                               		// 0x06D4 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 HenchmanLoadAmmoPowerSound;                       		// 0x06D8 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_OmniTool;                                      		// 0x06DC (0x0004) [0x0000000000000000]              
	float                                              OmniToolDuration;                                 		// 0x06E0 (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    DelayedSetWeaponPowerTarget;                      		// 0x06E4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bModifyTracer : 1;                                		// 0x06E8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bModifyImpactVFX : 1;                             		// 0x06E8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bModifyMuzzle : 1;                                		// 0x06E8 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107316 ];

		return pClassPointer;
	};

	void DelayedSetWeaponPower ( );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void DoJoinInProgress ( );
	void SetupEffect ( class USFXGameEffect_AmmoPower* Effect, class ABioPawn* oPawn );
	void OnPowerRankIncreased ( );
	bool ShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	void DoConcussiveShotSpecialImpact ( class AActor* oImpacted, float ImpactEffectDuration );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ReplicateConcussiveShotSpecialImpact ( class ABioPawn* oImpacted, float DurationOfEffect );
	void ConcussiveShotCustomImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon );
	bool SetWeaponPower ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon, unsigned long bOverrideCurrentPower );
	void DeferedSetWeaponPower ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ReloadAmmoPower ( class ABioPawn* Target, class ASFXWeapon* Weapon );
	void StopOmniTool ( );
	void StartCustomAction ( );
	bool CanUsePower ( class AActor* oTarget );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
};

UClass* USFXPowerCustomAction_AmmoPower::pClassPointer = NULL;

// Class sfxgamecontent.SFXPowerCustomAction_SentryTurretArmorPiercingAmmo
// 0x0000 (0x06EC - 0x06EC)
class USFXPowerCustomAction_SentryTurretArmorPiercingAmmo : public USFXPowerCustomAction_AmmoPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106643 ];

		return pClassPointer;
	};

	void DelayedSetWeaponPower ( );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void DoJoinInProgress ( );
	void SetupEffect ( class USFXGameEffect_AmmoPower* Effect, class ABioPawn* oPawn );
	void OnPowerRankIncreased ( );
	bool ShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	void DoConcussiveShotSpecialImpact ( class AActor* oImpacted, float ImpactEffectDuration );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ReplicateConcussiveShotSpecialImpact ( class ABioPawn* oImpacted, float DurationOfEffect );
	void ConcussiveShotCustomImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon );
	bool SetWeaponPower ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon, unsigned long bOverrideCurrentPower );
	void DeferedSetWeaponPower ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ReloadAmmoPower ( class ABioPawn* Target, class ASFXWeapon* Weapon );
	void StopOmniTool ( );
	void StartCustomAction ( );
	bool CanUsePower ( class AActor* oTarget );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
};

UClass* USFXPowerCustomAction_SentryTurretArmorPiercingAmmo::pClassPointer = NULL;

// Class sfxgamecontent.SFXPowerCustomAction_SentryTurretCryoAmmo
// 0x0004 (0x06F0 - 0x06EC)
class USFXPowerCustomAction_SentryTurretCryoAmmo : public USFXPowerCustomAction_AmmoPower
{
public:
	float                                              FreezeChance;                                     		// 0x06EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106644 ];

		return pClassPointer;
	};

	bool eventShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void SetupEffect ( class USFXGameEffect_AmmoPower* Effect, class ABioPawn* oPawn );
	void ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon );
};

UClass* USFXPowerCustomAction_SentryTurretCryoAmmo::pClassPointer = NULL;

// Class sfxgamecontent.SFXPowerCustomAction_SentryTurret
// 0x0297 (0x092C - 0x0695)
class USFXPowerCustomAction_SentryTurret : public Usfxpowercustomaction
{
public:
	struct FPowerData                                  TurretShields;                                    		// 0x0698 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  RocketCooldown;                                   		// 0x06C8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  RocketDamage;                                     		// 0x06F8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  RocketForce;                                      		// 0x0728 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  RocketRadius;                                     		// 0x0758 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  FlamethrowerDamagePerSec;                         		// 0x0788 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  FlamethrowerDamageDuration;                       		// 0x07B8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  FreezeDuration;                                   		// 0x07E8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ShockCooldown;                                    		// 0x0818 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ShockDamage;                                      		// 0x0848 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ShockForce;                                       		// 0x0878 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ShockRadius;                                      		// 0x08A8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FGuid                                       TurretBaseGuid;                                   		// 0x08D8 (0x0010) [0x0000000000000000]              
	struct FVector                                     SpawnLocation;                                    		// 0x08E8 (0x000C) [0x0000000000000000]              
	float                                              Evolve_CryoFreezeChance;                          		// 0x08F4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ArmorPiercingDamage;                       		// 0x08F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldBonus;                               		// 0x08FC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus;                               		// 0x0900 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class Asfxpawn_sentryturret*                       Turret;                                           		// 0x0904 (0x0004) [0x0000000000000000]              
	void*                                              NotRecommended_TurretDeployed;                    		// 0x0908 (0x0004) [0x0000000000000000]              
	float                                              SpawnDelay;                                       		// 0x090C (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_TurretBase;                                    		// 0x0910 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ShutdownEffect;                                		// 0x0914 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_DeathEffect;                                   		// 0x0918 (0x0004) [0x0000000000000000]              
	float                                              SpawnZOffset;                                     		// 0x091C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              NonCombatTimeout_Length;                          		// 0x0920 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              NonCombatTimeout_UpdateFrequency;                 		// 0x0924 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      DeathByShutdown : 1;                              		// 0x0928 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106684 ];

		return pClassPointer;
	};

	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool eventShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	void OnTurretKilled ( class Asfxpawn_sentryturret* oTurret );
	void DespawnTurret ( class Asfxpawn_sentryturret* oTurret );
	void OnPowerRankIncreased ( );
	bool IsTurretAlive ( );
	void SetupCurrentTurret ( );
	void NonCombatDespawnTurret ( );
	void TurretNonCombatCheck ( );
	class Asfxpawn_sentryturret* SpawnTurret ( struct FVector location, struct FRotator Rotation );
	void DelayedSpawn ( );
	void OnPowerDetonated ( struct FVector HitLocation, struct FVector HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	void StartCustomAction ( );
};

UClass* USFXPowerCustomAction_SentryTurret::pClassPointer = NULL;

// Class sfxgamecontent.sfxpawn_sentryturret
// 0x0058 (0x0D98 - 0x0D40)
class Asfxpawn_sentryturret : public Asfxpawn
{
public:
	struct FScriptDelegate                             __OnTurretKilled__Delegate;                       		// 0x0D40 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       TurretVFXGuid;                                    		// 0x0D4C (0x0010) [0x0000000000000000]              
	struct FGuid                                       TurretBaseVFXGuid;                                		// 0x0D5C (0x0010) [0x0000000000000000]              
	struct FReplicatedTurretCreator                    ReplicatedTurretCreatorInfo;                      		// 0x0D6C (0x0008) [0x0000000000000020]              ( CPF_Net )
	class URvrClientEffectInterface*                   CE_TurretTemplate;                                		// 0x0D74 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_PlayerTurretTemplate;                          		// 0x0D78 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MIC_TurretHealth;                                 		// 0x0D7C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UWwiseEvent*                                 SpawnSound;                                       		// 0x0D80 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 DiedSound;                                        		// 0x0D84 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 LoopingSound;                                     		// 0x0D88 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 StopLoopingSound;                                 		// 0x0D8C (0x0004) [0x0000000000000000]              
	class AActor*                                      Caster;                                           		// 0x0D90 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLoopSoundActive : 1;                             		// 0x0D94 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasShock : 1;                                    		// 0x0D94 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsClientSideInitialized : 1;                     		// 0x0D94 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106711 ];

		return pClassPointer;
	};

	class AActor* GetPetOwner ( );
	void PlayDeathVocalization ( class ABioPawn* Killer );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc );
	void TakeDamage ( float DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void TurretCreatorInfoUpdated ( );
	void eventReplicatedEvent ( struct FName VarName );
	void StartVFX ( );
	void SetupCasterAndReplication ( class AActor* NewCaster, int CasterPowerCustomAction );
	void PostBeginPlay ( );
	void OnTurretKilled ( class Asfxpawn_sentryturret* oTurret );
};

UClass* Asfxpawn_sentryturret::pClassPointer = NULL;

// Class sfxgamecontent.SFXPowerCustomAction_Decoy
// 0x020B (0x08A0 - 0x0695)
class USFXPowerCustomAction_Decoy : public Usfxpowercustomaction
{
public:
	struct FPowerData                                  DecoyShields;                                     		// 0x0698 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ExplosionDamage;                                  		// 0x06C8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ExplosionForce;                                   		// 0x06F8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ExplosionRadius;                                  		// 0x0728 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ShockDamage;                                      		// 0x0758 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ShockForce;                                       		// 0x0788 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ShockRadius;                                      		// 0x07B8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  DecoyDamageProtection;                            		// 0x07E8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UClass*                                      DecoyClass;                                       		// 0x0818 (0x0004) [0x0000000000000000]              
	class UClass*                                      DecoyAIClass;                                     		// 0x081C (0x0004) [0x0000000000000000]              
	struct FAreaEffectParameters                       ExplosionParameters;                              		// 0x0820 (0x0020) [0x0000000000004000]              ( CPF_Config )
	struct FAreaEffectParameters                       ShockParameters;                                  		// 0x0840 (0x0020) [0x0000000000004000]              ( CPF_Config )
	class URvrClientEffectInterface*                   CE_DecoyExplosionTemplate;                        		// 0x0860 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ShockExplosionImpact;                          		// 0x0864 (0x0004) [0x0000000000000000]              
	class Asfxpawn_decoy*                              DecoyPawn;                                        		// 0x0868 (0x0004) [0x0000000000000000]              
	float                                              DecoySpawnOffset;                                 		// 0x086C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DurationBonus;                             		// 0x0870 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldBonus;                               		// 0x0874 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ExplosionRadius;                           		// 0x0878 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RechargeSpeedBonus;                        		// 0x087C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DurationBonus2;                            		// 0x0880 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldBonus2;                              		// 0x0884 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShockRadius;                               		// 0x0888 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class UWwiseEvent*                                 ExplosionSound;                                   		// 0x088C (0x0004) [0x0000000000000000]              
	float                                              ShockCooldown;                                    		// 0x0890 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class URvrClientEffectInterface*                   CE_ShockTemplate;                                 		// 0x0894 (0x0004) [0x0000000000000000]              
	float                                              DistAboveFloor;                                   		// 0x0898 (0x0004) [0x0000000000000000]              
	unsigned long                                      UserDespawn : 1;                                  		// 0x089C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106769 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void EvolvePower ( unsigned char choice );
	void RecalculateAllPowerData ( unsigned long bReset );
	void OnPowerRankIncreased ( );
	bool IsDecoyAlive ( );
	void SetupSpawnedDecoy ( class Asfxpawn_decoy* SpawnedDecoy );
	void OnPowerDetonated ( struct FVector HitLocation, struct FVector HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	void StartCustomAction ( );
	bool IsSafeSpawnLocation ( struct FVector* SpawnLocation );
	bool CanImpactActor ( class AActor* oActor );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void ReplicatePowerSubsequentImpact ( class ABioPawn* Target, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	bool OnShockImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	bool OnDeathExplosionImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void DecoyKilledExplosion ( class Asfxpawn_decoy* oDecoy );
	void OnDecoyKilled ( class Asfxpawn_decoy* oDecoy );
	void DespawnDecoy ( class Asfxpawn_decoy* oDecoy );
	void CastShock ( );
	class Asfxpawn_decoy* SpawnDecoy ( struct FVector location, struct FRotator Rotation );
};

UClass* USFXPowerCustomAction_Decoy::pClassPointer = NULL;

// Class sfxgamecontent.sfxpawn_decoy
// 0x0054 (0x0D94 - 0x0D40)
class Asfxpawn_decoy : public Asfxpawn
{
public:
	struct FScriptDelegate                             __OnDecoyKilled__Delegate;                        		// 0x0D40 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       DecoyVFXGuid;                                     		// 0x0D4C (0x0010) [0x0000000000000000]              
	struct FReplicatedDecoyCreator                     ReplicatedDecoyCreatorInfo;                       		// 0x0D5C (0x0008) [0x0000000000000020]              ( CPF_Net )
	class URvrClientEffectInterface*                   CE_DecoyTemplate;                                 		// 0x0D64 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0D68 (0x0004) [0x0000000000000000]              
	float                                              ShockRadius;                                      		// 0x0D6C (0x0004) [0x0000000000000000]              
	class USFXPowerCustomAction_Decoy*                 DecoyPower;                                       		// 0x0D70 (0x0004) [0x0000000000000000]              
	float                                              ShockCooldown;                                    		// 0x0D74 (0x0004) [0x0000000000000000]              
	float                                              LastTimeShocked;                                  		// 0x0D78 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 SpawnSound;                                       		// 0x0D7C (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 DeathSound;                                       		// 0x0D80 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 LoopingSound;                                     		// 0x0D84 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 StopLoopingSound;                                 		// 0x0D88 (0x0004) [0x0000000000000000]              
	class AActor*                                      Caster;                                           		// 0x0D8C (0x0004) [0x0000000000000000]              
	unsigned long                                      bDecoyVFXStopped : 1;                             		// 0x0D90 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bExplosiveCooldown : 1;                           		// 0x0D90 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsClientSideInitialized : 1;                     		// 0x0D90 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106784 ];

		return pClassPointer;
	};

	class AActor* GetPetOwner ( );
	void ShockCollideTest ( );
	void eventDestroyed ( );
	void StartDecoyVFX ( );
	void SetDeathTimer ( );
	void PostBeginPlay ( );
	void PlayDeathVocalization ( class ABioPawn* Killer );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc );
	void PlayDyingHelper ( );
	void DecoyCreatorInfoUpdated ( );
	void eventReplicatedEvent ( struct FName VarName );
	void SetupCasterAndReplication ( class AActor* NewCaster );
	void OnDecoyKilled ( class Asfxpawn_decoy* oDecoy );
};

UClass* Asfxpawn_decoy::pClassPointer = NULL;

// Class sfxgamecontent.SFXPowerCustomAction_CombatDroneRocket
// 0x0000 (0x0695 - 0x0695)
class USFXPowerCustomAction_CombatDroneRocket : public Usfxpowercustomaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106795 ];

		return pClassPointer;
	};

	int GetSaveGamePowerState ( );
	void SetSaveGamePowerState ( int nState );
	struct FName GetUniquePowerPlayerVariable ( );
	void RestoreSaveState ( );
	void ReplicationDecodeDelayAndResistance ( int EncodedData, float* fDelay, unsigned char* Resistance );
	int ReplicationEncodeDelayAndResistance ( float fDelay, unsigned char Resistance );
	void OnSourcePowerBioticDetonation ( );
	struct FString GetPowerComboClassFromUniqueID ( int PowerComboTypeUniqueID );
	int GetPowerComboTypeUniqueIDFromClass ( struct FString className );
	void ClientDoPowerComboImpactFromEffect ( class AActor* oTarget, int CustomActionReactionType, struct FString EffectClassName, float DetonatorPowerRank, int MiscFlags );
	void ClientDoPowerCombo ( class UClass* EffectClass, int SourcePowerID, class ABioPawn* SourcePowerInstigator, class ABioPawn* TargetPawn, struct FVector HitLocation, struct FVector HitNormal );
	void ReplicatePowerCombo ( class Usfxgameeffect_powercombo* ComboEffect, class ABioPawn* TargetPawn, struct FVector HitLocation, struct FVector HitNormal );
	void DelayedDoPowerCombo ( );
	void DoPowerCombo ( class Usfxgameeffect_powercombo* ComboEffect, class ABioPawn* TargetPawn, struct FVector HitLocation, struct FVector HitNormal, unsigned long bDelayed );
	void CheckForPowerCombo ( class AActor* Target, unsigned char Resistance, struct FVector HitLocation, struct FVector HitNormal );
	class Usfxgameeffect_powercombo* AddComboEffect ( class AActor* Target, class UClass* ComboClass, float Duration );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CombatEnded ( );
	void ReplaceAnimSetWithDynamic ( class UAnimSet* DynAnimSet );
	void GetPowerAnimInfo ( class UAnimSet** AnimSet, TArray< struct FName >* AnimNames );
	void CleanUpProjectile ( class ASFXProjectile_PowerCustomAction* oProjectile );
	void ReplicatePowerComboImpact ( class ABioPawn* Target, int CustomActionReactionType, float PowerRank, int PowerComboTypeUniqueID, int MiscFlags );
	void ReplicatePowerSubsequentImpact ( class ABioPawn* Target, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void ClientDoCustomAction ( unsigned long bForced );
	void Replicate ( );
	void PlayPowerScreenShake ( class UClass* ScreenShakeClass, struct FVector HitLocation );
	void PlayPowerControllerRumble ( class UClass* RumbleClass, struct FVector HitLocation );
	struct FVector GetDefaultClientEffectParams ( );
	void AddEvolvedRankBonus ( float Bonus, struct FPowerData* Data );
	void ApplyForceToActor ( class AActor* oActor, struct FVector vForce );
	void ApplyShieldBonus ( class ABioPawn* oPawn, float fShieldValue, unsigned long bShieldValueIsPercent, float fDuration, struct FName Category, unsigned long bRemoveEffectWhenShieldsDown );
	void ApplyHealthBonus ( class ABioPawn* oPawn, float fHealthValue, unsigned long bHealthValueIsPercent, float fDuration, struct FName Category );
	void PlayParticleSystemOnSocket ( class UParticleSystem* PS_Template, class ABioPawn* TargetPawn, struct FName SocketName, struct FRotator Rotation );
	bool HasRemainingShieldOfType ( class ABioPawn* oPawn, class UClass* ShieldClass );
	bool IsPlaceable ( class AActor* oImpacted );
	bool ApplyPermanentGameEffect ( class AActor* oTarget, class UClass* className, float fEffectValue, struct FName nmCategory, class AController* Instigator );
	bool ApplyTemporaryGameEffect ( class AActor* oTarget, class UClass* className, float fDuration, float fEffectValue, struct FName nmCategory, class AController* Instigator );
	bool IsOfRace ( class AActor* oImpacted, unsigned char eRace );
	bool CanBeRagdolledByPowers ( class ABioPawn* oPawn );
	bool ImpactPlaceable ( class AActor* oCaster, class AActor* oImpacted, struct FVector Momentum, float PlotPlaceableDamage, unsigned long bForceDamage );
	float GetPhysicsLevelResistance ( class AActor* oTarget );
	int GetPhysicsLevel ( class AActor* oImpacted, unsigned long bIgnoreResistance );
	bool IsMachineRace ( class AActor* oImpacted );
	bool ShouldUsePowerOnShields ( class ABioPawn* Target, class UClass* DamageType, struct FString* sOptionalInfo );
	void RagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	bool CanImpactActor ( class AActor* oActor );
	bool AddActorToImpactedList ( class AActor* oActor, struct FVector vImpactLocation, TArray< class AActor* >* ImpactedActors );
	bool DetonationHitsTarget ( struct FVector HitLocation, float MaxRange, class AActor* HitActor, struct FAreaEffectParameters DetonationParams );
	bool GetNearbyActors ( struct FVector HitLocation, float Radius, float MaxRange, struct FAreaEffectParameters Param, TArray< class AActor* >* ImpactedActors );
	void ApplyBonusToParameter ( class USFXGameEffect* Bonus, unsigned long bRemove, struct FPowerData* Parameter );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void PlayImpactEffects ( class AActor* oImpacted, struct FVector ImpactLocation, struct FVector ImpactNormal );
	void PlayImpactSounds ( struct FVector ImpactLocation, class UWwiseEvent* BaseSound, TArray< struct FEvolvedSoundStruct >* EvolvedSounds );
	void PlayCasterSounds ( class UWwiseEvent* BaseSound, TArray< struct FEvolvedSoundStruct >* EvolvedSounds );
	void PlayDetonationEffects ( struct FVector ImpactLocation, struct FVector ImpactNormal, class ASFXProjectile_PowerCustomAction* oProjectile );
	void PlayReleaseEffects ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	float GetImpactForce ( class AActor* oImpacted );
	class UClass* GetNonRagdollDamageType ( );
	float GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType );
	bool DoAreaExplosionForActor ( class AActor* oActor, struct FVector location, int ImpactCount, float fDamage, class UClass* DamageType, float fForce, struct FAreaEffectParameters Param, int MaxRagdollOverride, struct FScriptDelegate ImpactCallback, class UClass* MaxRagdollDmgTypeOverride );
	void AreaExplosion ( struct FVector location, float fRadius, float fDamage, class UClass* DamageType, float fForce, struct FAreaEffectParameters Param, int MaxImpactCount, struct FScriptDelegate ImpactCallback, int MaxRagdollOverride, class UClass* MaxRagdollDmgTypeOverride );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ClientDoPowerComboImpact ( class AActor* oActor, int CustomActionReactionType, float PowerRank, int PowerComboTypeUniqueID, int MiscFlags );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	bool DoPowerDetonatedForActor ( class AActor* oActor, struct FVector HitLocation, struct FVector HitNormal, int nImpactCount, unsigned long bFirstTarget, class ASFXProjectile_PowerCustomAction* oProjectile );
	void OnPowerDetonated ( struct FVector HitLocation, struct FVector HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	void ReleaseBuffPower ( );
	void ReleaseMeleePower ( );
	void ReleaseInstantPower ( );
	void OnClientPowerProjectileSpawned ( class ASFXProjectile_PowerCustomAction* NewProjectile );
	class ASFXProjectile_PowerCustomAction* ReleaseProjectilePower ( );
	bool GetProjectileAttachPoint ( struct FVector* AttachPoint );
	void ReleasePower ( );
	void ResetPowerCooldown ( );
	void StartPowerCooldown ( );
	float GetPowerCooldown ( );
	void eventTickCustomAction ( float fDeltaTime );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void EndThisCustomAction ( );
	bool PlayBodyStance ( struct FBodyStance BodyStance, float fStanceBlendInTime, float fStanceBlendOutTime );
	void StartCastAnimations ( );
	void StartPower ( );
	void StartCustomAction ( );
	bool ChangeCoverAction ( );
	struct FBodyStance GetCurrentBodyStance ( );
	bool LoadAnimSet ( );
	bool CanUsePower ( class AActor* oTarget );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXPowerCustomAction_CombatDroneRocket::pClassPointer = NULL;

// Class sfxgamecontent.sfxpowercustomaction_combatdroneshock
// 0x0000 (0x0695 - 0x0695)
class Usfxpowercustomaction_combatdroneshock : public Usfxpowercustomaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106796 ];

		return pClassPointer;
	};

	int GetSaveGamePowerState ( );
	void SetSaveGamePowerState ( int nState );
	struct FName GetUniquePowerPlayerVariable ( );
	void RestoreSaveState ( );
	void ReplicationDecodeDelayAndResistance ( int EncodedData, float* fDelay, unsigned char* Resistance );
	int ReplicationEncodeDelayAndResistance ( float fDelay, unsigned char Resistance );
	void OnSourcePowerBioticDetonation ( );
	struct FString GetPowerComboClassFromUniqueID ( int PowerComboTypeUniqueID );
	int GetPowerComboTypeUniqueIDFromClass ( struct FString className );
	void ClientDoPowerComboImpactFromEffect ( class AActor* oTarget, int CustomActionReactionType, struct FString EffectClassName, float DetonatorPowerRank, int MiscFlags );
	void ClientDoPowerCombo ( class UClass* EffectClass, int SourcePowerID, class ABioPawn* SourcePowerInstigator, class ABioPawn* TargetPawn, struct FVector HitLocation, struct FVector HitNormal );
	void ReplicatePowerCombo ( class Usfxgameeffect_powercombo* ComboEffect, class ABioPawn* TargetPawn, struct FVector HitLocation, struct FVector HitNormal );
	void DelayedDoPowerCombo ( );
	void DoPowerCombo ( class Usfxgameeffect_powercombo* ComboEffect, class ABioPawn* TargetPawn, struct FVector HitLocation, struct FVector HitNormal, unsigned long bDelayed );
	void CheckForPowerCombo ( class AActor* Target, unsigned char Resistance, struct FVector HitLocation, struct FVector HitNormal );
	class Usfxgameeffect_powercombo* AddComboEffect ( class AActor* Target, class UClass* ComboClass, float Duration );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CombatEnded ( );
	void ReplaceAnimSetWithDynamic ( class UAnimSet* DynAnimSet );
	void GetPowerAnimInfo ( class UAnimSet** AnimSet, TArray< struct FName >* AnimNames );
	void CleanUpProjectile ( class ASFXProjectile_PowerCustomAction* oProjectile );
	void ReplicatePowerComboImpact ( class ABioPawn* Target, int CustomActionReactionType, float PowerRank, int PowerComboTypeUniqueID, int MiscFlags );
	void ReplicatePowerSubsequentImpact ( class ABioPawn* Target, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void ClientDoCustomAction ( unsigned long bForced );
	void Replicate ( );
	void PlayPowerScreenShake ( class UClass* ScreenShakeClass, struct FVector HitLocation );
	void PlayPowerControllerRumble ( class UClass* RumbleClass, struct FVector HitLocation );
	struct FVector GetDefaultClientEffectParams ( );
	void AddEvolvedRankBonus ( float Bonus, struct FPowerData* Data );
	void ApplyForceToActor ( class AActor* oActor, struct FVector vForce );
	void ApplyShieldBonus ( class ABioPawn* oPawn, float fShieldValue, unsigned long bShieldValueIsPercent, float fDuration, struct FName Category, unsigned long bRemoveEffectWhenShieldsDown );
	void ApplyHealthBonus ( class ABioPawn* oPawn, float fHealthValue, unsigned long bHealthValueIsPercent, float fDuration, struct FName Category );
	void PlayParticleSystemOnSocket ( class UParticleSystem* PS_Template, class ABioPawn* TargetPawn, struct FName SocketName, struct FRotator Rotation );
	bool HasRemainingShieldOfType ( class ABioPawn* oPawn, class UClass* ShieldClass );
	bool IsPlaceable ( class AActor* oImpacted );
	bool ApplyPermanentGameEffect ( class AActor* oTarget, class UClass* className, float fEffectValue, struct FName nmCategory, class AController* Instigator );
	bool ApplyTemporaryGameEffect ( class AActor* oTarget, class UClass* className, float fDuration, float fEffectValue, struct FName nmCategory, class AController* Instigator );
	bool IsOfRace ( class AActor* oImpacted, unsigned char eRace );
	bool CanBeRagdolledByPowers ( class ABioPawn* oPawn );
	bool ImpactPlaceable ( class AActor* oCaster, class AActor* oImpacted, struct FVector Momentum, float PlotPlaceableDamage, unsigned long bForceDamage );
	float GetPhysicsLevelResistance ( class AActor* oTarget );
	int GetPhysicsLevel ( class AActor* oImpacted, unsigned long bIgnoreResistance );
	bool IsMachineRace ( class AActor* oImpacted );
	bool ShouldUsePowerOnShields ( class ABioPawn* Target, class UClass* DamageType, struct FString* sOptionalInfo );
	void RagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	bool CanImpactActor ( class AActor* oActor );
	bool AddActorToImpactedList ( class AActor* oActor, struct FVector vImpactLocation, TArray< class AActor* >* ImpactedActors );
	bool DetonationHitsTarget ( struct FVector HitLocation, float MaxRange, class AActor* HitActor, struct FAreaEffectParameters DetonationParams );
	bool GetNearbyActors ( struct FVector HitLocation, float Radius, float MaxRange, struct FAreaEffectParameters Param, TArray< class AActor* >* ImpactedActors );
	void ApplyBonusToParameter ( class USFXGameEffect* Bonus, unsigned long bRemove, struct FPowerData* Parameter );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void PlayImpactEffects ( class AActor* oImpacted, struct FVector ImpactLocation, struct FVector ImpactNormal );
	void PlayImpactSounds ( struct FVector ImpactLocation, class UWwiseEvent* BaseSound, TArray< struct FEvolvedSoundStruct >* EvolvedSounds );
	void PlayCasterSounds ( class UWwiseEvent* BaseSound, TArray< struct FEvolvedSoundStruct >* EvolvedSounds );
	void PlayDetonationEffects ( struct FVector ImpactLocation, struct FVector ImpactNormal, class ASFXProjectile_PowerCustomAction* oProjectile );
	void PlayReleaseEffects ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	float GetImpactForce ( class AActor* oImpacted );
	class UClass* GetNonRagdollDamageType ( );
	float GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType );
	bool DoAreaExplosionForActor ( class AActor* oActor, struct FVector location, int ImpactCount, float fDamage, class UClass* DamageType, float fForce, struct FAreaEffectParameters Param, int MaxRagdollOverride, struct FScriptDelegate ImpactCallback, class UClass* MaxRagdollDmgTypeOverride );
	void AreaExplosion ( struct FVector location, float fRadius, float fDamage, class UClass* DamageType, float fForce, struct FAreaEffectParameters Param, int MaxImpactCount, struct FScriptDelegate ImpactCallback, int MaxRagdollOverride, class UClass* MaxRagdollDmgTypeOverride );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ClientDoPowerComboImpact ( class AActor* oActor, int CustomActionReactionType, float PowerRank, int PowerComboTypeUniqueID, int MiscFlags );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	bool DoPowerDetonatedForActor ( class AActor* oActor, struct FVector HitLocation, struct FVector HitNormal, int nImpactCount, unsigned long bFirstTarget, class ASFXProjectile_PowerCustomAction* oProjectile );
	void OnPowerDetonated ( struct FVector HitLocation, struct FVector HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	void ReleaseBuffPower ( );
	void ReleaseMeleePower ( );
	void ReleaseInstantPower ( );
	void OnClientPowerProjectileSpawned ( class ASFXProjectile_PowerCustomAction* NewProjectile );
	class ASFXProjectile_PowerCustomAction* ReleaseProjectilePower ( );
	bool GetProjectileAttachPoint ( struct FVector* AttachPoint );
	void ReleasePower ( );
	void ResetPowerCooldown ( );
	void StartPowerCooldown ( );
	float GetPowerCooldown ( );
	void eventTickCustomAction ( float fDeltaTime );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void EndThisCustomAction ( );
	bool PlayBodyStance ( struct FBodyStance BodyStance, float fStanceBlendInTime, float fStanceBlendOutTime );
	void StartCastAnimations ( );
	void StartPower ( );
	void StartCustomAction ( );
	bool ChangeCoverAction ( );
	struct FBodyStance GetCurrentBodyStance ( );
	bool LoadAnimSet ( );
	bool CanUsePower ( class AActor* oTarget );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* Usfxpowercustomaction_combatdroneshock::pClassPointer = NULL;

// Class sfxgamecontent.SFXPawn_CombatDroneBase
// 0x001C (0x0D5C - 0x0D40)
class ASFXPawn_CombatDroneBase : public Asfxpawn
{
public:
	struct FScriptDelegate                             __OnDroneKilled__Delegate;                        		// 0x0D40 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FReplicatedDroneCreator                     ReplicatedDroneCreatorInfo;                       		// 0x0D4C (0x0008) [0x0000000000000020]              ( CPF_Net )
	class AActor*                                      Caster;                                           		// 0x0D54 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsClientSideInitialized : 1;                     		// 0x0D58 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107488 ];

		return pClassPointer;
	};

	class AActor* GetPetOwner ( );
	void PlayDeathVocalization ( class ABioPawn* Killer );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc );
	void DroneCreatorInfoUpdated ( );
	void eventReplicatedEvent ( struct FName VarName );
	void SetupCasterAndReplication ( class AActor* NewCaster );
	void OnDroneKilled ( class ASFXPawn_CombatDroneBase* oDrone );
};

UClass* ASFXPawn_CombatDroneBase::pClassPointer = NULL;

// Class sfxgamecontent.sfxpawn_combatdrone
// 0x003C (0x0D98 - 0x0D5C)
class Asfxpawn_combatdrone : public ASFXPawn_CombatDroneBase
{
public:
	struct FGuid                                       DroneVFXGuid;                                     		// 0x0D5C (0x0010) [0x0000000000000000]              
	struct FVector                                     ClientEffectParameters;                           		// 0x0D6C (0x000C) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_DroneTemplate;                                 		// 0x0D78 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_PlayerDroneTemplate;                           		// 0x0D7C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MIC_DroneHealth;                                  		// 0x0D80 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UWwiseEvent*                                 SpawnSound;                                       		// 0x0D84 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 DeathSound;                                       		// 0x0D88 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 LoopingSound;                                     		// 0x0D8C (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 StopLoopingSound;                                 		// 0x0D90 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDroneVFXStopped : 1;                             		// 0x0D94 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106844 ];

		return pClassPointer;
	};

	void PlayDying ( class UClass* DamageType, struct FVector HitLoc );
	void TakeDamage ( float DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void StartDroneVFX ( );
	void SetupCasterAndReplication ( class AActor* NewCaster );
	void PostBeginPlay ( );
};

UClass* Asfxpawn_combatdrone::pClassPointer = NULL;

// Class sfxgamecontent.SFXGUI_HeavyWeaponReticle
// 0x000C (0x0098 - 0x008C)
class USFXGUI_HeavyWeaponReticle : public USFXGUI_WeaponReticleBase
{
public:
	class UGFxValue*                                   m_oActualReticle;                                 		// 0x008C (0x0004) [0x0000000000000000]              
	class UGFxValue*                                   m_oAmmoText;                                      		// 0x0090 (0x0004) [0x0000000000000000]              
	class UGFxValue*                                   m_oReticleBG;                                     		// 0x0094 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106906 ];

		return pClassPointer;
	};

	void eventTargetCanHitChanged ( unsigned long bCanHit );
	void eventWeaponAmmoChanged ( int nAmmo );
	void OnReticleLoaded ( );
	void eventPerformReticleHide ( unsigned long bInstant );
	void eventPerformReticleShow ( unsigned long bInstant );
};

UClass* USFXGUI_HeavyWeaponReticle::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_WeaponVFXChange
// 0x001A (0x007C - 0x0062)
class USFXGameEffect_WeaponVFXChange : public USFXGameEffect
{
public:
	class UStaticMesh*                                 Tracer;                                           		// 0x0064 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             oMuzzleVFX;                                       		// 0x0068 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             oMuzzleLoopVFX;                                   		// 0x006C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             oImpactVFX;                                       		// 0x0070 (0x0004) [0x0000000000000000]              
	class ASFXWeapon*                                  OwnerWeapon;                                      		// 0x0074 (0x0004) [0x0000000000000000]              
	unsigned long                                      bModifyTracer : 1;                                		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bModifyMuzzleFlash : 1;                           		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bModifyImpactVFX : 1;                             		// 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106918 ];

		return pClassPointer;
	};

	void OnRemoved ( );
	void OnApplied ( );
};

UClass* USFXGameEffect_WeaponVFXChange::pClassPointer = NULL;

// Class sfxgamecontent.SFXRumble_Power_FireCombo
// 0x0000 (0x0048 - 0x0048)
class USFXRumble_Power_FireCombo : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106928 ];

		return pClassPointer;
	};

};

UClass* USFXRumble_Power_FireCombo::pClassPointer = NULL;

// Class sfxgamecontent.SFXShake_Power_FireCombo
// 0x0000 (0x00BC - 0x00BC)
class USFXShake_Power_FireCombo : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106929 ];

		return pClassPointer;
	};

};

UClass* USFXShake_Power_FireCombo::pClassPointer = NULL;

// Class sfxgamecontent.SFXRumble_Power_ElectricCombo
// 0x0000 (0x0048 - 0x0048)
class USFXRumble_Power_ElectricCombo : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106964 ];

		return pClassPointer;
	};

};

UClass* USFXRumble_Power_ElectricCombo::pClassPointer = NULL;

// Class sfxgamecontent.SFXShake_Power_ElectricCombo
// 0x0000 (0x00BC - 0x00BC)
class USFXShake_Power_ElectricCombo : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106965 ];

		return pClassPointer;
	};

};

UClass* USFXShake_Power_ElectricCombo::pClassPointer = NULL;

// Class sfxgamecontent.sfxgameeffect_powercombo_electric
// 0x0004 (0x00F4 - 0x00F0)
class Usfxgameeffect_powercombo_electric : public Usfxgameeffect_powercombo
{
public:
	float                                              BeamDuration;                                     		// 0x00F0 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106977 ];

		return pClassPointer;
	};

	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* Usfxgameeffect_powercombo_electric::pClassPointer = NULL;

// Class sfxgamecontent.SFXRumble_Power_CryoCombo
// 0x0000 (0x0048 - 0x0048)
class USFXRumble_Power_CryoCombo : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106980 ];

		return pClassPointer;
	};

};

UClass* USFXRumble_Power_CryoCombo::pClassPointer = NULL;

// Class sfxgamecontent.SFXShake_Power_CryoCombo
// 0x0000 (0x00BC - 0x00BC)
class USFXShake_Power_CryoCombo : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106981 ];

		return pClassPointer;
	};

};

UClass* USFXShake_Power_CryoCombo::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_IgnorePawn
// 0x0006 (0x0068 - 0x0062)
class USFXGameEffect_IgnorePawn : public USFXGameEffect
{
public:
	unsigned long                                      bAffectHenchmen : 1;                              		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107024 ];

		return pClassPointer;
	};

	void OnRemoved ( );
	void OnApplied ( );
};

UClass* USFXGameEffect_IgnorePawn::pClassPointer = NULL;

// Class sfxgamecontent.sfxgameeffect_powercombo_fire
// 0x0020 (0x0110 - 0x00F0)
class Usfxgameeffect_powercombo_fire : public Usfxgameeffect_powercombo
{
public:
	struct FVector2D                                   DamagePerSecond;                                  		// 0x00F0 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FVector2D                                   DoTDuration;                                      		// 0x00F8 (0x0008) [0x0000000000004000]              ( CPF_Config )
	class UParticleSystem*                             PS_FlameEffect;                                   		// 0x0100 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	int                                                NumFlameEffects;                                  		// 0x0104 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                NumFlameEffectsMP;                                		// 0x0108 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bHideBodyOnDetonation : 1;                        		// 0x010C (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107041 ];

		return pClassPointer;
	};

	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void OnPowerComboDetonated ( class Usfxpowercustomaction* DetonationPower, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* Usfxgameeffect_powercombo_fire::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_FireDamageOverTime
// 0x0010 (0x007C - 0x006C)
class USFXGameEffect_FireDamageOverTime : public USFXGameEffect_DamageOverTime
{
public:
	float                                              TotalDamageDone;                                  		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              PowerComboDamageThreshold;                        		// 0x0070 (0x0004) [0x0000000000000000]              
	class Usfxpowercustomaction*                       ComboPower;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
	unsigned long                                      bComboEffectApplied : 1;                          		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanCauseCombo : 1;                               		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107048 ];

		return pClassPointer;
	};

	void DoDamage ( );
	void AddFireDamage ( float AddedDamage, float NewDuration );
	void OnApplied ( );
};

UClass* USFXGameEffect_FireDamageOverTime::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_ElectricComboBeam
// 0x0026 (0x0088 - 0x0062)
class USFXGameEffect_ElectricComboBeam : public USFXGameEffect
{
public:
	struct FName                                       BeamAttachBoneName;                               		// 0x0064 (0x0008) [0x0000000000000000]              
	class AActor*                                      SourceActor;                                      		// 0x006C (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSC_Beam;                                         		// 0x0070 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class URvrClientEffectInterface*                   CE_ImpactTemplate;                                		// 0x0074 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_CrustTemplate;                                 		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              CrustDuration;                                    		// 0x007C (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 BeamSound;                                        		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      bBeamActive : 1;                                  		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107073 ];

		return pClassPointer;
	};

	void OnRemoved ( );
	void OnUpdate ( float DeltaSeconds );
	void PlayBeamEffect ( class UParticleSystemComponent* PS, struct FVector TargetLocation );
	void OnApplied ( );
};

UClass* USFXGameEffect_ElectricComboBeam::pClassPointer = NULL;

// Class sfxgamecontent.sfxgameeffect_powercombo_cryo
// 0x0014 (0x0104 - 0x00F0)
class Usfxgameeffect_powercombo_cryo : public Usfxgameeffect_powercombo
{
public:
	struct FVector2D                                   FreezeDuration;                                   		// 0x00F0 (0x0008) [0x0000000000004000]              ( CPF_Config )
	float                                              ResistanceDurationMultiplier;                     		// 0x00F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class URvrClientEffectInterface*                   CE_HalfFrozenTemplate;                            		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              SpeedReduction;                                   		// 0x0100 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107076 ];

		return pClassPointer;
	};

	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* Usfxgameeffect_powercombo_cryo::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_DamageImmunity
// 0x0000 (0x0062 - 0x0062)
class USFXGameEffect_DamageImmunity : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107103 ];

		return pClassPointer;
	};

	class AController* CheckOwnerInstigator ( class AController* Attacker );
	void SpawnWeaponImpactVFX ( class AActor* inInstigator, struct FImpactInfo Impact, class UParticleSystem* ImpactParticleSystem, unsigned long UseImpactNormal, unsigned long UseGodBone, float DrawScale );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	class UClass* LoadGameEffectClass ( struct FString GEClassName );
	void OnUnpaused ( );
	void OnPaused ( );
	void OnCombatEnd ( );
	void eventOnRemoved ( );
	void eventOnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void ComputeCustomEffectValue ( float* Value );
};

UClass* USFXGameEffect_DamageImmunity::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_PartBasedDamageTakenBonus
// 0x0000 (0x0062 - 0x0062)
class USFXGameEffect_PartBasedDamageTakenBonus : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107144 ];

		return pClassPointer;
	};

	class AController* CheckOwnerInstigator ( class AController* Attacker );
	void SpawnWeaponImpactVFX ( class AActor* inInstigator, struct FImpactInfo Impact, class UParticleSystem* ImpactParticleSystem, unsigned long UseImpactNormal, unsigned long UseGodBone, float DrawScale );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	class UClass* LoadGameEffectClass ( struct FString GEClassName );
	void OnUnpaused ( );
	void OnPaused ( );
	void OnCombatEnd ( );
	void eventOnRemoved ( );
	void eventOnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void ComputeCustomEffectValue ( float* Value );
};

UClass* USFXGameEffect_PartBasedDamageTakenBonus::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_CryoFreeze
// 0x003F (0x00C0 - 0x0081)
class USFXGameEffect_CryoFreeze : public USFXGameEffect_WeldPhysics
{
public:
	struct FScriptDelegate                             __OnFrozenPawnDied__Delegate;                     		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       FreezeCrustGuid;                                  		// 0x0090 (0x0010) [0x0000000000000000]              
	float                                              ThawTime;                                         		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              FrozenPhysicsDamageIncrease;                      		// 0x00A4 (0x0004) [0x0000000000000000]              
	class USFXGameEffect_PhysicsDamageMultiplier*      PhysicsDamageMultiplier;                          		// 0x00A8 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_FreezeTemplate;                                		// 0x00AC (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_DeathEffect;                                   		// 0x00B0 (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x00B4 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 FrozenDeathSound;                                 		// 0x00B8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bThawStarted : 1;                                 		// 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOwnerDied : 1;                                   		// 0x00BC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPlayFrozenDeathSound : 1;                        		// 0x00BC (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107166 ];

		return pClassPointer;
	};

	void OnRemoved ( );
	void OnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void OnFrozenPawnDied ( class ABioPawn* oPawn );
};

UClass* USFXGameEffect_CryoFreeze::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_DelayedCryoFreeze
// 0x003A (0x009C - 0x0062)
class USFXGameEffect_DelayedCryoFreeze : public USFXGameEffect
{
public:
	struct FScriptDelegate                             __OnFrozenPawnDied__Delegate;                     		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       FreezeCrustGuid;                                  		// 0x0070 (0x0010) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_DeathEffect;                                   		// 0x0080 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_FreezeTemplate;                                		// 0x0084 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 FrozenDeathSound;                                 		// 0x0088 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 FreezingSound;                                    		// 0x008C (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x0090 (0x0004) [0x0000000000000000]              
	class Usfxpowercustomaction*                       Power;                                            		// 0x0094 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlayFrozenDeathSound : 1;                        		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOwnerDied : 1;                                   		// 0x0098 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107167 ];

		return pClassPointer;
	};

	void OnRemoved ( );
	void OnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void OnFrozenPawnDied ( class ABioPawn* oPawn );
};

UClass* USFXGameEffect_DelayedCryoFreeze::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_AmmoPower
// 0x0026 (0x0088 - 0x0062)
class USFXGameEffect_AmmoPower : public USFXGameEffect
{
public:
	class UParticleSystem*                             HologramTemplate;                                 		// 0x0064 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             IconTemplate;                                     		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              BulletsPerSecond;                                 		// 0x006C (0x0004) [0x0000000000000000]              
	class ASFXWeapon*                                  OwnerWeapon;                                      		// 0x0070 (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x0074 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x0078 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 WeaponFireSound;                                  		// 0x007C (0x0004) [0x0000000000000000]              
	class USFXPowerCustomAction_AmmoPower*             Power;                                            		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      AddedByPlayer : 1;                                		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInCinematic : 1;                                 		// 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107359 ];

		return pClassPointer;
	};

	void eventOnUpdate ( float DeltaSeconds );
	void OnWeaponUnequip ( class ASFXWeapon* Weapon );
	void OnWeaponEquip ( class ASFXWeapon* Weapon );
	void OnWeaponReload ( class ASFXWeapon* Weapon );
	float GetDamageVocProbabilityMod ( );
	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
	void OnRemoved ( );
	float GetBulletsPerSecond ( class ASFXWeapon* Weapon );
	float GetWeaponDamage ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
	class AActor* GetHitTarget ( struct FImpactInfo Impact );
	void SetupFromWeapon ( );
	void OnApplied ( );
};

UClass* USFXGameEffect_AmmoPower::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_CryoAmmo
// 0x0030 (0x00B8 - 0x0088)
class USFXGameEffect_CryoAmmo : public USFXGameEffect_AmmoPower
{
public:
	float                                              FreezeChance;                                     		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              FreezeDuration;                                   		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              SpeedReduction;                                   		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              SpeedReductionDuration;                           		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              FrozenDamageBonus;                                		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              ArmorWeakness;                                    		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              SpareAmmoBonus;                                   		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              HeadShotDamageBonus;                              		// 0x00A4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ImpactEffect;                                     		// 0x00A8 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class URvrClientEffectInterface*                   CE_HalfFrozenTemplate;                            		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              DelayedFreezeRandDuration;                        		// 0x00B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DelayedFreezeStaticDuration;                      		// 0x00B4 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107178 ];

		return pClassPointer;
	};

	float GetDamageVocProbabilityMod ( );
	void DoFreezeEffect ( class ABioPawn* oHitPawn, float fDelay, struct FVector HitLocation, struct FVector HitNormal, unsigned long bForced, unsigned char ForcedResistance );
	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
	void OnApplied ( );
};

UClass* USFXGameEffect_CryoAmmo::pClassPointer = NULL;

// Class sfxgamecontent.SFXPowerCustomAction_CombatDroneZap
// 0x0017 (0x06AC - 0x0695)
class USFXPowerCustomAction_CombatDroneZap : public Usfxpowercustomaction
{
public:
	float                                              MaxJumpDistance;                                  		// 0x0698 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              JumpDelay;                                        		// 0x069C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              IncapacitateChance;                               		// 0x06A0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                NumCharges;                                       		// 0x06A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class AActor*                                      LastHitActor;                                     		// 0x06A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107195 ];

		return pClassPointer;
	};

	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	class USFXGameEffect_CombatDroneZapChain* CreateZapChainEffect ( class USFXModule_GameEffectManager* oManager );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	float GetImpactForce ( class AActor* oImpacted );
	float GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType );
};

UClass* USFXPowerCustomAction_CombatDroneZap::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_CombatDroneZapChain
// 0x006E (0x00D0 - 0x0062)
class USFXGameEffect_CombatDroneZapChain : public USFXGameEffect
{
public:
	TArray< class AActor* >                            AffectedActors;                                   		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      DamageType;                                       		// 0x0070 (0x0004) [0x0000000000000000]              
	struct FVector                                     DamageOrigin;                                     		// 0x0074 (0x000C) [0x0000000000000000]              
	struct FName                                       BeamAttachBoneName;                               		// 0x0080 (0x0008) [0x0000000000000000]              
	int                                                NumChargesLeft;                                   		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              MaxJumpDistance;                                  		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              JumpDelay;                                        		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              JumpTimer;                                        		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              IncapacitateChance;                               		// 0x0098 (0x0004) [0x0000000000000000]              
	class AActor*                                      Target;                                           		// 0x009C (0x0004) [0x0000000000000000]              
	class USFXPowerCustomAction_CombatDroneZap*        Power;                                            		// 0x00A0 (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    Caster;                                           		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              Force;                                            		// 0x00AC (0x0004) [0x0000000000000000]              
	class AActor*                                      LastHitActor;                                     		// 0x00B0 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSC_Beam;                                         		// 0x00B4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             ImpactTemplate;                                   		// 0x00B8 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	class URvrClientEffectInterface*                   CE_TargetCrustTemplate;                           		// 0x00BC (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 ImpactSound;                                      		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 BeamSound;                                        		// 0x00C4 (0x0004) [0x0000000000000000]              
	float                                              CrustDuration;                                    		// 0x00C8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEffectDone : 1;                                  		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBeamActive : 1;                                  		// 0x00CC (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107254 ];

		return pClassPointer;
	};

	void OnRemoved ( );
	bool ImpactAdditionalTarget ( class AActor* oActor );
	void SelectAndImpactNextTarget ( );
	void OnUpdate ( float DeltaSeconds );
	void PlayBeamEffect ( class UParticleSystemComponent* PS, struct FVector TargetLocation );
	void OnApplied ( );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
};

UClass* USFXGameEffect_CombatDroneZapChain::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_ArmorWeakness
// 0x0000 (0x0062 - 0x0062)
class USFXGameEffect_ArmorWeakness : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107260 ];

		return pClassPointer;
	};

	class AController* CheckOwnerInstigator ( class AController* Attacker );
	void SpawnWeaponImpactVFX ( class AActor* inInstigator, struct FImpactInfo Impact, class UParticleSystem* ImpactParticleSystem, unsigned long UseImpactNormal, unsigned long UseGodBone, float DrawScale );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	class UClass* LoadGameEffectClass ( struct FString GEClassName );
	void OnUnpaused ( );
	void OnPaused ( );
	void OnCombatEnd ( );
	void eventOnRemoved ( );
	void eventOnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void ComputeCustomEffectValue ( float* Value );
};

UClass* USFXGameEffect_ArmorWeakness::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_ArmorPiercingBonus
// 0x0000 (0x0062 - 0x0062)
class USFXGameEffect_ArmorPiercingBonus : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107296 ];

		return pClassPointer;
	};

	class AController* CheckOwnerInstigator ( class AController* Attacker );
	void SpawnWeaponImpactVFX ( class AActor* inInstigator, struct FImpactInfo Impact, class UParticleSystem* ImpactParticleSystem, unsigned long UseImpactNormal, unsigned long UseGodBone, float DrawScale );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	class UClass* LoadGameEffectClass ( struct FString GEClassName );
	void OnUnpaused ( );
	void OnPaused ( );
	void OnCombatEnd ( );
	void eventOnRemoved ( );
	void eventOnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void ComputeCustomEffectValue ( float* Value );
};

UClass* USFXGameEffect_ArmorPiercingBonus::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_WeaponMod
// 0x0007 (0x0069 - 0x0062)
class USFXGameEffect_WeaponMod : public USFXGameEffect
{
public:
	class ASFXWeapon*                                  MyWeapon;                                         		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned char                                      ModStat;                                          		// 0x0068 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107300 ];

		return pClassPointer;
	};

	void OnApplied ( );
};

UClass* USFXGameEffect_WeaponMod::pClassPointer = NULL;

// Class sfxgamecontent.sfxgameeffect_penetrationdamagebonus
// 0x0000 (0x0069 - 0x0069)
class Usfxgameeffect_penetrationdamagebonus : public USFXGameEffect_WeaponMod
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107299 ];

		return pClassPointer;
	};

	void OnApplied ( );
};

UClass* Usfxgameeffect_penetrationdamagebonus::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_PenetrationBonus
// 0x0000 (0x0069 - 0x0069)
class USFXGameEffect_PenetrationBonus : public USFXGameEffect_WeaponMod
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107301 ];

		return pClassPointer;
	};

	void OnApplied ( );
};

UClass* USFXGameEffect_PenetrationBonus::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_ConstraintDmgBonus
// 0x0000 (0x0062 - 0x0062)
class USFXGameEffect_ConstraintDmgBonus : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107303 ];

		return pClassPointer;
	};

	class AController* CheckOwnerInstigator ( class AController* Attacker );
	void SpawnWeaponImpactVFX ( class AActor* inInstigator, struct FImpactInfo Impact, class UParticleSystem* ImpactParticleSystem, unsigned long UseImpactNormal, unsigned long UseGodBone, float DrawScale );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	class UClass* LoadGameEffectClass ( struct FString GEClassName );
	void OnUnpaused ( );
	void OnPaused ( );
	void OnCombatEnd ( );
	void eventOnRemoved ( );
	void eventOnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void ComputeCustomEffectValue ( float* Value );
};

UClass* USFXGameEffect_ConstraintDmgBonus::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_SpareAmmo
// 0x0006 (0x0068 - 0x0062)
class USFXGameEffect_SpareAmmo : public USFXGameEffect
{
public:
	int                                                AmmoIncrease;                                     		// 0x0064 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107305 ];

		return pClassPointer;
	};

	void OnRemoved ( );
	void OnApplied ( );
};

UClass* USFXGameEffect_SpareAmmo::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_ArmorPiercingAmmo
// 0x0028 (0x00B0 - 0x0088)
class USFXGameEffect_ArmorPiercingAmmo : public USFXGameEffect_AmmoPower
{
public:
	class UClass*                                      DamageType;                                       		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              VFXSpawnChance;                                   		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              Penetration;                                      		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              PenetrationDamage;                                		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              ArmorReduction;                                   		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              SpareAmmoBonus;                                   		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              HeadShotDamageBonus;                              		// 0x00A4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             PS_OrganicImpactEffect;                           		// 0x00A8 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UParticleSystem*                             PS_NonOrganicImpactEffect;                        		// 0x00AC (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107314 ];

		return pClassPointer;
	};

	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
	void OnRemoved ( );
	void OnApplied ( );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
};

UClass* USFXGameEffect_ArmorPiercingAmmo::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_SentryTurretShock
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_SentryTurretShock : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107362 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_SentryTurretShock::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_HeavyWeapon
// 0x0000 (0x00E2 - 0x00E2)
class USFXDamageType_HeavyWeapon : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107365 ];

		return pClassPointer;
	};

	float CalculateDamageMultiplier ( struct FDamageCalculationAlgorithm* DamageCalc );
	void ResetDamageCalc ( struct FDamageCalculationAlgorithm* DamageCalc );
	bool CanPlayDeathEffect ( class ABioPawn* Target, class AController* Killer );
};

UClass* USFXDamageType_HeavyWeapon::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_FlameThrower
// 0x0000 (0x00E2 - 0x00E2)
class USFXDamageType_FlameThrower : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107370 ];

		return pClassPointer;
	};

	float CalculateDamageMultiplier ( struct FDamageCalculationAlgorithm* DamageCalc );
	void ResetDamageCalc ( struct FDamageCalculationAlgorithm* DamageCalc );
	bool CanPlayDeathEffect ( class ABioPawn* Target, class AController* Killer );
};

UClass* USFXDamageType_FlameThrower::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_FireExplosion
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_FireExplosion : public USFXDamageType_Power_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107376 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_FireExplosion::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_ElectricCombo
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_ElectricCombo : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107379 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_ElectricCombo::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_Decoy
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_Decoy : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107382 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_Decoy::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_CryoExplosion
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_CryoExplosion : public USFXDamageType_Power_Freeze
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107385 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_CryoExplosion::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_CryoAmmo
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_CryoAmmo : public USFXDamageType_Power_Freeze
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107388 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_CryoAmmo::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_CombatDroneAttackImproved
// 0x0000 (0x00EA - 0x00EA)
class USFXDamageType_CombatDroneAttackImproved : public USFXDamageType_Power_Ragdoll
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107391 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_CombatDroneAttackImproved::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_CombatDroneAttack
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_CombatDroneAttack : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107394 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_CombatDroneAttack::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_CombatDrone
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_CombatDrone : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107397 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_CombatDrone::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_AssaultRifle
// 0x0000 (0x00E2 - 0x00E2)
class USFXDamageType_AssaultRifle : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107400 ];

		return pClassPointer;
	};

	float CalculateDamageMultiplier ( struct FDamageCalculationAlgorithm* DamageCalc );
	void ResetDamageCalc ( struct FDamageCalculationAlgorithm* DamageCalc );
	bool CanPlayDeathEffect ( class ABioPawn* Target, class AController* Killer );
};

UClass* USFXDamageType_AssaultRifle::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_ArmorPiercingAmmo
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_ArmorPiercingAmmo : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107403 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_ArmorPiercingAmmo::pClassPointer = NULL;

// Class sfxgamecontent.SFXWeapon_AssaultRifle_SentryTurret
// 0x0000 (0x0DD8 - 0x0DD8)
class ASFXWeapon_AssaultRifle_SentryTurret : public ASFXWeapon_AssaultRifle_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107408 ];

		return pClassPointer;
	};

	unsigned char GetStoreQualification ( );
	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
	void PlayFireEffects ( unsigned char FiringMode, struct FVector HitLocation );
	bool ShouldSpawnTracerFX ( );
};

UClass* ASFXWeapon_AssaultRifle_SentryTurret::pClassPointer = NULL;

// Class sfxgamecontent.SFXWeapon_Heavy_Beam_Base
// 0x003C (0x0E14 - 0x0DD8)
class ASFXWeapon_Heavy_Beam_Base : public ASFXHeavyWeapon
{
public:
	struct FVector                                     vLastHitLocation;                                 		// 0x0DD8 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    rPreCalAim;                                       		// 0x0DE4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   BeamInterpSpeed;                                  		// 0x0DF0 (0x0008) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                DecalFrequency;                                   		// 0x0DF8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fCurrentBeamInterpTime;                           		// 0x0DFC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BeamInterpTime;                                   		// 0x0E00 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                LastDecalTime;                                    		// 0x0E04 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastImpactTime;                                   		// 0x0E08 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              VFXUpdateInterval;                                		// 0x0E0C (0x0004) [0x0000000000000000]              
	unsigned long                                      bFiringContinuously : 1;                          		// 0x0E10 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bIsFiring : 1;                                    		// 0x0E10 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107410 ];

		return pClassPointer;
	};

	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
	void PreCalculateAdjustedAim ( float fDeltaTime );
	void UpdateBeam ( float DeltaTime );
	void ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, int NumHits );
	void CalcFireStart ( );
	void StopFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
	void Tick ( float DeltaTime );
	void SpawnImpactEffects ( struct FImpactInfo Impact );
	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
	void StopMuzzleFlashEffect ( );
	void PlayMuzzleFlashEffect ( );
	void StretchDecal ( struct FImpactInfo Impact );
	void SpawnADecal ( struct FImpactInfo Impact );
	void InitDefaultDecalProperties ( );
};

UClass* ASFXWeapon_Heavy_Beam_Base::pClassPointer = NULL;

// Class sfxgamecontent.sfxweapon_heavy_flamethrower_sentryturret
// 0x0020 (0x0E34 - 0x0E14)
class Asfxweapon_heavy_flamethrower_sentryturret : public ASFXWeapon_Heavy_Beam_Base
{
public:
	struct FRotator                                    MuzzleRotation;                                   		// 0x0E14 (0x000C) [0x0000000000000000]              
	float                                              DamagePerSecond;                                  		// 0x0E20 (0x0004) [0x0000000000000000]              
	float                                              DamageDuration;                                   		// 0x0E24 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 WindUpSound;                                      		// 0x0E28 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 WindDownSound;                                    		// 0x0E2C (0x0004) [0x0000000000000000]              
	class USFXPowerCustomAction_SentryTurret*          SentryTurretPower;                                		// 0x0E30 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107411 ];

		return pClassPointer;
	};

	void ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, int NumHits );
	void StopMuzzleFlashEffect ( );
	void eventAttachMuzzleEffectsComponents ( class USkeletalMeshComponent* SkelMesh, struct FName MuzzleSocket, struct FName CasingSocket );
	void eventWeaponStoppedFiring ( unsigned char FiringMode );
	void eventDestroyed ( );
	void PlayWindDownEffects ( );
	void PlayWindUpEffects ( );
	void FireModeUpdated ( unsigned char FiringMode, unsigned long bViaReplication );
};

UClass* Asfxweapon_heavy_flamethrower_sentryturret::pClassPointer = NULL;

// Class sfxgamecontent.SFXAICmd_Base_SentryTurret
// 0x0030 (0x00C8 - 0x0098)
class USFXAICmd_Base_SentryTurret : public USFXAICommand_Base_Combat
{
public:
	struct FName                                       ShockPower;                                       		// 0x0098 (0x0008) [0x0000000000000000]              
	struct FName                                       RocketPower;                                      		// 0x00A0 (0x0008) [0x0000000000000000]              
	struct FName                                       CryoAmmoPower;                                    		// 0x00A8 (0x0008) [0x0000000000000000]              
	struct FName                                       ArmorPiercingAmmoPower;                           		// 0x00B0 (0x0008) [0x0000000000000000]              
	struct FName                                       PowerToUse;                                       		// 0x00B8 (0x0008) [0x0000000000000000]              
	float                                              FlamethrowerRangeSq;                              		// 0x00C0 (0x0004) [0x0000000000000000]              
	class AActor*                                      PowerTarget;                                      		// 0x00C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107479 ];

		return pClassPointer;
	};

	void ChooseWeapon ( );
	bool ShouldUsePower ( struct FName* PowerName, class AActor** Target );
};

UClass* USFXAICmd_Base_SentryTurret::pClassPointer = NULL;

// Class sfxgamecontent.SFXAI_SentryTurret
// 0x0000 (0x0690 - 0x0690)
class ASFXAI_SentryTurret : public Asfxai_core
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107481 ];

		return pClassPointer;
	};

	void CheckDownedPlayers ( );
	void DrawDifficulty ( class UBioCheatManager* CM );
	bool CanTurretFireAt ( class AActor* TestActor );
	void OnPossessTurret ( class USFXSeqAct_PossessTurret* Action );
	void FindDrivablePawn ( );
	float GetMinDistanceToAnyPlayer ( );
	void CleanUpStaleAI ( );
	void NotifyStuck ( );
	void NotifyCombatZoneRemoved ( );
	void NotifyCombatZoneAdded ( );
	bool eventIsAtCover ( );
	void NotifyKnockedOutOfCover ( );
	float GetMoveFireDelayTime ( );
	void DoMeleeAttack ( );
	bool ShouldKillPlayer ( class APawn* PartyPawn );
	bool ShouldPowerEvade ( );
	bool ShouldSyncMelee ( class AActor* MeleeTarget );
	bool ShouldMelee ( class AActor* MeleeTarget );
	unsigned char GetBestEvadeDir ( struct FVector DangerPoint, class AProjectile* Prj, class APawn* Shooter );
	bool ShouldPartialLean ( );
	bool ShouldCancelMove ( int nReason );
	bool ShouldStayLeanedOut ( );
	bool HasNearbyEnemy ( class APawn** NearbyPawn );
	void eventGetActorToFollow ( class AActor** oActor, struct FVector* vLocation );
	void BeginCombatCommand ( class UClass* CmdClass, struct FString Reason, unsigned long bForced );
	void BeginDefaultCommand ( struct FString Reason, unsigned long bForced );
	void CheckTimedCombatTransition ( );
	void InitialCheckTimedCombatTransition ( );
	bool ReactToFlank ( class APawn* FlankingPawn );
	bool ReactToNearbyEnemy ( class APawn* NearbyPawn );
	bool IsTargetStealthed ( );
	bool IsCombatStale ( );
	void CheckInterruptCombatTransitions ( );
	bool IgnoreTimeTransitions ( );
	bool eventEnableAI ( unsigned long bEnable, int nRequestedBy );
	void NotifyArmourHit ( float Damage, struct FName ArmourPiece, class AController* instigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, class AActor* DamageCauser );
	void NotifyArmourDestroyed ( struct FName ArmourPiece, class AController* instigatedBy );
	class ANavigationPoint* FindSuppressionPoint ( class AActor* Target, unsigned char Range, float MinDistance, float MaxDistance );
	float FindClosestApproachDistance ( class AActor* oActor );
	bool TeleportToActor ( class AActor* oActor, unsigned long bForceTeleport, unsigned long bOffsetTeleport );
	bool IsInWeaponRange ( class AActor* oTarget );
	float TargetRange ( );
	bool ShootWeaponAtFireTarget ( float DmgThreshold, unsigned long bForceShoot );
	bool CanShootWeapon ( class AActor* oTarget );
	bool ChooseDefensivePower ( struct FName* nmPower );
	bool ChooseAttackPower ( class AActor* oTarget, unsigned long bPlayerRequest, struct FName* nmPower, int* nRequiresAttackTicket, struct FVector* AttackOrigin );
	bool CanChoosePower ( class Usfxpowercustomaction* oPower, class AActor* oTarget, unsigned long bPlayerRequest );
	void UpdateMovementFocus ( );
	void eventUpdateMovementActions ( );
	void eventOnEnteredPlaypen ( );
	float GetPeriodicMoveInterval ( );
	bool RespondToBump ( class AActor* Other, struct FVector HitNormal );
	void DrawLocationMarker ( struct FVector vLocation, float fSize, int nRed, int nGreen, int nBlue );
	void eventBioClearCrossLevelReferences ( class ULevel* oLevel );
	bool IsActorInPlaypen ( class AActor* oActor );
	void eventOnLeftPlaypen ( );
	bool IsReturningToPlaypen ( );
	bool IsFlankedByTarget ( class AActor* oTarget, unsigned long bUseExactLocation );
	void OnEnteringStasis ( );
	void NotifyFriendDied ( class ABioPawn* FriendPawn );
	void NotifyDeathBlow ( class UClass* DamageType );
	void CheckPendingWeaponSwitch ( );
	void PlayAmbientVoc ( );
	void Taunt ( );
	bool IsInFightingState ( );
	void SwitchWeapon ( class ASFXWeapon* oWeapon );
	void SetSquadIntoCombat ( );
	float GetPowerUsePercent ( );
	void ReleaseTicket ( class AActor* oTarget, unsigned char eTicket, unsigned long bKillAttackTicket );
	bool AcquireTicket ( class AActor* oTarget, unsigned char eTicket, int nAttackTicketCost );
	void ClearPowerReservation ( struct FName nmPower, unsigned long bSkipProjectilePowers );
	bool RequestPowerReservation ( struct FName nmPower, unsigned long bForceSuccess );
	bool RELOAD ( );
	bool ShouldReload ( );
	bool ChooseAttack ( class AActor* oTarget, struct FName* nmPowerName );
	unsigned char Attack ( );
	void ClearCancelAction ( );
	void CancelAction ( int nReason );
	void PrecisionMove ( struct FVector vLocation, struct FRotator rRotation );
	bool WantsToRun ( float fDistance );
	void SetMovementSpeed ( );
	void PeriodicMoveCheck ( );
	bool SetMoveGoal ( class AActor* NewMoveGoal, float NewMoveOffset );
	void ApplyBasePathConstraints ( );
	void NotifyWeaponDelayFinished ( );
	void CalculateGrenadeArc ( float MinSpeed, float MaxSpeed, float MaxRange, float* InitialSpeed, struct FVector* InitialDirection );
	struct FVector GetAimLocation ( class AActor* oAimTarget );
	unsigned char GetBestTargetCoverAction ( class ABioPawn* TargetPawn, struct FCoverInfo TargetCover );
	bool RespondToPush ( );
	void PushPawn ( class ABioPawn* oPawn, struct FVector HitNormal );
	void NotifyEnemyVisible ( int EnemyIdx, float TimeSinceSeen );
	bool NotifyHitWall ( struct FVector HitNormal, class AActor* Wall );
	bool NotifyBump ( class AActor* Other, struct FVector HitNormal );
	void NotifyUnderAttack ( unsigned long bHit );
	void NotifyPendingPowerImpact ( struct FName Label, float TimeBeforeImpact, class Usfxpowercustomaction* Power, class ASFXProjectile_PowerCustomAction* Projectile );
	void NotifyNearMiss ( struct FVector HitLocation );
	void NotifyTakeHit ( class AController* instigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	bool GetBestCoverAction ( struct FCoverInfo ChkCover, class AActor* ChkTarget, unsigned char* AttackerCoverAction, unsigned char* TargetCoverAction );
	bool CanAttack ( class AActor* oTarget );
	bool GetAttackOrigin ( class AActor* oTarget, struct FVector* AttackOrigin );
	struct FRotator GetAdjustedAimFor ( class AWeapon* W, struct FVector StartFireLoc );
	void UpdateAccuracy ( );
	void ResetAimInstability ( );
	void NotifyChangedWeapon ( class AWeapon* PrevWeapon, class AWeapon* NewWeapon );
	void NotifyAiming ( class AActor* AimTarget, unsigned long bAiming );
	void NotifyWeaponFinishedFiring ( class AWeapon* W, unsigned char FireMode );
	void NotifyWeaponFired ( class AWeapon* W, unsigned char FireMode );
	void StartFiring ( int InBurstsToFire );
	bool IsFriendlyBlockingFireLine ( );
	bool IsFireLineObstructed ( );
	bool CanFireWeaponNoLOS ( class AWeapon* Wpn, unsigned char FireModeNum );
	bool CanFireWeapon ( class AWeapon* Wpn, unsigned char FireModeNum );
	bool IsFiringWeapon ( );
	void TriggerAttackVocalization ( );
	void OnTargetChanged ( );
	void AdjustEnemyRating ( class APawn* EnemyPawn, float* fRating );
	void AdjustRatingByTickets ( int EnemyIdx, float* out_Rating );
	bool SelectTarget ( );
	bool NotifyMoodChange ( );
	void ResetCombatMood ( );
	bool CanSwitchMood ( unsigned char NewMood );
	bool SetCombatMood ( unsigned char NewMood, float fDuration );
	void Initialize ( );
	void ResetEvadeDamage ( );
	void PostBeginPlay ( );
	void Reset ( );
	void ClearGoHereDelegates ( );
	void AssignGoHereDelegates ( struct FScriptDelegate RangeDel, struct FScriptDelegate FlankDel );
	void StopFollowingActor ( );
	bool StartFollowingActor ( class AActor* ActorToFollow );
	unsigned char GetCurrentKismetOrder ( );
	void MoveToGoalExternal ( class AActor* NewMoveGoal, float NewMoveOffset, unsigned long bImmediateMove, unsigned long bForceWalk, struct FScriptDelegate MoveDelegate );
	void FireWeaponAtTarget ( class AActor* oTarget, unsigned long bCheckLOS, unsigned long bForceShoot, float fAttackDuration, struct FScriptDelegate FireDelegate );
	void UsePowerOnTarget ( struct FName nmPowerToUse, class AActor* oTarget, struct FScriptDelegate PowerDelegate, unsigned long bIgnoreSuppression );
	void NotifyPlaypenChanged ( );
	bool TryInvalidateTargetFlank ( );
	bool TryInvalidateTargetRange ( float fRangeToTarget );
	void MoveToDelegate ( int nReason );
	void FireWeaponDelegate ( int nReason );
	void UsePowerDelegate ( int nReason );
};

UClass* ASFXAI_SentryTurret::pClassPointer = NULL;

// Class sfxgamecontent.SFXAICmd_Base_CombatDrone
// 0x002C (0x00C4 - 0x0098)
class USFXAICmd_Base_CombatDrone : public USFXAICommand_Base_Combat
{
public:
	struct FName                                       ZapPower;                                         		// 0x0098 (0x0008) [0x0000000000000000]              
	struct FName                                       ShockPower;                                       		// 0x00A0 (0x0008) [0x0000000000000000]              
	struct FName                                       RocketPower;                                      		// 0x00A8 (0x0008) [0x0000000000000000]              
	struct FName                                       PowerToUse;                                       		// 0x00B0 (0x0008) [0x0000000000000000]              
	float                                              IdealMaxRangeToTarget;                            		// 0x00B8 (0x0004) [0x0000000000000000]              
	float                                              IdealMinRangeToTarget;                            		// 0x00BC (0x0004) [0x0000000000000000]              
	float                                              IdealRangeToTarget;                               		// 0x00C0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107482 ];

		return pClassPointer;
	};

	bool ShouldUsePower ( struct FName* PowerName );
	float GetIdealRange ( );
	void Pushed ( );
};

UClass* USFXAICmd_Base_CombatDrone::pClassPointer = NULL;

// Class sfxgamecontent.sfxai_combatdrone
// 0x0010 (0x06A0 - 0x0690)
class Asfxai_combatdrone : public Asfxai_core
{
public:
	struct FVector2D                                   MoveTime;                                         		// 0x0690 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TotalMoveTime;                                    		// 0x0698 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MoveTimeout;                                      		// 0x069C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107494 ];

		return pClassPointer;
	};

	void eventBioClearCrossLevelReferences ( class ULevel* ClearedLevel );
	void PeriodicMoveCheck ( );
};

UClass* Asfxai_combatdrone::pClassPointer = NULL;

// Class sfxgamecontent.SFXCharacterClass_Content
// 0x0000 (0x01CD - 0x01CD)
class USFXCharacterClass_Content : public USFXCharacterClass
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127520 ];

		return pClassPointer;
	};

};

UClass* USFXCharacterClass_Content::pClassPointer = NULL;

// Class sfxgamecontent.sfxcustomaction_revive
// 0x000A (0x00F8 - 0x00EE)
class Usfxcustomaction_revive : public USFXCustomAction_SingleAnim
{
public:
	class ASFXPawn_PlayerParty*                        DownedPlayer;                                     		// 0x00F0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSuccessRevive : 1;                               		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127522 ];

		return pClassPointer;
	};

	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void Replicate ( );
	void ClientDoCustomAction ( unsigned long bForced );
	void CheckFiring ( );
	void TickCustomAction ( float DeltaTime );
	void StopCustomAction ( );
	void Resurrect ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

UClass* Usfxcustomaction_revive::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_Reload
// 0x0017 (0x00D8 - 0x00C1)
class USFXCustomAction_Reload : public USFXCustomAction_ReloadBase
{
public:
	struct FBodyStance                                 BS_Anim;                                          		// 0x00C4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              fAnimBlendInTime;                                 		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAnimBlendOutTime;                                		// 0x00D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127523 ];

		return pClassPointer;
	};

	void StopCustomAction ( );
	void StartCustomAction ( );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_Reload::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_ActivateWeaponFlashlight
// 0x0006 (0x00F4 - 0x00EE)
class USFXCustomAction_ActivateWeaponFlashlight : public USFXCustomAction_SingleAnim
{
public:
	class USFXAnimSetCookSpec*                         AnimInfo;                                         		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127524 ];

		return pClassPointer;
	};

	void StopCustomAction ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_ActivateWeaponFlashlight::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_MantleLookAt
// 0x004A (0x016C - 0x0122)
class USFXCustomAction_MantleLookAt : public USFXCustomAction_LookAtLoop
{
public:
	struct FBodyStance                                 BS_Mid_Cov_Right_Start;                           		// 0x0124 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_Loop;                            		// 0x0130 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_End;                             		// 0x013C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Start;                            		// 0x0148 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Loop;                             		// 0x0154 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_End;                              		// 0x0160 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127525 ];

		return pClassPointer;
	};

	void FlinchActionOverride ( );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
	struct FBodyStance GetEndBodyStanceAnim ( );
	struct FBodyStance GetLoopBodyStanceAnim ( );
	struct FBodyStance GetStartBodyStanceAnim ( );
};

UClass* USFXCustomAction_MantleLookAt::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_CoverSlipLookAt
// 0x004A (0x016C - 0x0122)
class USFXCustomAction_CoverSlipLookAt : public USFXCustomAction_LookAtLoop
{
public:
	struct FBodyStance                                 BS_Mid_Cov_Right_Start;                           		// 0x0124 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_Loop;                            		// 0x0130 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_End;                             		// 0x013C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Start;                            		// 0x0148 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Loop;                             		// 0x0154 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_End;                              		// 0x0160 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127526 ];

		return pClassPointer;
	};

	void FlinchActionOverride ( );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
	struct FBodyStance GetEndBodyStanceAnim ( );
	struct FBodyStance GetLoopBodyStanceAnim ( );
	struct FBodyStance GetStartBodyStanceAnim ( );
};

UClass* USFXCustomAction_CoverSlipLookAt::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_StdCoverSlipLookAt
// 0x004A (0x016C - 0x0122)
class USFXCustomAction_StdCoverSlipLookAt : public USFXCustomAction_LookAtLoop
{
public:
	struct FBodyStance                                 BS_Std_Cov_Right_Start;                           		// 0x0124 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Right_Loop;                            		// 0x0130 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Right_End;                             		// 0x013C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_Start;                            		// 0x0148 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_Loop;                             		// 0x0154 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_End;                              		// 0x0160 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127527 ];

		return pClassPointer;
	};

	void FlinchActionOverride ( );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
	struct FBodyStance GetEndBodyStanceAnim ( );
	struct FBodyStance GetLoopBodyStanceAnim ( );
	struct FBodyStance GetStartBodyStanceAnim ( );
};

UClass* USFXCustomAction_StdCoverSlipLookAt::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_SwatTurnLookAt
// 0x004A (0x016C - 0x0122)
class USFXCustomAction_SwatTurnLookAt : public USFXCustomAction_LookAtLoop
{
public:
	struct FBodyStance                                 BS_Mid_Cov_Right_Start;                           		// 0x0124 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_Loop;                            		// 0x0130 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_End;                             		// 0x013C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Start;                            		// 0x0148 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Loop;                             		// 0x0154 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_End;                              		// 0x0160 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127528 ];

		return pClassPointer;
	};

	void FlinchActionOverride ( );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
	struct FBodyStance GetEndBodyStanceAnim ( );
	struct FBodyStance GetLoopBodyStanceAnim ( );
	struct FBodyStance GetStartBodyStanceAnim ( );
};

UClass* USFXCustomAction_SwatTurnLookAt::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_StdSwatTurnLookAt
// 0x004A (0x016C - 0x0122)
class USFXCustomAction_StdSwatTurnLookAt : public USFXCustomAction_LookAtLoop
{
public:
	struct FBodyStance                                 BS_Std_Cov_Right_Start;                           		// 0x0124 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Right_Loop;                            		// 0x0130 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Right_End;                             		// 0x013C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_Start;                            		// 0x0148 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_Loop;                             		// 0x0154 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_End;                              		// 0x0160 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127529 ];

		return pClassPointer;
	};

	void FlinchActionOverride ( );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
	struct FBodyStance GetEndBodyStanceAnim ( );
	struct FBodyStance GetLoopBodyStanceAnim ( );
	struct FBodyStance GetStartBodyStanceAnim ( );
};

UClass* USFXCustomAction_StdSwatTurnLookAt::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_GapJump
// 0x0037 (0x00F8 - 0x00C1)
class USFXCustomAction_GapJump : public UBioCustomAction
{
public:
	struct FBodyStance                                 BS_Anim;                                          		// 0x00C4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              fAnimPlayRate;                                    		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAnimBlendInTime;                                 		// 0x00D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAnimBlendOutTime;                                		// 0x00D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAnimStartTime;                                   		// 0x00DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAnimDuration;                                    		// 0x00E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ASFXNav_JumpNode*                            StartPoint;                                       		// 0x00E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ASFXNav_JumpNode*                            EndPoint;                                         		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ASFXReachSpecPlaceholderCylinder*            BlockingStartCylinder;                            		// 0x00EC (0x0004) [0x0000000000000000]              
	class ASFXReachSpecPlaceholderCylinder*            BlockingEndCylinder;                              		// 0x00F0 (0x0004) [0x0000000000000000]              
	unsigned char                                      ERootMotionMode;                                  		// 0x00F4 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RootBoneX;                                        		// 0x00F5 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RootBoneY;                                        		// 0x00F6 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RootBoneZ;                                        		// 0x00F7 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127530 ];

		return pClassPointer;
	};

	bool NotifyBump ( class AActor* Other, struct FVector HitNormal );
	void EndThisCustomAction ( );
	void RemoveBlockingEndPoints ( );
	void BlockMoveEndPoints ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void StartAnimation ( );
	void ReachedPrecisePosition ( );
	void AlignmentTimeout ( );
	void StartCustomAction ( );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_GapJump::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_StandingGapJump
// 0x0000 (0x00F8 - 0x00F8)
class USFXCustomAction_StandingGapJump : public USFXCustomAction_GapJump
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127531 ];

		return pClassPointer;
	};

	bool NotifyBump ( class AActor* Other, struct FVector HitNormal );
	void EndThisCustomAction ( );
	void RemoveBlockingEndPoints ( );
	void BlockMoveEndPoints ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void StartAnimation ( );
	void ReachedPrecisePosition ( );
	void AlignmentTimeout ( );
	void StartCustomAction ( );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_StandingGapJump::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_JumpDown
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_JumpDown : public USFXCustomAction_BoostDownBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127532 ];

		return pClassPointer;
	};

	void StopCustomAction ( );
	void PreAlignPawnLocation ( );
	void ClientDoCustomAction ( unsigned long bForced );
	void Replicate ( );
	void RemoveBlockingEndPoints ( );
	void BlockMoveEndPoints ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

UClass* USFXCustomAction_JumpDown::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerMantleOverCover
// 0x0070 (0x04A4 - 0x0434)
class USFXCustomAction_PlayerMantleOverCover : public USFXCustomAction_MantleOverCoverBase
{
public:
	struct FBodyStance                                 BS_CoverStart;                                    		// 0x0434 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_StandingStart;                                 		// 0x0440 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_QuickStandingStart;                            		// 0x044C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_CoverLoop;                                     		// 0x0458 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_StandingLoop;                                  		// 0x0464 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_QuickStandingLoop;                             		// 0x0470 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_CoverEnd;                                      		// 0x047C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_StandingEnd;                                   		// 0x0488 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_QuickStandingEnd;                              		// 0x0494 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bStartFromCover : 1;                              		// 0x04A0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bStartFromStorm : 1;                              		// 0x04A0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127533 ];

		return pClassPointer;
	};

	void GetEndAnim ( struct FBodyStance* Stance );
	void GetLoopAnim ( struct FBodyStance* Stance );
	void GetStartAnim ( struct FBodyStance* Stance );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void eventTickCustomAction ( float DeltaTime );
	void StopCustomAction ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_PlayerMantleOverCover::pClassPointer = NULL;

// Class sfxgamecontent.sfxcustomaction_simplemovebase
// 0x0035 (0x00F6 - 0x00C1)
class Usfxcustomaction_simplemovebase : public UBioCustomAction
{
public:
	struct FBodyStance                                 BS_Anim;                                          		// 0x00C4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ASFXReachSpecPlaceholderCylinder*            BlockingStartCylinder;                            		// 0x00D0 (0x0004) [0x0000000000000000]              
	class ASFXReachSpecPlaceholderCylinder*            BlockingEndCylinder;                              		// 0x00D4 (0x0004) [0x0000000000000000]              
	class UReachSpec*                                  MovementPath;                                     		// 0x00D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MoveDistance;                                     		// 0x00DC (0x0004) [0x0000000000000000]              
	float                                              fBlendInTime;                                     		// 0x00E0 (0x0004) [0x0000000000000000]              
	float                                              fBlendOutTime;                                    		// 0x00E4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAlignPawnBeforeMove : 1;                         		// 0x00E8 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned char                                      BlendType;                                        		// 0x00EC (0x0001) [0x0000000000000000]              
	unsigned char                                      RootBoneX;                                        		// 0x00ED (0x0001) [0x0000000000000000]              
	unsigned char                                      RootBoneY;                                        		// 0x00EE (0x0001) [0x0000000000000000]              
	unsigned char                                      RootBoneZ;                                        		// 0x00EF (0x0001) [0x0000000000000000]              
	unsigned char                                      RMM;                                              		// 0x00F0 (0x0001) [0x0000000000000000]              
	unsigned char                                      RootRotationPitch;                                		// 0x00F1 (0x0001) [0x0000000000000000]              
	unsigned char                                      RootRotationYaw;                                  		// 0x00F2 (0x0001) [0x0000000000000000]              
	unsigned char                                      RootRotationRoll;                                 		// 0x00F3 (0x0001) [0x0000000000000000]              
	unsigned char                                      RMRM;                                             		// 0x00F4 (0x0001) [0x0000000000000000]              
	unsigned char                                      MovePhysics;                                      		// 0x00F5 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127535 ];

		return pClassPointer;
	};

	void ClientDoCustomAction ( unsigned long bForced );
	void Replicate ( );
	bool CanBeInterrupted ( );
	void DestTimeout ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void PlayStartAnimation ( );
	struct FBodyStance GetBodyStanceAnim ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void RemoveBlockingEndPoints ( );
	void BlockMoveEndPoints ( );
	void eventReachedPrecisePosition ( );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* Usfxcustomaction_simplemovebase::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerMantleUp
// 0x0022 (0x0118 - 0x00F6)
class USFXCustomAction_PlayerMantleUp : public Usfxcustomaction_simplemovebase
{
public:
	struct FBodyStance                                 BS_MantleUpOutOfCover;                            		// 0x00F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_MantleUpInCover;                               		// 0x0104 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ACoverSlotMarker*                            StartingSlot;                                     		// 0x0110 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bStartInCover : 1;                                		// 0x0114 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127534 ];

		return pClassPointer;
	};

	void ClientDoCustomAction ( unsigned long bForced );
	void ServerStartCustomAction ( int NewAction, class ABioPawn* Sync, int NewPowerAction );
	void Replicate ( );
	struct FBodyStance GetBodyStanceAnim ( );
	void StopCustomAction ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_PlayerMantleUp::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerCoverSlipLeft
// 0x0000 (0x00EE - 0x00EE)
class USFXCustomAction_PlayerCoverSlipLeft : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127536 ];

		return pClassPointer;
	};

	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	struct FBodyStance GetBodyStanceAnim ( );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_PlayerCoverSlipLeft::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerCoverSlipLeftStanding
// 0x0000 (0x00EE - 0x00EE)
class USFXCustomAction_PlayerCoverSlipLeftStanding : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127537 ];

		return pClassPointer;
	};

	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	struct FBodyStance GetBodyStanceAnim ( );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_PlayerCoverSlipLeftStanding::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerCoverSlipRight
// 0x0000 (0x00EE - 0x00EE)
class USFXCustomAction_PlayerCoverSlipRight : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127538 ];

		return pClassPointer;
	};

	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	struct FBodyStance GetBodyStanceAnim ( );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_PlayerCoverSlipRight::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerCoverSlipRightStanding
// 0x0000 (0x00EE - 0x00EE)
class USFXCustomAction_PlayerCoverSlipRightStanding : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127539 ];

		return pClassPointer;
	};

	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	struct FBodyStance GetBodyStanceAnim ( );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_PlayerCoverSlipRightStanding::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerLadderClimbUp
// 0x0028 (0x017C - 0x0154)
class USFXCustomAction_PlayerLadderClimbUp : public USFXCustomAction_ClimbUpBase
{
public:
	struct FBodyStance                                 BS_CloseLadderEnter;                              		// 0x0154 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBodyStance                                 BS_FarLadderEnter;                                		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UAnimSet*                                    LadderAnimSet;                                    		// 0x016C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DecayRate;                                        		// 0x0170 (0x0004) [0x0000000000000000]              
	float                                              CloseEnterDistance;                               		// 0x0174 (0x0004) [0x0000000000000000]              
	float                                              JumpStartDistance;                                		// 0x0178 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127540 ];

		return pClassPointer;
	};

	void StopCustomAction ( );
	void PreAlignPawnLocation ( );
	void SetMoveStage ( unsigned char NextStage );
	void TickCustomAction ( float DeltaTime );
	void SyncRotation ( float Alpha );
	void SyncJumpEntrance ( float Alpha );
	void TickAlignment ( float DeltaTime );
	void StartCustomAction ( );
	void TickInput ( class UBioPlayerInput* Input, float DeltaTime );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_PlayerLadderClimbUp::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerLadderClimbDown
// 0x0000 (0x0148 - 0x0148)
class USFXCustomAction_PlayerLadderClimbDown : public USFXCustomAction_LadderClimbDownBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127541 ];

		return pClassPointer;
	};

	void SetMoveStage ( unsigned char NextStage );
	void StopCustomAction ( );
	void PreAlignPawnLocation ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_PlayerLadderClimbDown::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerEvadeLeft
// 0x0006 (0x00F4 - 0x00EE)
class USFXCustomAction_PlayerEvadeLeft : public USFXCustomAction_PlayerEvadeBase
{
public:
	float                                              MoveDist;                                         		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127542 ];

		return pClassPointer;
	};

	void RollOverride ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

UClass* USFXCustomAction_PlayerEvadeLeft::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerEvadeRight
// 0x0006 (0x00F4 - 0x00EE)
class USFXCustomAction_PlayerEvadeRight : public USFXCustomAction_PlayerEvadeBase
{
public:
	float                                              MoveDist;                                         		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127543 ];

		return pClassPointer;
	};

	void RollOverride ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

UClass* USFXCustomAction_PlayerEvadeRight::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerEvadeForward
// 0x0016 (0x0104 - 0x00EE)
class USFXCustomAction_PlayerEvadeForward : public USFXCustomAction_PlayerEvadeBase
{
public:
	struct FVector                                     MoveOffset;                                       		// 0x00F0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MoveDist;                                         		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHitWallEnabled : 1;                              		// 0x0100 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127544 ];

		return pClassPointer;
	};

	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void RollOverride ( );
	void StopCustomAction ( );
	void TurnOnHitWall ( );
	bool NotifyHitWall ( struct FVector HitNormal, class AActor* Wall );
	void EndThisCustomAction ( );
	void SyncRotation ( float Alpha, struct FVector ToEnd2D );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

UClass* USFXCustomAction_PlayerEvadeForward::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerEvadeBackwards
// 0x0006 (0x00F4 - 0x00EE)
class USFXCustomAction_PlayerEvadeBackwards : public USFXCustomAction_PlayerEvadeBase
{
public:
	float                                              MoveDist;                                         		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127545 ];

		return pClassPointer;
	};

	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void RollOverride ( );
	void StopCustomAction ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

UClass* USFXCustomAction_PlayerEvadeBackwards::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_MantleMelee
// 0x000C (0x01E8 - 0x01DC)
class USFXCustomAction_MantleMelee : public USFXCustomAction_PlayerMeleeBase
{
public:
	TArray< class AActor* >                            HitActors;                                        		// 0x01DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127546 ];

		return pClassPointer;
	};

	void EndThisCustomAction ( );
	void Breakout ( );
	bool NotifyBump ( class AActor* Other, struct FVector HitNormal );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void StopCustomAction ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_MantleMelee::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_SyncCoverGrab
// 0x0057 (0x0194 - 0x013D)
class USFXCustomAction_SyncCoverGrab : public USFXCustomAction_ClassMelee
{
public:
	struct FBodyStance                                 BS_AttackerMirror;                                		// 0x0140 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBodyStance                                 BS_VictimMirror;                                  		// 0x014C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBasedPosition                              VictimLocation;                                   		// 0x0158 (0x0034) [0x0000000000000000]              
	class ASFXReachSpecPlaceholderCylinder*            PlaceholderCylinder;                              		// 0x018C (0x0004) [0x0000000000000000]              
	unsigned long                                      bMirroredAttack : 1;                              		// 0x0190 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127547 ];

		return pClassPointer;
	};

	void StopCustomAction ( );
	void NonSyncedAction ( );
	void SyncAttack ( );
	void GetVictimAnim ( struct FBodyStance* Stance );
	void GetAttackerAnim ( struct FBodyStance* Stance );
	class ABioPawn* GetVictimPawn ( );
	void StartCustomAction ( );
	bool ShouldPlayMirrorAnim ( );
	bool VerifyVictimDestIsClear ( class ABioPawn* VictimPawn, struct FVector DestinationPos );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void StartMeleeAttack ( );
};

UClass* USFXCustomAction_SyncCoverGrab::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_SyncCoverMelee
// 0x000C (0x01E8 - 0x01DC)
class USFXCustomAction_SyncCoverMelee : public USFXCustomAction_PlayerMeleeBase
{
public:
	struct FBodyStance                                 BS_AnimPistol;                                    		// 0x01DC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127548 ];

		return pClassPointer;
	};

	void MeleeImpact ( );
	void StopCustomAction ( );
	void EndThisCustomAction ( );
	void StartCustomAction ( );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_SyncCoverMelee::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_CoverMeleeRight
// 0x0000 (0x01DC - 0x01DC)
class USFXCustomAction_CoverMeleeRight : public USFXCustomAction_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127551 ];

		return pClassPointer;
	};

	void Breakout ( );
	void StopBlur ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void OnTimelineImpact ( class AActor* Target );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void MeleeImpact ( );
	void GetMeleeImpactParameters ( struct FAreaEffectParameters* ImpactParams );
	void NonSyncedAction ( );
	void StartInteraction ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_CoverMeleeRight::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_CoverMeleeLeft
// 0x0000 (0x01DC - 0x01DC)
class USFXCustomAction_CoverMeleeLeft : public USFXCustomAction_CoverMeleeRight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127550 ];

		return pClassPointer;
	};

	void Breakout ( );
	void StopBlur ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void OnTimelineImpact ( class AActor* Target );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void MeleeImpact ( );
	void GetMeleeImpactParameters ( struct FAreaEffectParameters* ImpactParams );
	void NonSyncedAction ( );
	void StartInteraction ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_CoverMeleeLeft::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_StdCoverMeleeLeft
// 0x0000 (0x01DC - 0x01DC)
class USFXCustomAction_StdCoverMeleeLeft : public USFXCustomAction_CoverMeleeLeft
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127549 ];

		return pClassPointer;
	};

	void Breakout ( );
	void StopBlur ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void OnTimelineImpact ( class AActor* Target );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void MeleeImpact ( );
	void GetMeleeImpactParameters ( struct FAreaEffectParameters* ImpactParams );
	void NonSyncedAction ( );
	void StartInteraction ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_StdCoverMeleeLeft::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_StdCoverMeleeRight
// 0x0000 (0x01DC - 0x01DC)
class USFXCustomAction_StdCoverMeleeRight : public USFXCustomAction_CoverMeleeRight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127552 ];

		return pClassPointer;
	};

	void Breakout ( );
	void StopBlur ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void OnTimelineImpact ( class AActor* Target );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void MeleeImpact ( );
	void GetMeleeImpactParameters ( struct FAreaEffectParameters* ImpactParams );
	void NonSyncedAction ( );
	void StartInteraction ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_StdCoverMeleeRight::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_HvyCoverMeleeRight
// 0x0000 (0x01DC - 0x01DC)
class USFXCustomAction_HvyCoverMeleeRight : public USFXCustomAction_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127555 ];

		return pClassPointer;
	};

	void Breakout ( );
	void StopBlur ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void OnTimelineImpact ( class AActor* Target );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void MeleeImpact ( );
	void GetMeleeImpactParameters ( struct FAreaEffectParameters* ImpactParams );
	void NonSyncedAction ( );
	void StartInteraction ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_HvyCoverMeleeRight::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_HvyCoverMeleeLeft
// 0x0000 (0x01DC - 0x01DC)
class USFXCustomAction_HvyCoverMeleeLeft : public USFXCustomAction_HvyCoverMeleeRight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127554 ];

		return pClassPointer;
	};

	void Breakout ( );
	void StopBlur ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void OnTimelineImpact ( class AActor* Target );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void MeleeImpact ( );
	void GetMeleeImpactParameters ( struct FAreaEffectParameters* ImpactParams );
	void NonSyncedAction ( );
	void StartInteraction ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_HvyCoverMeleeLeft::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_HvyStdCoverMeleeLeft
// 0x0000 (0x01DC - 0x01DC)
class USFXCustomAction_HvyStdCoverMeleeLeft : public USFXCustomAction_HvyCoverMeleeLeft
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127553 ];

		return pClassPointer;
	};

	void Breakout ( );
	void StopBlur ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void OnTimelineImpact ( class AActor* Target );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void MeleeImpact ( );
	void GetMeleeImpactParameters ( struct FAreaEffectParameters* ImpactParams );
	void NonSyncedAction ( );
	void StartInteraction ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_HvyStdCoverMeleeLeft::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_HvyStdCoverMeleeRight
// 0x0000 (0x01DC - 0x01DC)
class USFXCustomAction_HvyStdCoverMeleeRight : public USFXCustomAction_HvyCoverMeleeRight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127556 ];

		return pClassPointer;
	};

	void Breakout ( );
	void StopBlur ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void OnTimelineImpact ( class AActor* Target );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void MeleeImpact ( );
	void GetMeleeImpactParameters ( struct FAreaEffectParameters* ImpactParams );
	void NonSyncedAction ( );
	void StartInteraction ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_HvyStdCoverMeleeRight::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_RifleMeleeOne
// 0x0004 (0x01E0 - 0x01DC)
class USFXCustomAction_RifleMeleeOne : public USFXCustomAction_PlayerMeleeBase
{
public:
	float                                              BladeImpactScale;                                 		// 0x01DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127557 ];

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

UClass* USFXCustomAction_RifleMeleeOne::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_RifleMeleeTwo
// 0x0000 (0x01E0 - 0x01E0)
class USFXCustomAction_RifleMeleeTwo : public USFXCustomAction_RifleMeleeOne
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127558 ];

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

UClass* USFXCustomAction_RifleMeleeTwo::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_RifleMeleeThree
// 0x0000 (0x01E0 - 0x01E0)
class USFXCustomAction_RifleMeleeThree : public USFXCustomAction_RifleMeleeTwo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127559 ];

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

UClass* USFXCustomAction_RifleMeleeThree::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PistolMeleeOne
// 0x0000 (0x01DC - 0x01DC)
class USFXCustomAction_PistolMeleeOne : public USFXCustomAction_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127560 ];

		return pClassPointer;
	};

	void Breakout ( );
	void StopBlur ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void OnTimelineImpact ( class AActor* Target );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void MeleeImpact ( );
	void GetMeleeImpactParameters ( struct FAreaEffectParameters* ImpactParams );
	void NonSyncedAction ( );
	void StartInteraction ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_PistolMeleeOne::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PistolMeleeTwo
// 0x0000 (0x01DC - 0x01DC)
class USFXCustomAction_PistolMeleeTwo : public USFXCustomAction_PistolMeleeOne
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127561 ];

		return pClassPointer;
	};

	void Breakout ( );
	void StopBlur ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void OnTimelineImpact ( class AActor* Target );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void MeleeImpact ( );
	void GetMeleeImpactParameters ( struct FAreaEffectParameters* ImpactParams );
	void NonSyncedAction ( );
	void StartInteraction ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_PistolMeleeTwo::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PistolMeleeThree
// 0x0000 (0x01DC - 0x01DC)
class USFXCustomAction_PistolMeleeThree : public USFXCustomAction_PistolMeleeTwo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127562 ];

		return pClassPointer;
	};

	void Breakout ( );
	void StopBlur ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void OnTimelineImpact ( class AActor* Target );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void MeleeImpact ( );
	void GetMeleeImpactParameters ( struct FAreaEffectParameters* ImpactParams );
	void NonSyncedAction ( );
	void StartInteraction ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_PistolMeleeThree::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerStandardImpact
// 0x0000 (0x0101 - 0x0101)
class USFXCustomAction_PlayerStandardImpact : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127563 ];

		return pClassPointer;
	};

	void ActivateImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CheckForRagdollRecovery ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	void Init ( struct FVector HitLocation, struct FVector HitNormal, int BoneIndex, unsigned long bPlayImpact, class UClass* DamageType );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_PlayerStandardImpact::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerStandardImpactForward
// 0x0000 (0x0101 - 0x0101)
class USFXCustomAction_PlayerStandardImpactForward : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127564 ];

		return pClassPointer;
	};

	void ActivateImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CheckForRagdollRecovery ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	void Init ( struct FVector HitLocation, struct FVector HitNormal, int BoneIndex, unsigned long bPlayImpact, class UClass* DamageType );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_PlayerStandardImpactForward::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerStandardImpactLeft
// 0x0000 (0x0101 - 0x0101)
class USFXCustomAction_PlayerStandardImpactLeft : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127565 ];

		return pClassPointer;
	};

	void ActivateImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CheckForRagdollRecovery ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	void Init ( struct FVector HitLocation, struct FVector HitNormal, int BoneIndex, unsigned long bPlayImpact, class UClass* DamageType );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_PlayerStandardImpactLeft::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerStandardImpactRight
// 0x0000 (0x0101 - 0x0101)
class USFXCustomAction_PlayerStandardImpactRight : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127566 ];

		return pClassPointer;
	};

	void ActivateImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CheckForRagdollRecovery ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	void Init ( struct FVector HitLocation, struct FVector HitNormal, int BoneIndex, unsigned long bPlayImpact, class UClass* DamageType );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_PlayerStandardImpactRight::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerMeleed
// 0x0000 (0x0101 - 0x0101)
class USFXCustomAction_PlayerMeleed : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127567 ];

		return pClassPointer;
	};

	void ActivateImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CheckForRagdollRecovery ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	void Init ( struct FVector HitLocation, struct FVector HitNormal, int BoneIndex, unsigned long bPlayImpact, class UClass* DamageType );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_PlayerMeleed::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_KnockbackImpactForward
// 0x0000 (0x0101 - 0x0101)
class USFXCustomAction_KnockbackImpactForward : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127568 ];

		return pClassPointer;
	};

	void ActivateImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CheckForRagdollRecovery ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	void Init ( struct FVector HitLocation, struct FVector HitNormal, int BoneIndex, unsigned long bPlayImpact, class UClass* DamageType );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_KnockbackImpactForward::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_MeleedLeft
// 0x0000 (0x0101 - 0x0101)
class USFXCustomAction_MeleedLeft : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127569 ];

		return pClassPointer;
	};

	void ActivateImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CheckForRagdollRecovery ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	void Init ( struct FVector HitLocation, struct FVector HitNormal, int BoneIndex, unsigned long bPlayImpact, class UClass* DamageType );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_MeleedLeft::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_MeleedRight
// 0x0000 (0x0101 - 0x0101)
class USFXCustomAction_MeleedRight : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127570 ];

		return pClassPointer;
	};

	void ActivateImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CheckForRagdollRecovery ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	void Init ( struct FVector HitLocation, struct FVector HitNormal, int BoneIndex, unsigned long bPlayImpact, class UClass* DamageType );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_MeleedRight::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_KnockbackImpact
// 0x0000 (0x0101 - 0x0101)
class USFXCustomAction_KnockbackImpact : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127571 ];

		return pClassPointer;
	};

	void ActivateImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CheckForRagdollRecovery ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	void Init ( struct FVector HitLocation, struct FVector HitNormal, int BoneIndex, unsigned long bPlayImpact, class UClass* DamageType );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_KnockbackImpact::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_KnockbackImpactLeft
// 0x0000 (0x0101 - 0x0101)
class USFXCustomAction_KnockbackImpactLeft : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127572 ];

		return pClassPointer;
	};

	void ActivateImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CheckForRagdollRecovery ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	void Init ( struct FVector HitLocation, struct FVector HitNormal, int BoneIndex, unsigned long bPlayImpact, class UClass* DamageType );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_KnockbackImpactLeft::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_KnockbackImpactRight
// 0x0000 (0x0101 - 0x0101)
class USFXCustomAction_KnockbackImpactRight : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127573 ];

		return pClassPointer;
	};

	void ActivateImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CheckForRagdollRecovery ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	void Init ( struct FVector HitLocation, struct FVector HitNormal, int BoneIndex, unsigned long bPlayImpact, class UClass* DamageType );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_KnockbackImpactRight::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_MeleedForward
// 0x0000 (0x0101 - 0x0101)
class USFXCustomAction_MeleedForward : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127574 ];

		return pClassPointer;
	};

	void ActivateImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CheckForRagdollRecovery ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	void Init ( struct FVector HitLocation, struct FVector HitNormal, int BoneIndex, unsigned long bPlayImpact, class UClass* DamageType );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_MeleedForward::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_FlinchBase
// 0x0090 (0x017E - 0x00EE)
class USFXCustomAction_FlinchBase : public USFXCustomAction_SingleAnim
{
public:
	struct FBodyStance                                 BS_Reaction;                                      		// 0x00F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionAlt;                                   		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionMidRight;                              		// 0x0108 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionAltMidRight;                           		// 0x0114 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionMidLeft;                               		// 0x0120 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionAltMidLeft;                            		// 0x012C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionStdRight;                              		// 0x0138 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionAltStdRight;                           		// 0x0144 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionStdLeft;                               		// 0x0150 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionAltStdLeft;                            		// 0x015C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAnimSet*                                    AnimSet;                                          		// 0x0168 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 CloseCallSoundPlayer;                             		// 0x016C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 CloseCallImpactSoundPlayer;                       		// 0x0170 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 CloseCallSoundHench;                              		// 0x0174 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 CloseCallImpactSoundHench;                        		// 0x0178 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CoverType;                                        		// 0x017C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CoverAction;                                      		// 0x017D (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127576 ];

		return pClassPointer;
	};

	void PlayImpactSound ( );
	void PlayWhizSound ( );
	void FlinchActionOverride ( );
	void StopCustomAction ( );
	void StartCustomAction ( );
	struct FBodyStance GetBodyStanceAnim ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_FlinchBase::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_FlinchLight
// 0x0000 (0x017E - 0x017E)
class USFXCustomAction_FlinchLight : public USFXCustomAction_FlinchBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127575 ];

		return pClassPointer;
	};

	void PlayImpactSound ( );
	void PlayWhizSound ( );
	void FlinchActionOverride ( );
	void StopCustomAction ( );
	void StartCustomAction ( );
	struct FBodyStance GetBodyStanceAnim ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_FlinchLight::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_FlinchHeavy
// 0x0000 (0x017E - 0x017E)
class USFXCustomAction_FlinchHeavy : public USFXCustomAction_FlinchBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127577 ];

		return pClassPointer;
	};

	void PlayImpactSound ( );
	void PlayWhizSound ( );
	void FlinchActionOverride ( );
	void StopCustomAction ( );
	void StartCustomAction ( );
	struct FBodyStance GetBodyStanceAnim ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_FlinchHeavy::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerOnFire
// 0x0000 (0x0101 - 0x0101)
class USFXCustomAction_PlayerOnFire : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127578 ];

		return pClassPointer;
	};

	void ActivateImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CheckForRagdollRecovery ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	void Init ( struct FVector HitLocation, struct FVector HitNormal, int BoneIndex, unsigned long bPlayImpact, class UClass* DamageType );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_PlayerOnFire::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_AdeptPunch
// 0x0000 (0x0144 - 0x0144)
class USFXCustomAction_AdeptPunch : public USFXCustomAction_PlayerHeavyMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127584 ];

		return pClassPointer;
	};

	void StopCustomAction ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void OnTimelineImpact ( class AActor* Target );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void MeleeImpact ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_AdeptPunch::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_AdeptHeavyMelee
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_AdeptHeavyMelee : public USFXDamageType_HeavyMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127595 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_AdeptHeavyMelee::pClassPointer = NULL;

// Class sfxgamecontent.SFXSeqEvt_PerformedMeleeOverCover
// 0x0000 (0x00D2 - 0x00D2)
class USFXSeqEvt_PerformedMeleeOverCover : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127602 ];

		return pClassPointer;
	};

	void eventToggled ( );
	void Reset ( );
	bool PassesWhoTriggers ( class AActor* inInstigator );
	bool CheckActivate ( class AActor* inOriginator, class AActor* inInstigator, unsigned long bTest, unsigned long bPushTop, unsigned long bSFXForceThisFrame, TArray< int >* ActivateIndices );
	void eventRegisterEvent ( );
};

UClass* USFXSeqEvt_PerformedMeleeOverCover::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_AdeptSyncCoverGrab
// 0x0000 (0x0194 - 0x0194)
class USFXCustomAction_AdeptSyncCoverGrab : public USFXCustomAction_SyncCoverGrab
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127652 ];

		return pClassPointer;
	};

	void StopCustomAction ( );
	void NonSyncedAction ( );
	void SyncAttack ( );
	void GetVictimAnim ( struct FBodyStance* Stance );
	void GetAttackerAnim ( struct FBodyStance* Stance );
	class ABioPawn* GetVictimPawn ( );
	void StartCustomAction ( );
	bool ShouldPlayMirrorAnim ( );
	bool VerifyVictimDestIsClear ( class ABioPawn* VictimPawn, struct FVector DestinationPos );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void StartMeleeAttack ( );
};

UClass* USFXCustomAction_AdeptSyncCoverGrab::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_Meleed
// 0x0000 (0x0101 - 0x0101)
class USFXCustomAction_Meleed : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127845 ];

		return pClassPointer;
	};

	void ActivateImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CheckForRagdollRecovery ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	void Init ( struct FVector HitLocation, struct FVector HitNormal, int BoneIndex, unsigned long bPlayImpact, class UClass* DamageType );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_Meleed::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_DisableAI
// 0x0000 (0x0062 - 0x0062)
class USFXGameEffect_DisableAI : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 127879 ];

		return pClassPointer;
	};

	class AController* CheckOwnerInstigator ( class AController* Attacker );
	void SpawnWeaponImpactVFX ( class AActor* inInstigator, struct FImpactInfo Impact, class UParticleSystem* ImpactParticleSystem, unsigned long UseImpactNormal, unsigned long UseGodBone, float DrawScale );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	class UClass* LoadGameEffectClass ( struct FString GEClassName );
	void OnUnpaused ( );
	void OnPaused ( );
	void OnCombatEnd ( );
	void eventOnRemoved ( );
	void eventOnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void ComputeCustomEffectValue ( float* Value );
};

UClass* USFXGameEffect_DisableAI::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerKnockbackImpact
// 0x0000 (0x0101 - 0x0101)
class USFXCustomAction_PlayerKnockbackImpact : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128005 ];

		return pClassPointer;
	};

	void ActivateImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CheckForRagdollRecovery ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	void Init ( struct FVector HitLocation, struct FVector HitNormal, int BoneIndex, unsigned long bPlayImpact, class UClass* DamageType );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_PlayerKnockbackImpact::pClassPointer = NULL;

// Class sfxgamecontent.SFXCustomAction_PlayerStaggerImpact
// 0x0000 (0x0101 - 0x0101)
class USFXCustomAction_PlayerStaggerImpact : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128168 ];

		return pClassPointer;
	};

	void ActivateImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CheckForRagdollRecovery ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	void Init ( struct FVector HitLocation, struct FVector HitNormal, int BoneIndex, unsigned long bPlayImpact, class UClass* DamageType );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_PlayerStaggerImpact::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_AdeptHeavyMelee_NoRagdoll
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_AdeptHeavyMelee_NoRagdoll : public USFXDamageType_AdeptHeavyMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128354 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_AdeptHeavyMelee_NoRagdoll::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_BioticExplosion
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_BioticExplosion : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128357 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_BioticExplosion::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_BioticExplosion_NoRagdoll
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_BioticExplosion_NoRagdoll : public USFXDamageType_BioticExplosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128360 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_BioticExplosion_NoRagdoll::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_HeavyPistol
// 0x0000 (0x00E2 - 0x00E2)
class USFXDamageType_HeavyPistol : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128363 ];

		return pClassPointer;
	};

	float CalculateDamageMultiplier ( struct FDamageCalculationAlgorithm* DamageCalc );
	void ResetDamageCalc ( struct FDamageCalculationAlgorithm* DamageCalc );
	bool CanPlayDeathEffect ( class ABioPawn* Target, class AController* Killer );
};

UClass* USFXDamageType_HeavyPistol::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_Warp
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_Warp : public USFXDamageType_Power_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128366 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_Warp::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_ImprovedWarp
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_ImprovedWarp : public USFXDamageType_Warp
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128371 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_ImprovedWarp::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_WarpDoT
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_WarpDoT : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128374 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_WarpDoT::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_ImprovedWarpDoT
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_ImprovedWarpDoT : public USFXDamageType_WarpDoT
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128377 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_ImprovedWarpDoT::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_Shockwave
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_Shockwave : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128380 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_Shockwave::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_Shockwave_NoRagdoll
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_Shockwave_NoRagdoll : public USFXDamageType_Shockwave
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128383 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_Shockwave_NoRagdoll::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_Singularity
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_Singularity : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128386 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_Singularity::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_Singularity_DoT
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_Singularity_DoT : public USFXDamageType_Singularity
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128389 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_Singularity_DoT::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_Singularity_Explosion
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_Singularity_Explosion : public USFXDamageType_Singularity
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128392 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_Singularity_Explosion::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_Singularity_NoRagdoll
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_Singularity_NoRagdoll : public USFXDamageType_Singularity
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128395 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_Singularity_NoRagdoll::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_AntiGravity
// 0x0000 (0x0062 - 0x0062)
class USFXGameEffect_AntiGravity : public USFXGameEffect_PhysicsPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128398 ];

		return pClassPointer;
	};

	class AController* CheckOwnerInstigator ( class AController* Attacker );
	void SpawnWeaponImpactVFX ( class AActor* inInstigator, struct FImpactInfo Impact, class UParticleSystem* ImpactParticleSystem, unsigned long UseImpactNormal, unsigned long UseGodBone, float DrawScale );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	class UClass* LoadGameEffectClass ( struct FString GEClassName );
	void OnUnpaused ( );
	void OnPaused ( );
	void OnCombatEnd ( );
	void eventOnRemoved ( );
	void eventOnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void ComputeCustomEffectValue ( float* Value );
};

UClass* USFXGameEffect_AntiGravity::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_BioticPowerDamageTakenBonus
// 0x0000 (0x0062 - 0x0062)
class USFXGameEffect_BioticPowerDamageTakenBonus : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128406 ];

		return pClassPointer;
	};

	class AController* CheckOwnerInstigator ( class AController* Attacker );
	void SpawnWeaponImpactVFX ( class AActor* inInstigator, struct FImpactInfo Impact, class UParticleSystem* ImpactParticleSystem, unsigned long UseImpactNormal, unsigned long UseGodBone, float DrawScale );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	class UClass* LoadGameEffectClass ( struct FString GEClassName );
	void OnUnpaused ( );
	void OnPaused ( );
	void OnCombatEnd ( );
	void eventOnRemoved ( );
	void eventOnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void ComputeCustomEffectValue ( float* Value );
};

UClass* USFXGameEffect_BioticPowerDamageTakenBonus::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_PartBasedDamageBonus
// 0x0000 (0x0062 - 0x0062)
class USFXGameEffect_PartBasedDamageBonus : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128419 ];

		return pClassPointer;
	};

	class AController* CheckOwnerInstigator ( class AController* Attacker );
	void SpawnWeaponImpactVFX ( class AActor* inInstigator, struct FImpactInfo Impact, class UParticleSystem* ImpactParticleSystem, unsigned long UseImpactNormal, unsigned long UseGodBone, float DrawScale );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	class UClass* LoadGameEffectClass ( struct FString GEClassName );
	void OnUnpaused ( );
	void OnPaused ( );
	void OnCombatEnd ( );
	void eventOnRemoved ( );
	void eventOnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void ComputeCustomEffectValue ( float* Value );
};

UClass* USFXGameEffect_PartBasedDamageBonus::pClassPointer = NULL;

// Class sfxgamecontent.sfxgameeffect_powercombo_biotic
// 0x0000 (0x00F0 - 0x00F0)
class Usfxgameeffect_powercombo_biotic : public Usfxgameeffect_powercombo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128425 ];

		return pClassPointer;
	};

	void ClientDoPowerComboImpact ( class AActor* oActor, int CustomActionReactionType, float DetonationPowerRank, int MiscFlags );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	float GetForce ( float fRatio );
	float GetDamage ( float fRatio );
	void OnPowerComboDetonated ( class Usfxpowercustomaction* DetonationPower, struct FVector HitLocation, struct FVector HitNormal );
	float CalculatePowerRatio ( float DetonationPowerRank );
	void OnRemoved ( );
	void OnApplied ( );
};

UClass* Usfxgameeffect_powercombo_biotic::pClassPointer = NULL;

// Class sfxgamecontent.SFXShake_Power_BioticCombo
// 0x0000 (0x00BC - 0x00BC)
class USFXShake_Power_BioticCombo : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128431 ];

		return pClassPointer;
	};

};

UClass* USFXShake_Power_BioticCombo::pClassPointer = NULL;

// Class sfxgamecontent.SFXRumble_Power_BioticCombo
// 0x0000 (0x0048 - 0x0048)
class USFXRumble_Power_BioticCombo : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128432 ];

		return pClassPointer;
	};

};

UClass* USFXRumble_Power_BioticCombo::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_Ragdoll
// 0x0000 (0x0062 - 0x0062)
class USFXGameEffect_Ragdoll : public USFXGameEffect_PhysicsPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128438 ];

		return pClassPointer;
	};

	class AController* CheckOwnerInstigator ( class AController* Attacker );
	void SpawnWeaponImpactVFX ( class AActor* inInstigator, struct FImpactInfo Impact, class UParticleSystem* ImpactParticleSystem, unsigned long UseImpactNormal, unsigned long UseGodBone, float DrawScale );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	class UClass* LoadGameEffectClass ( struct FString GEClassName );
	void OnUnpaused ( );
	void OnPaused ( );
	void OnCombatEnd ( );
	void eventOnRemoved ( );
	void eventOnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void ComputeCustomEffectValue ( float* Value );
};

UClass* USFXGameEffect_Ragdoll::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_ShockwaveLift
// 0x000A (0x006C - 0x0062)
class USFXGameEffect_ShockwaveLift : public USFXGameEffect_PhysicsPower
{
public:
	float                                              GravityValue;                                     		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              ForceDrag;                                        		// 0x0068 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128446 ];

		return pClassPointer;
	};

	bool HasOtherGravityEffects ( );
	void OnRemoved ( );
	void OnUpdate ( float DeltaSeconds );
	void OnApplied ( );
};

UClass* USFXGameEffect_ShockwaveLift::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_Singularity
// 0x003E (0x00A0 - 0x0062)
class USFXGameEffect_Singularity : public USFXGameEffect_PhysicsPower
{
public:
	struct FVector                                     SingularityLocation;                              		// 0x0064 (0x000C) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x0070 (0x0008) [0x0000000000000000]              
	float                                              InnerRadius;                                      		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              UpdateInterval;                                   		// 0x007C (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    Caster;                                           		// 0x0080 (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              SingularityRadius;                                		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              ForcePerSecond;                                   		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              DamagePerSecond;                                  		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              minHeightForBodyFallSound;                        		// 0x0094 (0x0004) [0x0000000000000000]              
	class Usfxpowercustomaction_singularity*           Power;                                            		// 0x0098 (0x0004) [0x0000000000000000]              
	unsigned long                                      bApplied : 1;                                     		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128459 ];

		return pClassPointer;
	};

	bool OutOfRangeCheck ( float Distance );
	bool IsStillInSingularity ( );
	void OnRemoved ( );
	void AddForceToActor ( struct FVector vForce );
	void InitialMovement ( );
	void UpdateActor ( );
	void OnApplied ( );
};

UClass* USFXGameEffect_Singularity::pClassPointer = NULL;

// Class sfxgamecontent.sfxpowercustomaction_singularity
// 0x020B (0x08A0 - 0x0695)
class Usfxpowercustomaction_singularity : public Usfxpowercustomaction
{
public:
	struct FPowerData                                  Evolve_DoTDamage;                                 		// 0x0698 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  DetonateForce;                                    		// 0x06C8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  DetonateDamage;                                   		// 0x06F8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  DetonateRadius;                                   		// 0x0728 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  NumCharges;                                       		// 0x0758 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  SingularityDuration;                              		// 0x0788 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  PushAwayForce;                                    		// 0x07B8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< class AActor* >                            AffectedActors;                                   		// 0x07E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AActor* >                            ComboAppliedActors;                               		// 0x07F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FAreaEffectParameters                       ExplosionParam;                                   		// 0x0800 (0x0020) [0x0000000000004000]              ( CPF_Config )
	struct FGuid                                       SingularityGuid;                                  		// 0x0820 (0x0010) [0x0000000000000000]              
	struct FVector                                     m_vSingularityLocation;                           		// 0x0830 (0x000C) [0x0000000000000000]              
	float                                              Evolve_RadiusBonus;                               		// 0x083C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DurationBonus;                             		// 0x0840 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ExpandAmount;                              		// 0x0844 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ExpandDuration;                            		// 0x0848 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_AdditionalCharges;                         		// 0x084C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RechargeSpeed;                             		// 0x0850 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                DetonateMaxRagdollCount;                          		// 0x0854 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class URvrClientEffectInterface*                   CE_Singularity;                                   		// 0x0858 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_GrowingSingularity;                            		// 0x085C (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ExplodingSingularity;                          		// 0x0860 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_TargetCrust;                                   		// 0x0864 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_DrainTargetCrust;                              		// 0x0868 (0x0004) [0x0000000000000000]              
	float                                              m_fSingularityRadius;                             		// 0x086C (0x0004) [0x0000000000000000]              
	float                                              m_fSingularityTimer;                              		// 0x0870 (0x0004) [0x0000000000000000]              
	float                                              m_fSingularityCharges;                            		// 0x0874 (0x0004) [0x0000000000000000]              
	float                                              m_fHitPlayerMinDuration;                          		// 0x0878 (0x0004) [0x0000000000000000]              
	float                                              m_fLookupActorTimer;                              		// 0x087C (0x0004) [0x0000000000000000]              
	float                                              m_fLookupActorInterval;                           		// 0x0880 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              m_fGrowTimer;                                     		// 0x0884 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 Release;                                          		// 0x0888 (0x0004) [0x0000000000000000]              
	float                                              NonRagdollChargeUse;                              		// 0x088C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              RagdollChargeUse;                                 		// 0x0890 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ComboNonRagdollDuration;                          		// 0x0894 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus;                               		// 0x0898 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      m_bSingularityActive : 1;                         		// 0x089C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Patch4IterationApplied : 1;                       		// 0x089C (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128491 ];

		return pClassPointer;
	};

	void CombatEnded ( );
	void PopulatePowerStatBarEvolves ( );
	void OnOwnerDestroyed ( );
	void DoJoinInProgress ( );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	void OnPowerRankIncreased ( );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	void SpawnSingularityVFX ( );
	void SpawnSingularity ( );
	bool OnExplosionImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void SingularityExplosion ( );
	void Internal_TurnOffSingularity ( );
	void TurnOffSingularity ( unsigned long bDoReplication );
	bool CanPutInSingularity ( class AActor* oActor );
	void OnGameEffectEnded ( class AActor* oActor );
	bool ImpactNewTarget ( class AActor* oImpacted );
	bool ApplyBioticComboEffect ( class AActor* oTarget );
	void eventTickCustomAction ( float fDeltaTime );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void OnPowerDetonated ( struct FVector HitLocation, struct FVector HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	void ReleasePower ( );
	float GetImpactForce ( class AActor* oImpacted );
	void StartCustomAction ( );
	void OnPowersLoaded ( );
};

UClass* Usfxpowercustomaction_singularity::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_Stasis
// 0x002F (0x00B0 - 0x0081)
class USFXGameEffect_Stasis : public USFXGameEffect_WeldPhysics
{
public:
	struct FGuid                                       StasisCrustGuid;                                  		// 0x0084 (0x0010) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              ForceDrag;                                        		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              InitialHealth;                                    		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              HealthThreshold;                                  		// 0x00A0 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_StasisCrust;                                   		// 0x00A4 (0x0004) [0x0000000000000000]              
	class Usfxpowercustomaction_stasis*                Power;                                            		// 0x00A8 (0x0004) [0x0000000000000000]              
	unsigned long                                      StopAllVelocity : 1;                              		// 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWasInMatinee : 1;                                		// 0x00AC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWasDisabled : 1;                                 		// 0x00AC (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128493 ];

		return pClassPointer;
	};

	void OnRemoved ( );
	void UnStasisTarget ( );
	void OnUpdate ( float DeltaSeconds );
	void NullVelocity ( float DeltaSeconds );
	void StartCrustVFX ( );
	void OnApplied ( );
};

UClass* USFXGameEffect_Stasis::pClassPointer = NULL;

// Class sfxgamecontent.sfxpowercustomaction_stasis
// 0x0134 (0x07C9 - 0x0695)
class Usfxpowercustomaction_stasis : public Usfxpowercustomaction
{
public:
	struct FPowerData                                  StasisBubbleRadius;                               		// 0x0698 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  HealthDamageThreshold;                            		// 0x06C8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  PushAwayForce;                                    		// 0x06F8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< class AActor* >                            m_oAffectedTargets;                               		// 0x0728 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AActor* >                            m_oCurrentStasisTargets;                          		// 0x0734 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             EffectsToRemove;                                  		// 0x0740 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FAreaEffectParameters                       StasisBubbleParameters;                           		// 0x074C (0x0020) [0x0000000000004000]              ( CPF_Config )
	struct FGuid                                       StasisBubbleGuid;                                 		// 0x076C (0x0010) [0x0000000000000000]              
	struct FVector                                     StasisBubbleLocation;                             		// 0x077C (0x000C) [0x0000000000000000]              
	struct FVector                                     StasisBubbleNormal;                               		// 0x0788 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              StasisBubbleTimer;                                		// 0x0794 (0x0004) [0x0000000000000000]              
	float                                              LookForActorsTimer;                               		// 0x0798 (0x0004) [0x0000000000000000]              
	float                                              LookForActorsInterval;                            		// 0x079C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DurationBonus;                             		// 0x07A0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_CooldownBonus;                             		// 0x07A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_VulnerableDamageBonus;                     		// 0x07A8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_NoCooldownChance;                          		// 0x07AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageTakenBonus;                          		// 0x07B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_HealthThresholdPct;                        		// 0x07B4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class Asfxpawn*                                    LastImpactedPawn;                                 		// 0x07B8 (0x0004) [0x0000000000000000]              
	void*                                              TargetImmuneToStasis;                             		// 0x07BC (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_StasisBubble;                                  		// 0x07C0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bStasisBubbleActive : 1;                          		// 0x07C4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bClientCanProcessNoCooldown : 1;                  		// 0x07C4 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned char                                      ClientNoCooldown;                                 		// 0x07C8 (0x0001) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128519 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	void OnGameEffectEnded ( class AActor* oActor );
	void OnOwnerDestroyed ( );
	void DoJoinInProgress ( );
	void UnStasisCurrentTargets ( );
	void ClientImpactClearEffects ( class AActor* oImpacted );
	void ImpactStasis ( class AActor* oImpacted, float fDuration );
	void ImpactPushAway ( class AActor* oImpacted );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void eventTickCustomAction ( float fDeltaTime );
	void ClientEndStasisEffect ( class AActor* oActor );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void StopStasisBubble ( unsigned long bReplicate );
	void StartStasisBubbleVFX ( );
	void OnPowerDetonated ( struct FVector HitLocation, struct FVector HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	void StartPowerCooldown ( );
	void StartCustomAction ( );
};

UClass* Usfxpowercustomaction_stasis::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_WeaponDamageTakenBonus
// 0x0000 (0x0062 - 0x0062)
class USFXGameEffect_WeaponDamageTakenBonus : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128524 ];

		return pClassPointer;
	};

	class AController* CheckOwnerInstigator ( class AController* Attacker );
	void SpawnWeaponImpactVFX ( class AActor* inInstigator, struct FImpactInfo Impact, class UParticleSystem* ImpactParticleSystem, unsigned long UseImpactNormal, unsigned long UseGodBone, float DrawScale );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	class UClass* LoadGameEffectClass ( struct FString GEClassName );
	void OnUnpaused ( );
	void OnPaused ( );
	void OnCombatEnd ( );
	void eventOnRemoved ( );
	void eventOnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void ComputeCustomEffectValue ( float* Value );
};

UClass* USFXGameEffect_WeaponDamageTakenBonus::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_WeaponWeightModifier
// 0x000E (0x0070 - 0x0062)
class USFXGameEffect_WeaponWeightModifier : public USFXGameEffect
{
public:
	TArray< unsigned char >                            WeaponClasses;                                    		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128530 ];

		return pClassPointer;
	};

	void OnRemoved ( );
	void OnApplied ( );
};

UClass* USFXGameEffect_WeaponWeightModifier::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_WeightCapacity
// 0x0000 (0x0062 - 0x0062)
class USFXGameEffect_WeightCapacity : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128540 ];

		return pClassPointer;
	};

	class AController* CheckOwnerInstigator ( class AController* Attacker );
	void SpawnWeaponImpactVFX ( class AActor* inInstigator, struct FImpactInfo Impact, class UParticleSystem* ImpactParticleSystem, unsigned long UseImpactNormal, unsigned long UseGodBone, float DrawScale );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	class UClass* LoadGameEffectClass ( struct FString GEClassName );
	void OnUnpaused ( );
	void OnPaused ( );
	void OnCombatEnd ( );
	void eventOnRemoved ( );
	void eventOnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void ComputeCustomEffectValue ( float* Value );
};

UClass* USFXGameEffect_WeightCapacity::pClassPointer = NULL;

// Class sfxgamecontent.SFXPowerCustomAction_Shockwave
// 0x015B (0x07F0 - 0x0695)
class USFXPowerCustomAction_Shockwave : public Usfxpowercustomaction
{
public:
	struct FPowerData                                  NumShockwaveImpacts;                              		// 0x0698 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  GravityLevel;                                     		// 0x06C8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  GravityDuration;                                  		// 0x06F8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  TimeBetweenImpacts;                               		// 0x0728 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  LiftDuration;                                     		// 0x0758 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  Range;                                            		// 0x0788 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< class AActor* >                            ImpactedActors;                                   		// 0x07B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      ImpactRumbleClass;                                		// 0x07C4 (0x0004) [0x0000000000000000]              
	class UClass*                                      ImpactScreenShakeClass;                           		// 0x07C8 (0x0004) [0x0000000000000000]              
	class UClass*                                      ImpactActorScreenShakeClass;                      		// 0x07CC (0x0004) [0x0000000000000000]              
	float                                              Evolve_DamageBonus;                               		// 0x07D0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RadiusBonus;                               		// 0x07D4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_BioticComboMult;                           		// 0x07D8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_CooldownBonus;                             		// 0x07DC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_NumShockwavesBonus;                        		// 0x07E0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class URvrClientEffectInterface*                   CE_ShockwaveImpact;                               		// 0x07E4 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 ImpactActorSound;                                 		// 0x07E8 (0x0004) [0x0000000000000000]              
	int                                                NumTargetsHit;                                    		// 0x07EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128546 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void DoSubsequentImpact ( class AActor* HitActor, struct FVector ImpactLocation, int nImpactCount );
	void DoImpact ( struct FVector location, struct FRotator ProjectileRotation );
	void OnPowerDetonated ( struct FVector HitLocation, struct FVector HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	class ASFXProjectile_PowerCustomAction* ReleaseProjectilePower ( );
};

UClass* USFXPowerCustomAction_Shockwave::pClassPointer = NULL;

// Class sfxgamecontent.SFXProjectile_PowerCustomAction_Shockwave
// 0x001C (0x0440 - 0x0424)
class ASFXProjectile_PowerCustomAction_Shockwave : public ASFXProjectile_PowerCustomAction
{
public:
	float                                              TimeBetweenImpacts;                               		// 0x0424 (0x0004) [0x0000000000000000]              
	float                                              TimeToNextImpact;                                 		// 0x0428 (0x0004) [0x0000000000000000]              
	float                                              FirstImpactDelay;                                 		// 0x042C (0x0004) [0x0000000000000000]              
	int                                                NumShockwaves;                                    		// 0x0430 (0x0004) [0x0000000000000000]              
	class USFXPowerCustomAction_Shockwave*             ShockwavePower;                                   		// 0x0434 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 LastShockwaveSound;                               		// 0x0438 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 HenchmanLastShockwaveSound;                       		// 0x043C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128558 ];

		return pClassPointer;
	};

	void ReplicateExplode ( struct FVector HitLocation, struct FVector HitNormal );
	void Tick ( float DeltaTime );
	bool InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class Usfxpowercustomaction* oPower );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
};

UClass* ASFXProjectile_PowerCustomAction_Shockwave::pClassPointer = NULL;

// Class sfxgamecontent.SFXRumble_Power_HeavyImpact
// 0x0000 (0x0048 - 0x0048)
class USFXRumble_Power_HeavyImpact : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128632 ];

		return pClassPointer;
	};

};

UClass* USFXRumble_Power_HeavyImpact::pClassPointer = NULL;

// Class sfxgamecontent.SFXShake_Power_Shockwave
// 0x0000 (0x00BC - 0x00BC)
class USFXShake_Power_Shockwave : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128633 ];

		return pClassPointer;
	};

};

UClass* USFXShake_Power_Shockwave::pClassPointer = NULL;

// Class sfxgamecontent.SFXShake_Power_HeavyImpact
// 0x0000 (0x00BC - 0x00BC)
class USFXShake_Power_HeavyImpact : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128634 ];

		return pClassPointer;
	};

};

UClass* USFXShake_Power_HeavyImpact::pClassPointer = NULL;

// Class sfxgamecontent.SFXProjectile_PowerCustomAction_SuperSeeking
// 0x0027 (0x048C - 0x0465)
class ASFXProjectile_PowerCustomAction_SuperSeeking : public Asfxprojectile_powercustomaction_seeking
{
public:
	struct FVector2D                                   DownwardPitchScale;                               		// 0x0468 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   DownwardPitchScaleRange;                          		// 0x0470 (0x0008) [0x0000000000000000]              
	float                                              CornerStrength;                                   		// 0x0478 (0x0004) [0x0000000000000000]              
	float                                              ApexDist;                                         		// 0x047C (0x0004) [0x0000000000000000]              
	float                                              MaxAngleOffset;                                   		// 0x0480 (0x0004) [0x0000000000000000]              
	float                                              OffsetAimMaxDistance;                             		// 0x0484 (0x0004) [0x0000000000000000]              
	float                                              OffsetAimMinDistance;                             		// 0x0488 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128814 ];

		return pClassPointer;
	};

	void InitializeRotation ( class APawn* oCasterPawn );
	void TickAimRotation ( float DeltaTime, struct FVector SeekVector );
};

UClass* ASFXProjectile_PowerCustomAction_SuperSeeking::pClassPointer = NULL;

// Class sfxgamecontent.SFXPowerCustomAction_Warp
// 0x00B7 (0x074C - 0x0695)
class USFXPowerCustomAction_Warp : public Usfxpowercustomaction
{
public:
	struct FPowerData                                  ArmorWeakness;                                    		// 0x0698 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  Evolve_DebuffDamageTakenDuration;                 		// 0x06C8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FAreaEffectParameters                       BioticExplosionParameters;                        		// 0x06F8 (0x0020) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus;                               		// 0x0718 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus2;                              		// 0x071C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DoTDuration;                               		// 0x0720 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DebuffWeaponDamageTakenStrength;           		// 0x0724 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DebuffBioticDamageTakenStrength;           		// 0x0728 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_CooldownBonus;                             		// 0x072C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ComboForce;                                		// 0x0730 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ComboDamage;                               		// 0x0734 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ComboRadius;                               		// 0x0738 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ArmorWeaknessBonus;                        		// 0x073C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldDamageBonus;                         		// 0x0740 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              InstantDamagePercent;                             		// 0x0744 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class URvrClientEffectInterface*                   CE_DeathEffect;                                   		// 0x0748 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128947 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	void PlayImpactEffects ( class AActor* oImpacted, struct FVector ImpactLocation, struct FVector ImpactNormal );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	float GetTotalDamage ( class AActor* oImpacted, class UClass** DamageType );
	float GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType );
};

UClass* USFXPowerCustomAction_Warp::pClassPointer = NULL;

// Class sfxgamecontent.SFXShield_Biotic_Player
// 0x0000 (0x03D0 - 0x03D0)
class ASFXShield_Biotic_Player : public Asfxshield_player
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129090 ];

		return pClassPointer;
	};

	void BeginRecharge ( );
	void PlayRecharge ( );
	void BreachShields ( class UClass* DamageType );
	void ApplyDamageToShields ( class UClass* DamageType, struct FVector Momentum, struct FVector HitLocation, struct FTraceHitInfo HitInfo, class AController* instigatedBy, float* Damage, float* TotalDamageDone );
	float GetShieldRegenDelay ( );
	float GetShieldRegenRate ( );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
};

UClass* ASFXShield_Biotic_Player::pClassPointer = NULL;

// Class sfxgamecontent.SFXWeapon_AssaultRifle_Avenger
// 0x0000 (0x0DD8 - 0x0DD8)
class ASFXWeapon_AssaultRifle_Avenger : public ASFXWeapon_AssaultRifle_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129096 ];

		return pClassPointer;
	};

	unsigned char GetStoreQualification ( );
	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
	void PlayFireEffects ( unsigned char FiringMode, struct FVector HitLocation );
	bool ShouldSpawnTracerFX ( );
};

UClass* ASFXWeapon_AssaultRifle_Avenger::pClassPointer = NULL;

// Class sfxgamecontent.SFXWeapon_Pistol_Predator
// 0x0000 (0x0DD2 - 0x0DD2)
class ASFXWeapon_Pistol_Predator : public ASFXWeapon_Pistol_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129122 ];

		return pClassPointer;
	};

	void GiveWeaponCodex ( );
	void ClearFizzleCount ( );
	void IncrementFizzleCount ( );
	bool IsClientReadyToInitialize ( );
	void UnsubscribeFromImpactNotifications ( struct FScriptDelegate Callback );
	void SubscribeToImpactNotifications ( struct FScriptDelegate Callback );
	float eventGetPenetrationDepth ( );
	class UClass* LoadWeaponClass ( struct FString WeaponClassName );
	class UClass* FindWeaponClass ( struct FString WeaponClassName );
	unsigned char GetStoreQualification ( );
	void SetWeaponHidden ( unsigned long bWeaponHidden );
	void GetWeaponStatBarValues ( unsigned char StatBar, float* WeaponValue );
	bool eventHasLoopingFire ( );
	void ClearFlashLocation ( );
	void SetFlashLocation ( struct FVector HitLocation );
	void ApplyDefaultWeaponMods ( unsigned long bClearOldMods );
	void SetWeaponModBodyColour ( int ModLevel );
	void SetWeaponModGripColour ( int ModLevel );
	void SetWeaponModEmissiveValue ( int ModLevel );
	void ClearWeaponModMaterialParameters ( );
	void RestoreFlashlightToNormal ( );
	void DelayedRestoreFlashlightToNormal ( );
	void SetFlashlightFireMode ( );
	void DetachFlashlight ( );
	void AttachFlashlight ( );
	bool IsWeaponAlreadyAwarded ( class UClass* WeaponClass );
	bool IsWeaponUnlocked ( class UClass* WeaponClass );
	bool Upgrade ( class ASFXPawn_Player* Player, class UClass* WeaponClass, unsigned long bNoNotification, unsigned long bIsMultiplayer, unsigned long bDoesNotCountasNGPFound, unsigned long bUnlockOnly );
	bool IsAnimTypeSniper ( );
	bool IsAnimTypeShotgun ( );
	bool IsAnimTypePistol ( );
	float eventGetReactionChanceModifier ( );
	void ClientWeaponSet ( unsigned long bOptionalSet, unsigned long bDoNotActivate );
	void eventCleanUpDummyFire ( );
	void eventWeaponStoppedFiring ( unsigned char FiringMode );
	void eventDummyFire ( unsigned char FireModeNum, struct FVector TargetLoc, class AActor* AttachedTo, float AimErrorDeg, class AActor* TargetActor );
	float GetInitialDummyFireDelay ( );
	void BeginDummyFire ( unsigned char FiringMode, class AActor* AttachedTo );
	void WeaponFired ( unsigned char FiringMode, unsigned long bViaReplication, struct FVector HitLocation );
	class AProjectile* eventProjectileFireSimple ( float AimErrorDeg );
	void CalcRemoteImpactEffects ( unsigned char FireModeNum, struct FVector GivenHitLocation, unsigned long bViaReplication );
	bool eventCalculateCoverLeanOutOffset ( unsigned char Direction, unsigned char Type, struct FVector* Offset );
	struct FString GetGeneralDescription ( );
	struct FString GetShortDescription ( );
	struct FString GetPrettyName ( int Level );
	void GetWeaponDebug ( TArray< struct FString >* DebugInfo );
	void DrawDebugShot ( struct FVector StartLocation, struct FVector EndLocation );
	void SetAmmoPowerHologramEnabled ( unsigned long bEnabled, unsigned long bForceEnabled );
	void SetAmmoPowerHologramTemplates ( class UParticleSystem* Template, class UParticleSystem* IconTemplate );
	void eventDestroyed ( );
	void HolderDied ( );
	void DropFrom ( struct FVector StartLocation, struct FVector StartVelocity );
	void ClientWeaponThrown ( );
	bool CanThrow ( );
	void DetachWeapon ( );
	void AttachMuzzleEffectsComponents ( class USkeletalMeshComponent* SkelMesh, struct FName MuzzleSocket, struct FName CasingSocket );
	void AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName );
	void Internal_AssignToSlot ( );
	void AssignToSlot ( unsigned char Slot );
	void GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate );
	void EquipTimedOut ( );
	void EquipFinished ( );
	void EquipNearFinished ( );
	void Collapse ( );
	void Expand ( );
	void StopChargeEffects ( );
	void ShutOffAllEmitters ( );
	void UnEquipTimedOut ( );
	void UnEquipFinished ( );
	void ServerCancelReload ( );
	void CancelReload ( );
	void DoAReload ( );
	void ReloadNearFinished ( );
	void NotifyWeaponRefireDelayExpired ( );
	void NotifyWeaponFired ( unsigned char FireMode );
	void HandleFinishedFiring ( );
	bool ShouldRefire ( );
	int GetBurstsToFire ( );
	int GetBurstFireCount ( );
	void SetupWeaponFire ( unsigned char FireModeNum );
	void ServerStopFire ( unsigned char FireModeNum );
	void EndFire ( unsigned char FireModeNum );
	class AActor* SelectTarget ( );
	void StartFire ( unsigned char FireModeNum );
	bool CanFire ( );
	void StartFullChargeRumble ( );
	void StartChargeEffects ( );
	bool IsChargingWeapon ( );
	void ServerFireChargedShot ( float SentChargeAmount );
	void PlayNoAmmoFireSound ( );
	void PlayNoAmmoEffects ( );
	void TryReload ( unsigned long bDisplayHint );
	void DoReload ( );
	int GetAmmoRestoredPerReload ( );
	float GetReloadDuration ( );
	bool ShouldAutoReload ( );
	bool CanReload ( );
	bool EffectIsRelevant ( struct FVector SpawnLocation, unsigned long bForceDedicated, float CullDistance );
	void PlayReloadEject ( );
	void StopFireEffects ( unsigned char FireModeNum );
	void HearNoiseTimer ( );
	void WeaponPlayWwiseEvent ( class UWwiseEvent* Sound, float NoiseLoudness, struct FVector SoundLoc, struct FName NoiseType );
	void SpawnTracerEffect ( struct FVector HitLocation, float HitDistance );
	bool ShouldSpawnTracerFX ( );
	void PlayOwnedFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void HideReloadEmitters ( );
	void HideMuzzleFlashEmitter ( );
	void StopMuzzleFlashEffect ( );
	bool IsCameraWithinRadius ( struct FVector TestLocation, float Radius );
	bool IsMuzzleFlashRelevant ( );
	void PlayMuzzleFlashEffect ( );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void DummyFireTimerFunction ( );
	void DummyFireNumTimes ( int nNumTimes, struct FVector vHitLocation, class AActor* AttachedTo, float fInaccuracy, class AActor* TargetActor );
	void CheckTimerFireOnce ( );
	void PlayFireEffectsOnce ( struct FVector HitLocation );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
	class UDecalComponent* GetDecalData ( class UPhysicalMaterial* PhysMat, float* FadeTime );
	void SpawnADecal ( struct FImpactInfo Impact );
	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UWwiseEvent* GetImpactSound ( class UPhysicalMaterial* PhysMat );
	void SpawnImpactSounds ( struct FImpactInfo Impact );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UParticleSystem* GetImpactEffect ( class UPhysicalMaterial* PhysMat );
	void SpawnImpactEffects ( struct FImpactInfo Impact );
	void ReplicateImpact ( class ABioPawn* ImpactedPawn, class ASFXProjectile* InProjectile, float fDelay );
	void ClientDoImpact ( class ABioPawn* InImpactedPawn );
	void ProcessInstantHit_Internal ( unsigned char FiringMode, struct FImpactInfo Impact, int NumHits );
	void ProcessInstantHitNearMiss ( struct FVector StartTrace, struct FVector HitLocation );
	void ServerProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, int HitArmourIdx, unsigned long bSuppressedAudio, int NumHits );
	void ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, int NumHits );
	struct FImpactInfo CalcWeaponFire ( struct FVector StartTrace, struct FVector EndTrace, struct FVector Extent, TArray< struct FImpactInfo >* ImpactList );
	void InstantFire ( );
	int GetAmmoCountInMagazine ( );
	float GetLazyFireInterval ( unsigned char FireModeNum );
	float GetFireInterval ( unsigned char FireModeNum );
	bool HasAnyAmmo ( );
	bool HasAmmo ( unsigned char FireModeNum, int Amount );
	bool HasSpareAmmo ( );
	int AddAmmo ( int Amount );
	void ConsumeAmmo ( unsigned char FireModeNum );
	void InitializeAmmo ( );
	unsigned char GetWeaponFireType ( );
	float GetZoomFOV ( );
	bool GetModifiedFOV ( float* FOV );
	struct FVector GetMuzzleLoc ( );
	void SetWeaponRecoil ( float PitchRecoil );
	void ServerSetIsZoomed ( unsigned long bState );
	void SetRTPCPlayerPosition ( unsigned char NewPlayerPosition );
	void SetZoomed ( unsigned long bState );
	float GetAIAimDelay ( );
	float GetPlayerAimError ( float Accuracy );
	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
	float GetRateOfFire ( );
	float GetTraceRange ( );
	struct FVector2D GetWeaponAimErrorRange ( );
	float GetWeaponRecoil ( );
	void ResetAmmoOnHolster ( );
	int GetMaxTotalAmmo ( );
	int GetCurrentTotalAmmo ( );
	int GetCurrentSpareAmmo ( );
	int GetMaxSpareAmmo ( unsigned long bIgnoreCurrentMag );
	int GetMagazineSize ( );
	bool OutOfAmmo ( );
	class UClass* GetDamageType ( unsigned char FiringMode );
	void CalculateBonus ( struct FVector HitLocation, class AActor* HitActor, struct FDamageCalculationAlgorithm* DamageCalc );
	float GetFireModeBaseDamage ( );
	void NotifyUnpossessed ( );
	bool UseFirstPersonCamera ( );
	void GetProjectileFirePosition ( struct FVector* out_ProjLoc, struct FVector* out_ProjDir );
	struct FVector GetPhysicalFireStartLoc ( struct FVector AimDir );
	void OnClientProjectileSpawned ( class ASFXProjectile* NewProjectile );
	class AProjectile* Internal_ProjectileFire ( );
	void ServerProjectileFire ( class AActor* Target, struct FVector ProjLocation, struct FVector ProjDirection );
	class AProjectile* ProjectileFire ( );
	void ForceEndFire ( );
	void InitDefaultDecalProperties ( );
	void ScaleWeapon ( );
	void CacheAnimNodes ( );
	void PostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void InitializeWeapon ( );
	void DeferredPostBeginPlay ( );
	void PostBeginPlay ( );
	void FireModeUpdated ( unsigned char FiringMode, unsigned long bViaReplication );
	void CharacterSlotUpdated ( );
	void eventReplicatedEvent ( struct FName VarName );
	void OnWeaponUnequip ( class ASFXWeapon* Weapon );
	void OnWeaponEquip ( class ASFXWeapon* Weapon );
	void OnWeaponReload ( class ASFXWeapon* Weapon );
	float GetDamageVocProbabilityMod ( );
	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
};

UClass* ASFXWeapon_Pistol_Predator::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_CryoFreeze
// 0x0000 (0x00E9 - 0x00E9)
class USFXDamageType_CryoFreeze : public USFXDamageType_Power_Freeze
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135541 ];

		return pClassPointer;
	};

};

UClass* USFXDamageType_CryoFreeze::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_Shotgun
// 0x0000 (0x00E2 - 0x00E2)
class USFXDamageType_Shotgun : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135544 ];

		return pClassPointer;
	};

	float CalculateDamageMultiplier ( struct FDamageCalculationAlgorithm* DamageCalc );
	void ResetDamageCalc ( struct FDamageCalculationAlgorithm* DamageCalc );
	bool CanPlayDeathEffect ( class ABioPawn* Target, class AController* Killer );
};

UClass* USFXDamageType_Shotgun::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_MaxGrenadeBonus
// 0x0000 (0x0062 - 0x0062)
class USFXGameEffect_MaxGrenadeBonus : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135547 ];

		return pClassPointer;
	};

	class AController* CheckOwnerInstigator ( class AController* Attacker );
	void SpawnWeaponImpactVFX ( class AActor* inInstigator, struct FImpactInfo Impact, class UParticleSystem* ImpactParticleSystem, unsigned long UseImpactNormal, unsigned long UseGodBone, float DrawScale );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	class UClass* LoadGameEffectClass ( struct FString GEClassName );
	void OnUnpaused ( );
	void OnPaused ( );
	void OnCombatEnd ( );
	void eventOnRemoved ( );
	void eventOnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void ComputeCustomEffectValue ( float* Value );
};

UClass* USFXGameEffect_MaxGrenadeBonus::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_MeleeDamageBonus
// 0x0000 (0x007C - 0x007C)
class USFXGameEffect_MeleeDamageBonus : public USFXGameEffect_PowerBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135555 ];

		return pClassPointer;
	};

	void ApplyBonus ( unsigned long bRemove );
	void RemoveBonuses ( );
	void OnRemoved ( );
	void OnApplied ( );
};

UClass* USFXGameEffect_MeleeDamageBonus::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_WeaponStabilityBonus
// 0x0000 (0x0062 - 0x0062)
class USFXGameEffect_WeaponStabilityBonus : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135557 ];

		return pClassPointer;
	};

	class AController* CheckOwnerInstigator ( class AController* Attacker );
	void SpawnWeaponImpactVFX ( class AActor* inInstigator, struct FImpactInfo Impact, class UParticleSystem* ImpactParticleSystem, unsigned long UseImpactNormal, unsigned long UseGodBone, float DrawScale );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	class UClass* LoadGameEffectClass ( struct FString GEClassName );
	void OnUnpaused ( );
	void OnPaused ( );
	void OnCombatEnd ( );
	void eventOnRemoved ( );
	void eventOnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void ComputeCustomEffectValue ( float* Value );
};

UClass* USFXGameEffect_WeaponStabilityBonus::pClassPointer = NULL;

// Class sfxgamecontent.SFXGUI_ShotgunReticle
// 0x001C (0x00A8 - 0x008C)
class USFXGUI_ShotgunReticle : public USFXGUI_WeaponReticleBase
{
public:
	float                                              m_aRawBuffer[ 0x3 ];                              		// 0x008C (0x000C) [0x0000000000000000]              
	int                                                m_nCurrentBufferIndex;                            		// 0x0098 (0x0004) [0x0000000000000000]              
	class UGFxValue*                                   CircleReticle;                                    		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              ReticleOpacity;                                   		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              RadiusModifier;                                   		// 0x00A4 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135563 ];

		return pClassPointer;
	};

	void eventResetReticle ( unsigned long bUnsubscribe );
	void eventTargetCanHitChanged ( unsigned long bInSights );
	void eventUpdate ( float fDeltaT );
	void eventPerformReticleHide ( unsigned long bInstant );
	void eventPerformReticleShow ( unsigned long bInstant );
	void OnReticleLoaded ( );
};

UClass* USFXGUI_ShotgunReticle::pClassPointer = NULL;

// Class sfxgamecontent.SFXPowerCustomAction_CryoBlast
// 0x00F7 (0x078C - 0x0695)
class USFXPowerCustomAction_CryoBlast : public Usfxpowercustomaction
{
public:
	struct FPowerData                                  ArmorWeakness;                                    		// 0x0698 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  SpeedReduction;                                   		// 0x06C8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  FreezeExplodeRadius;                              		// 0x06F8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  DamageTakenBonus;                                 		// 0x0728 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              SpeedReductionDurationMult;                       		// 0x0758 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DurationBonus;                             		// 0x075C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RadiusBonus;                               		// 0x0760 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_SpeedReductionBonus;                       		// 0x0764 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_CooldownBonus;                             		// 0x0768 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_FrozenDamageBonus;                         		// 0x076C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_FreezeExplodeDurationMultiplier;           		// 0x0770 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ArmorWeaknessBonus;                        		// 0x0774 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageTakenBonus;                          		// 0x0778 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class URvrClientEffectInterface*                   CE_HalfFrozenTemplate;                            		// 0x077C (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 FreezeExplosionSound;                             		// 0x0780 (0x0004) [0x0000000000000000]              
	float                                              TimeDilationMin;                                  		// 0x0784 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              TimeDilationMax;                                  		// 0x0788 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135590 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void EvolvePower ( unsigned char choice );
	void RecalculateAllPowerData ( unsigned long bReset );
	struct FVector GetDefaultClientEffectParams ( );
	bool ShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void OnFrozenPawnDied ( class ABioPawn* oPawn );
	void ApplySlowdownEffect ( class ABioPawn* oPawn, float Duration );
	void ApplyFreezeEffect ( class ABioPawn* oPawn, float Duration, float fDelay, unsigned long bCallbackOnDeath );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* USFXPowerCustomAction_CryoBlast::pClassPointer = NULL;

// Class sfxgamecontent.SFXPowerCustomAction_GrenadeBase
// 0x0007 (0x069C - 0x0695)
class USFXPowerCustomAction_GrenadeBase : public Usfxpowercustomaction
{
public:
	void*                                              srNoGrenades;                                     		// 0x0698 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135683 ];

		return pClassPointer;
	};

	struct FString eventGetHUDWheelIconInfo ( );
	bool eventShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	int GetGrenadeCount ( );
	void AdjustGrenadeCount ( int Amount );
	void ReleasePower ( );
	bool CanUsePower ( class AActor* oTarget );
	void ApplyGrenadeBonus ( );
	void ResetPower ( );
	void OnSquadMemberAdded ( class APawn* Pawn );
	void OnPowerRankIncreased ( );
	void OnPowerAdded ( class USFXPowerCustomActionBase* Power );
	void OnPowersLoaded ( );
};

UClass* USFXPowerCustomAction_GrenadeBase::pClassPointer = NULL;

// Class sfxgamecontent.SFXRumble_Power_BioticCharge
// 0x0000 (0x0048 - 0x0048)
class USFXRumble_Power_BioticCharge : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135715 ];

		return pClassPointer;
	};

};

UClass* USFXRumble_Power_BioticCharge::pClassPointer = NULL;

// Class sfxgamecontent.SFXShake_Power_BioticCharge
// 0x0000 (0x00BC - 0x00BC)
class USFXShake_Power_BioticCharge : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135718 ];

		return pClassPointer;
	};

};

UClass* USFXShake_Power_BioticCharge::pClassPointer = NULL;

// Class sfxgamecontent.SFXShield_Energy_Player
// 0x0000 (0x03D0 - 0x03D0)
class ASFXShield_Energy_Player : public Asfxshield_player
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135720 ];

		return pClassPointer;
	};

	void BeginRecharge ( );
	void PlayRecharge ( );
	void BreachShields ( class UClass* DamageType );
	void ApplyDamageToShields ( class UClass* DamageType, struct FVector Momentum, struct FVector HitLocation, struct FTraceHitInfo HitInfo, class AController* instigatedBy, float* Damage, float* TotalDamageDone );
	float GetShieldRegenDelay ( );
	float GetShieldRegenRate ( );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
};

UClass* ASFXShield_Energy_Player::pClassPointer = NULL;

// Class sfxgamecontent.SFXWeapon_Shotgun_Katana
// 0x0000 (0x0E5C - 0x0E5C)
class ASFXWeapon_Shotgun_Katana : public ASFXWeapon_Shotgun_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135723 ];

		return pClassPointer;
	};

	unsigned char GetStoreQualification ( );
	void eventDummyFire ( unsigned char FireModeNum, struct FVector TargetLoc, class AActor* AttachedTo, float AimErrorDeg, class AActor* TargetActor );
	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
	void FinishLatentFire ( );
	void PollLatentFire ( );
	void FirePellets ( struct FVector StartLocation, struct FRotator AimRotation, unsigned char FireMode );
	void CalcRemoteImpactEffects ( unsigned char FireModeNum, struct FVector GivenHitLocation, unsigned long bViaReplication );
	void DrawDebugShotgunCone ( struct FVector StartLocation, struct FRotator AimRot );
	void CustomFire ( );
	bool ShouldSpawnTracerFX ( );
	void ScaleWeapon ( );
};

UClass* ASFXWeapon_Shotgun_Katana::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_Falcon
// 0x0000 (0x00E2 - 0x00E2)
class USFXDamageType_Falcon : public USFXDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138287 ];

		return pClassPointer;
	};

	float CalculateDamageMultiplier ( struct FDamageCalculationAlgorithm* DamageCalc );
	void ResetDamageCalc ( struct FDamageCalculationAlgorithm* DamageCalc );
	bool CanPlayDeathEffect ( class ABioPawn* Target, class AController* Killer );
};

UClass* USFXDamageType_Falcon::pClassPointer = NULL;

// Class sfxgamecontent.SFXDamageType_Gib
// 0x0000 (0x00E2 - 0x00E2)
class USFXDamageType_Gib : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138290 ];

		return pClassPointer;
	};

	float CalculateDamageMultiplier ( struct FDamageCalculationAlgorithm* DamageCalc );
	void ResetDamageCalc ( struct FDamageCalculationAlgorithm* DamageCalc );
	bool CanPlayDeathEffect ( class ABioPawn* Target, class AController* Killer );
};

UClass* USFXDamageType_Gib::pClassPointer = NULL;

// Class sfxgamecontent.SFXProjectile_Proximity
// 0x0083 (0x0414 - 0x0391)
class ASFXProjectile_Proximity : public ASFXProjectile_Explosive
{
public:
	struct FScreenShakeStruct                          HitShake;                                         		// 0x0394 (0x0078) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              TimeAlive;                                        		// 0x040C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ProximityRadius;                                  		// 0x0410 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138297 ];

		return pClassPointer;
	};

	void Recycle ( );
	void DoImpact ( class AActor* InImpactedActor, class AController* InInstigatorController, float BaseDamage, float InDamageRadius, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, struct FTraceHitInfo* HitInfo );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void Tick ( float DeltaTime );
	void Init ( struct FVector Dir );
	void TickProximity ( );
};

UClass* ASFXProjectile_Proximity::pClassPointer = NULL;

// Class sfxgamecontent.SFXProjectile_SeekingMissile
// 0x006B (0x03FC - 0x0391)
class ASFXProjectile_SeekingMissile : public ASFXProjectile_Explosive
{
public:
	unsigned char                                      UnknownData00[ 0xF ];                             		// 0x0391 (0x000F) MISSED OFFSET
	struct FQuat                                       QuatRotation;                                     		// 0x03A0 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FQuat                                       Roll;                                             		// 0x03B0 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	class UClass*                                      ScreenShakeClass;                                 		// 0x03C0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     MyLastTargetLocation;                             		// 0x03C4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class ABioPawn*                                    AcquiredTarget;                                   		// 0x03D0 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	float                                              TimeAlive;                                        		// 0x03D4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              EvadeDistance;                                    		// 0x03D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurveShape;                                       		// 0x03DC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              UpperBound;                                       		// 0x03E0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UWwiseEventPairObject*                       LockedEvent;                                      		// 0x03E4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UWwiseAudioComponent*                        LockedComponent;                                  		// 0x03E8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              MaxAngleChange;                                   		// 0x03EC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              MaxRetargettingAngle;                             		// 0x03F0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UWwiseEvent*                                 ImpactSound0;                                     		// 0x03F4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      LostTarget : 1;                                   		// 0x03F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bExplodeNextFrame : 1;                            		// 0x03F8 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138334 ];

		return pClassPointer;
	};

	void Recycle ( );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void Destroyed ( );
	void ShutDown ( );
	void Init ( struct FVector Direction );
	void TickPlayer ( float DeltaTime );
	void SetSpeed ( float DeltaTime );
	void DefaultUpdateVelocity ( );
	void TickNPC ( float DeltaTime );
	void Tick ( float DeltaTime );
	struct FVector GetAimLocation ( );
	void AcquireInitialTarget ( );
	void AcquireTarget ( );
};

UClass* ASFXProjectile_SeekingMissile::pClassPointer = NULL;

// Class sfxgamecontent.SFXShake_SeekingMissile
// 0x0000 (0x00BC - 0x00BC)
class USFXShake_SeekingMissile : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138395 ];

		return pClassPointer;
	};

};

UClass* USFXShake_SeekingMissile::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_WeaponMod_AccuracyBonus
// 0x0000 (0x0069 - 0x0069)
class USFXGameEffect_WeaponMod_AccuracyBonus : public USFXGameEffect_WeaponMod
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140394 ];

		return pClassPointer;
	};

	void OnApplied ( );
};

UClass* USFXGameEffect_WeaponMod_AccuracyBonus::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_WeaponMod_ArmorPiercingBonus
// 0x0000 (0x0069 - 0x0069)
class USFXGameEffect_WeaponMod_ArmorPiercingBonus : public USFXGameEffect_WeaponMod
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140400 ];

		return pClassPointer;
	};

	void OnApplied ( );
};

UClass* USFXGameEffect_WeaponMod_ArmorPiercingBonus::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_WeaponMod_CrosshairModifier
// 0x0000 (0x0069 - 0x0069)
class USFXGameEffect_WeaponMod_CrosshairModifier : public USFXGameEffect_WeaponMod
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140404 ];

		return pClassPointer;
	};

	void OnApplied ( );
};

UClass* USFXGameEffect_WeaponMod_CrosshairModifier::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_WeaponMod_DamageBonus
// 0x0000 (0x0069 - 0x0069)
class USFXGameEffect_WeaponMod_DamageBonus : public USFXGameEffect_WeaponMod
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140410 ];

		return pClassPointer;
	};

	void OnApplied ( );
};

UClass* USFXGameEffect_WeaponMod_DamageBonus::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_WeaponMod_MeleeDmgBonus
// 0x0000 (0x0069 - 0x0069)
class USFXGameEffect_WeaponMod_MeleeDmgBonus : public USFXGameEffect_WeaponMod
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140416 ];

		return pClassPointer;
	};

	void OnApplied ( );
};

UClass* USFXGameEffect_WeaponMod_MeleeDmgBonus::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_WeaponMod_PenetrationBonus
// 0x0000 (0x0069 - 0x0069)
class USFXGameEffect_WeaponMod_PenetrationBonus : public USFXGameEffect_WeaponMod
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140420 ];

		return pClassPointer;
	};

	void OnApplied ( );
};

UClass* USFXGameEffect_WeaponMod_PenetrationBonus::pClassPointer = NULL;

// Class sfxgamecontent.sfxgameeffect_weaponmod_penetrationdamagebonus
// 0x0000 (0x0069 - 0x0069)
class Usfxgameeffect_weaponmod_penetrationdamagebonus : public USFXGameEffect_WeaponMod
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140424 ];

		return pClassPointer;
	};

	void OnApplied ( );
};

UClass* Usfxgameeffect_weaponmod_penetrationdamagebonus::pClassPointer = NULL;

// Class sfxgamecontent.SFXGameEffect_WeaponMod_SpareAmmoBonus
// 0x0000 (0x0062 - 0x0062)
class USFXGameEffect_WeaponMod_SpareAmmoBonus : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140430 ];

		return pClassPointer;
	};

	class AController* CheckOwnerInstigator ( class AController* Attacker );
	void SpawnWeaponImpactVFX ( class AActor* inInstigator, struct FImpactInfo Impact, class UParticleSystem* ImpactParticleSystem, unsigned long UseImpactNormal, unsigned long UseGodBone, float DrawScale );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	class UClass* LoadGameEffectClass ( struct FString GEClassName );
	void OnUnpaused ( );
	void OnPaused ( );
	void OnCombatEnd ( );
	void eventOnRemoved ( );
	void eventOnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void ComputeCustomEffectValue ( float* Value );
};

UClass* USFXGameEffect_WeaponMod_SpareAmmoBonus::pClassPointer = NULL;

// Class sfxgamecontent.SFXWeaponMod_ShotgunAccuracy
// 0x0000 (0x00EE - 0x00EE)
class USFXWeaponMod_ShotgunAccuracy : public USFXWeaponMod
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140437 ];

		return pClassPointer;
	};

	class UClass* GetGameEffectClass ( struct FName EffectClassName );
	float GetGameEffectDisplayValue ( int GameEffectIdx );
	void OnVisibilityChanged ( unsigned long bHidden );
	void RemoveEffects ( );
	void ApplyEffects ( );
	bool Upgrade ( class ABioPawn* Instigator, unsigned long bNoNotification );
	class UClass* LoadModClass ( struct FString ModClassName );
	struct FString GetModDescription ( int nLevel );
	struct FString GetModName ( int nLevel, unsigned long bShortForm );
	bool IsUnlocked ( int* nUnlockLevel );
	int GetMaxRank ( );
};

UClass* USFXWeaponMod_ShotgunAccuracy::pClassPointer = NULL;

// Class sfxgamecontent.SFXWeaponMod_ShotgunDamage
// 0x0000 (0x00EE - 0x00EE)
class USFXWeaponMod_ShotgunDamage : public USFXWeaponMod
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140440 ];

		return pClassPointer;
	};

	class UClass* GetGameEffectClass ( struct FName EffectClassName );
	float GetGameEffectDisplayValue ( int GameEffectIdx );
	void OnVisibilityChanged ( unsigned long bHidden );
	void RemoveEffects ( );
	void ApplyEffects ( );
	bool Upgrade ( class ABioPawn* Instigator, unsigned long bNoNotification );
	class UClass* LoadModClass ( struct FString ModClassName );
	struct FString GetModDescription ( int nLevel );
	struct FString GetModName ( int nLevel, unsigned long bShortForm );
	bool IsUnlocked ( int* nUnlockLevel );
	int GetMaxRank ( );
};

UClass* USFXWeaponMod_ShotgunDamage::pClassPointer = NULL;

// Class sfxgamecontent.SFXWeaponMod_ShotgunMeleeDamage
// 0x000A (0x00F8 - 0x00EE)
class USFXWeaponMod_ShotgunMeleeDamage : public USFXWeaponMod
{
public:
	class UParticleSystem*                             BladeImpactEffect;                                		// 0x00F0 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 BladeImpactSound;                                 		// 0x00F4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140448 ];

		return pClassPointer;
	};

	void RemoveEffects ( );
	void ApplyEffects ( );
};

UClass* USFXWeaponMod_ShotgunMeleeDamage::pClassPointer = NULL;

// Class sfxgamecontent.SFXWeaponMod_ShotgunReloadSpeed
// 0x0000 (0x00EE - 0x00EE)
class USFXWeaponMod_ShotgunReloadSpeed : public USFXWeaponMod
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140462 ];

		return pClassPointer;
	};

	class UClass* GetGameEffectClass ( struct FName EffectClassName );
	float GetGameEffectDisplayValue ( int GameEffectIdx );
	void OnVisibilityChanged ( unsigned long bHidden );
	void RemoveEffects ( );
	void ApplyEffects ( );
	bool Upgrade ( class ABioPawn* Instigator, unsigned long bNoNotification );
	class UClass* LoadModClass ( struct FString ModClassName );
	struct FString GetModDescription ( int nLevel );
	struct FString GetModName ( int nLevel, unsigned long bShortForm );
	bool IsUnlocked ( int* nUnlockLevel );
	int GetMaxRank ( );
};

UClass* USFXWeaponMod_ShotgunReloadSpeed::pClassPointer = NULL;

// Class sfxgamecontent.SFXWeaponMod_ShotgunStability
// 0x0000 (0x00EE - 0x00EE)
class USFXWeaponMod_ShotgunStability : public USFXWeaponMod
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 140465 ];

		return pClassPointer;
	};

	class UClass* GetGameEffectClass ( struct FName EffectClassName );
	float GetGameEffectDisplayValue ( int GameEffectIdx );
	void OnVisibilityChanged ( unsigned long bHidden );
	void RemoveEffects ( );
	void ApplyEffects ( );
	bool Upgrade ( class ABioPawn* Instigator, unsigned long bNoNotification );
	class UClass* LoadModClass ( struct FString ModClassName );
	struct FString GetModDescription ( int nLevel );
	struct FString GetModName ( int nLevel, unsigned long bShortForm );
	bool IsUnlocked ( int* nUnlockLevel );
	int GetMaxRank ( );
};

UClass* USFXWeaponMod_ShotgunStability::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif