/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_con_mp2_retrieve_f_structs.h
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

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.PlayDroppedOffVO
// [0x00020002] 
struct Usfxengagement_retrieve_dlc_execPlayDroppedOffVO_Parms
{
	// class Asfxoperationobjective*                   oObjective;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AActor*                                   ObjectiveActor;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.PickupDroppedOff
// [0x00020002] 
struct Usfxengagement_retrieve_dlc_execPickupDroppedOff_Parms
{
	class ASFXPawn_Player*                             Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class Asfxoperationobjective*                      Pickup;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_MarkerObjective*               Module;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   ObjectiveActor;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.PlayerDroppedObject
// [0x00020002] 
struct Usfxengagement_retrieve_dlc_execPlayerDroppedObject_Parms
{
	class ASFXPawn_Player*                             Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.PlayerPickedUpObject
// [0x00020002] 
struct Usfxengagement_retrieve_dlc_execPlayerPickedUpObject_Parms
{
	class ASFXPawn_Player*                             Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.IsCarryingPickup
// [0x00020002] 
struct Usfxengagement_retrieve_dlc_execIsCarryingPickup_Parms
{
	class ASFXPawn_Player*                             Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.UpdateObjectiveStatus
// [0x00020002] 
struct Usfxengagement_retrieve_dlc_execUpdateObjectiveStatus_Parms
{
};

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.ActivateRandomPickup
// [0x00020002] 
struct Usfxengagement_retrieve_dlc_execActivateRandomPickup_Parms
{
	// class AActor*                                   oActor;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class Asfxoperationobjective*                   ObjectiveActor;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.DetermineObjectivesToSpawn
// [0x00020002] 
struct Usfxengagement_retrieve_dlc_execDetermineObjectivesToSpawn_Parms
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

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.DistributeObjectiveScore
// [0x00020002] 
struct Usfxengagement_retrieve_dlc_execDistributeObjectiveScore_Parms
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

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.BeginWave
// [0x00020002] 
struct Usfxengagement_retrieve_dlc_execBeginWave_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   NewActor;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             K;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             L;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             NumObjectivesSelected;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// TArray< class ASFXOperation_ObjectiveSpawnPoint* > LocalAvailableSpawnPoints;                        		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class USFXOperation_ObjectiveData* >    ObjectivesToSpawn;                                		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class ASFXOperation_ObjectiveSpawnPoint* > ObjectiveSpawnPoints;                             		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class ASFXOperation_ObjectiveSpawnPoint* > RandomizedSpawnPoints;                            		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   FoundEnoughSpawnsForObjective : 1;                		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UObject*                                  ObjectTemplate;                                   		// 0x0050 (0x0004) [0x0000000000000000]              
	// int                                             AllocateSpawnPointPass;                           		// 0x0054 (0x0004) [0x0000000000000000]              
	// struct FSFXOperation_ObjectiveSpawnPointData    ObjectiveSpawnData;                               		// 0x0058 (0x000C) [0x0000000000000000]              
	// TArray< class ASFXOperation_ObjectiveSpawnPoint* > DropOffSpawnPoints;                               		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bTooCloseToDropOff : 1;                           		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif