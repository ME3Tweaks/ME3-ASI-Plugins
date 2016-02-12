/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGameContentDLC_CON_MP3_MobileAnnex_f_structs.h
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
struct USFXEngagement_MobileAnnex_execGetCreditsReward_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fReward;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.GetCreditBudget
// [0x00020002] 
struct USFXEngagement_MobileAnnex_execGetCreditBudget_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxwave_operation.DistributeObjectiveScore
// [0x00020002] 
struct USFXEngagement_MobileAnnex_execDistributeObjectiveScore_Parms
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
struct USFXEngagement_MobileAnnex_execCountdownTimerExpired_Parms
{
};

// Function sfxgamempcontent.sfxwave_operation.CancelCountdownTimer
// [0x00020002] 
struct USFXEngagement_MobileAnnex_execCancelCountdownTimer_Parms
{
	// class Asfxplayercontroller*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.LocalPlayerTimeWarningHint
// [0x00020002] 
struct USFXEngagement_MobileAnnex_execLocalPlayerTimeWarningHint_Parms
{
	// class Asfxplayercontroller*                     Player;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           TimeRemaining;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.SetTimeLimit
// [0x00020002] 
struct USFXEngagement_MobileAnnex_execSetTimeLimit_Parms
{
	float                                              TimeLimit;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamempcontent.sfxwave_operation.BeginWaveTimeLimit
// [0x00020002] 
struct USFXEngagement_MobileAnnex_execBeginWaveTimeLimit_Parms
{
	// float                                           TimeLimit;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.DeactivateObjectiveCombatZone
// [0x00020003] ( FUNC_Final )
struct USFXEngagement_MobileAnnex_execDeactivateObjectiveCombatZone_Parms
{
	class AActor*                                      ObjectiveActor;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXWave_Horde*                           HordeWave;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AAIController*                            AI;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.ActivateObjectiveCombatZone
// [0x00020003] ( FUNC_Final )
struct USFXEngagement_MobileAnnex_execActivateObjectiveCombatZone_Parms
{
	class AActor*                                      ObjectiveActor;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXWave_Horde*                           HordeWave;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AAIController*                            AI;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.PawnDestroyed
// [0x00020102] 
struct USFXEngagement_MobileAnnex_execPawnDestroyed_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   ObjectiveActor;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// class Asfxoperationobjective*                   Objective;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.PawnRevived
// [0x00020002] 
struct USFXEngagement_MobileAnnex_execPawnRevived_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   ObjectiveActor;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// class Asfxoperationobjective*                   Objective;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.PawnDowned
// [0x00020102] 
struct USFXEngagement_MobileAnnex_execPawnDowned_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   ObjectiveActor;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// class Asfxoperationobjective*                   Objective;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.DetermineObjectivesToSpawn
// [0x00020002] 
struct USFXEngagement_MobileAnnex_execDetermineObjectivesToSpawn_Parms
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
struct USFXEngagement_MobileAnnex_execRateEnemyStart_Parms
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
struct USFXEngagement_MobileAnnex_execDelayedFinishWave_Parms
{
};

// Function sfxgamempcontent.sfxwave_operation.FinishWave
// [0x00020002] 
struct USFXEngagement_MobileAnnex_execFinishWave_Parms
{
	// class AActor*                                   ActorIter;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AAIController*                            AI;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASFXGRI*                                  GRI;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.sfxwave_operation.ShowBeginWaveMessage
// [0x00020002] 
struct USFXEngagement_MobileAnnex_execShowBeginWaveMessage_Parms
{
};

// Function sfxgamempcontent.sfxwave_operation.BeginWave
// [0x00020002] 
struct USFXEngagement_MobileAnnex_execBeginWave_Parms
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
struct USFXEngagement_MobileAnnex_execObjectiveSpawnSort_Parms
{
	class ASFXOperation_ObjectiveSpawnPoint*           A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ASFXOperation_ObjectiveSpawnPoint*           B;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.sfxwave_operation.InitializeWave
// [0x00020002] 
struct USFXEngagement_MobileAnnex_execInitializeWave_Parms
{
	class ASFXWaveManager*                             OwnerManager;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif