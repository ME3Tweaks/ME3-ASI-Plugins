/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_con_mp4_horde_f_structs.h
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

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.AS_GetCollectorCooldownForPowerIcon
// [0x00020003] ( FUNC_Final )
struct USFXGUI_CollectorHUDOverlay_execAS_GetCollectorCooldownForPowerIcon_Parms
{
	struct FString                                     sIconID;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxValue*                                   ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.AS_ResetCooldownPowerIcons
// [0x00020003] ( FUNC_Final )
struct USFXGUI_CollectorHUDOverlay_execAS_ResetCooldownPowerIcons_Parms
{
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.GetGlobalPosition
// [0x00420003] ( FUNC_Final )
struct USFXGUI_CollectorHUDOverlay_execGetGlobalPosition_Parms
{
	class UGFxValue*                                   val;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              X;                                                		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Y;                                                		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxValue*                                ParentVal;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.PositionPowerIconOverlays
// [0x00020003] ( FUNC_Final )
struct USFXGUI_CollectorHUDOverlay_execPositionPowerIconOverlays_Parms
{
	// int                                             nOverlayIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           fX;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           fY;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.InitializePowerIconOverlay
// [0x00420003] ( FUNC_Final )
struct USFXGUI_CollectorHUDOverlay_execInitializePowerIconOverlay_Parms
{
	class USFXGUIValue_PowerIcon*                      oPowerIcon;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fScale;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   vOffset;                                          		// 0x0008 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FCollectorSwarmOverlay                   oNewOverlay;                                      		// 0x0014 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASDisplayInfo                           DisplayInfo;                                      		// 0x0030 (0x002C) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.InitializeMPHUDPowerIconOverlays
// [0x00020003] ( FUNC_Final )
struct USFXGUI_CollectorHUDOverlay_execInitializeMPHUDPowerIconOverlays_Parms
{
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.InitializePCQuickslotIconOverlays
// [0x00020003] ( FUNC_Final )
struct USFXGUI_CollectorHUDOverlay_execInitializePCQuickslotIconOverlays_Parms
{
	// int                                             nIconIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.ClearSwarmOverlays
// [0x00020003] ( FUNC_Final )
struct USFXGUI_CollectorHUDOverlay_execClearSwarmOverlays_Parms
{
	// int                                             nOverlay;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.OnClose
// [0x00020002] 
struct USFXGUI_CollectorHUDOverlay_execOnClose_Parms
{
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.UpdateCooldownOverride
// [0x00020003] ( FUNC_Final )
struct USFXGUI_CollectorHUDOverlay_execUpdateCooldownOverride_Parms
{
	// int                                             nOverlayIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.ResetForcedCooldown
// [0x00020003] ( FUNC_Final )
struct USFXGUI_CollectorHUDOverlay_execResetForcedCooldown_Parms
{
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.SetForcedCooldown
// [0x00020003] ( FUNC_Final )
struct USFXGUI_CollectorHUDOverlay_execSetForcedCooldown_Parms
{
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.CheckInitialize
// [0x00040003] ( FUNC_Final )
struct USFXGUI_CollectorHUDOverlay_execCheckInitialize_Parms
{
	// class USFXGUIInteraction*                       oGUIs;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.InternalOnStart
// [0x00040003] ( FUNC_Final )
struct USFXGUI_CollectorHUDOverlay_execInternalOnStart_Parms
{
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.OnStart
// [0x00020802] ( FUNC_Event )
struct USFXGUI_CollectorHUDOverlay_eventOnStart_Parms
{
};

// Function sfxgamempcontent.SFXWave_Horde.StartAutoBots
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Cerberus2_execStartAutoBots_Parms
{
};

// Function sfxgamempcontent.SFXWave_Horde.GetScoreBudget
// [0x00020002] 
struct USFXWave_Horde_Cerberus2_execGetScoreBudget_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.SFXWave_Horde.CalculateSpawnedEnemyCost
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Cerberus2_execCalculateSpawnedEnemyCost_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FSpawnedEnemy                            SpawnedEnemyIter;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             ToRet;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.PawnRevived
// [0x00020002] 
struct USFXWave_Horde_Cerberus2_execPawnRevived_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.GetEnemySpawnInfoForEnemyType
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Cerberus2_execGetEnemySpawnInfoForEnemyType_Parms
{
	struct FName                                       EnemyType;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FEnemySpawnInfo                             ReturnValue;                                      		// 0x0008 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.StopSpawningNewEnemies
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Cerberus2_execStopSpawningNewEnemies_Parms
{
};

// Function sfxgamempcontent.SFXWave_Horde.SetEndlessWaves
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Cerberus2_execSetEndlessWaves_Parms
{
	unsigned long                                      Endless : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function sfxgamempcontent.SFXWave_Horde.EnemyBudgetRemaining
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Cerberus2_execEnemyBudgetRemaining_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.SFXWave_Horde.GetCreatureWaveCost
// [0x00020002] 
struct USFXWave_Horde_Cerberus2_execGetCreatureWaveCost_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerWaveEndEvent
// [0x00020002] 
struct USFXWave_Horde_Cerberus2_execTriggerWaveEndEvent_Parms
{
	int                                                Wave;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PlayerController;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USequence*                                GameSequence;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                WaveEndEvents;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USFXSeqEvt_HordeWaveEnd*                  Event;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerEnemyKilledEvent
// [0x00020002] 
struct USFXWave_Horde_Cerberus2_execTriggerEnemyKilledEvent_Parms
{
	class APawn*                                       Killed;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Killer;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USequence*                                GameSequence;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                KilledEvents;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USFXSeqEvt_HordeEnemyKilled*              Event;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerWaveStartEvent
// [0x00020002] 
struct USFXWave_Horde_Cerberus2_execTriggerWaveStartEvent_Parms
{
	int                                                Wave;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PlayerController;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USequence*                                GameSequence;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                WaveStartEvents;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USFXSeqEvt_HordeWaveStart*                Event;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.ShouldSpawnSquad
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Cerberus2_execShouldSpawnSquad_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.SFXWave_Horde.GetPlayerCount
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Cerberus2_execGetPlayerCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class Asfxplayercontroller*                     PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PlayerCount;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.PawnDied
// [0x00024002] 
struct USFXWave_Horde_Cerberus2_execPawnDied_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    Killer;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             EnemyIndex;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXModule_MarkerObjective*               ObjectiveModule;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.ActivateEnemyObjectiveMarkers
// [0x00020002] 
struct USFXWave_Horde_Cerberus2_execActivateEnemyObjectiveMarkers_Parms
{
	// int                                             i;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXModule_MarkerObjective*               ObjectiveModule;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.UpdateObjectiveStatus
// [0x00020002] 
struct USFXWave_Horde_Cerberus2_execUpdateObjectiveStatus_Parms
{
};

// Function sfxgamempcontent.SFXWave_Horde.SpawnHorde
// [0x00020002] 
struct USFXWave_Horde_Cerberus2_execSpawnHorde_Parms
{
	// int                                             EnemyToSpawn;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.SpawnEnemy
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Cerberus2_execSpawnEnemy_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANavigationPoint*                         StartSpot;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UClass*                                   PawnClass;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UClass*                                   ControllerClass;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// class APawn*                                    Enemy;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class Asfxai_core*                              AI;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.AreRemainingEnemiesOnMyTeam
// [0x00020002] 
struct USFXWave_Horde_Cerberus2_execAreRemainingEnemiesOnMyTeam_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             i;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseEnemyToSpawn
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Cerberus2_execChooseEnemyToSpawn_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             EnemyIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             MaxCount;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             MinCount;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   ValidChoices;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FEnemyWaveInfo >                 EnemiesToSpawn;                                   		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseSquadToSpawn
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Cerberus2_execChooseSquadToSpawn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             i;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   ValidChoices;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.SFXWave_Horde.CanEnemyUseSpawnPoint
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Cerberus2_execCanEnemyUseSpawnPoint_Parms
{
	class UClass*                                      EnemyClass;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EnemyRadius;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EnemyHeight;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            NavPoint;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXEnemySpawnPoint*                      SpawnPoint;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UClass*                                   ReachSpecClass;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             ReachSpecCount;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             ReachSpecIndex;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             CustomActionCount;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             CustomActionIndex;                                		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.RateEnemyStart
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Cerberus2_execRateEnemyStart_Parms
{
	class ANavigationPoint*                            NavPoint;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EnemyRadius;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EnemyHeight;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      EnemyClass;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoTraceCheck : 1;                                		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Rating;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           Penalty;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Distance;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// class Asfxplayercontroller*                     PC;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ASFXEnemySpawnPoint*                      SpawnPoint;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	// class Usfxwave_operation*                       ActiveOperationWave;                              		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FVector                                  LineOfSight_EnemyHead;                            		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  LineOfSight_PlayerHead;                           		// 0x003C (0x000C) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseEnemyStart
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Cerberus2_execChooseEnemyStart_Parms
{
	class UClass*                                      EnemyClass;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           EnemyRadius;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           EnemyHeight;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ASFXEnemySpawnPoint*                      SpawnPoint;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ANavigationPoint*                         BestStart;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           Rating;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           BestRating;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// class Asfxwavemanager_horde*                    HordeManager;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.FinishWave
// [0x00020002] 
struct USFXWave_Horde_Cerberus2_execFinishWave_Parms
{
	// class ABioPawn*                                 Enemy;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASFXGRI*                                  GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.BeginWave
// [0x00020002] 
struct USFXWave_Horde_Cerberus2_execBeginWave_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             i;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.GetEnemyArray
// [0x00420002] 
struct USFXWave_Horde_Cerberus2_execGetEnemyArray_Parms
{
	TArray< struct FEnemyWaveInfo >                    EnemyArray;                                       		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             HighestDiff;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             HighestIdx;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.InitializeWave
// [0x00020002] 
struct USFXWave_Horde_Cerberus2_execInitializeWave_Parms
{
	class ASFXWaveManager*                             OwnerManager;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             i;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FName                                    EnemyTypeIter;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FEnemySpawnInfo                          EnemySpawnInfoIter;                               		// 0x0010 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FEnemyWaveInfo                           EnemyWaveInfoIter;                                		// 0x002C (0x0014) [0x0000000000000000]              
	// struct FSFXWaveAssetLoadData                    NewAssetLoadData;                                 		// 0x0040 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FEnemyWaveInfo >                 EnemiesToSpawn;                                   		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.SFXWave_Horde.StartAutoBots
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Collector_execStartAutoBots_Parms
{
};

// Function sfxgamempcontent.SFXWave_Horde.GetScoreBudget
// [0x00020002] 
struct USFXWave_Horde_Collector_execGetScoreBudget_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.SFXWave_Horde.CalculateSpawnedEnemyCost
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Collector_execCalculateSpawnedEnemyCost_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FSpawnedEnemy                            SpawnedEnemyIter;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             ToRet;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.PawnRevived
// [0x00020002] 
struct USFXWave_Horde_Collector_execPawnRevived_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.GetEnemySpawnInfoForEnemyType
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Collector_execGetEnemySpawnInfoForEnemyType_Parms
{
	struct FName                                       EnemyType;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FEnemySpawnInfo                             ReturnValue;                                      		// 0x0008 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.StopSpawningNewEnemies
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Collector_execStopSpawningNewEnemies_Parms
{
};

// Function sfxgamempcontent.SFXWave_Horde.SetEndlessWaves
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Collector_execSetEndlessWaves_Parms
{
	unsigned long                                      Endless : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function sfxgamempcontent.SFXWave_Horde.EnemyBudgetRemaining
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Collector_execEnemyBudgetRemaining_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.SFXWave_Horde.GetCreatureWaveCost
// [0x00020002] 
struct USFXWave_Horde_Collector_execGetCreatureWaveCost_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerWaveEndEvent
// [0x00020002] 
struct USFXWave_Horde_Collector_execTriggerWaveEndEvent_Parms
{
	int                                                Wave;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PlayerController;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USequence*                                GameSequence;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                WaveEndEvents;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USFXSeqEvt_HordeWaveEnd*                  Event;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerEnemyKilledEvent
// [0x00020002] 
struct USFXWave_Horde_Collector_execTriggerEnemyKilledEvent_Parms
{
	class APawn*                                       Killed;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Killer;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USequence*                                GameSequence;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                KilledEvents;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USFXSeqEvt_HordeEnemyKilled*              Event;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerWaveStartEvent
// [0x00020002] 
struct USFXWave_Horde_Collector_execTriggerWaveStartEvent_Parms
{
	int                                                Wave;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PlayerController;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USequence*                                GameSequence;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                WaveStartEvents;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USFXSeqEvt_HordeWaveStart*                Event;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.ShouldSpawnSquad
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Collector_execShouldSpawnSquad_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.SFXWave_Horde.GetPlayerCount
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Collector_execGetPlayerCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class Asfxplayercontroller*                     PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PlayerCount;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.PawnDied
// [0x00024002] 
struct USFXWave_Horde_Collector_execPawnDied_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    Killer;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             EnemyIndex;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXModule_MarkerObjective*               ObjectiveModule;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.ActivateEnemyObjectiveMarkers
// [0x00020002] 
struct USFXWave_Horde_Collector_execActivateEnemyObjectiveMarkers_Parms
{
	// int                                             i;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXModule_MarkerObjective*               ObjectiveModule;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.UpdateObjectiveStatus
// [0x00020002] 
struct USFXWave_Horde_Collector_execUpdateObjectiveStatus_Parms
{
};

// Function sfxgamempcontent.SFXWave_Horde.SpawnHorde
// [0x00020002] 
struct USFXWave_Horde_Collector_execSpawnHorde_Parms
{
	// int                                             EnemyToSpawn;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.SpawnEnemy
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Collector_execSpawnEnemy_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANavigationPoint*                         StartSpot;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UClass*                                   PawnClass;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UClass*                                   ControllerClass;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// class APawn*                                    Enemy;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class Asfxai_core*                              AI;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.AreRemainingEnemiesOnMyTeam
// [0x00020002] 
struct USFXWave_Horde_Collector_execAreRemainingEnemiesOnMyTeam_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             i;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseEnemyToSpawn
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Collector_execChooseEnemyToSpawn_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             EnemyIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             MaxCount;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             MinCount;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   ValidChoices;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FEnemyWaveInfo >                 EnemiesToSpawn;                                   		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseSquadToSpawn
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Collector_execChooseSquadToSpawn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             i;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   ValidChoices;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.SFXWave_Horde.CanEnemyUseSpawnPoint
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Collector_execCanEnemyUseSpawnPoint_Parms
{
	class UClass*                                      EnemyClass;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EnemyRadius;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EnemyHeight;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            NavPoint;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXEnemySpawnPoint*                      SpawnPoint;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UClass*                                   ReachSpecClass;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             ReachSpecCount;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             ReachSpecIndex;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             CustomActionCount;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             CustomActionIndex;                                		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.RateEnemyStart
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Collector_execRateEnemyStart_Parms
{
	class ANavigationPoint*                            NavPoint;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EnemyRadius;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EnemyHeight;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      EnemyClass;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoTraceCheck : 1;                                		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Rating;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           Penalty;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Distance;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// class Asfxplayercontroller*                     PC;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ASFXEnemySpawnPoint*                      SpawnPoint;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	// class Usfxwave_operation*                       ActiveOperationWave;                              		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FVector                                  LineOfSight_EnemyHead;                            		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  LineOfSight_PlayerHead;                           		// 0x003C (0x000C) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseEnemyStart
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Collector_execChooseEnemyStart_Parms
{
	class UClass*                                      EnemyClass;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           EnemyRadius;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           EnemyHeight;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ASFXEnemySpawnPoint*                      SpawnPoint;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ANavigationPoint*                         BestStart;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           Rating;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           BestRating;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// class Asfxwavemanager_horde*                    HordeManager;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.FinishWave
// [0x00020002] 
struct USFXWave_Horde_Collector_execFinishWave_Parms
{
	// class ABioPawn*                                 Enemy;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASFXGRI*                                  GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.BeginWave
// [0x00020002] 
struct USFXWave_Horde_Collector_execBeginWave_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             i;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.GetEnemyArray
// [0x00420002] 
struct USFXWave_Horde_Collector_execGetEnemyArray_Parms
{
	TArray< struct FEnemyWaveInfo >                    EnemyArray;                                       		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             HighestDiff;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             HighestIdx;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.InitializeWave
// [0x00020002] 
struct USFXWave_Horde_Collector_execInitializeWave_Parms
{
	class ASFXWaveManager*                             OwnerManager;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             i;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FName                                    EnemyTypeIter;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FEnemySpawnInfo                          EnemySpawnInfoIter;                               		// 0x0010 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FEnemyWaveInfo                           EnemyWaveInfoIter;                                		// 0x002C (0x0014) [0x0000000000000000]              
	// struct FSFXWaveAssetLoadData                    NewAssetLoadData;                                 		// 0x0040 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FEnemyWaveInfo >                 EnemiesToSpawn;                                   		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.SFXWave_Horde.StartAutoBots
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Geth2_execStartAutoBots_Parms
{
};

// Function sfxgamempcontent.SFXWave_Horde.GetScoreBudget
// [0x00020002] 
struct USFXWave_Horde_Geth2_execGetScoreBudget_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.SFXWave_Horde.CalculateSpawnedEnemyCost
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Geth2_execCalculateSpawnedEnemyCost_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FSpawnedEnemy                            SpawnedEnemyIter;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             ToRet;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.PawnRevived
// [0x00020002] 
struct USFXWave_Horde_Geth2_execPawnRevived_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.GetEnemySpawnInfoForEnemyType
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Geth2_execGetEnemySpawnInfoForEnemyType_Parms
{
	struct FName                                       EnemyType;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FEnemySpawnInfo                             ReturnValue;                                      		// 0x0008 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.StopSpawningNewEnemies
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Geth2_execStopSpawningNewEnemies_Parms
{
};

// Function sfxgamempcontent.SFXWave_Horde.SetEndlessWaves
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Geth2_execSetEndlessWaves_Parms
{
	unsigned long                                      Endless : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function sfxgamempcontent.SFXWave_Horde.EnemyBudgetRemaining
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Geth2_execEnemyBudgetRemaining_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.SFXWave_Horde.GetCreatureWaveCost
// [0x00020002] 
struct USFXWave_Horde_Geth2_execGetCreatureWaveCost_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerWaveEndEvent
// [0x00020002] 
struct USFXWave_Horde_Geth2_execTriggerWaveEndEvent_Parms
{
	int                                                Wave;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PlayerController;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USequence*                                GameSequence;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                WaveEndEvents;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USFXSeqEvt_HordeWaveEnd*                  Event;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerEnemyKilledEvent
// [0x00020002] 
struct USFXWave_Horde_Geth2_execTriggerEnemyKilledEvent_Parms
{
	class APawn*                                       Killed;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Killer;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USequence*                                GameSequence;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                KilledEvents;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USFXSeqEvt_HordeEnemyKilled*              Event;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerWaveStartEvent
// [0x00020002] 
struct USFXWave_Horde_Geth2_execTriggerWaveStartEvent_Parms
{
	int                                                Wave;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PlayerController;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USequence*                                GameSequence;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                WaveStartEvents;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USFXSeqEvt_HordeWaveStart*                Event;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.ShouldSpawnSquad
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Geth2_execShouldSpawnSquad_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.SFXWave_Horde.GetPlayerCount
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Geth2_execGetPlayerCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class Asfxplayercontroller*                     PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PlayerCount;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.PawnDied
// [0x00024002] 
struct USFXWave_Horde_Geth2_execPawnDied_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    Killer;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             EnemyIndex;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXModule_MarkerObjective*               ObjectiveModule;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.ActivateEnemyObjectiveMarkers
// [0x00020002] 
struct USFXWave_Horde_Geth2_execActivateEnemyObjectiveMarkers_Parms
{
	// int                                             i;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXModule_MarkerObjective*               ObjectiveModule;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.UpdateObjectiveStatus
// [0x00020002] 
struct USFXWave_Horde_Geth2_execUpdateObjectiveStatus_Parms
{
};

// Function sfxgamempcontent.SFXWave_Horde.SpawnHorde
// [0x00020002] 
struct USFXWave_Horde_Geth2_execSpawnHorde_Parms
{
	// int                                             EnemyToSpawn;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.SpawnEnemy
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Geth2_execSpawnEnemy_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANavigationPoint*                         StartSpot;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UClass*                                   PawnClass;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UClass*                                   ControllerClass;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// class APawn*                                    Enemy;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class Asfxai_core*                              AI;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.AreRemainingEnemiesOnMyTeam
// [0x00020002] 
struct USFXWave_Horde_Geth2_execAreRemainingEnemiesOnMyTeam_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             i;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseEnemyToSpawn
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Geth2_execChooseEnemyToSpawn_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             EnemyIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             MaxCount;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             MinCount;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   ValidChoices;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FEnemyWaveInfo >                 EnemiesToSpawn;                                   		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseSquadToSpawn
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Geth2_execChooseSquadToSpawn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             i;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   ValidChoices;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.SFXWave_Horde.CanEnemyUseSpawnPoint
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Geth2_execCanEnemyUseSpawnPoint_Parms
{
	class UClass*                                      EnemyClass;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EnemyRadius;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EnemyHeight;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            NavPoint;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXEnemySpawnPoint*                      SpawnPoint;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UClass*                                   ReachSpecClass;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             ReachSpecCount;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             ReachSpecIndex;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             CustomActionCount;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             CustomActionIndex;                                		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.RateEnemyStart
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Geth2_execRateEnemyStart_Parms
{
	class ANavigationPoint*                            NavPoint;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EnemyRadius;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EnemyHeight;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      EnemyClass;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoTraceCheck : 1;                                		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Rating;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           Penalty;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Distance;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// class Asfxplayercontroller*                     PC;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ASFXEnemySpawnPoint*                      SpawnPoint;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	// class Usfxwave_operation*                       ActiveOperationWave;                              		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FVector                                  LineOfSight_EnemyHead;                            		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  LineOfSight_PlayerHead;                           		// 0x003C (0x000C) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseEnemyStart
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Geth2_execChooseEnemyStart_Parms
{
	class UClass*                                      EnemyClass;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           EnemyRadius;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           EnemyHeight;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ASFXEnemySpawnPoint*                      SpawnPoint;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ANavigationPoint*                         BestStart;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           Rating;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           BestRating;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// class Asfxwavemanager_horde*                    HordeManager;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.FinishWave
// [0x00020002] 
struct USFXWave_Horde_Geth2_execFinishWave_Parms
{
	// class ABioPawn*                                 Enemy;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASFXGRI*                                  GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.BeginWave
// [0x00020002] 
struct USFXWave_Horde_Geth2_execBeginWave_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             i;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.GetEnemyArray
// [0x00420002] 
struct USFXWave_Horde_Geth2_execGetEnemyArray_Parms
{
	TArray< struct FEnemyWaveInfo >                    EnemyArray;                                       		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             HighestDiff;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             HighestIdx;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.InitializeWave
// [0x00020002] 
struct USFXWave_Horde_Geth2_execInitializeWave_Parms
{
	class ASFXWaveManager*                             OwnerManager;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             i;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FName                                    EnemyTypeIter;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FEnemySpawnInfo                          EnemySpawnInfoIter;                               		// 0x0010 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FEnemyWaveInfo                           EnemyWaveInfoIter;                                		// 0x002C (0x0014) [0x0000000000000000]              
	// struct FSFXWaveAssetLoadData                    NewAssetLoadData;                                 		// 0x0040 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FEnemyWaveInfo >                 EnemiesToSpawn;                                   		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.SFXWave_Horde.StartAutoBots
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Reaper2_execStartAutoBots_Parms
{
};

// Function sfxgamempcontent.SFXWave_Horde.GetScoreBudget
// [0x00020002] 
struct USFXWave_Horde_Reaper2_execGetScoreBudget_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.SFXWave_Horde.CalculateSpawnedEnemyCost
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Reaper2_execCalculateSpawnedEnemyCost_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FSpawnedEnemy                            SpawnedEnemyIter;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             ToRet;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.PawnRevived
// [0x00020002] 
struct USFXWave_Horde_Reaper2_execPawnRevived_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.GetEnemySpawnInfoForEnemyType
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Reaper2_execGetEnemySpawnInfoForEnemyType_Parms
{
	struct FName                                       EnemyType;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FEnemySpawnInfo                             ReturnValue;                                      		// 0x0008 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.StopSpawningNewEnemies
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Reaper2_execStopSpawningNewEnemies_Parms
{
};

// Function sfxgamempcontent.SFXWave_Horde.SetEndlessWaves
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Reaper2_execSetEndlessWaves_Parms
{
	unsigned long                                      Endless : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function sfxgamempcontent.SFXWave_Horde.EnemyBudgetRemaining
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Reaper2_execEnemyBudgetRemaining_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.SFXWave_Horde.GetCreatureWaveCost
// [0x00020002] 
struct USFXWave_Horde_Reaper2_execGetCreatureWaveCost_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerWaveEndEvent
// [0x00020002] 
struct USFXWave_Horde_Reaper2_execTriggerWaveEndEvent_Parms
{
	int                                                Wave;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PlayerController;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USequence*                                GameSequence;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                WaveEndEvents;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USFXSeqEvt_HordeWaveEnd*                  Event;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerEnemyKilledEvent
// [0x00020002] 
struct USFXWave_Horde_Reaper2_execTriggerEnemyKilledEvent_Parms
{
	class APawn*                                       Killed;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Killer;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USequence*                                GameSequence;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                KilledEvents;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USFXSeqEvt_HordeEnemyKilled*              Event;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerWaveStartEvent
// [0x00020002] 
struct USFXWave_Horde_Reaper2_execTriggerWaveStartEvent_Parms
{
	int                                                Wave;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PlayerController;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USequence*                                GameSequence;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                WaveStartEvents;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USFXSeqEvt_HordeWaveStart*                Event;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.ShouldSpawnSquad
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Reaper2_execShouldSpawnSquad_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamempcontent.SFXWave_Horde.GetPlayerCount
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Reaper2_execGetPlayerCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class Asfxplayercontroller*                     PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PlayerCount;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.PawnDied
// [0x00024002] 
struct USFXWave_Horde_Reaper2_execPawnDied_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    Killer;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             EnemyIndex;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXModule_MarkerObjective*               ObjectiveModule;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.ActivateEnemyObjectiveMarkers
// [0x00020002] 
struct USFXWave_Horde_Reaper2_execActivateEnemyObjectiveMarkers_Parms
{
	// int                                             i;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXModule_MarkerObjective*               ObjectiveModule;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.UpdateObjectiveStatus
// [0x00020002] 
struct USFXWave_Horde_Reaper2_execUpdateObjectiveStatus_Parms
{
};

// Function sfxgamempcontent.SFXWave_Horde.SpawnHorde
// [0x00020002] 
struct USFXWave_Horde_Reaper2_execSpawnHorde_Parms
{
	// int                                             EnemyToSpawn;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.SpawnEnemy
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Reaper2_execSpawnEnemy_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANavigationPoint*                         StartSpot;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UClass*                                   PawnClass;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UClass*                                   ControllerClass;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// class APawn*                                    Enemy;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class Asfxai_core*                              AI;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.AreRemainingEnemiesOnMyTeam
// [0x00020002] 
struct USFXWave_Horde_Reaper2_execAreRemainingEnemiesOnMyTeam_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             i;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseEnemyToSpawn
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Reaper2_execChooseEnemyToSpawn_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             EnemyIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             MaxCount;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             MinCount;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   ValidChoices;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FEnemyWaveInfo >                 EnemiesToSpawn;                                   		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseSquadToSpawn
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Reaper2_execChooseSquadToSpawn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             i;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   ValidChoices;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function sfxgamempcontent.SFXWave_Horde.CanEnemyUseSpawnPoint
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Reaper2_execCanEnemyUseSpawnPoint_Parms
{
	class UClass*                                      EnemyClass;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EnemyRadius;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EnemyHeight;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            NavPoint;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXEnemySpawnPoint*                      SpawnPoint;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UClass*                                   ReachSpecClass;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             ReachSpecCount;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             ReachSpecIndex;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             CustomActionCount;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             CustomActionIndex;                                		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.RateEnemyStart
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Reaper2_execRateEnemyStart_Parms
{
	class ANavigationPoint*                            NavPoint;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EnemyRadius;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              EnemyHeight;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      EnemyClass;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoTraceCheck : 1;                                		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Rating;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           Penalty;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Distance;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// class Asfxplayercontroller*                     PC;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ASFXEnemySpawnPoint*                      SpawnPoint;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	// class Usfxwave_operation*                       ActiveOperationWave;                              		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FVector                                  LineOfSight_EnemyHead;                            		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  LineOfSight_PlayerHead;                           		// 0x003C (0x000C) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseEnemyStart
// [0x00020003] ( FUNC_Final )
struct USFXWave_Horde_Reaper2_execChooseEnemyStart_Parms
{
	class UClass*                                      EnemyClass;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           EnemyRadius;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           EnemyHeight;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ASFXEnemySpawnPoint*                      SpawnPoint;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ANavigationPoint*                         BestStart;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           Rating;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           BestRating;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// class Asfxwavemanager_horde*                    HordeManager;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.FinishWave
// [0x00020002] 
struct USFXWave_Horde_Reaper2_execFinishWave_Parms
{
	// class ABioPawn*                                 Enemy;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASFXGRI*                                  GRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.BeginWave
// [0x00020002] 
struct USFXWave_Horde_Reaper2_execBeginWave_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             i;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.GetEnemyArray
// [0x00420002] 
struct USFXWave_Horde_Reaper2_execGetEnemyArray_Parms
{
	TArray< struct FEnemyWaveInfo >                    EnemyArray;                                       		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             HighestDiff;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             HighestIdx;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function sfxgamempcontent.SFXWave_Horde.InitializeWave
// [0x00020002] 
struct USFXWave_Horde_Reaper2_execInitializeWave_Parms
{
	class ASFXWaveManager*                             OwnerManager;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             i;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FName                                    EnemyTypeIter;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FEnemySpawnInfo                          EnemySpawnInfoIter;                               		// 0x0010 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FEnemyWaveInfo                           EnemyWaveInfoIter;                                		// 0x002C (0x0014) [0x0000000000000000]              
	// struct FSFXWaveAssetLoadData                    NewAssetLoadData;                                 		// 0x0040 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FEnemyWaveInfo >                 EnemiesToSpawn;                                   		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif