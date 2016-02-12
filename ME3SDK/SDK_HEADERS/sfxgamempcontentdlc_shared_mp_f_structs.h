/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamempcontentdlc_shared_mp_f_structs.h
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

// Function sfxgamempcontent.sfxwave_operation.GetCreditsReward
// [0x00020102] 
struct USFXEngagement_Retrieve_DLC_Base_execGetCreditsReward_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fReward;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.GetCreditBudget
// [0x00020002] 
struct USFXEngagement_Retrieve_DLC_Base_execGetCreditBudget_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxwave_operation.DistributeObjectiveScore
// [0x00020002] 
struct USFXEngagement_Retrieve_DLC_Base_execDistributeObjectiveScore_Parms
{
	// float                                           fCompletionTime;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           fBonusRatio;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           fBaseReward;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           fBonusReward;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           fModifiedBaseReward;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           fModifiedBonusReward;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           fModifiedTotalReward;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// class Asfxplayercontroller*                     PC;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	// class ASFXPawn_Player*                          Player;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	// class Usfxscoremanager*                         ScoreManager;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// class USFXMPEventTicker*                        EventTicker;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.CountdownTimerExpired
// [0x00020002] 
struct USFXEngagement_Retrieve_DLC_Base_execCountdownTimerExpired_Parms
{
};

// Function sfxgamempcontent.sfxwave_operation.CancelCountdownTimer
// [0x00020002] 
struct USFXEngagement_Retrieve_DLC_Base_execCancelCountdownTimer_Parms
{
	// class Asfxplayercontroller*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.LocalPlayerTimeWarningHint
// [0x00020002] 
struct USFXEngagement_Retrieve_DLC_Base_execLocalPlayerTimeWarningHint_Parms
{
	// class Asfxplayercontroller*                     Player;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           TimeRemaining;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.SetTimeLimit
// [0x00020002] 
struct USFXEngagement_Retrieve_DLC_Base_execSetTimeLimit_Parms
{
	float                                              TimeLimit;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxwave_operation.BeginWaveTimeLimit
// [0x00020002] 
struct USFXEngagement_Retrieve_DLC_Base_execBeginWaveTimeLimit_Parms
{
	// float                                           TimeLimit;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.DeactivateObjectiveCombatZone
// [0x00020003] ( FUNC_Final )
struct USFXEngagement_Retrieve_DLC_Base_execDeactivateObjectiveCombatZone_Parms
{
	class AActor*                                      ObjectiveActor;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXWave_Horde*                           HordeWave;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AAIController*                            AI;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.ActivateObjectiveCombatZone
// [0x00020003] ( FUNC_Final )
struct USFXEngagement_Retrieve_DLC_Base_execActivateObjectiveCombatZone_Parms
{
	class AActor*                                      ObjectiveActor;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXWave_Horde*                           HordeWave;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AAIController*                            AI;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.PawnDestroyed
// [0x00020102] 
struct USFXEngagement_Retrieve_DLC_Base_execPawnDestroyed_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   ObjectiveActor;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// class Asfxoperationobjective*                   Objective;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.PawnRevived
// [0x00020002] 
struct USFXEngagement_Retrieve_DLC_Base_execPawnRevived_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   ObjectiveActor;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// class Asfxoperationobjective*                   Objective;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.PawnDowned
// [0x00020102] 
struct USFXEngagement_Retrieve_DLC_Base_execPawnDowned_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   ObjectiveActor;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// class Asfxoperationobjective*                   Objective;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.DetermineObjectivesToSpawn
// [0x00020002] 
struct USFXEngagement_Retrieve_DLC_Base_execDetermineObjectivesToSpawn_Parms
{
	// class USFXOperation_ObjectiveData*              ObjectiveDataIter;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FSFXOperation_ObjectiveRequirement       ObjectiveRequiredIter;                            		// 0x0004 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             i;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// unsigned long                                   FoundValidObjective : 1;                          		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FSFXOperation_ObjectiveGroupToSpawn      ObjectiveGroupToSpawn;                            		// 0x0020 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class USFXOperation_ObjectiveData* >    CommonObjectiveData;                              		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FSFXWaveAssetLoadData                    NewAssetLoadData;                                 		// 0x0040 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nRandom;                                          		// 0x0054 (0x0004) [0x0000000000000000]              
	// TArray< unsigned char >                         ValidLocations;                                   		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FSFXOperation_ObjectiveMeshInfo > ValidMeshes;                                      		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxwave_operation.RateEnemyStart
// [0x00020002] 
struct USFXEngagement_Retrieve_DLC_Base_execRateEnemyStart_Parms
{
	class ANavigationPoint*                            NavPoint;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Rating;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           CurrentRating;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Distance;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AActor*                                   Objective;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.DelayedFinishWave
// [0x00020002] 
struct USFXEngagement_Retrieve_DLC_Base_execDelayedFinishWave_Parms
{
};

// Function sfxgamempcontent.sfxwave_operation.FinishWave
// [0x00020002] 
struct USFXEngagement_Retrieve_DLC_Base_execFinishWave_Parms
{
	// class AActor*                                   ActorIter;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AAIController*                            AI;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASFXGRI*                                  GRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.ShowBeginWaveMessage
// [0x00020002] 
struct USFXEngagement_Retrieve_DLC_Base_execShowBeginWaveMessage_Parms
{
};

// Function sfxgamempcontent.sfxwave_operation.BeginWave
// [0x00020002] 
struct USFXEngagement_Retrieve_DLC_Base_execBeginWave_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   NewActor;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             K;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             NumObjectivesSelected;                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< class ASFXOperation_ObjectiveSpawnPoint* > LocalAvailableSpawnPoints;                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class USFXOperation_ObjectiveData* >    ObjectivesToSpawn;                                		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class ASFXOperation_ObjectiveSpawnPoint* > ObjectiveSpawnPoints;                             		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class ASFXOperation_ObjectiveSpawnPoint* > RandomizedSpawnPoints;                            		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   FoundEnoughSpawnsForObjective : 1;                		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UObject*                                  ObjectTemplate;                                   		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             AllocateSpawnPointPass;                           		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FSFXOperation_ObjectiveSpawnPointData    ObjectiveSpawnData;                               		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FMapSpecificSpawnPointFix                SpawnPointFix;                                    		// 0x0060 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FVector                                  SpawnOffset;                                      		// 0x0088 (0x000C) [0x0000000000000000]              
	// float                                           CollisionCylinderHeightAdd;                       		// 0x0094 (0x0004) [0x0000000000000000]              
	// float                                           CollisionCylinderRadiusAdd;                       		// 0x0098 (0x0004) [0x0000000000000000]              
	// class UCylinderComponent*                       CollisionCylinder;                                		// 0x009C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function sfxgamempcontent.sfxwave_operation.ObjectiveSpawnSort
// [0x00020002] 
struct USFXEngagement_Retrieve_DLC_Base_execObjectiveSpawnSort_Parms
{
	class ASFXOperation_ObjectiveSpawnPoint*           A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ASFXOperation_ObjectiveSpawnPoint*           B;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxwave_operation.InitializeWave
// [0x00020002] 
struct USFXEngagement_Retrieve_DLC_Base_execInitializeWave_Parms
{
	class ASFXWaveManager*                             OwnerManager;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxwave_operation.GetCreditsReward
// [0x00020102] 
struct USFXEngagement_MobileAnnex_Base_execGetCreditsReward_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fReward;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.GetCreditBudget
// [0x00020002] 
struct USFXEngagement_MobileAnnex_Base_execGetCreditBudget_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxwave_operation.DistributeObjectiveScore
// [0x00020002] 
struct USFXEngagement_MobileAnnex_Base_execDistributeObjectiveScore_Parms
{
	// float                                           fCompletionTime;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           fBonusRatio;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           fBaseReward;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           fBonusReward;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           fModifiedBaseReward;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           fModifiedBonusReward;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           fModifiedTotalReward;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// class Asfxplayercontroller*                     PC;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	// class ASFXPawn_Player*                          Player;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	// class Usfxscoremanager*                         ScoreManager;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// class USFXMPEventTicker*                        EventTicker;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.CountdownTimerExpired
// [0x00020002] 
struct USFXEngagement_MobileAnnex_Base_execCountdownTimerExpired_Parms
{
};

// Function sfxgamempcontent.sfxwave_operation.CancelCountdownTimer
// [0x00020002] 
struct USFXEngagement_MobileAnnex_Base_execCancelCountdownTimer_Parms
{
	// class Asfxplayercontroller*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.LocalPlayerTimeWarningHint
// [0x00020002] 
struct USFXEngagement_MobileAnnex_Base_execLocalPlayerTimeWarningHint_Parms
{
	// class Asfxplayercontroller*                     Player;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           TimeRemaining;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.SetTimeLimit
// [0x00020002] 
struct USFXEngagement_MobileAnnex_Base_execSetTimeLimit_Parms
{
	float                                              TimeLimit;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxwave_operation.BeginWaveTimeLimit
// [0x00020002] 
struct USFXEngagement_MobileAnnex_Base_execBeginWaveTimeLimit_Parms
{
	// float                                           TimeLimit;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.DeactivateObjectiveCombatZone
// [0x00020003] ( FUNC_Final )
struct USFXEngagement_MobileAnnex_Base_execDeactivateObjectiveCombatZone_Parms
{
	class AActor*                                      ObjectiveActor;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXWave_Horde*                           HordeWave;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AAIController*                            AI;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.ActivateObjectiveCombatZone
// [0x00020003] ( FUNC_Final )
struct USFXEngagement_MobileAnnex_Base_execActivateObjectiveCombatZone_Parms
{
	class AActor*                                      ObjectiveActor;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXWave_Horde*                           HordeWave;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AAIController*                            AI;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.PawnDestroyed
// [0x00020102] 
struct USFXEngagement_MobileAnnex_Base_execPawnDestroyed_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   ObjectiveActor;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// class Asfxoperationobjective*                   Objective;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.PawnRevived
// [0x00020002] 
struct USFXEngagement_MobileAnnex_Base_execPawnRevived_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   ObjectiveActor;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// class Asfxoperationobjective*                   Objective;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.PawnDowned
// [0x00020102] 
struct USFXEngagement_MobileAnnex_Base_execPawnDowned_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   ObjectiveActor;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// class Asfxoperationobjective*                   Objective;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.DetermineObjectivesToSpawn
// [0x00020002] 
struct USFXEngagement_MobileAnnex_Base_execDetermineObjectivesToSpawn_Parms
{
	// class USFXOperation_ObjectiveData*              ObjectiveDataIter;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FSFXOperation_ObjectiveRequirement       ObjectiveRequiredIter;                            		// 0x0004 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             i;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// unsigned long                                   FoundValidObjective : 1;                          		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FSFXOperation_ObjectiveGroupToSpawn      ObjectiveGroupToSpawn;                            		// 0x0020 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class USFXOperation_ObjectiveData* >    CommonObjectiveData;                              		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FSFXWaveAssetLoadData                    NewAssetLoadData;                                 		// 0x0040 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nRandom;                                          		// 0x0054 (0x0004) [0x0000000000000000]              
	// TArray< unsigned char >                         ValidLocations;                                   		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FSFXOperation_ObjectiveMeshInfo > ValidMeshes;                                      		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxwave_operation.RateEnemyStart
// [0x00020002] 
struct USFXEngagement_MobileAnnex_Base_execRateEnemyStart_Parms
{
	class ANavigationPoint*                            NavPoint;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Rating;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           CurrentRating;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Distance;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AActor*                                   Objective;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.DelayedFinishWave
// [0x00020002] 
struct USFXEngagement_MobileAnnex_Base_execDelayedFinishWave_Parms
{
};

// Function sfxgamempcontent.sfxwave_operation.FinishWave
// [0x00020002] 
struct USFXEngagement_MobileAnnex_Base_execFinishWave_Parms
{
	// class AActor*                                   ActorIter;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AAIController*                            AI;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASFXGRI*                                  GRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.ShowBeginWaveMessage
// [0x00020002] 
struct USFXEngagement_MobileAnnex_Base_execShowBeginWaveMessage_Parms
{
};

// Function sfxgamempcontent.sfxwave_operation.BeginWave
// [0x00020002] 
struct USFXEngagement_MobileAnnex_Base_execBeginWave_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   NewActor;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             K;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             NumObjectivesSelected;                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< class ASFXOperation_ObjectiveSpawnPoint* > LocalAvailableSpawnPoints;                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class USFXOperation_ObjectiveData* >    ObjectivesToSpawn;                                		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class ASFXOperation_ObjectiveSpawnPoint* > ObjectiveSpawnPoints;                             		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class ASFXOperation_ObjectiveSpawnPoint* > RandomizedSpawnPoints;                            		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   FoundEnoughSpawnsForObjective : 1;                		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UObject*                                  ObjectTemplate;                                   		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             AllocateSpawnPointPass;                           		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FSFXOperation_ObjectiveSpawnPointData    ObjectiveSpawnData;                               		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FMapSpecificSpawnPointFix                SpawnPointFix;                                    		// 0x0060 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FVector                                  SpawnOffset;                                      		// 0x0088 (0x000C) [0x0000000000000000]              
	// float                                           CollisionCylinderHeightAdd;                       		// 0x0094 (0x0004) [0x0000000000000000]              
	// float                                           CollisionCylinderRadiusAdd;                       		// 0x0098 (0x0004) [0x0000000000000000]              
	// class UCylinderComponent*                       CollisionCylinder;                                		// 0x009C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function sfxgamempcontent.sfxwave_operation.ObjectiveSpawnSort
// [0x00020002] 
struct USFXEngagement_MobileAnnex_Base_execObjectiveSpawnSort_Parms
{
	class ASFXOperation_ObjectiveSpawnPoint*           A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ASFXOperation_ObjectiveSpawnPoint*           B;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxwave_operation.InitializeWave
// [0x00020002] 
struct USFXEngagement_MobileAnnex_Base_execInitializeWave_Parms
{
	class ASFXWaveManager*                             OwnerManager;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.sfxgui_weaponselection.AS_SetCurrentNameText
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execAS_SetCurrentNameText_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXGame.sfxgui_weaponselection.AS_TeamSetHenchman
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execAS_TeamSetHenchman_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sName;                                            		// 0x0004 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sIconResource;                                    		// 0x0010 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXGame.sfxgui_weaponselection.AS_TeamSetVisible
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execAS_TeamSetVisible_Parms
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXGame.sfxgui_weaponselection.AS_SetModDisplay
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execAS_SetModDisplay_Parms
{
	int                                                nDisplay;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sName;                                            		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sImgPath;                                         		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXGame.sfxgui_weaponselection.AS_AddWeaponStat
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execAS_AddWeaponStat_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              fValue;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fBonus;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCompare;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.sfxgui_weaponselection.AS_ClearWeaponStatsDisplay
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execAS_ClearWeaponStatsDisplay_Parms
{
};

// Function SFXGame.sfxgui_weaponselection.AS_SelectWeaponSlot
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execAS_SelectWeaponSlot_Parms
{
	int                                                nSlotID;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.sfxgui_weaponselection.AS_PerformPlayerWeaponAction
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execAS_PerformPlayerWeaponAction_Parms
{
	unsigned long                                      bAccept : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXGame.sfxgui_weaponselection.AS_ScrollInfoText
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execAS_ScrollInfoText_Parms
{
	float                                              fScroll;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.sfxgui_weaponselection.AS_SetSlotNewIcon
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execAS_SetSlotNewIcon_Parms
{
	int                                                nSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bHasNew : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXGame.sfxgui_weaponselection.AS_SetWeaponAction
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execAS_SetWeaponAction_Parms
{
	struct FString                                     sButtonText;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sCallbackMethodName;                              		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXGame.sfxgui_weaponselection.AS_SetInventoryWeapon
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execAS_SetInventoryWeapon_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDesc;                                            		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sIconResource;                                    		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bNew : 1;                                         		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                nNum;                                             		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nTotal;                                           		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFlourish : 1;                                    		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     sClassPath;                                       		// 0x0034 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXGame.sfxgui_weaponselection.AS_SetWeightDisplay
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execAS_SetWeightDisplay_Parms
{
	int                                                nPercent;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nComparePct;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sBarLabel;                                        		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sInfo;                                            		// 0x0014 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXGame.sfxgui_weaponselection.AS_SetWeaponInfoDisplay
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execAS_SetWeaponInfoDisplay_Parms
{
	struct FString                                     sWeaponName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sWeaponDescription;                               		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sCategory;                                        		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sWeaponImage;                                     		// 0x0024 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXGame.sfxgui_weaponselection.AS_SetWeaponSlot
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execAS_SetWeaponSlot_Parms
{
	int                                                nSlotID;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nWeaponID;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sWeaponIconResource;                              		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nWeaponIconIndex;                                 		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nNumOtherWeapons;                                 		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bHaveNewWeapons : 1;                              		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                nCategory;                                        		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bValid : 1;                                       		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bHasModsAvailable : 1;                            		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXGame.sfxgui_weaponselection.AS_SetLoading
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execAS_SetLoading_Parms
{
	unsigned long                                      bLoading : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     sText;                                            		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXGame.sfxgui_weaponselection.AS_SetVisible
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execAS_SetVisible_Parms
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXGame.sfxgui_weaponselection.HandleInputEvent
// [0x00024802] ( FUNC_Event )
struct USFXGUI_MPWeaponSelection_DLC_eventHandleInputEvent_Parms
{
	unsigned char                                      Event;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              fValue;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGame.sfxgui_weaponselection.PlayerDiscardWeaponCallback
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execPlayerDiscardWeaponCallback_Parms
{
	class UBioSFHandler_MessageBox*                    oMsgBox;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nChoiceID;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCancelled : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXGame.sfxgui_weaponselection.PromptPlayerToDiscardMPWeapon
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execPromptPlayerToDiscardMPWeapon_Parms
{
	int                                                nWeapCategory;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nOption1;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             nOption2;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// void*                                           srOption1;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// void*                                           srOption2;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UBioSFHandler_MessageBox*                 oMB;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.CheckCanEquipWeapon
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execCheckCanEquipWeapon_Parms
{
	int                                                nWeapCategory;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             nEquippedCount;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.CheckCanSelectWeapon
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execCheckCanSelectWeapon_Parms
{
	int                                                nWeapCategory;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGame.sfxgui_weaponselection.UpdateWeaponEncumbranceDisplay
// [0x00820003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execUpdateWeaponEncumbranceDisplay_Parms
{
	// class ASFXPawn_Player*                          oPlayerPawn;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nWeapIndex;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FSFXWeaponSelectWeaponData               oWeapData;                                        		// 0x000C (0x00BC) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// float                                           fEncumbrance;                                     		// 0x00C8 (0x0004) [0x0000000000000000]              
	// int                                             nBarPercent;                                      		// 0x00CC (0x0004) [0x0000000000000000]              
	// int                                             nDisplayValue;                                    		// 0x00D0 (0x0004) [0x0000000000000000]              
	// struct FString                                  sEncumbranceValue;                                		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// float                                           fAccuracy;                                        		// 0x00E0 (0x0004) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x00E4 (0x0004) [0x0000000000000000]              
	// float                                           fRoF;                                             		// 0x00E8 (0x0004) [0x0000000000000000]              
	// float                                           fCapacity;                                        		// 0x00EC (0x0004) [0x0000000000000000]              
	// float                                           fWeight;                                          		// 0x00F0 (0x0004) [0x0000000000000000]              
	// struct FSFXWeaponUIStats                        WeaponStats;                                      		// 0x00F4 (0x0014) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.UpdateCurrentLoadoutWeaponDisplay
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execUpdateCurrentLoadoutWeaponDisplay_Parms
{
	// int                                             nWeapIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.SelectNextHenchman
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execSelectNextHenchman_Parms
{
	// int                                             N;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.SelectPreviousHenchman
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execSelectPreviousHenchman_Parms
{
	// int                                             N;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.WeaponSelectionItemChanged
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execWeaponSelectionItemChanged_Parms
{
};

// Function SFXGame.sfxgui_weaponselection.WeaponLoadoutItemChanged
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execWeaponLoadoutItemChanged_Parms
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCategory;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.sfxgui_weaponselection.SwitchToWeaponLoadout
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execSwitchToWeaponLoadout_Parms
{
	// class ASFXPawn_Player*                          oPlayerPawn;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.UndoWeaponSelection
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execUndoWeaponSelection_Parms
{
};

// Function SFXGame.sfxgui_weaponselection.SelectPrevWeapon
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execSelectPrevWeapon_Parms
{
	// int                                             nInventoryIndex;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.SelectNextWeapon
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execSelectNextWeapon_Parms
{
	// int                                             nInventoryIndex;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.DisplayCurrentWeaponSelection
// [0x00820003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execDisplayCurrentWeaponSelection_Parms
{
	unsigned long                                      bFlourish : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             nInventoryIndex;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FSFXWeaponSelectWeaponData               oData;                                            		// 0x0008 (0x00BC) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bIsNew : 1;                                       		// 0x00C4 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SFXGame.sfxgui_weaponselection.SwitchToWeaponSelection
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execSwitchToWeaponSelection_Parms
{
	int                                                nWeaponType;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.sfxgui_weaponselection.MainMovieLoaded
// [0x00020001] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execMainMovieLoaded_Parms
{
};

// Function SFXGame.sfxgui_weaponselection.SetWeaponInfoDisplay
// [0x00824003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execSetWeaponInfoDisplay_Parms
{
	int                                                nWeaponIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCategory;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FSFXWeaponSelectWeaponData               oData;                                            		// 0x0008 (0x00BC) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// void*                                           srCategoryTitle;                                  		// 0x00C4 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.SetWeaponModsDisplay
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execSetWeaponModsDisplay_Parms
{
	int                                                nWeapIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< struct FName >                          WeaponMods;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nMod;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             nModDataIndex;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FSFXWeaponModData                        Mod;                                              		// 0x0018 (0x006C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  ImagePath;                                        		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGame.sfxgui_weaponselection.SetWeaponStatsDisplay
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execSetWeaponStatsDisplay_Parms
{
	int                                                nWeapIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bDoCompare : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FSFXWeaponUIStats                        oModValues;                                       		// 0x0008 (0x0014) [0x0000000000000000]              
	// struct FSFXWeaponUIStats                        oCompareModValues;                                		// 0x001C (0x0014) [0x0000000000000000]              
	// float                                           fValue;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           fBonus;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           fCompare;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.RestorePowerBonuses
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execRestorePowerBonuses_Parms
{
	// class ASFXWeapon*                               pWeapon;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 pPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             nAmmoIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXPowerCustomAction_AmmoPowerBase*      AmmoPower;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ABioBaseSquad*                            pSquad;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.MakeLoadoutsActive
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execMakeLoadoutsActive_Parms
{
	// class ABioBaseSquad*                            pSquad;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASFXWeapon*                               pWeapon;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASFXPawn_PlayerParty*                     pPawn;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.ApplyWeaponLoadout
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execApplyWeaponLoadout_Parms
{
	// class USFXEngine*                               oEngine;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FName                                    nmWeapClassName;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FName                                    nmOldWeapClassName;                               		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             nWeapIndex;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             nTypeIndex;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             nHenchIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 pPawn;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// TArray< struct FName >                          WeaponMods;                                       		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nMod;                                             		// 0x0034 (0x0004) [0x0000000000000000]              
	// TArray< struct FTelemetryAttribute >            aTelAttribs;                                      		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  sTelAttVal;                                       		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nTelAttribs;                                      		// 0x0050 (0x0004) [0x0000000000000000]              
	// int                                             nTelWeapon;                                       		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.ShowMinimumRequiredWeaponsMessage
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execShowMinimumRequiredWeaponsMessage_Parms
{
	// class UBioSFHandler_MessageBox*                 oMB;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FBioMessageBoxOptionalParams             mbp;                                              		// 0x0004 (0x0014) [0x0000000000000000]              
	// struct FString                                  sMessage;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGame.sfxgui_weaponselection.Exit
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execExit_Parms
{
	// class ASFXPawn_Player*                          pPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.CountCurrentPawnWeapons
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execCountCurrentPawnWeapons_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nCount;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.CurrentPawnHasWeapon
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execCurrentPawnHasWeapon_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGame.sfxgui_weaponselection.GetCurrentHenchTag
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execGetCurrentHenchTag_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 pPawn;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.GetBioPawn
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execGetBioPawn_Parms
{
	int                                                nPawnID;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             nSquadMember;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oPlayer;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oPendingPawn;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ABioBaseSquad*                            oSquad;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             nCount;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.CanPawnUseWeaponGroup
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execCanPawnUseWeaponGroup_Parms
{
	int                                                nPawnID;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eWeaponGroupID;                                   		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oHench;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.WeaponTypeToSlotIndex
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execWeaponTypeToSlotIndex_Parms
{
	unsigned char                                      eWeaponType;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGame.sfxgui_weaponselection.RefreshLoadoutWeaponDisplay
// [0x00820003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execRefreshLoadoutWeaponDisplay_Parms
{
	unsigned char                                      eWeaponType;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// int                                             nSlot;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bNewWeaponsAvailable : 1;                         		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< int >                                   aOtherWeaponsOfType;                              		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bCanUseThisType : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< int >                                   aAvailableMods;                                   		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bHasModsAvailable : 1;                            		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FSFXWeaponSelectWeaponData               oData;                                            		// 0x0030 (0x00BC) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGame.sfxgui_weaponselection.BuildWeaponLoadout
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execBuildWeaponLoadout_Parms
{
	int                                                nPawnID;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nWeaponIndex;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 pPawn;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             nHenchIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FName                                    nmWeapClass;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UClass*                                   pWeapClass;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// class USFXEngine*                               oEngine;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.UpdateUIWorldPawnPosition
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execUpdateUIWorldPawnPosition_Parms
{
	// struct FRotator                                 rotOffset;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 rotFinal;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  vOffset;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vFinal;                                           		// 0x0024 (0x000C) [0x0000000000000000]              
	// int                                             N;                                                		// 0x0030 (0x0004) [0x0000000000000000]              
	// class ASFXPawn_PlayerParty*                     oPartyPawn;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	// class AActor*                                   oUIWorldActor;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FName                                    nmAppearanceTag;                                  		// 0x003C (0x0008) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.CleanupUIWorld
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execCleanupUIWorld_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.ApplyPlayerPawnCustomization
// [0x00040003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execApplyPlayerPawnCustomization_Parms
{
	class UObject*                                     InData;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXPawn_Player*                          PlayerPawn;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AActor*                                   SpawnedActor;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.SetupUIWorld
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execSetupUIWorld_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AActor*                                   oUIWorldActor;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.UpdateHenchmenDisplay
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execUpdateHenchmenDisplay_Parms
{
	// class Asfxpawn*                                 oPawn;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FString                                  sHenchName;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  sIconPath;                                        		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UTexture2D*                               oHenchIcon;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.SetCurrentPawnID
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execSetCurrentPawnID_Parms
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGame.sfxgui_weaponselection.OnWeaponUIDataLoaded
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execOnWeaponUIDataLoaded_Parms
{
};

// Function SFXGame.sfxgui_weaponselection.InitializeTeamSelectOverlay
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execInitializeTeamSelectOverlay_Parms
{
	// int                                             nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.PreLoadData
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execPreLoadData_Parms
{
	struct FScriptDelegate                             doneCallback;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXGame.sfxgui_weaponselection.Launch
// [0x00024003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execLaunch_Parms
{
	unsigned long                                      bPauseGame : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class ASFXHeavyWeapon*                          HeavyWeapon;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASFXPawn_Player*                          pPawn;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASFXWeapon*                               Weapon;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FWeaponStatesToKeep                      AmmoState;                                        		// 0x0010 (0x0024) [0x0000000000000000]              
	// class ABioPawn*                                 pCurrentPawn;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function SFXGame.sfxgui_weaponselection.IsMultiPlayerCharacter
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execIsMultiPlayerCharacter_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGame.sfxgui_weaponselection.DisplayNoEngineMessage
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPWeaponSelection_DLC_execDisplayNoEngineMessage_Parms
{
	// struct FColor                                   Clr;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  S;                                                		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGame.sfxgui_weaponselection.OnClose
// [0x00020802] ( FUNC_Event )
struct USFXGUI_MPWeaponSelection_DLC_eventOnClose_Parms
{
};

// Function SFXGame.sfxgui_weaponselection.OnStart
// [0x00020802] ( FUNC_Event )
struct USFXGUI_MPWeaponSelection_DLC_eventOnStart_Parms
{
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.AS_SetDetails
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct USFXGUI_MPChallenges_eventAS_SetDetails_Parms
{
	struct FString                                     sInfo;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sImgResource;                                     		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.AS_EndDisplayList
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct USFXGUI_MPChallenges_eventAS_EndDisplayList_Parms
{
	int                                                nLastEntryID;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.AS_SetSubItems
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct USFXGUI_MPChallenges_eventAS_SetSubItems_Parms
{
	TArray< struct FChallengeListItem >                aSubItems;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.AS_AddListItems
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct USFXGUI_MPChallenges_eventAS_AddListItems_Parms
{
	TArray< struct FChallengeListItem >                aItems;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.AS_StartDisplayList
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct USFXGUI_MPChallenges_eventAS_StartDisplayList_Parms
{
	struct FString                                     sLabel;                                           		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sTitle;                                           		// 0x000C (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	int                                                nListLen;                                         		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.AS_SetupVisualState
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct USFXGUI_MPChallenges_eventAS_SetupVisualState_Parms
{
	int                                                nForceTab;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.AS_ScrollDetailsAnalog
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct USFXGUI_MPChallenges_eventAS_ScrollDetailsAnalog_Parms
{
	float                                              fScroll;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.AS_SetUnreadItemCounts
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct USFXGUI_MPChallenges_eventAS_SetUnreadItemCounts_Parms
{
	int                                                nQuestPrimary;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nQuestSecondary;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCodexPrimary;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCodexSecondary;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.IsAccomplishmentRepeatable
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execIsAccomplishmentRepeatable_Parms
{
	int                                                AccomplishmentDataIndex;                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.SetAccomplishmentRepeatable
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execSetAccomplishmentRepeatable_Parms
{
	TArray< unsigned long >                            NewAccomplishmentDataRepeatable;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.HandleInputEvent
// [0x00024802] ( FUNC_Event )
struct USFXGUI_MPChallenges_eventHandleInputEvent_Parms
{
	unsigned char                                      Event;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              fValue;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ReturnToBrowser
// [0x00020002] 
struct USFXGUI_MPChallenges_execReturnToBrowser_Parms
{
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.OnRequestImageComplete
// [0x00040003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execOnRequestImageComplete_Parms
{
	struct FSFXOnlineImageRequest                      ImageRequestResult;                               		// 0x0000 (0x0018) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.SetDetails
// [0x00024003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execSetDetails_Parms
{
	struct FString                                     sBody;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sImageResourceString;                             		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sImageAssetPath;                                  		// 0x0018 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.SetRewardButtonEnabled
// [0x00020002] 
struct USFXGUI_MPChallenges_execSetRewardButtonEnabled_Parms
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UGFxValue*                                buttonObject;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.SetRewardButtonVisibility
// [0x00020002] 
struct USFXGUI_MPChallenges_execSetRewardButtonVisibility_Parms
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UGFxValue*                                buttonObject;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.DoNothingFunction
// [0x00020001] ( FUNC_Final )
struct USFXGUI_MPChallenges_execDoNothingFunction_Parms
{
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.HandleRewardSelection
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execHandleRewardSelection_Parms
{
	// class USFXAccomplishmentManager*                AccomplishmentManager;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             nAccomplishmentIndex;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nArrayIndex;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FName                                    nmAccomplishmentName;                             		// 0x000C (0x0008) [0x0000000000000000]              
	// int                                             nRewardIndex;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FBioMessageBoxOptionalParams             stParams;                                         		// 0x0018 (0x0014) [0x0000000000000000]              
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.FocusOnSubentry
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execFocusOnSubentry_Parms
{
	TArray< struct FChallengeDisplayItem >             aChallenges;                                      		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	int                                                nIndex;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ExFocusOnSubentry
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execExFocusOnSubentry_Parms
{
	int                                                nChallengeIndex;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ExpandListEntry
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execExpandListEntry_Parms
{
	TArray< struct FChallengeDisplayItem >             aChallenges;                                      		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	// int                                             N;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             nAccomplishment;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   aSilverEntries;                                   		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FChallengeListItem >             aListItems;                                       		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FChallengeListItem                       NewItem;                                          		// 0x002C (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ExExpandEntry
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execExExpandEntry_Parms
{
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ExSetLastEntry
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execExSetLastEntry_Parms
{
	int                                                nListIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FChallengeUIData                         Data;                                             		// 0x0004 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.DisplayCategoryChallenges
// [0x00024003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execDisplayCategoryChallenges_Parms
{
	TArray< struct FChallengeDisplayItem >             aChallenges;                                      		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	int                                                nSelectChallengeId;                               		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// TArray< struct FChallengeListItem >             aListItems;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FChallengeListItem                       NewItem;                                          		// 0x001C (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nIndex;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             displayId;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ExFocusOnTab
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execExFocusOnTab_Parms
{
	int                                                nTab;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ExInitializeJournal
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execExInitializeJournal_Parms
{
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.BuildPercentCompletion_Helper
// [0x00C40003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execBuildPercentCompletion_Helper_Parms
{
	TArray< float >                                    PercentCompletion;                                		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FChallengeDisplayItem >             aChallenges;                                      		// 0x000C (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nCurrentChallengeIndex;                           		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXAccomplishmentManager*                   AccomplishmentManager;                            		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           ChildrenPercentSum;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           CurrentChildrenPercent;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           MinChildrenPercent;                               		// 0x0028 (0x0004) [0x0000000000000000]              
	// TArray< float >                                 ChildrenPercentages;                              		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nChallengeIdx;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             CurrentValue;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             GoalValue;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             nCurrentAccomplishmentIndex;                      		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             nAccomplishmentDataIndex;                         		// 0x0048 (0x0004) [0x0000000000000000]              
	// int                                             nGrinderIndex;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             nParentAccomplishmentIndex;                       		// 0x0050 (0x0004) [0x0000000000000000]              
	// int                                             nParentAccomplishmentDataIndex;                   		// 0x0054 (0x0004) [0x0000000000000000]              
	// int                                             nChildrenPercentagesIdx;                          		// 0x0058 (0x0004) [0x0000000000000000]              
	// int                                             nMinChildrenPercentIdx;                           		// 0x005C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bParentIsRepeatable : 1;                          		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             nNumCompletions;                                  		// 0x0064 (0x0004) [0x0000000000000000]              
	// struct FChallengeDisplayItem                    CurrentChallenge;                                 		// 0x0068 (0x006C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.BuildPercentCompletion
// [0x00420003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execBuildPercentCompletion_Parms
{
	TArray< float >                                    PercentCompletion;                                		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FChallengeDisplayItem >             aChallenges;                                      		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class USFXAccomplishmentManager*                   AccomplishmentManager;                            		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             idx;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.BuildUIData
// [0x00C24003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execBuildUIData_Parms
{
	TArray< struct FChallengeDisplayItem >             aChallenges;                                      		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nChallengeIndex;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< float >                                    PercentageCompletion;                             		// 0x0010 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class USFXAccomplishmentManager*                   AccomplishmentManager;                            		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FChallengeUIData                         ReturnData;                                       		// 0x0020 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nAccomplishmentIndex;                             		// 0x0060 (0x0004) [0x0000000000000000]              
	// int                                             nGrinderIndex;                                    		// 0x0064 (0x0004) [0x0000000000000000]              
	// struct FAccomplishment                          foundAccomplishment;                              		// 0x0068 (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// void*                                           srTitle;                                          		// 0x00CC (0x0004) [0x0000000000000000]              
	// void*                                           srBody;                                           		// 0x00D0 (0x0004) [0x0000000000000000]              
	// struct FChallengeDisplayItem                    challengeItem;                                    		// 0x00D4 (0x006C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nPercentComplete;                                 		// 0x0140 (0x0004) [0x0000000000000000]              
	// int                                             nTimesCompleted;                                  		// 0x0144 (0x0004) [0x0000000000000000]              
	// int                                             nTimesParentCompleted;                            		// 0x0148 (0x0004) [0x0000000000000000]              
	// struct FString                                  sParsedBody;                                      		// 0x014C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  sParsedTimesCompleted;                            		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  sParsedChallengePoints;                           		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nCurrentTime;                                     		// 0x0170 (0x0004) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x0174 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bEntitlementFound : 1;                            		// 0x0178 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bCompleteChallengeIcon : 1;                       		// 0x017C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bChallengeIsRepeatable : 1;                       		// 0x0180 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.InitializeChallengeArray
// [0x00420003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execInitializeChallengeArray_Parms
{
	TArray< struct FChallengeDisplayItem >             aChallenges;                                      		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class USFXAccomplishmentManager*                   AccomplishmentManager;                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             nIndex;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< float >                                 PercentCompletion;                                		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.CheckInitializeData
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execCheckInitializeData_Parms
{
	// unsigned long                                   bFoundStartupEntry : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class USFXAccomplishmentManager*                AccomplishmentManager;                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ChallengeSort_Parent
// [0x00120003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execChallengeSort_Parent_Parms
{
	struct FChallengeDisplayItem                       A;                                                		// 0x0000 (0x006C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FChallengeDisplayItem                       B;                                                		// 0x006C (0x006C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x00D8 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ChallengeSort_Rank_Index
// [0x00120003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execChallengeSort_Rank_Index_Parms
{
	struct FChallengeDisplayItem                       A;                                                		// 0x0000 (0x006C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FChallengeDisplayItem                       B;                                                		// 0x006C (0x006C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x00D8 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ConstructEnumObjects
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execConstructEnumObjects_Parms
{
	// class UGFxValue*                                EnumObject;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             tempValue;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.SetupFunctionIntercepts
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execSetupFunctionIntercepts_Parms
{
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ResetStartupOverrides
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPChallenges_execResetStartupOverrides_Parms
{
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.OnClose
// [0x00020802] ( FUNC_Event )
struct USFXGUI_MPChallenges_eventOnClose_Parms
{
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.OnStart
// [0x00020802] ( FUNC_Event )
struct USFXGUI_MPChallenges_eventOnStart_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.IsChallengeSystemEnabled
// [0x00040003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execIsChallengeSystemEnabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowMPChallengeScreen
// [0x00040003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execShowMPChallengeScreen_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.OnRequestImageComplete
// [0x00040003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execOnRequestImageComplete_Parms
{
	struct FSFXOnlineImageRequest                      ImageRequestResult;                               		// 0x0000 (0x0018) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.RequestImage
// [0x00020002] 
struct USFXGUI_MPLobby_DLC_execRequestImage_Parms
{
	struct FString                                     Resource;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FLobbyOnlineImageRequest                 ImageRequestIter;                                 		// 0x0018 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FLobbyOnlineImageRequest                 NewImageRequest;                                  		// 0x0034 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.GetEmblemData
// [0x00020002] 
struct USFXGUI_MPLobby_DLC_execGetEmblemData_Parms
{
	int                                                EmblemID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FEmblemDisplayInfo                          ReturnValue;                                      		// 0x0004 (0x0014) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FEmblemDisplayInfo                       ToRet;                                            		// 0x0018 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mplobby.CheckIfSignedInFailSafe
// [0x00040003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execCheckIfSignedInFailSafe_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class Asfxplayercontrollermp*                   oPCMP;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.GetGAWZoneBonusText
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetGAWZoneBonusText_Parms
{
	int                                                MapId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  BonusString;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USFXGAWAssetsHandler*                     GAWAssetsHandler;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             nZoneIndex;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             nMapIndex;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           ZoneIncrease;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           OverallIncrease;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FMPMapInfo                               MapInfo;                                          		// 0x0030 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mplobby.CameFromSelectFirstCharacter
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execCameFromSelectFirstCharacter_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.ViewInvitations
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execViewInvitations_Parms
{
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.GetMapZoneID
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetMapZoneID_Parms
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             nMapIndex;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.GetFormattedReadinessPercentage
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetFormattedReadinessPercentage_Parms
{
	int                                                nReadiness;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  ReturnString;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mplobby.ShouldShowChatDisabledMessage
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execShouldShowChatDisabledMessage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UISFXOnlineComponentPlatform*             oPlatform;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             LocalUserNum;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.PreloadLobbyImages
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execPreloadLobbyImages_Parms
{
	// int                                             idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< struct FString >                        Images;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FMPPrivacyInfo >                 PrivacyTypes;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FMPMapInfo >                     MapList;                                          		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FMPEnemyInfo >                   EnemyTypes;                                       		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FMPChallengeInfo >               ChallengeTypes;                                   		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USFXSaveManagerMP*                        MPSaveManager;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.IsHostingNewMission
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execIsHostingNewMission_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetMaxActiveConsumables
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetMaxActiveConsumables_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetEnemyBonusText
// [0x00020002] 
struct USFXGUI_MPLobby_DLC_execGetEnemyBonusText_Parms
{
	int                                                EnemyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      UseXP : 1;                                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// float                                           Bonus;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  BonusText;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             RoundedBonus;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.GetMapBonusText
// [0x00020002] 
struct USFXGUI_MPLobby_DLC_execGetMapBonusText_Parms
{
	int                                                MapIndex;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      UseXP : 1;                                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// float                                           Bonus;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  BonusText;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             RoundedBonus;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.GetRandomEnemyBonusText
// [0x00020002] 
struct USFXGUI_MPLobby_DLC_execGetRandomEnemyBonusText_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetRandomMapBonusText
// [0x00020002] 
struct USFXGUI_MPLobby_DLC_execGetRandomMapBonusText_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mplobby.ChangeMapMusic
// [0x00020002] 
struct USFXGUI_MPLobby_DLC_execChangeMapMusic_Parms
{
	int                                                nMapId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxgui_mplobby.VoteToKickPlayerInSlot
// [0x00040003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execVoteToKickPlayerInSlot_Parms
{
	int                                                SlotIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bKick : 1;                                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class Asfxprimp*                                OtherPRI;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             ZeroId;                                           		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.HasVotedToKickPlayerInSlot
// [0x00040003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execHasVotedToKickPlayerInSlot_Parms
{
	int                                                SlotIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class Asfxprimp*                                OtherPRI;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             ZeroId;                                           		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.ClearAllNewWeaponNotifications
// [0x00040003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execClearAllNewWeaponNotifications_Parms
{
	// class USFXSaveManagerMP*                        MPSaveManager;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.CanAffordNewStoreItems
// [0x00040003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execCanAffordNewStoreItems_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXSaveManagerMP*                        MPSaveManager;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.HasNewMatchConsumables
// [0x00040003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execHasNewMatchConsumables_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXSaveManagerMP*                        MPSaveManager;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.HasNewAppearanceOptions
// [0x00040003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execHasNewAppearanceOptions_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXSaveManagerMP*                        MPSaveManager;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FName                                    SelectedKitName;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.HasNewWeapons
// [0x00040003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execHasNewWeapons_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXSaveManagerMP*                        MPSaveManager;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.ToggleMuteForSlot
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execToggleMuteForSlot_Parms
{
	int                                                SlotIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXOnlineComponentVoiceInterface*        oVoiceInterface;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	// class Asfxprimp*                                PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             LocalUserNum;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.SetPreviouslySelectedItem
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execSetPreviouslySelectedItem_Parms
{
	int                                                Subscreen;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ItemIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetPreviouslySelectedItem
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetPreviouslySelectedItem_Parms
{
	int                                                Subscreen;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.CancelMatchSettings
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execCancelMatchSettings_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.ChangeMatchSettings
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execChangeMatchSettings_Parms
{
	// unsigned long                                   bSettingsChanged : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             MapId;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             EnemyID;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             ChallengeID;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             privacy;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.GetCredits
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetCredits_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.QuickMatch
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execQuickMatch_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.SwitchCharacter
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execSwitchCharacter_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowOptionsScreen
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execShowOptionsScreen_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowLeaderboardScreen
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execShowLeaderboardScreen_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowMatchConsumablesScreen
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execShowMatchConsumablesScreen_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowAppearanceScreen
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execShowAppearanceScreen_Parms
{
	// class USFXSaveManagerMP*                        MPSaveManager;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowStoreScreen
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execShowStoreScreen_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowWeaponsScreen
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execShowWeaponsScreen_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowTalentsLevelUpScreen
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execShowTalentsLevelUpScreen_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowMatchSettingsScreen
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execShowMatchSettingsScreen_Parms
{
	// unsigned long                                   bIsLeader : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function sfxgamempcontent.sfxgui_mplobby.HostNewMission
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execHostNewMission_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.CustomMatch
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execCustomMatch_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.ConfirmExitMultiplayer
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execConfirmExitMultiplayer_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.ExitMultiplayerConfirmationPopupInputDelegate
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execExitMultiplayerConfirmationPopupInputDelegate_Parms
{
	unsigned long                                      bAPressed : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                nContext;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowExitMultiplayerConfirmationPopup
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execShowExitMultiplayerConfirmationPopup_Parms
{
	// class UBioSFHandler_MessageBox*                 messageBox;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FBioMessageBoxOptionalParams             Params;                                           		// 0x0004 (0x0014) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.ExitMultiplayer
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execExitMultiplayer_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.GoBackToSelectFirstCharacter
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGoBackToSelectFirstCharacter_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.ConfirmExitLobby
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execConfirmExitLobby_Parms
{
	// class USFXOnlineSubsystem*                      oOnlineSubsystem;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UISFXOnlineComponentGame*                 oOnlineGame;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.ExitLobbyPopupInputDelegate
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execExitLobbyPopupInputDelegate_Parms
{
	unsigned long                                      bAPressed : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                nContext;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxgui_mplobby.ExitLobby
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execExitLobby_Parms
{
	// class UBioSFHandler_MessageBox*                 messageBox;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FBioMessageBoxOptionalParams             Params;                                           		// 0x0004 (0x0014) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowPartySessions
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execShowPartySessions_Parms
{
	// class USFXOnlineSubsystem*                      OnlineSubsystem;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             LocalUserNum;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.InviteParty
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execInviteParty_Parms
{
	// int                                             LocalUserNum;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.IsInParty
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execIsInParty_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineSubsystem*                      OnlineSubsystem;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXOnlineComponentPlatformXenon*         OnlineComponentXenon;                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.InviteFriends
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execInviteFriends_Parms
{
	// int                                             LocalUserNum;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bInviteOk : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UBioSFHandler_MessageBox*                 messageBox;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FBioMessageBoxOptionalParams             messageParams;                                    		// 0x000C (0x0014) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowGamercard
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execShowGamercard_Parms
{
	int                                                SlotIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class Asfxprimp*                                PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             LocalUserNum;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.SetReady
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execSetReady_Parms
{
	unsigned long                                      Ready : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetLeaderboardNotificationText
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetLeaderboardNotificationText_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mplobby.HasLeaderboardNotifications
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execHasLeaderboardNotifications_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetPreviousSubScreen
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetPreviousSubScreen_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.HasCreditsToSpend
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execHasCreditsToSpend_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.HasTalentPointsToSpend
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execHasTalentPointsToSpend_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.CanLevelUp
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execCanLevelUp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.IsReady
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execIsReady_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetPrivacy
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetPrivacy_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.IsPrivateMatch
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execIsPrivateMatch_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.IsGameFull
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execIsGameFull_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.CanInteract
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execCanInteract_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetMatchConsumableSlotTypeForCategory
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetMatchConsumableSlotTypeForCategory_Parms
{
	int                                                Category;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetCharacterInfo_Patch
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetCharacterInfo_Patch_Parms
{
	class Asfxprimp*                                   PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPlayerDisplayInfo_Patch                    ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FPlayerDisplayInfo_Patch                 ToRet;                                            		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.GetPlayerSlotInfo_Patch
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetPlayerSlotInfo_Patch_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPlayerDisplayInfo_Patch                    ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetCharacterConsumableInfo
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetCharacterConsumableInfo_Parms
{
	class Asfxprimp*                                   PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FMatchConsumableDisplayInfo >       ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// TArray< struct FMatchConsumableDisplayInfo >    ConsumableData;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FMatchConsumableDisplayInfo              CurrConsumableData;                               		// 0x001C (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             Idx2;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             CurrConsumableValue;                              		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FName                                    CurrConsumableClass;                              		// 0x0044 (0x0008) [0x0000000000000000]              
	// class Usfxgawreinforcementmanager*              GAWManager;                                       		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.GetCharacterWeaponInfo
// [0x00820003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetCharacterWeaponInfo_Parms
{
	class Asfxprimp*                                   PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FWeaponDisplayInfo >                ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// TArray< struct FWeaponDisplayInfo >             WeaponData;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FWeaponDisplayInfo                       CurrWeaponData;                                   		// 0x001C (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FSFXWeaponSelectWeaponData               CurrWeaponManagerData;                            		// 0x005C (0x00BC) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FSFXWeaponModData                        CurrWeaponModManagerData;                         		// 0x0118 (0x006C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FName                                    CurrWeaponClassName;                              		// 0x0184 (0x0008) [0x0000000000000000]              
	// struct FName                                    CurrModClassName;                                 		// 0x018C (0x0008) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x0194 (0x0004) [0x0000000000000000]              
	// int                                             nWeaponDataIndex;                                 		// 0x0198 (0x0004) [0x0000000000000000]              
	// int                                             nModDataIndex;                                    		// 0x019C (0x0004) [0x0000000000000000]              
	// int                                             nModLevel;                                        		// 0x01A0 (0x0004) [0x0000000000000000]              
	// int                                             nWeaponLevel;                                     		// 0x01A4 (0x0004) [0x0000000000000000]              
	// class USFXWeaponUIDataManager*                  DataManager;                                      		// 0x01A8 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.GetCharacterPowerInfo
// [0x00820003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetCharacterPowerInfo_Parms
{
	class Asfxprimp*                                   PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPowerDisplayInfo >                 ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// TArray< struct FPowerDisplayInfo >              PowerData;                                        		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FPowerDisplayInfo                        CurrPowerData;                                    		// 0x001C (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USFXSaveManagerMP*                        MPSaveManager;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FMPKitData                               KitData;                                          		// 0x003C (0x0080) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetCharacterInfoDetailed
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetCharacterInfoDetailed_Parms
{
	class Asfxprimp*                                   PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPlayerDisplayInfo                          ReturnValue;                                      		// 0x0004 (0x00B8) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FPlayerDisplayInfo                       PlayerData;                                       		// 0x00BC (0x00B8) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetCharacterInfoBasic
// [0x00820003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetCharacterInfoBasic_Parms
{
	class Asfxprimp*                                   PRI;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPlayerDisplayInfo                          ReturnValue;                                      		// 0x0004 (0x00B8) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FPlayerDisplayInfo                       PlayerData;                                       		// 0x00BC (0x00B8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FName                                    PlayerKit;                                        		// 0x0174 (0x0008) [0x0000000000000000]              
	// class USFXSaveManagerMP*                        MPSaveManager;                                    		// 0x017C (0x0004) [0x0000000000000000]              
	// int                                             CurrLevelXP;                                      		// 0x0180 (0x0004) [0x0000000000000000]              
	// int                                             NextLevelXP;                                      		// 0x0184 (0x0004) [0x0000000000000000]              
	// int                                             PrevLevelXP;                                      		// 0x0188 (0x0004) [0x0000000000000000]              
	// int                                             Level;                                            		// 0x018C (0x0004) [0x0000000000000000]              
	// int                                             CurrentXP;                                        		// 0x0190 (0x0004) [0x0000000000000000]              
	// int                                             n7Rating;                                         		// 0x0194 (0x0004) [0x0000000000000000]              
	// void*                                           ClassPrettyName;                                  		// 0x0198 (0x0004) [0x0000000000000000]              
	// struct FMPKitData                               KitData;                                          		// 0x019C (0x0080) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// float                                           fCurrentXP;                                       		// 0x021C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.GetLocalPlayerDetailedInfo
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetLocalPlayerDetailedInfo_Parms
{
	struct FPlayerDisplayInfo                          ReturnValue;                                      		// 0x0000 (0x00B8) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetLocalPlayerBasicInfo
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetLocalPlayerBasicInfo_Parms
{
	struct FPlayerDisplayInfo                          ReturnValue;                                      		// 0x0000 (0x00B8) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetPlayerSlotDetailedInfo
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetPlayerSlotDetailedInfo_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPlayerDisplayInfo                          ReturnValue;                                      		// 0x0004 (0x00B8) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetPlayerSlotBasicInfo
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetPlayerSlotBasicInfo_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPlayerDisplayInfo                          ReturnValue;                                      		// 0x0004 (0x00B8) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetPlayerInSlot
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetPlayerInSlot_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class Asfxprimp*                                   ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.GetNumPlayers
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetNumPlayers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetNumPlayerSlots
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetNumPlayerSlots_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetLobbyStatusString
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetLobbyStatusString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mplobby.GetLobbyStatus
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetLobbyStatus_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mplobby.IsUIWorldPawnRequired
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execIsUIWorldPawnRequired_Parms
{
	int                                                Subscreen;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.LoadTab
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execLoadTab_Parms
{
	int                                                NewTab;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   RequiredPawnBefore : 1;                           		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   RequiresPawnNow : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function sfxgamempcontent.sfxgui_mplobby.GetCurrentLobbyTab
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execGetCurrentLobbyTab_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_ExitMultiplayerCancelled
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execAS_ExitMultiplayerCancelled_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_ExitLobbyCancelled
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execAS_ExitLobbyCancelled_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_RefreshGalaxyAtWarMap
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execAS_RefreshGalaxyAtWarMap_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_RefreshAllSpeakerIcons
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execAS_RefreshAllSpeakerIcons_Parms
{
	TArray< float >                                    VoiceData;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_GetChallengeSetting
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execAS_GetChallengeSetting_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_GetEnemySetting
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execAS_GetEnemySetting_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_GetMapSetting
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execAS_GetMapSetting_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_GetPrivacySetting
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execAS_GetPrivacySetting_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_OnTabLoaded
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execAS_OnTabLoaded_Parms
{
	int                                                Subscreen;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_RefreshScreen
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execAS_RefreshScreen_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.ApplyTinting
// [0x00020002] 
struct USFXGUI_MPLobby_DLC_execApplyTinting_Parms
{
	class UObject*                                     InSettings;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   TargetActor;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXCustomizationInstance_PlayerMP*       LocalSettings;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASFXPawn_Player*                          SourcePlayer;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.SetInitialPawnPosition
// [0x00020002] 
struct USFXGUI_MPLobby_DLC_execSetInitialPawnPosition_Parms
{
	class UObject*                                     Data;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   TargetActor;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASFXPawn_Player*                          SourcePlayer;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.CleanupUIWorldPawn
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execCleanupUIWorldPawn_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.SetupUIWorldPawn
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execSetupUIWorldPawn_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.RefreshAllSpeakerIcons
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execRefreshAllSpeakerIcons_Parms
{
	// TArray< float >                                 VoiceData;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXOnlineComponentVoiceInterface*        oVoiceInterface;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             LocalUserNum;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bPlayerHasHeadset : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bPlayerIsTalking : 1;                             		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bPlayerIsMuted : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function sfxgamempcontent.sfxgui_mplobby.Refresh
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPLobby_DLC_execRefresh_Parms
{
	// int                                             idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mplobby.GetGAWRatings
// [0x00020002] 
struct USFXGUI_MPLobby_DLC_execGetGAWRatings_Parms
{
	TArray< struct FGAWZoneGUIData >                   ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mplobby.HasGAWRatingsError
// [0x00020002] 
struct USFXGUI_MPLobby_DLC_execHasGAWRatingsError_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mplobby.OnGAWRequestFinished
// [0x00020002] 
struct USFXGUI_MPLobby_DLC_execOnGAWRequestFinished_Parms
{
	TArray< struct FGAWZoneGUIData >                   ZoneData;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                errorCode;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxgui_mplobby.Update
// [0x00020802] ( FUNC_Event )
struct USFXGUI_MPLobby_DLC_eventUpdate_Parms
{
	float                                              fDeltaT;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxgui_mplobby.OnClose
// [0x00020802] ( FUNC_Event )
struct USFXGUI_MPLobby_DLC_eventOnClose_Parms
{
};

// Function sfxgamempcontent.sfxgui_mplobby.OnStart
// [0x00020802] ( FUNC_Event )
struct USFXGUI_MPLobby_DLC_eventOnStart_Parms
{
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPSelectKit_DLC.ShowCharacterInfoCallback
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPSelectKit_DLC_execShowCharacterInfoCallback_Parms
{
	unsigned long                                      bAPressed : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                Context;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPSelectKit_DLC.ComposeKitDescriptionString
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPSelectKit_DLC_execComposeKitDescriptionString_Parms
{
	struct FKitDescriptionData                         oData;                                            		// 0x0000 (0x0030) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0030 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  DescriptionString;                                		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPSelectKit_DLC.ShowCharacterInfo
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPSelectKit_DLC_execShowCharacterInfo_Parms
{
	struct FString                                     KitName;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FBioMessageBoxOptionalParams             oParams;                                          		// 0x000C (0x0014) [0x0000000000000000]              
	// struct FString                                  DescriptionString;                                		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.AS_RefreshScreen
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execAS_RefreshScreen_Parms
{
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetGUICategoryFromSlotType
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execGetGUICategoryFromSlotType_Parms
{
	int                                                SlotType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.ClearNewFlagsForSlotType
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execClearNewFlagsForSlotType_Parms
{
	int                                                SlotType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXSaveManagerMP*                        MPSaveManager;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned char                                   GUICategory;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.HasNewConsumablesOfSlotType
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execHasNewConsumablesOfSlotType_Parms
{
	int                                                SlotType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXSaveManagerMP*                        MPSaveManager;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned char                                   GUICategory;                                      		// 0x000C (0x0001) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetInGameConsumableInfo
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execGetInGameConsumableInfo_Parms
{
	TArray< struct FInGameConsumableInfo >             ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// TArray< struct FInGameConsumableInfo >          InGameConsumableList;                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FInGameConsumableInfo                    DisplayInfo;                                      		// 0x0018 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x0040 (0x0004) [0x0000000000000000]              
	// class USFXEngine*                               Engine;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	// struct FString                                  ConsumableClassName;                              		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UClass*                                   ConsumableClass;                                  		// 0x0054 (0x0004) [0x0000000000000000]              
	// struct FName                                    CapacityPV;                                       		// 0x0058 (0x0008) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.ShowStoreScreen
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execShowStoreScreen_Parms
{
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetSlotTypeForCategory
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execGetSlotTypeForCategory_Parms
{
	int                                                Category;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.ExitScreen
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execExitScreen_Parms
{
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetMaxActiveConsumables
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execGetMaxActiveConsumables_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetActiveConsumables
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execGetActiveConsumables_Parms
{
	TArray< struct FConsumableDisplayInfo >            ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.UpdateActiveList
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execUpdateActiveList_Parms
{
	// int                                             i;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXGAWReinforcementBase*                 CardOwner;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.DeactivateConsumablesOfSlotType
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execDeactivateConsumablesOfSlotType_Parms
{
	int                                                SlotType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.SetConsumableActive
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execSetConsumableActive_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Version;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bActive : 1;                                      		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FConsumableDisplayInfo                   C;                                                		// 0x000C (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USFXGAWReinforcementBase*                 CardOwner;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.IsConsumableAvailable
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execIsConsumableAvailable_Parms
{
	class USFXGAWReinforcementBase*                    CardOwner;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Id;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Version;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Category;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetConsumable
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execGetConsumable_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Version;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FConsumableDisplayInfo                      ReturnValue;                                      		// 0x0008 (0x003C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             i;                                                		// 0x0044 (0x0004) [0x0000000000000000]              
	// struct FConsumableDisplayInfo                   DisplayInfo;                                      		// 0x0048 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetConsumableListFilteredBySlot
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execGetConsumableListFilteredBySlot_Parms
{
	int                                                SlotIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FConsumableDisplayInfo >            ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             i;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FConsumableDisplayInfo                   DisplayInfo;                                      		// 0x0014 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FConsumableDisplayInfo >         List;                                             		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetConsumableList
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execGetConsumableList_Parms
{
	TArray< struct FConsumableDisplayInfo >            ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             i;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FConsumableDisplayInfo                   DisplayInfo;                                      		// 0x0010 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FConsumableDisplayInfo >         List;                                             		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetDisplayInfo
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPMatchConsumables_DLC_execGetDisplayInfo_Parms
{
	int                                                CardID;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FCardInfoData                               CardData;                                         		// 0x0004 (0x0068) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FConsumableDisplayInfo                      ReturnValue;                                      		// 0x006C (0x003C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FConsumableDisplayInfo                   DisplayInfo;                                      		// 0x00A8 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  CardPlayerVariableName;                           		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class Usfxgawreinforcementmatchconsumable*      ConsumablePool;                                   		// 0x00F0 (0x0004) [0x0000000000000000]              
	// struct FCardInfoDataSupplemental                DataSupplemental;                                 		// 0x00F4 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bUsingGoBigDescription : 1;                       		// 0x00FC (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.OnClose
// [0x00020802] ( FUNC_Event )
struct USFXGUI_MPMatchConsumables_DLC_eventOnClose_Parms
{
	// class USFXSaveManagerMP*                        MPSaveManager;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.OnStart
// [0x00020802] ( FUNC_Event )
struct USFXGUI_MPMatchConsumables_DLC_eventOnStart_Parms
{
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.AS_InitializeScreen
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPReinforcementsReveal_DLC_execAS_InitializeScreen_Parms
{
	unsigned long                                      SkipIntro : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.GetCardsToDisplay
// [0x00040003] ( FUNC_Final )
struct USFXGUI_MPReinforcementsReveal_DLC_execGetCardsToDisplay_Parms
{
	TArray< struct FCardInfoData >                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// TArray< struct FCardInfoData >                  AwardedCardData;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.GetAwardedPackName
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPReinforcementsReveal_DLC_execGetAwardedPackName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  ToRet;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.GetPackRevealSound
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPReinforcementsReveal_DLC_execGetPackRevealSound_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.GetPackIntroHoloTextureRef
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPReinforcementsReveal_DLC_execGetPackIntroHoloTextureRef_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.GetPackIntroTextureRef
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPReinforcementsReveal_DLC_execGetPackIntroTextureRef_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.Exit
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPReinforcementsReveal_DLC_execExit_Parms
{
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.GetCardData
// [0x00040003] ( FUNC_Final )
struct USFXGUI_MPReinforcementsReveal_DLC_execGetCardData_Parms
{
	TArray< struct FCardDisplayData >                  ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// TArray< struct FCardDisplayData >               CardData;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FCardDisplayData                         NewCard;                                          		// 0x0018 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FCardInfoData >                  AwardedCardData;                                  		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x005C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.GetPackName
// [0x00020003] ( FUNC_Final )
struct USFXGUI_MPReinforcementsReveal_DLC_execGetPackName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.GetCardDisplayData
// [0x00422003] ( FUNC_Final )
struct USFXGUI_MPReinforcementsReveal_DLC_execGetCardDisplayData_Parms
{
	struct FCardInfoData                               CardData;                                         		// 0x0000 (0x0068) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FCardDisplayData                            ReturnValue;                                      		// 0x0068 (0x0038) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FCardDisplayData                         NewCard;                                          		// 0x00A0 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             CardTypeIdx;                                      		// 0x00D8 (0x0004) [0x0000000000000000]              
	// struct FString                                  TitleCustomToken0;                                		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  TitleCustomToken1;                                		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.OnClose
// [0x00020802] ( FUNC_Event )
struct USFXGUI_MPReinforcementsReveal_DLC_eventOnClose_Parms
{
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.OnStart
// [0x00020802] ( FUNC_Event )
struct USFXGUI_MPReinforcementsReveal_DLC_eventOnStart_Parms
{
	// struct FName                                    PackRevealSound;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  AwardedPackName;                                  		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.SetOnCloseCallback
// [0x00020002] 
struct USFXGUI_MPReinforcementsReveal_DLC_execSetOnCloseCallback_Parms
{
	struct FScriptDelegate                             fn_OnCloseDelegate;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.OnCloseCallback
// [0x00120000] 
struct USFXGUI_MPReinforcementsReveal_DLC_execOnCloseCallback_Parms
{
};

// Function sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear.OnAwarded
// [0x00424002] 
struct USFXGAWReinforcementMatchConsumable_Gear_execOnAwarded_Parms
{
	struct FCardInfoData                               CardInfoOut;                                      		// 0x0000 (0x0068) [0x0000000000400190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FCardInfoData >                     ChosenCards;                                      		// 0x0068 (0x000C) [0x0000000000400192]              ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0074 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             CurrentValue;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x007C (0x0004) [0x0000000000000000]              
	// TArray< struct FCardInfoData >                  SubCardPool;                                      		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bCardFound : 1;                                   		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FBWEntitlementId                         eID;                                              		// 0x0090 (0x0004) [0x0000000000000000]              
	// struct FName                                    PlayerVariable;                                   		// 0x0094 (0x0008) [0x0000000000000000]              
	// int                                             ActiveMCIdx;                                      		// 0x009C (0x0004) [0x0000000000000000]              
	// class Asfxpri*                                  PRI;                                              		// 0x00A0 (0x0004) [0x0000000000000000]              
	// float                                           GearLevel;                                        		// 0x00A4 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear.Deactivate
// [0x00020002] 
struct USFXGAWReinforcementMatchConsumable_Gear_execDeactivate_Parms
{
	int                                                UniqueId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              VersionIdx;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class Asfxpri*                                  PRI;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             GearLevel;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear.Activate
// [0x00020002] 
struct USFXGAWReinforcementMatchConsumable_Gear_execActivate_Parms
{
	int                                                UniqueId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              VersionIdx;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class Asfxpri*                                  PRI;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             GearLevel;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear.IsActive
// [0x00020002] 
struct USFXGAWReinforcementMatchConsumable_Gear_execIsActive_Parms
{
	int                                                UniqueId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              VersionIdx;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class Asfxpri*                                  PRI;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             GearLevel;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear.TrimTrailingZeroes
// [0x00020002] 
struct USFXGAWReinforcementMatchConsumable_Gear_execTrimTrailingZeroes_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             pos;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear.FloatToPercentString
// [0x00020002] 
struct USFXGAWReinforcementMatchConsumable_Gear_execFloatToPercentString_Parms
{
	float                                              F;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear.FindDescriptionTokens
// [0x00020002] 
struct USFXGAWReinforcementMatchConsumable_Gear_execFindDescriptionTokens_Parms
{
	struct FString                                     CardUniqueName;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FGearDescriptionTokens                      ReturnValue;                                      		// 0x000C (0x0048) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FGearDescriptionTokens                   InvalidTokens;                                    		// 0x0054 (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x009C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear.PrepareCustomTokensForGearDescription
// [0x00020002] 
struct USFXGAWReinforcementMatchConsumable_Gear_execPrepareCustomTokensForGearDescription_Parms
{
	struct FString                                     CardUniqueName;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                GearLevel;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FGearDescriptionTokens                   Tokens;                                           		// 0x0010 (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             AdjustedGearLevel;                                		// 0x0058 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif