/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_con_mp2_retrieve_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.PlayDroppedOffVO
// [0x00020002] 
// Parameters infos:

void Usfxengagement_retrieve_dlc::PlayDroppedOffVO ( )
{
	static UFunction* pFnPlayDroppedOffVO = NULL;

	if ( ! pFnPlayDroppedOffVO )
		pFnPlayDroppedOffVO = (UFunction*) UObject::GObjObjects()->Data[ 124563 ];

	Usfxengagement_retrieve_dlc_execPlayDroppedOffVO_Parms PlayDroppedOffVO_Parms;

	this->ProcessEvent ( pFnPlayDroppedOffVO, &PlayDroppedOffVO_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.PickupDroppedOff
// [0x00020002] 
// Parameters infos:
// class ASFXPawn_Player*         Player                         ( CPF_Parm )
// class Asfxoperationobjective*  Pickup                         ( CPF_Parm )

void Usfxengagement_retrieve_dlc::PickupDroppedOff ( class ASFXPawn_Player* Player, class Asfxoperationobjective* Pickup )
{
	static UFunction* pFnPickupDroppedOff = NULL;

	if ( ! pFnPickupDroppedOff )
		pFnPickupDroppedOff = (UFunction*) UObject::GObjObjects()->Data[ 124556 ];

	Usfxengagement_retrieve_dlc_execPickupDroppedOff_Parms PickupDroppedOff_Parms;
	PickupDroppedOff_Parms.Player = Player;
	PickupDroppedOff_Parms.Pickup = Pickup;

	this->ProcessEvent ( pFnPickupDroppedOff, &PickupDroppedOff_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.PlayerDroppedObject
// [0x00020002] 
// Parameters infos:
// class ASFXPawn_Player*         Player                         ( CPF_Parm )

void Usfxengagement_retrieve_dlc::PlayerDroppedObject ( class ASFXPawn_Player* Player )
{
	static UFunction* pFnPlayerDroppedObject = NULL;

	if ( ! pFnPlayerDroppedObject )
		pFnPlayerDroppedObject = (UFunction*) UObject::GObjObjects()->Data[ 124554 ];

	Usfxengagement_retrieve_dlc_execPlayerDroppedObject_Parms PlayerDroppedObject_Parms;
	PlayerDroppedObject_Parms.Player = Player;

	this->ProcessEvent ( pFnPlayerDroppedObject, &PlayerDroppedObject_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.PlayerPickedUpObject
// [0x00020002] 
// Parameters infos:
// class ASFXPawn_Player*         Player                         ( CPF_Parm )

void Usfxengagement_retrieve_dlc::PlayerPickedUpObject ( class ASFXPawn_Player* Player )
{
	static UFunction* pFnPlayerPickedUpObject = NULL;

	if ( ! pFnPlayerPickedUpObject )
		pFnPlayerPickedUpObject = (UFunction*) UObject::GObjObjects()->Data[ 124552 ];

	Usfxengagement_retrieve_dlc_execPlayerPickedUpObject_Parms PlayerPickedUpObject_Parms;
	PlayerPickedUpObject_Parms.Player = Player;

	this->ProcessEvent ( pFnPlayerPickedUpObject, &PlayerPickedUpObject_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.IsCarryingPickup
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFXPawn_Player*         Player                         ( CPF_Parm )

bool Usfxengagement_retrieve_dlc::IsCarryingPickup ( class ASFXPawn_Player* Player )
{
	static UFunction* pFnIsCarryingPickup = NULL;

	if ( ! pFnIsCarryingPickup )
		pFnIsCarryingPickup = (UFunction*) UObject::GObjObjects()->Data[ 124549 ];

	Usfxengagement_retrieve_dlc_execIsCarryingPickup_Parms IsCarryingPickup_Parms;
	IsCarryingPickup_Parms.Player = Player;

	this->ProcessEvent ( pFnIsCarryingPickup, &IsCarryingPickup_Parms, NULL );

	return IsCarryingPickup_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.UpdateObjectiveStatus
// [0x00020002] 
// Parameters infos:

void Usfxengagement_retrieve_dlc::UpdateObjectiveStatus ( )
{
	static UFunction* pFnUpdateObjectiveStatus = NULL;

	if ( ! pFnUpdateObjectiveStatus )
		pFnUpdateObjectiveStatus = (UFunction*) UObject::GObjObjects()->Data[ 124548 ];

	Usfxengagement_retrieve_dlc_execUpdateObjectiveStatus_Parms UpdateObjectiveStatus_Parms;

	this->ProcessEvent ( pFnUpdateObjectiveStatus, &UpdateObjectiveStatus_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.ActivateRandomPickup
// [0x00020002] 
// Parameters infos:

void Usfxengagement_retrieve_dlc::ActivateRandomPickup ( )
{
	static UFunction* pFnActivateRandomPickup = NULL;

	if ( ! pFnActivateRandomPickup )
		pFnActivateRandomPickup = (UFunction*) UObject::GObjObjects()->Data[ 124545 ];

	Usfxengagement_retrieve_dlc_execActivateRandomPickup_Parms ActivateRandomPickup_Parms;

	this->ProcessEvent ( pFnActivateRandomPickup, &ActivateRandomPickup_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.DetermineObjectivesToSpawn
// [0x00020002] 
// Parameters infos:

void Usfxengagement_retrieve_dlc::DetermineObjectivesToSpawn ( )
{
	static UFunction* pFnDetermineObjectivesToSpawn = NULL;

	if ( ! pFnDetermineObjectivesToSpawn )
		pFnDetermineObjectivesToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 124531 ];

	Usfxengagement_retrieve_dlc_execDetermineObjectivesToSpawn_Parms DetermineObjectivesToSpawn_Parms;

	this->ProcessEvent ( pFnDetermineObjectivesToSpawn, &DetermineObjectivesToSpawn_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.DistributeObjectiveScore
// [0x00020002] 
// Parameters infos:

void Usfxengagement_retrieve_dlc::DistributeObjectiveScore ( )
{
	static UFunction* pFnDistributeObjectiveScore = NULL;

	if ( ! pFnDistributeObjectiveScore )
		pFnDistributeObjectiveScore = (UFunction*) UObject::GObjObjects()->Data[ 124519 ];

	Usfxengagement_retrieve_dlc_execDistributeObjectiveScore_Parms DistributeObjectiveScore_Parms;

	this->ProcessEvent ( pFnDistributeObjectiveScore, &DistributeObjectiveScore_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp2_retrieve.sfxengagement_retrieve_dlc.BeginWave
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool Usfxengagement_retrieve_dlc::BeginWave ( )
{
	static UFunction* pFnBeginWave = NULL;

	if ( ! pFnBeginWave )
		pFnBeginWave = (UFunction*) UObject::GObjObjects()->Data[ 124491 ];

	Usfxengagement_retrieve_dlc_execBeginWave_Parms BeginWave_Parms;

	this->ProcessEvent ( pFnBeginWave, &BeginWave_Parms, NULL );

	return BeginWave_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif