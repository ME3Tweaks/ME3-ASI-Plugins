/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_con_mp5_f_structs.h
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

// Function SFXGame.SFXDamageType.CalculateDamageMultiplier
// [0x00422002] 
struct USFXDamageType_SalarianBlast_MP_execCalculateDamageMultiplier_Parms
{
	struct FDamageCalculationAlgorithm                 DamageCalc;                                       		// 0x0000 (0x0060) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              ReturnValue;                                      		// 0x0060 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           TargetBonus;                                      		// 0x0064 (0x0004) [0x0000000000000000]              
	// float                                           SourceBonus;                                      		// 0x0068 (0x0004) [0x0000000000000000]              
	// float                                           DifficultyBonus;                                  		// 0x006C (0x0004) [0x0000000000000000]              
};

// Function SFXGame.SFXDamageType.ResetDamageCalc
// [0x00422002] 
struct USFXDamageType_SalarianBlast_MP_execResetDamageCalc_Parms
{
	struct FDamageCalculationAlgorithm                 DamageCalc;                                       		// 0x0000 (0x0060) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXGame.SFXDamageType.CanPlayDeathEffect
// [0x00026002] 
struct USFXDamageType_SalarianBlast_MP_execCanPlayDeathEffect_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Killer;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGame.SFXDamageType.CalculateDamageMultiplier
// [0x00422002] 
struct USFXDamageType_SalarianShard_MP_execCalculateDamageMultiplier_Parms
{
	struct FDamageCalculationAlgorithm                 DamageCalc;                                       		// 0x0000 (0x0060) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              ReturnValue;                                      		// 0x0060 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           TargetBonus;                                      		// 0x0064 (0x0004) [0x0000000000000000]              
	// float                                           SourceBonus;                                      		// 0x0068 (0x0004) [0x0000000000000000]              
	// float                                           DifficultyBonus;                                  		// 0x006C (0x0004) [0x0000000000000000]              
};

// Function SFXGame.SFXDamageType.ResetDamageCalc
// [0x00422002] 
struct USFXDamageType_SalarianShard_MP_execResetDamageCalc_Parms
{
	struct FDamageCalculationAlgorithm                 DamageCalc;                                       		// 0x0000 (0x0060) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXGame.SFXDamageType.CanPlayDeathEffect
// [0x00026002] 
struct USFXDamageType_SalarianShard_MP_execCanPlayDeathEffect_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Killer;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlast_MP.SpawnExplosionEffects
// [0x00020102] 
struct ASFXProjectile_SalarianBlast_MP_execSpawnExplosionEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 EffectRotation;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ListenerPosition;                                 		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlast_MP.Init
// [0x00020102] 
struct ASFXProjectile_SalarianBlast_MP_execInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlast_MP.DoImpact
// [0x00420002] 
struct ASFXProjectile_SalarianBlast_MP_execDoImpact_Parms
{
	class AActor*                                      InImpactedActor;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InInstigatorController;                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BaseDamage;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InDamageRadius;                                   		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullDamage : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FImpactInfo                              Info;                                             		// 0x0040 (0x0054) [0x0000000000000000]              
	// class ASFXWeapon*                               Weapon;                                           		// 0x0094 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastShard_MP.Recycle
// [0x00020102] 
struct ASFXProjectile_SalarianBlastShard_MP_execRecycle_Parms
{
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastShard_MP.SpawnExplosionEffects
// [0x00020102] 
struct ASFXProjectile_SalarianBlastShard_MP_execSpawnExplosionEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 EffectRotation;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ListenerPosition;                                 		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastShard_MP.Explode
// [0x00020102] 
struct ASFXProjectile_SalarianBlastShard_MP_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class Asfxpawn*                                 P;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  AltOrigin;                                        		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastShard_MP.ProcessTouch
// [0x00020002] 
struct ASFXProjectile_SalarianBlastShard_MP_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 BP;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	// class ASFXWeapon*                               W;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 P;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastShard_MP.DoImpact
// [0x00420002] 
struct ASFXProjectile_SalarianBlastShard_MP_execDoImpact_Parms
{
	class AActor*                                      InImpactedActor;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InInstigatorController;                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BaseDamage;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InDamageRadius;                                   		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullDamage : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FImpactInfo                              Info;                                             		// 0x0040 (0x0054) [0x0000000000000000]              
	// class ASFXWeapon*                               Weapon;                                           		// 0x0094 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastShard_MP.Detonate
// [0x00020002] 
struct ASFXProjectile_SalarianBlastShard_MP_execDetonate_Parms
{
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastShard_MP.Init
// [0x00020102] 
struct ASFXProjectile_SalarianBlastShard_MP_execInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastSplitter_MP.GetDamage
// [0x00020102] 
struct ASFXProjectile_SalarianBlastSplitter_MP_execGetDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastSplitter_MP.SpawnExplosionEffects
// [0x00020102] 
struct ASFXProjectile_SalarianBlastSplitter_MP_execSpawnExplosionEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 EffectRotation;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ListenerPosition;                                 		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastSplitter_MP.Explode
// [0x00020102] 
struct ASFXProjectile_SalarianBlastSplitter_MP_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  SpawnLoc;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// float                                           VelDotN;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Reflect;                                          		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ProjDir;                                          		// 0x0034 (0x000C) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x0040 (0x0004) [0x0000000000000000]              
	// class ASFXObjectPool*                           Pool;                                             		// 0x0044 (0x0004) [0x0000000000000000]              
	// class ASFXProjectile_SalarianBlastShard_MP*     Shard;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 HitPawn;                                          		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastSplitter_MP.DoImpact
// [0x00420002] 
struct ASFXProjectile_SalarianBlastSplitter_MP_execDoImpact_Parms
{
	class AActor*                                      InImpactedActor;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InInstigatorController;                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BaseDamage;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InDamageRadius;                                   		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullDamage : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FImpactInfo                              Info;                                             		// 0x0040 (0x0054) [0x0000000000000000]              
	// class ASFXWeapon*                               Weapon;                                           		// 0x0094 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastSplitter_MP.ProcessTouch
// [0x00020002] 
struct ASFXProjectile_SalarianBlastSplitter_MP_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 ChkPawn;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastSplitter_MP.Tick
// [0x00020102] 
struct ASFXProjectile_SalarianBlastSplitter_MP_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp5.SFXProjectile_SalarianBlastSplitter_MP.Init
// [0x00020102] 
struct ASFXProjectile_SalarianBlastSplitter_MP_execInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp5.SFXWeapon_Shotgun_Salarian_MP.PlayOwnedFireEffects
// [0x00020102] 
struct ASFXWeapon_Shotgun_Salarian_MP_execPlayOwnedFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp5.SFXWeapon_Shotgun_Salarian_MP.StopChargeEffects
// [0x00020102] 
struct ASFXWeapon_Shotgun_Salarian_MP_execStopChargeEffects_Parms
{
	// class ABioPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp5.SFXWeapon_Shotgun_Salarian_MP.StartChargeEffects
// [0x00020102] 
struct ASFXWeapon_Shotgun_Salarian_MP_execStartChargeEffects_Parms
{
	// class ABioPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp5.SFXWeapon_Shotgun_Salarian_MP.GetProjectileClass
// [0x00020102] 
struct ASFXWeapon_Shotgun_Salarian_MP_execGetProjectileClass_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp5.SFXWeapon_Shotgun_Salarian_MP.GetFireModeBaseDamage
// [0x00020102] 
struct ASFXWeapon_Shotgun_Salarian_MP_execGetFireModeBaseDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp5.SFXWeapon_Shotgun_Salarian_MP.HackLoadWeaponMods
// [0x00020102] 
struct ASFXWeapon_Shotgun_Salarian_MP_execHackLoadWeaponMods_Parms
{
	// int                                             idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Idx2;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             WeaponModLevel;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// class USFXModule_WeaponModManager*              Manager;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   ModClass;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// class Asfxprimp*                                oPRI;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FName                                    WeaponClassPath;                                  		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FName                                    WeaponModClassPath;                               		// 0x0020 (0x0008) [0x0000000000000000]              
	// class Asfxpawn_playermp*                        Player;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp5.SFXWeapon_Shotgun_Salarian_MP.InitializeWeapon
// [0x00020102] 
struct ASFXWeapon_Shotgun_Salarian_MP_execInitializeWeapon_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif