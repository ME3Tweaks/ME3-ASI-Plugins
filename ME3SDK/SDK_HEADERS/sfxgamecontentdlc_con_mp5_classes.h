/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_con_mp5_classes.h
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

// Class sfxgamecontentdlc_con_mp5.SFXDamageType_SalarianBlast_MP
// 0x0000 (0x00E2 - 0x00E2)
class USFXDamageType_SalarianBlast_MP : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138406 ];

		return pClassPointer;
	};

	float CalculateDamageMultiplier ( struct FDamageCalculationAlgorithm* DamageCalc );
	void ResetDamageCalc ( struct FDamageCalculationAlgorithm* DamageCalc );
	bool CanPlayDeathEffect ( class ABioPawn* Target, class AController* Killer );
};

UClass* USFXDamageType_SalarianBlast_MP::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp5.SFXDamageType_SalarianShard_MP
// 0x0000 (0x00E2 - 0x00E2)
class USFXDamageType_SalarianShard_MP : public USFXDamageType_Gib
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138409 ];

		return pClassPointer;
	};

	float CalculateDamageMultiplier ( struct FDamageCalculationAlgorithm* DamageCalc );
	void ResetDamageCalc ( struct FDamageCalculationAlgorithm* DamageCalc );
	bool CanPlayDeathEffect ( class ABioPawn* Target, class AController* Killer );
};

UClass* USFXDamageType_SalarianShard_MP::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlast_MP
// 0x000B (0x039C - 0x0391)
class ASFXProjectile_SalarianBlast_MP : public ASFXProjectile_Explosive
{
public:
	float                                              GravityScale;                                     		// 0x0394 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UWwiseEvent*                                 NPCExplosionSound;                                		// 0x0398 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138412 ];

		return pClassPointer;
	};

	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void Init ( struct FVector Direction );
	void DoImpact ( class AActor* InImpactedActor, class AController* InInstigatorController, float BaseDamage, float InDamageRadius, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, struct FTraceHitInfo* HitInfo );
};

UClass* ASFXProjectile_SalarianBlast_MP::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastShard_MP
// 0x001C (0x0430 - 0x0414)
class ASFXProjectile_SalarianBlastShard_MP : public ASFXProjectile_Proximity
{
public:
	float                                              GravityScale;                                     		// 0x0414 (0x0004) [0x0000000000000000]              
	float                                              ExplosionDamage;                                  		// 0x0418 (0x0004) [0x0000000000006000]              ( CPF_Transient | CPF_Config )
	float                                              ExplosionRadius;                                  		// 0x041C (0x0004) [0x0000000000006000]              ( CPF_Transient | CPF_Config )
	float                                              ExplosionDelay;                                   		// 0x0420 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LowShardExplosionDelay;                           		// 0x0424 (0x0004) [0x0000000000000000]              
	float                                              HighShardExplosionDelay;                          		// 0x0428 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 NPCExplosionSound;                                		// 0x042C (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138444 ];

		return pClassPointer;
	};

	void Recycle ( );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void DoImpact ( class AActor* InImpactedActor, class AController* InInstigatorController, float BaseDamage, float InDamageRadius, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, struct FTraceHitInfo* HitInfo );
	void Detonate ( );
	void Init ( struct FVector Direction );
};

UClass* ASFXProjectile_SalarianBlastShard_MP::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastSplitter_MP
// 0x0028 (0x0424 - 0x03FC)
class ASFXProjectile_SalarianBlastSplitter_MP : public ASFXProjectile_SeekingMissile
{
public:
	float                                              GravityScale;                                     		// 0x03FC (0x0004) [0x0000000000000000]              
	float                                              HitGravityScale;                                  		// 0x0400 (0x0004) [0x0000000000000000]              
	int                                                NumShardsToSpawn;                                 		// 0x0404 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ProximityRadius;                                  		// 0x0408 (0x0004) [0x0000000000000000]              
	float                                              ProximityRadiusTightAim;                          		// 0x040C (0x0004) [0x0000000000000000]              
	float                                              PercentVelocityInherited;                         		// 0x0410 (0x0004) [0x0000000000000000]              
	float                                              ConeAngle;                                        		// 0x0414 (0x0004) [0x0000000000000000]              
	float                                              ExplosionDamage;                                  		// 0x0418 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class UWwiseEvent*                                 NPCExplosionSound;                                		// 0x041C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bHitTarget : 1;                                   		// 0x0420 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138490 ];

		return pClassPointer;
	};

	float GetDamage ( );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void DoImpact ( class AActor* InImpactedActor, class AController* InInstigatorController, float BaseDamage, float InDamageRadius, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, struct FTraceHitInfo* HitInfo );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void Tick ( float DeltaTime );
	void Init ( struct FVector Direction );
};

UClass* ASFXProjectile_SalarianBlastSplitter_MP::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp5.SFXWeapon_Shotgun_Salarian_MP
// 0x0030 (0x0E8C - 0x0E5C)
class ASFXWeapon_Shotgun_Salarian_MP : public ASFXWeapon_Shotgun_Base
{
public:
	struct FGuid                                       ChargeEffectGuid;                                 		// 0x0E5C (0x0010) [0x0000000000000000]              
	class UParticleSystemComponent*                    SteamMuzzle;                                      		// 0x0E6C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class URvrClientEffectInterface*                   CE_ChargeUp;                                      		// 0x0E70 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UForceFeedbackWaveform*                      ChargeRumble;                                     		// 0x0E74 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 PlayerShotSound;                                  		// 0x0E78 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 ShotSound;                                        		// 0x0E7C (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 PlayerChargedShotSound;                           		// 0x0E80 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 ChargedShotSound;                                 		// 0x0E84 (0x0004) [0x0000000000000000]              
	float                                              ChargedDamageMultiplier;                          		// 0x0E88 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138545 ];

		return pClassPointer;
	};

	void PlayOwnedFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void StopChargeEffects ( );
	void StartChargeEffects ( );
	class UClass* GetProjectileClass ( );
	float GetFireModeBaseDamage ( );
	void HackLoadWeaponMods ( );
	void InitializeWeapon ( );
};

UClass* ASFXWeapon_Shotgun_Salarian_MP::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif