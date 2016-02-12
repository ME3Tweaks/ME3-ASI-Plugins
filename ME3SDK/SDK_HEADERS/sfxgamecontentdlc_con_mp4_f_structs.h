/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_con_mp4_f_structs.h
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

// Function SFXGame.SFXCameraMode_Combat.MakeInactive
// [0x00020002] 
struct USFXCameraMode_TurianPack_execMakeInactive_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.SFXCameraMode_Combat.MakeActive
// [0x00020002] 
struct USFXCameraMode_TurianPack_execMakeActive_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomActionMP_JetPackCharge_execPopulatePowerStatBarEvolves_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomActionMP_JetPackCharge_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge.EvolvePower
// [0x00020002] 
struct USFXPowerCustomActionMP_JetPackCharge_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge.Impact
// [0x00820002] 
struct USFXPowerCustomActionMP_JetPackCharge_execImpact_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FRvrClientEffectTarget                   CETarget;                                         		// 0x0004 (0x0070) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0074 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge.StartPower
// [0x00020002] 
struct USFXPowerCustomActionMP_JetPackCharge_execStartPower_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge.CanOverrideCustomAction
// [0x00020002] 
struct USFXPowerCustomActionMP_JetPackCharge_execCanOverrideCustomAction_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InCustomAction;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.Replicate
// [0x00020002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execReplicate_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.DoPowerDetonatedForActor
// [0x00024000] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execDoPowerDetonatedForActor_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                nImpactCount;                                     		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget : 1;                                 		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class ASFXProjectile_PowerCustomAction*            oProjectile;                                      		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.PlayFailedChargeEffects
// [0x00820002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execPlayFailedChargeEffects_Parms
{
	// struct FRvrClientEffectTarget                   CETarget;                                         		// 0x0000 (0x0070) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.SpawnProjectile
// [0x00020002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execSpawnProjectile_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.OnRagdollPhysicsImpact
// [0x00020002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execOnRagdollPhysicsImpact_Parms
{
	class APawn*                                       oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpactActor;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vImpactDir;                                       		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oBioPawn;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.GetImpactForce
// [0x00020002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execGetImpactForce_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fForce;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.ClientDoPowerSubsequentImpact
// [0x00024002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execClientDoPowerSubsequentImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ImpactCount;                                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Delay;                                            		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      DoCallback : 1;                                   		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.OnChargeImpact
// [0x00820002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execOnChargeImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class Asfxai_core*                              AI;                                               		// 0x0028 (0x0004) [0x0000000000000000]              
	// class Asfxpawn*                                 HitBioPawn;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FRvrClientEffectTarget                   CETarget;                                         		// 0x0030 (0x0070) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x00A0 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bRagdolled : 1;                                   		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.Teleport
// [0x00020002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execTeleport_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.StartTeleport
// [0x00020002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execStartTeleport_Parms
{
	// class ASFXEmitter*                              TeleportOut;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.PrecacheVFX
// [0x00022002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execPrecacheVFX_Parms
{
	class ASFXObjectPool*                              ObjectPool;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class URvrClientEffectManager*                     ClientEffects;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.StopCustomAction
// [0x00020002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execStopCustomAction_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.InterruptThisCustomAction
// [0x00020002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execInterruptThisCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.CameraMove
// [0x00020002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execCameraMove_Parms
{
	// class ABioPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class Asfxplayercamera*                         Camera;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           fCameraTransitionTime;                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.StartCustomAction
// [0x00820002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execStartCustomAction_Parms
{
	// struct FRvrClientEffectTarget                   CETarget;                                         		// 0x0000 (0x0070) [0x0000000000000000]              
	// float                                           fDistanceToTarget;                                		// 0x0070 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.FinalizePawnMove
// [0x00444003] ( FUNC_Final )
struct USFXPowerCustomActionMP_JetPackCharge_Base_execFinalizePawnMove_Parms
{
	struct FVector                                     Loc;                                              		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     TargetLoc;                                        		// 0x000C (0x000C) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	// struct FVector                                  Dir;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.ValidateTarget
// [0x00020002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execValidateTarget_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  NewLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  NewTargetLocation;                                		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x001C (0x000C) [0x0000000000000000]              
	// float                                           MoveDist;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oTargetPawn;                                      		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.FindSpace
// [0x00420002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execFindSpace_Parms
{
	struct FVector                                     NearLocation;                                     		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Extent;                                           		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      TraceActor;                                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  X;                                                		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TestLoc;                                          		// 0x005C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 RotToTarget;                                      		// 0x0068 (0x000C) [0x0000000000000000]              
	// float                                           XIdx;                                             		// 0x0074 (0x0004) [0x0000000000000000]              
	// float                                           YIdx;                                             		// 0x0078 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.TryMove
// [0x00020002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execTryMove_Parms
{
	struct FVector                                     NewLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Dir;                                              		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       CollisionActor;                                   		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.CollectVolumes
// [0x00020002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execCollectVolumes_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATriggerVolume*                           ChkVolume;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< class ATriggerVolume* >                 AllVolumes;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ANavigationPoint*                         Nav;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ANavigationPoint*                         TargetNav;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             VolumeIdx;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FCharge_PendingVolume                    NewVolume;                                        		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x002C (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.ValidateTargetLocation
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomActionMP_JetPackCharge_Base_execValidateTargetLocation_Parms
{
	struct FVector                                     TargetLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANavigationPoint*                         TargetAnchor;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ANavigationPoint*                         Nav;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	// class AActor*                                   FirstTarget;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           DistToAnchor;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           CylHeight;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           CylWidth;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0048 (0x001C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.TestPathReachability
// [0x00420003] ( FUNC_Final )
struct USFXPowerCustomActionMP_JetPackCharge_Base_execTestPathReachability_Parms
{
	struct FVector                                     StartLocation;                                    		// 0x0000 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class ANavigationPoint*                            Anchor;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Extent;                                           		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  AnchorLocation;                                   		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.NewVector
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomActionMP_JetPackCharge_Base_execNewVector_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  V;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.CanUsePower
// [0x00020002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execCanUsePower_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPlayerController*                     PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  TargetLocation;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamLocation;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_JetPackCharge_Base.InternalCanDoCustomAction
// [0x00080002] 
struct USFXPowerCustomActionMP_JetPackCharge_Base_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_StimPack.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomActionMP_StimPack_execPopulatePowerStatBarEvolves_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_StimPack.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomActionMP_StimPack_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_StimPack.EvolvePower
// [0x00020002] 
struct USFXPowerCustomActionMP_StimPack_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_StimPack.ApplyGrenadeBonus
// [0x00020002] 
struct USFXPowerCustomActionMP_StimPack_execApplyGrenadeBonus_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_StimPack.RemoveImmunity
// [0x00040003] ( FUNC_Final )
struct USFXPowerCustomActionMP_StimPack_execRemoveImmunity_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXPowerCustomActionMP_StimPack.OnImpact
// [0x00820002] 
struct USFXPowerCustomActionMP_StimPack_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class Asfxpawn*                                 oPawn;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// class Asfxshield_base*                          Shields;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FRvrClientEffectTarget                   CETarget;                                         		// 0x0030 (0x0070) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x00A0 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpowercustomactionmp_turianpassive.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomActionMP_N7TurianPassive_execPopulatePowerStatBarEvolves_Parms
{
};

// Function sfxgamempcontent.sfxpowercustomactionmp_turianpassive.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomActionMP_N7TurianPassive_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamempcontent.sfxpowercustomactionmp_turianpassive.EvolvePower
// [0x00020002] 
struct USFXPowerCustomActionMP_N7TurianPassive_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxpowercustomactionmp_turianpassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerCustomActionMP_N7TurianPassive_execApplyGlobalBonus_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomActionMP_N7TurianMeleePassive_execPopulatePowerStatBarEvolves_Parms
{
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.ApplyBonus
// [0x00024002] 
struct USFXPowerCustomActionMP_N7TurianMeleePassive_execApplyBonus_Parms
{
	struct FName                                       Parameter;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect*                              Bonus;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemove : 1;                                      		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomActionMP_N7TurianMeleePassive_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.EvolvePower
// [0x00020002] 
struct USFXPowerCustomActionMP_N7TurianMeleePassive_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerCustomActionMP_N7TurianMeleePassive_execApplyGlobalBonus_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.RollOverride
// [0x00020002] 
struct USFXCustomAction_TurianEvadeLeft_execRollOverride_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianEvadeLeft_execStopCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.TickCustomAction
// [0x00020802] ( FUNC_Event )
struct USFXCustomAction_TurianEvadeLeft_eventTickCustomAction_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianEvadeLeft_execStartCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.RollOverride
// [0x00020002] 
struct USFXCustomAction_TurianEvadeBase_execRollOverride_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianEvadeBase_execStopCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.TickCustomAction
// [0x00020802] ( FUNC_Event )
struct USFXCustomAction_TurianEvadeBase_eventTickCustomAction_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianEvadeBase_execStartCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.RollOverride
// [0x00020002] 
struct USFXCustomAction_TurianEvadeRight_execRollOverride_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianEvadeRight_execStopCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.TickCustomAction
// [0x00020802] ( FUNC_Event )
struct USFXCustomAction_TurianEvadeRight_eventTickCustomAction_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianEvadeRight_execStartCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.RollOverride
// [0x00020002] 
struct USFXCustomAction_TurianEvadeForward_execRollOverride_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianEvadeForward_execStopCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.TickCustomAction
// [0x00020802] ( FUNC_Event )
struct USFXCustomAction_TurianEvadeForward_eventTickCustomAction_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianEvadeForward_execStartCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.RollOverride
// [0x00020002] 
struct USFXCustomAction_TurianEvadeBackward_execRollOverride_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianEvadeBackward_execStopCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.TickCustomAction
// [0x00020802] ( FUNC_Event )
struct USFXCustomAction_TurianEvadeBackward_eventTickCustomAction_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianEvadeBase.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianEvadeBackward_execStartCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPunch.ClientDoCustomAction
// [0x00024002] 
struct USFXCustomAction_TurianPunch_execClientDoCustomAction_Parms
{
	unsigned long                                      bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPunch.Replicate
// [0x00020002] 
struct USFXCustomAction_TurianPunch_execReplicate_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPunch.ServerStartCustomAction
// [0x00024002] 
struct USFXCustomAction_TurianPunch_execServerStartCustomAction_Parms
{
	int                                                NewAction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    Sync;                                             		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                NewPowerAction;                                   		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ABioPlayerController*                     PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPunch.StopMove
// [0x00020002] 
struct USFXCustomAction_TurianPunch_execStopMove_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPunch.OnActorImpacted
// [0x00020002] 
struct USFXCustomAction_TurianPunch_execOnActorImpacted_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPunch.GetMeleeDirection
// [0x00020002] 
struct USFXCustomAction_TurianPunch_execGetMeleeDirection_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  MeleeDirection;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirClamp;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPunch.Translate
// [0x00020002] 
struct USFXCustomAction_TurianPunch_execTranslate_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPunch.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianPunch_execStartCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StopMove
// [0x00020002] 
struct USFXCustomAction_TurianMeleeOne_execStopMove_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.OnActorImpacted
// [0x00020002] 
struct USFXCustomAction_TurianMeleeOne_execOnActorImpacted_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ASFXWeapon*                               Weapon;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	// class ASFXObjectPool*                           Pool;                                             		// 0x0030 (0x0004) [0x0000000000000000]              
	// class UParticleSystemComponent*                 ImpactPSC;                                        		// 0x0034 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class ABioPawn*                                 ImpactedPawn;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_TurianMeleeOne_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianMeleeOne_execStopCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.EndAction
// [0x00020002] 
struct USFXCustomAction_TurianMeleeOne_execEndAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.HeavyMelee
// [0x00020000] 
struct USFXCustomAction_TurianMeleeOne_execHeavyMelee_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_TurianMeleeOne_execNoHeavyMelee_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.DoRifleMeleeTwo
// [0x00020002] 
struct USFXCustomAction_TurianMeleeOne_execDoRifleMeleeTwo_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.RifleMeleeSecondary
// [0x00020002] 
struct USFXCustomAction_TurianMeleeOne_execRifleMeleeSecondary_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianMeleeOne_execStartCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StopMove
// [0x00020002] 
struct USFXCustomAction_TurianRifleMeleeTwo_execStopMove_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.OnActorImpacted
// [0x00020002] 
struct USFXCustomAction_TurianRifleMeleeTwo_execOnActorImpacted_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ASFXWeapon*                               Weapon;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	// class ASFXObjectPool*                           Pool;                                             		// 0x0030 (0x0004) [0x0000000000000000]              
	// class UParticleSystemComponent*                 ImpactPSC;                                        		// 0x0034 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class ABioPawn*                                 ImpactedPawn;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_TurianRifleMeleeTwo_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianRifleMeleeTwo_execStopCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.EndAction
// [0x00020002] 
struct USFXCustomAction_TurianRifleMeleeTwo_execEndAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.HeavyMelee
// [0x00020000] 
struct USFXCustomAction_TurianRifleMeleeTwo_execHeavyMelee_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_TurianRifleMeleeTwo_execNoHeavyMelee_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.DoRifleMeleeTwo
// [0x00020002] 
struct USFXCustomAction_TurianRifleMeleeTwo_execDoRifleMeleeTwo_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.RifleMeleeSecondary
// [0x00020002] 
struct USFXCustomAction_TurianRifleMeleeTwo_execRifleMeleeSecondary_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianRifleMeleeTwo_execStartCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StopMove
// [0x00020002] 
struct USFXCustomAction_TurianRifleMeleeThree_execStopMove_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.OnActorImpacted
// [0x00020002] 
struct USFXCustomAction_TurianRifleMeleeThree_execOnActorImpacted_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ASFXWeapon*                               Weapon;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	// class ASFXObjectPool*                           Pool;                                             		// 0x0030 (0x0004) [0x0000000000000000]              
	// class UParticleSystemComponent*                 ImpactPSC;                                        		// 0x0034 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class ABioPawn*                                 ImpactedPawn;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_TurianRifleMeleeThree_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianRifleMeleeThree_execStopCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.EndAction
// [0x00020002] 
struct USFXCustomAction_TurianRifleMeleeThree_execEndAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.HeavyMelee
// [0x00020000] 
struct USFXCustomAction_TurianRifleMeleeThree_execHeavyMelee_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_TurianRifleMeleeThree_execNoHeavyMelee_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.DoRifleMeleeTwo
// [0x00020002] 
struct USFXCustomAction_TurianRifleMeleeThree_execDoRifleMeleeTwo_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.RifleMeleeSecondary
// [0x00020002] 
struct USFXCustomAction_TurianRifleMeleeThree_execRifleMeleeSecondary_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianMeleeOne.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianRifleMeleeThree_execStartCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StopMove
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeOne_execStopMove_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.OnActorImpacted
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeOne_execOnActorImpacted_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ASFXWeapon*                               Weapon;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 ImpactedPawn;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           fDummyDamage;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vDummyForce;                                      		// 0x003C (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_TurianPistolMeleeOne_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeOne_execStopCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.EndAction
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeOne_execEndAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.HeavyMelee
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeOne_execHeavyMelee_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeOne_execNoHeavyMelee_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.DoPistolMeleeTwo
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeOne_execDoPistolMeleeTwo_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.PistolMeleeSecondary
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeOne_execPistolMeleeSecondary_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeOne_execStartCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StopMove
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeTwo_execStopMove_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.OnActorImpacted
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeTwo_execOnActorImpacted_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ASFXWeapon*                               Weapon;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 ImpactedPawn;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           fDummyDamage;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vDummyForce;                                      		// 0x003C (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_TurianPistolMeleeTwo_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeTwo_execStopCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.EndAction
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeTwo_execEndAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.HeavyMelee
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeTwo_execHeavyMelee_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeTwo_execNoHeavyMelee_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.DoPistolMeleeTwo
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeTwo_execDoPistolMeleeTwo_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.PistolMeleeSecondary
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeTwo_execPistolMeleeSecondary_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeTwo_execStartCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StopMove
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeThree_execStopMove_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.OnActorImpacted
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeThree_execOnActorImpacted_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ASFXWeapon*                               Weapon;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 ImpactedPawn;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           fDummyDamage;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vDummyForce;                                      		// 0x003C (0x000C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_TurianPistolMeleeThree_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeThree_execStopCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.EndAction
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeThree_execEndAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.HeavyMelee
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeThree_execHeavyMelee_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeThree_execNoHeavyMelee_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.DoPistolMeleeTwo
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeThree_execDoPistolMeleeTwo_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.PistolMeleeSecondary
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeThree_execPistolMeleeSecondary_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXCustomAction_TurianPistolMeleeOne.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_TurianPistolMeleeThree_execStartCustomAction_Parms
{
};

// Function sfxgamecontentdlc_con_mp4.SFXGameEffect_StimPack.OnRemoved
// [0x00020002] 
struct USFXGameEffect_StimPack_execOnRemoved_Parms
{
	// class Asfxpawn_playermp*                        pPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4.SFXGameEffect_StimPack.OnApplied
// [0x00020002] 
struct USFXGameEffect_StimPack_execOnApplied_Parms
{
	// class Asfxpawn_playermp*                        pPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.HealthFailsafe
// [0x00020003] ( FUNC_Final )
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execHealthFailsafe_Parms
{
	// class Usfxmodule_damage*                        DmgMod;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.RagdollFailsafe
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execRagdollFailsafe_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.ResetSyncMovementFailsafeInfo
// [0x00020003] ( FUNC_Final )
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execResetSyncMovementFailsafeInfo_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.ProcessSyncMovementFailsafe
// [0x00020003] ( FUNC_Final )
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execProcessSyncMovementFailsafe_Parms
{
	// float                                           DeltaZ;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned long                                   CurrentZDeltaPositive : 1;                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function sfxgamempcontent.sfxpawn_playermp.Tick
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.CanDoCustomAction
// [0x00024902] ( FUNC_Event )
struct ASFXPawn_PlayerMP_N7Soldier_Turian_eventCanDoCustomAction_Parms
{
	int                                                CAction;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Sync;                                             		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bForced : 1;                                      		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                PowerCustomAction;                                		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.ShouldShowHUDGrenadeCounter
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execShouldShowHUDGrenadeCounter_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.UpdateGameEffects
// [0x00020100] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execUpdateGameEffects_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.GetUIAppearanceTag
// [0x00020002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execGetUIAppearanceTag_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.Destroyed
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execDestroyed_Parms
{
	// class USFXPowerCustomAction_CombatDrone*        Power_Drone;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXPowerCustomAction_SentryTurret*       Power_Turret;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXPowerCustomAction_Decoy*              Power_Decoy;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FString                                  PlayerLeftMessage;                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USFXMPEventTicker*                        EventTicker;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.Touch
// [0x00020802] ( FUNC_Event )
struct ASFXPawn_PlayerMP_N7Soldier_Turian_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AVolume*                                  V;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// class USFXGUI_MPHUD*                            oHud;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.SetExecutioner
// [0x00020002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execSetExecutioner_Parms
{
	class APawn*                                       Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.AttemptKillingBlow
// [0x00020002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execAttemptKillingBlow_Parms
{
	class APawn*                                       Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class Usfxgui_playercountdown*                  movie;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.UpdateMappedPowerDisplay
// [0x00020002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execUpdateMappedPowerDisplay_Parms
{
	// class USFXGUI_MPHUD*                            oHud;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.CanPlayDeathEffect
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execCanPlayDeathEffect_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.UseReviveConsumablePower
// [0x00020002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execUseReviveConsumablePower_Parms
{
	// class ABioPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class Usfxpowercustomactionmp_consumable_revive* Revive;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.AutoMapPC
// [0x00020002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execAutoMapPC_Parms
{
	// class USFXGUIInteraction*                       oGM;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXSFHandler_PCPowerWheel*               oPowerWheel;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXPowerCustomActionBase*                oPower;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     BPC;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< struct FName >                          PowerHotkeyAssignments;                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxpawn_playermp.AutoMapXbox
// [0x00020002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execAutoMapXbox_Parms
{
	// class UBioPlayerInput*                          BPI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.ShouldTossWeapon
// [0x00020002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execShouldTossWeapon_Parms
{
	class ASFXWeapon*                                  ChkWeapon;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  NewWeapon;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.InCombat
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execInCombat_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.Died
// [0x00020002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   ToRet : 1;                                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function sfxgamempcontent.sfxpawn_playermp.PossessedBy
// [0x00020002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execPossessedBy_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.LoadWeaponModData
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execLoadWeaponModData_Parms
{
	// int                                             idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Idx2;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             WeaponModLevel;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASFXWeapon*                               CurrWeapon;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXModule_WeaponModManager*              Manager;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UClass*                                   ModClass;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// class Asfxprimp*                                oPRI;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FName                                    WeaponClassPath;                                  		// 0x001C (0x0008) [0x0000000000000000]              
	// struct FName                                    WeaponModClassPath;                               		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.LoadPowerData
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execLoadPowerData_Parms
{
	// TArray< struct FPowerSaveInfo >                 Powers;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Idx2;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             CurrentRank;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// class USFXPowerCustomActionBase*                Power;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class Asfxprimp*                                oPRI;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FName                                    PowerClassPath;                                   		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             EvolvedChoices[ 0x6 ];                            		// 0x0028 (0x0018) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.IsTestFrameworkSetupComplete
// [0x00020002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execIsTestFrameworkSetupComplete_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.LoadWeapons
// [0x00020002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execLoadWeapons_Parms
{
	// int                                             idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NumWeaponCreated;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             WeaponLevel;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UClass*                                   SelectedWeaponClass;                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class ASFXWeapon*                               W;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class Asfxprimp*                                oPRI;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FName                                    WeaponClassPath;                                  		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.CreateWeapons
// [0x00024002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execCreateWeapons_Parms
{
	class USFXLoadoutData*                             ChkLoadout;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceFromEngineLoadout : 1;                      		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.GetFullName
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execGetFullName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxpawn_playermp.DeferredSetRichPresence
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execDeferredSetRichPresence_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.StopLoadingMovie
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execStopLoadingMovie_Parms
{
	// class Asfxplayercontrollermp*                   PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.DeferredPostBeginPlay
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execDeferredPostBeginPlay_Parms
{
	// class USFXSimpleUseModule*                      UseModule;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  CharacterName;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FName                                    CharacterKit;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FString                                  PlayerJoinedMessage;                              		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// void*                                           ClassPrettyName;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             Level;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             PawnTint1ID;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             PawnTint2ID;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             PawnPatternID;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             PawnPatternColorID;                               		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             PawnPhongID;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             PawnEmissiveID;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             PawnSkinToneID;                                   		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             n7Rating;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           XP;                                               		// 0x004C (0x0004) [0x0000000000000000]              
	// class USFXModule_WeaponModManager*              Manager;                                          		// 0x0050 (0x0004) [0x0000000000000000]              
	// class Usfxmodule_damageplayer*                  DmgMod;                                           		// 0x0054 (0x0004) [0x0000000000000000]              
	// class Asfxprimp*                                oPRI;                                             		// 0x0058 (0x0004) [0x0000000000000000]              
	// class Asfxgrimp*                                GRI;                                              		// 0x005C (0x0004) [0x0000000000000000]              
	// class USFXMPEventTicker*                        EventTicker;                                      		// 0x0060 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bInvReadyToInit : 1;                              		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	// class USFXOnlineSubsystem*                      OnlineSubsystem;                                  		// 0x0068 (0x0004) [0x0000000000000000]              
	// class UISFXOnlineComponentGame*                 OnlineGame;                                       		// 0x006C (0x0008) [0x0000000000000000]              
	// unsigned long                                   bOnlineGameIsValid : 1;                           		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	// class Asfxplayercontrollermp*                   PC;                                               		// 0x0078 (0x0004) [0x0000000000000000]              
	// class USFXEngine*                               oEngine;                                          		// 0x007C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bLoadingMoviePlaying : 1;                         		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function sfxgamempcontent.sfxpawn_playermp.PostBeginPlay
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execPostBeginPlay_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.ServerPermaDeath
// [0x002200C2] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execServerPermaDeath_Parms
{
	// class Usfxmodule_damage*                        DmgMod;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.PermaDeath
// [0x00020002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execPermaDeath_Parms
{
	// class Usfxgui_playercountdown*                  movie;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.StartSpectatorCam
// [0x00020002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execStartSpectatorCam_Parms
{
	// class Usfxmodule_damageplayer*                  DmgPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.PermaDeadChanged
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execPermaDeadChanged_Parms
{
	// struct FString                                  TickerMessage;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxpawn_playermp.Resurrect
// [0x00020802] ( FUNC_Event )
struct ASFXPawn_PlayerMP_N7Soldier_Turian_eventResurrect_Parms
{
	float                                              PercentOfHealthRegained;                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsInstantaneous : 1;                             		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.PreClientTravel
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execPreClientTravel_Parms
{
	// class Usfxmodule_damageplayer*                  DmgPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.IsReadyForExecution
// [0x00020002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execIsReadyForExecution_Parms
{
	class Asfxpawn*                                    Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.IsDeadUpdated
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execIsDeadUpdated_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.StartRevive
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execStartRevive_Parms
{
	class ASFXPawn_PlayerParty*                        TargetPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.FinalizeProcessFellOutOfWorld
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execFinalizeProcessFellOutOfWorld_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.ServerFellOutOfWorldImpl
// [0x002200C2] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execServerFellOutOfWorldImpl_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.FellOutOfWorldImpl
// [0x00020902] ( FUNC_Event )
struct ASFXPawn_PlayerMP_N7Soldier_Turian_eventFellOutOfWorldImpl_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.BioBaseRemovedFromWorld
// [0x00020100] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execBioBaseRemovedFromWorld_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.OutsideWorldBounds
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execOutsideWorldBounds_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.FellOutOfWorld
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execFellOutOfWorld_Parms
{
	class UClass*                                      dmgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.ApplyCustomizationToActor
// [0x00024002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execApplyCustomizationToActor_Parms
{
	class AActor*                                      InTarget;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXCustomizationInstance*                   InSettings;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                UIWorldConfigFlags;                               		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.GetMPAppearanceVariables
// [0x00420102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execGetMPAppearanceVariables_Parms
{
	int                                                Tint1;                                            		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                Tint2;                                            		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                Pattern;                                          		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                PatternColor;                                     		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                Phong;                                            		// 0x0010 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                Emissive;                                         		// 0x0014 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                SkinTone;                                         		// 0x0018 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function sfxgamempcontent.sfxpawn_playermp.SetMPAppearanceVariables
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execSetMPAppearanceVariables_Parms
{
	int                                                Tint1;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Tint2;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Pattern;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PatternColor;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Phong;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Emissive;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SkinTone;                                         		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.UpdateAppearance
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execUpdateAppearance_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.CopyPawnAppearance
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execCopyPawnAppearance_Parms
{
	class ABioPawn*                                    SourcePawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class Asfxpawn_playermp*                        SourcePlayer;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Tint1;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Tint2;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Pattern;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             PatternColor;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             Phong;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             Emissive;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             SkinTone;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxpawn_playermp.CheckEnterCombat
// [0x00020000] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execCheckEnterCombat_Parms
{
};

// Function sfxgamempcontent.sfxpawn_playermp.PlayerRevivedMessage
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execPlayerRevivedMessage_Parms
{
	// struct FString                                  TickerMessage;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxpawn_playermp.PlayerKilledMessage
// [0x00020102] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execPlayerKilledMessage_Parms
{
	// struct FString                                  TickerMessage;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxpawn_playermp.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASFXPawn_PlayerMP_N7Soldier_Turian_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxpawn_playermp.GetActorGameName
// [0x00020002] 
struct ASFXPawn_PlayerMP_N7Soldier_Turian_execGetActorGameName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGame.SFXProjectile.PrecacheVFX
// [0x00022002] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execPrecacheVFX_Parms
{
	class ASFXObjectPool*                              ObjectPool;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class URvrClientEffectManager*                     ClientEffects;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.SFXProjectile.IsTargettedProjectile
// [0x00022002] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execIsTargettedProjectile_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGame.SFXProjectile.Destroyed
// [0x00020102] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execDestroyed_Parms
{
};

// Function SFXGame.SFXProjectile.Tick_Prediction
// [0x00020002] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execTick_Prediction_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           DesiredSpeed;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.SFXProjectile.SetPredictionTarget
// [0x00020003] ( FUNC_Final )
struct ASFXProjectile_PowerCustomActionMP_JetPack_execSetPredictionTarget_Parms
{
	class ASFXProjectile*                              NewTargetProjectile;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.SFXProjectile.SetPrediction
// [0x00020103] ( FUNC_Final )
struct ASFXProjectile_PowerCustomActionMP_JetPack_execSetPrediction_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bIsATarget : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXGame.SFXProjectile.SetPredictedInitialSpeed
// [0x00020003] ( FUNC_Final )
struct ASFXProjectile_PowerCustomActionMP_JetPack_execSetPredictedInitialSpeed_Parms
{
};

// Function SFXGame.SFXProjectile.Reset
// [0x00020102] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execReset_Parms
{
};

// Function SFXGame.SFXProjectile.ReplicatedExplosionUpdated
// [0x00020102] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execReplicatedExplosionUpdated_Parms
{
};

// Function SFXGame.SFXProjectile.ReplicatedInitUpdated
// [0x00020102] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execReplicatedInitUpdated_Parms
{
};

// Function SFXGame.SFXProjectile.ReplicateExplode
// [0x00020002] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execReplicateExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.SFXProjectile.ReplicateInit
// [0x00020002] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execReplicateInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.SFXProjectile.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASFXProjectile_PowerCustomActionMP_JetPack_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.SFXProjectile.SpawnImpactEffect
// [0x00020100] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execSpawnImpactEffect_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.SFXProjectile.GetMomentum
// [0x00020102] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execGetMomentum_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXWeapon*                               Weapon;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             FireMode;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.SFXProjectile.GetDamageRadius
// [0x00020102] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execGetDamageRadius_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXWeapon*                               Weapon;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.SFXProjectile.GetDamage
// [0x00020102] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execGetDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXWeapon*                               Weapon;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.SFXProjectile.Bounce
// [0x00020102] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execBounce_Parms
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           EnergyLost;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGame.SFXProjectile.ProcessTouch
// [0x00020002] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.SFXProjectile.ApplyExternalForce
// [0x00020102] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execApplyExternalForce_Parms
{
};

// Function SFXGame.SFXProjectile.Tick
// [0x00020102] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.SFXProjectile.ProjEffectsTrailFinished
// [0x00040103] ( FUNC_Final )
struct ASFXProjectile_PowerCustomActionMP_JetPack_execProjEffectsTrailFinished_Parms
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SFXGame.SFXProjectile.SetProjectileHidden
// [0x00020102] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execSetProjectileHidden_Parms
{
	unsigned long                                      bHide : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXGame.SFXProjectile.Explode
// [0x00020102] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.SFXProjectile.HitWall
// [0x00020802] ( FUNC_Event )
struct ASFXProjectile_PowerCustomActionMP_JetPack_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SFXGame.SFXProjectile.OutsideWorldBounds
// [0x00020102] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execOutsideWorldBounds_Parms
{
};

// Function SFXGame.SFXProjectile.FellOutOfWorld
// [0x00020100] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execFellOutOfWorld_Parms
{
	class UClass*                                      dmgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.SFXProjectile.IsShuttingDown
// [0x00020103] ( FUNC_Final )
struct ASFXProjectile_PowerCustomActionMP_JetPack_execIsShuttingDown_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGame.SFXProjectile.ShutDown
// [0x00020102] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execShutDown_Parms
{
};

// Function SFXGame.SFXProjectile.Init
// [0x00020102] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.SFXProjectile.ShutdownPostEffects
// [0x00020102] 
struct ASFXProjectile_PowerCustomActionMP_JetPack_execShutdownPostEffects_Parms
{
};

// Function SFXGame.SFXProjectile.Reuse
// [0x00020903] ( FUNC_Final | FUNC_Event )
struct ASFXProjectile_PowerCustomActionMP_JetPack_eventReuse_Parms
{
};

// Function SFXGame.SFXProjectile.Recycle
// [0x00020902] ( FUNC_Event )
struct ASFXProjectile_PowerCustomActionMP_JetPack_eventRecycle_Parms
{
};

// Function SFXGame.SFXProjectile.SpawnFlightEffects
// [0x00040103] ( FUNC_Final )
struct ASFXProjectile_PowerCustomActionMP_JetPack_execSpawnFlightEffects_Parms
{
	// int                                             idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Params;                                           		// 0x0004 (0x000C) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif