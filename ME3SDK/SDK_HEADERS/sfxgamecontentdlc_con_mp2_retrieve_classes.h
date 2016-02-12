/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_con_mp2_retrieve_classes.h
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

// Class sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc
// 0x0068 (0x0174 - 0x010C)
class Usfxengagement_retrieve_dlc : public USFXEngagement_Retrieve_DLC_Base
{
public:
	TArray< class ASFXPawn_Player* >                   PlayersCarryingObjects;                           		// 0x010C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class Asfxoperationobjective* >            DroppedOffPickups;                                		// 0x0118 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASFXOperation_ObjectiveSpawnPoint* > AvailableSpawnPoints2;                            		// 0x0124 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FSFXOperation_ObjectiveGroupToSpawn > ObjectiveGroupsToSpawn2;                          		// 0x0130 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     DropOffZoneSpawnTag;                              		// 0x013C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DropOffZoneObjectiveType;                         		// 0x0148 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< int >                                      ObjectReturnedVOLines;                            		// 0x0154 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                NumDropOffsRequired;                              		// 0x0160 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPickupDroppedOff;                               		// 0x0164 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ActivateObjectiveDelay;                           		// 0x0168 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              WaveStartedTimestamp2;                            		// 0x016C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MinDistanceToDropOffZone;                         		// 0x0170 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124480 ];

		return pClassPointer;
	};

	void PlayDroppedOffVO ( );
	void PickupDroppedOff ( class ASFXPawn_Player* Player, class Asfxoperationobjective* Pickup );
	void PlayerDroppedObject ( class ASFXPawn_Player* Player );
	void PlayerPickedUpObject ( class ASFXPawn_Player* Player );
	bool IsCarryingPickup ( class ASFXPawn_Player* Player );
	void UpdateObjectiveStatus ( );
	void ActivateRandomPickup ( );
	void DetermineObjectivesToSpawn ( );
	void DistributeObjectiveScore ( );
	bool BeginWave ( );
};

UClass* Usfxengagement_retrieve_dlc::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif