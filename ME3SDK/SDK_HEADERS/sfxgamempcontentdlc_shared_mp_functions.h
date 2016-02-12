/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamempcontentdlc_shared_mp_functions.h
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

// Function sfxgamempcontent.sfxwave_operation.GetCreditsReward
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXEngagement_Retrieve_DLC_Base::GetCreditsReward ( )
{
	static UFunction* pFnGetCreditsReward = NULL;

	if ( ! pFnGetCreditsReward )
		pFnGetCreditsReward = (UFunction*) UObject::GObjObjects()->Data[ 108350 ];

	USFXEngagement_Retrieve_DLC_Base_execGetCreditsReward_Parms GetCreditsReward_Parms;

	this->ProcessEvent ( pFnGetCreditsReward, &GetCreditsReward_Parms, NULL );

	return GetCreditsReward_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxwave_operation.GetCreditBudget
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXEngagement_Retrieve_DLC_Base::GetCreditBudget ( )
{
	static UFunction* pFnGetCreditBudget = NULL;

	if ( ! pFnGetCreditBudget )
		pFnGetCreditBudget = (UFunction*) UObject::GObjObjects()->Data[ 108348 ];

	USFXEngagement_Retrieve_DLC_Base_execGetCreditBudget_Parms GetCreditBudget_Parms;

	this->ProcessEvent ( pFnGetCreditBudget, &GetCreditBudget_Parms, NULL );

	return GetCreditBudget_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxwave_operation.DistributeObjectiveScore
// [0x00020002] 
// Parameters infos:

void USFXEngagement_Retrieve_DLC_Base::DistributeObjectiveScore ( )
{
	static UFunction* pFnDistributeObjectiveScore = NULL;

	if ( ! pFnDistributeObjectiveScore )
		pFnDistributeObjectiveScore = (UFunction*) UObject::GObjObjects()->Data[ 108333 ];

	USFXEngagement_Retrieve_DLC_Base_execDistributeObjectiveScore_Parms DistributeObjectiveScore_Parms;

	this->ProcessEvent ( pFnDistributeObjectiveScore, &DistributeObjectiveScore_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.CountdownTimerExpired
// [0x00020002] 
// Parameters infos:

void USFXEngagement_Retrieve_DLC_Base::CountdownTimerExpired ( )
{
	static UFunction* pFnCountdownTimerExpired = NULL;

	if ( ! pFnCountdownTimerExpired )
		pFnCountdownTimerExpired = (UFunction*) UObject::GObjObjects()->Data[ 108331 ];

	USFXEngagement_Retrieve_DLC_Base_execCountdownTimerExpired_Parms CountdownTimerExpired_Parms;

	this->ProcessEvent ( pFnCountdownTimerExpired, &CountdownTimerExpired_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.CancelCountdownTimer
// [0x00020002] 
// Parameters infos:

void USFXEngagement_Retrieve_DLC_Base::CancelCountdownTimer ( )
{
	static UFunction* pFnCancelCountdownTimer = NULL;

	if ( ! pFnCancelCountdownTimer )
		pFnCancelCountdownTimer = (UFunction*) UObject::GObjObjects()->Data[ 108329 ];

	USFXEngagement_Retrieve_DLC_Base_execCancelCountdownTimer_Parms CancelCountdownTimer_Parms;

	this->ProcessEvent ( pFnCancelCountdownTimer, &CancelCountdownTimer_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.LocalPlayerTimeWarningHint
// [0x00020002] 
// Parameters infos:

void USFXEngagement_Retrieve_DLC_Base::LocalPlayerTimeWarningHint ( )
{
	static UFunction* pFnLocalPlayerTimeWarningHint = NULL;

	if ( ! pFnLocalPlayerTimeWarningHint )
		pFnLocalPlayerTimeWarningHint = (UFunction*) UObject::GObjObjects()->Data[ 108326 ];

	USFXEngagement_Retrieve_DLC_Base_execLocalPlayerTimeWarningHint_Parms LocalPlayerTimeWarningHint_Parms;

	this->ProcessEvent ( pFnLocalPlayerTimeWarningHint, &LocalPlayerTimeWarningHint_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.SetTimeLimit
// [0x00020002] 
// Parameters infos:
// float                          TimeLimit                      ( CPF_Parm )

void USFXEngagement_Retrieve_DLC_Base::SetTimeLimit ( float TimeLimit )
{
	static UFunction* pFnSetTimeLimit = NULL;

	if ( ! pFnSetTimeLimit )
		pFnSetTimeLimit = (UFunction*) UObject::GObjObjects()->Data[ 108322 ];

	USFXEngagement_Retrieve_DLC_Base_execSetTimeLimit_Parms SetTimeLimit_Parms;
	SetTimeLimit_Parms.TimeLimit = TimeLimit;

	this->ProcessEvent ( pFnSetTimeLimit, &SetTimeLimit_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.BeginWaveTimeLimit
// [0x00020002] 
// Parameters infos:

void USFXEngagement_Retrieve_DLC_Base::BeginWaveTimeLimit ( )
{
	static UFunction* pFnBeginWaveTimeLimit = NULL;

	if ( ! pFnBeginWaveTimeLimit )
		pFnBeginWaveTimeLimit = (UFunction*) UObject::GObjObjects()->Data[ 108318 ];

	USFXEngagement_Retrieve_DLC_Base_execBeginWaveTimeLimit_Parms BeginWaveTimeLimit_Parms;

	this->ProcessEvent ( pFnBeginWaveTimeLimit, &BeginWaveTimeLimit_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.DeactivateObjectiveCombatZone
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class AActor*                  ObjectiveActor                 ( CPF_Parm )

void USFXEngagement_Retrieve_DLC_Base::DeactivateObjectiveCombatZone ( class AActor* ObjectiveActor )
{
	static UFunction* pFnDeactivateObjectiveCombatZone = NULL;

	if ( ! pFnDeactivateObjectiveCombatZone )
		pFnDeactivateObjectiveCombatZone = (UFunction*) UObject::GObjObjects()->Data[ 108313 ];

	USFXEngagement_Retrieve_DLC_Base_execDeactivateObjectiveCombatZone_Parms DeactivateObjectiveCombatZone_Parms;
	DeactivateObjectiveCombatZone_Parms.ObjectiveActor = ObjectiveActor;

	this->ProcessEvent ( pFnDeactivateObjectiveCombatZone, &DeactivateObjectiveCombatZone_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.ActivateObjectiveCombatZone
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class AActor*                  ObjectiveActor                 ( CPF_Parm )

void USFXEngagement_Retrieve_DLC_Base::ActivateObjectiveCombatZone ( class AActor* ObjectiveActor )
{
	static UFunction* pFnActivateObjectiveCombatZone = NULL;

	if ( ! pFnActivateObjectiveCombatZone )
		pFnActivateObjectiveCombatZone = (UFunction*) UObject::GObjObjects()->Data[ 108307 ];

	USFXEngagement_Retrieve_DLC_Base_execActivateObjectiveCombatZone_Parms ActivateObjectiveCombatZone_Parms;
	ActivateObjectiveCombatZone_Parms.ObjectiveActor = ObjectiveActor;

	this->ProcessEvent ( pFnActivateObjectiveCombatZone, &ActivateObjectiveCombatZone_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.PawnDestroyed
// [0x00020102] 
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )

void USFXEngagement_Retrieve_DLC_Base::PawnDestroyed ( class ABioPawn* Pawn )
{
	static UFunction* pFnPawnDestroyed = NULL;

	if ( ! pFnPawnDestroyed )
		pFnPawnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 108312 ];

	USFXEngagement_Retrieve_DLC_Base_execPawnDestroyed_Parms PawnDestroyed_Parms;
	PawnDestroyed_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnPawnDestroyed, &PawnDestroyed_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.PawnRevived
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )

void USFXEngagement_Retrieve_DLC_Base::PawnRevived ( class ABioPawn* Pawn )
{
	static UFunction* pFnPawnRevived = NULL;

	if ( ! pFnPawnRevived )
		pFnPawnRevived = (UFunction*) UObject::GObjObjects()->Data[ 108303 ];

	USFXEngagement_Retrieve_DLC_Base_execPawnRevived_Parms PawnRevived_Parms;
	PawnRevived_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnPawnRevived, &PawnRevived_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.PawnDowned
// [0x00020102] 
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )

void USFXEngagement_Retrieve_DLC_Base::PawnDowned ( class ABioPawn* Pawn )
{
	static UFunction* pFnPawnDowned = NULL;

	if ( ! pFnPawnDowned )
		pFnPawnDowned = (UFunction*) UObject::GObjObjects()->Data[ 108299 ];

	USFXEngagement_Retrieve_DLC_Base_execPawnDowned_Parms PawnDowned_Parms;
	PawnDowned_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnPawnDowned, &PawnDowned_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.DetermineObjectivesToSpawn
// [0x00020002] 
// Parameters infos:

void USFXEngagement_Retrieve_DLC_Base::DetermineObjectivesToSpawn ( )
{
	static UFunction* pFnDetermineObjectivesToSpawn = NULL;

	if ( ! pFnDetermineObjectivesToSpawn )
		pFnDetermineObjectivesToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 108283 ];

	USFXEngagement_Retrieve_DLC_Base_execDetermineObjectivesToSpawn_Parms DetermineObjectivesToSpawn_Parms;

	this->ProcessEvent ( pFnDetermineObjectivesToSpawn, &DetermineObjectivesToSpawn_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.RateEnemyStart
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ANavigationPoint*        NavPoint                       ( CPF_Parm )

float USFXEngagement_Retrieve_DLC_Base::RateEnemyStart ( class ANavigationPoint* NavPoint )
{
	static UFunction* pFnRateEnemyStart = NULL;

	if ( ! pFnRateEnemyStart )
		pFnRateEnemyStart = (UFunction*) UObject::GObjObjects()->Data[ 108269 ];

	USFXEngagement_Retrieve_DLC_Base_execRateEnemyStart_Parms RateEnemyStart_Parms;
	RateEnemyStart_Parms.NavPoint = NavPoint;

	this->ProcessEvent ( pFnRateEnemyStart, &RateEnemyStart_Parms, NULL );

	return RateEnemyStart_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxwave_operation.DelayedFinishWave
// [0x00020002] 
// Parameters infos:

void USFXEngagement_Retrieve_DLC_Base::DelayedFinishWave ( )
{
	static UFunction* pFnDelayedFinishWave = NULL;

	if ( ! pFnDelayedFinishWave )
		pFnDelayedFinishWave = (UFunction*) UObject::GObjObjects()->Data[ 108267 ];

	USFXEngagement_Retrieve_DLC_Base_execDelayedFinishWave_Parms DelayedFinishWave_Parms;

	this->ProcessEvent ( pFnDelayedFinishWave, &DelayedFinishWave_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.FinishWave
// [0x00020002] 
// Parameters infos:

void USFXEngagement_Retrieve_DLC_Base::FinishWave ( )
{
	static UFunction* pFnFinishWave = NULL;

	if ( ! pFnFinishWave )
		pFnFinishWave = (UFunction*) UObject::GObjObjects()->Data[ 108262 ];

	USFXEngagement_Retrieve_DLC_Base_execFinishWave_Parms FinishWave_Parms;

	this->ProcessEvent ( pFnFinishWave, &FinishWave_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.ShowBeginWaveMessage
// [0x00020002] 
// Parameters infos:

void USFXEngagement_Retrieve_DLC_Base::ShowBeginWaveMessage ( )
{
	static UFunction* pFnShowBeginWaveMessage = NULL;

	if ( ! pFnShowBeginWaveMessage )
		pFnShowBeginWaveMessage = (UFunction*) UObject::GObjObjects()->Data[ 108260 ];

	USFXEngagement_Retrieve_DLC_Base_execShowBeginWaveMessage_Parms ShowBeginWaveMessage_Parms;

	this->ProcessEvent ( pFnShowBeginWaveMessage, &ShowBeginWaveMessage_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.BeginWave
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXEngagement_Retrieve_DLC_Base::BeginWave ( )
{
	static UFunction* pFnBeginWave = NULL;

	if ( ! pFnBeginWave )
		pFnBeginWave = (UFunction*) UObject::GObjObjects()->Data[ 108216 ];

	USFXEngagement_Retrieve_DLC_Base_execBeginWave_Parms BeginWave_Parms;

	this->ProcessEvent ( pFnBeginWave, &BeginWave_Parms, NULL );

	return BeginWave_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxwave_operation.ObjectiveSpawnSort
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFXOperation_ObjectiveSpawnPoint* A                              ( CPF_Parm )
// class ASFXOperation_ObjectiveSpawnPoint* B                              ( CPF_Parm )

int USFXEngagement_Retrieve_DLC_Base::ObjectiveSpawnSort ( class ASFXOperation_ObjectiveSpawnPoint* A, class ASFXOperation_ObjectiveSpawnPoint* B )
{
	static UFunction* pFnObjectiveSpawnSort = NULL;

	if ( ! pFnObjectiveSpawnSort )
		pFnObjectiveSpawnSort = (UFunction*) UObject::GObjObjects()->Data[ 108212 ];

	USFXEngagement_Retrieve_DLC_Base_execObjectiveSpawnSort_Parms ObjectiveSpawnSort_Parms;
	ObjectiveSpawnSort_Parms.A = A;
	ObjectiveSpawnSort_Parms.B = B;

	this->ProcessEvent ( pFnObjectiveSpawnSort, &ObjectiveSpawnSort_Parms, NULL );

	return ObjectiveSpawnSort_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxwave_operation.InitializeWave
// [0x00020002] 
// Parameters infos:
// class ASFXWaveManager*         OwnerManager                   ( CPF_Parm )

void USFXEngagement_Retrieve_DLC_Base::InitializeWave ( class ASFXWaveManager* OwnerManager )
{
	static UFunction* pFnInitializeWave = NULL;

	if ( ! pFnInitializeWave )
		pFnInitializeWave = (UFunction*) UObject::GObjObjects()->Data[ 108207 ];

	USFXEngagement_Retrieve_DLC_Base_execInitializeWave_Parms InitializeWave_Parms;
	InitializeWave_Parms.OwnerManager = OwnerManager;

	this->ProcessEvent ( pFnInitializeWave, &InitializeWave_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.GetCreditsReward
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXEngagement_MobileAnnex_Base::GetCreditsReward ( )
{
	static UFunction* pFnGetCreditsReward = NULL;

	if ( ! pFnGetCreditsReward )
		pFnGetCreditsReward = (UFunction*) UObject::GObjObjects()->Data[ 108350 ];

	USFXEngagement_MobileAnnex_Base_execGetCreditsReward_Parms GetCreditsReward_Parms;

	this->ProcessEvent ( pFnGetCreditsReward, &GetCreditsReward_Parms, NULL );

	return GetCreditsReward_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxwave_operation.GetCreditBudget
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXEngagement_MobileAnnex_Base::GetCreditBudget ( )
{
	static UFunction* pFnGetCreditBudget = NULL;

	if ( ! pFnGetCreditBudget )
		pFnGetCreditBudget = (UFunction*) UObject::GObjObjects()->Data[ 108348 ];

	USFXEngagement_MobileAnnex_Base_execGetCreditBudget_Parms GetCreditBudget_Parms;

	this->ProcessEvent ( pFnGetCreditBudget, &GetCreditBudget_Parms, NULL );

	return GetCreditBudget_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxwave_operation.DistributeObjectiveScore
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex_Base::DistributeObjectiveScore ( )
{
	static UFunction* pFnDistributeObjectiveScore = NULL;

	if ( ! pFnDistributeObjectiveScore )
		pFnDistributeObjectiveScore = (UFunction*) UObject::GObjObjects()->Data[ 108333 ];

	USFXEngagement_MobileAnnex_Base_execDistributeObjectiveScore_Parms DistributeObjectiveScore_Parms;

	this->ProcessEvent ( pFnDistributeObjectiveScore, &DistributeObjectiveScore_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.CountdownTimerExpired
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex_Base::CountdownTimerExpired ( )
{
	static UFunction* pFnCountdownTimerExpired = NULL;

	if ( ! pFnCountdownTimerExpired )
		pFnCountdownTimerExpired = (UFunction*) UObject::GObjObjects()->Data[ 108331 ];

	USFXEngagement_MobileAnnex_Base_execCountdownTimerExpired_Parms CountdownTimerExpired_Parms;

	this->ProcessEvent ( pFnCountdownTimerExpired, &CountdownTimerExpired_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.CancelCountdownTimer
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex_Base::CancelCountdownTimer ( )
{
	static UFunction* pFnCancelCountdownTimer = NULL;

	if ( ! pFnCancelCountdownTimer )
		pFnCancelCountdownTimer = (UFunction*) UObject::GObjObjects()->Data[ 108329 ];

	USFXEngagement_MobileAnnex_Base_execCancelCountdownTimer_Parms CancelCountdownTimer_Parms;

	this->ProcessEvent ( pFnCancelCountdownTimer, &CancelCountdownTimer_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.LocalPlayerTimeWarningHint
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex_Base::LocalPlayerTimeWarningHint ( )
{
	static UFunction* pFnLocalPlayerTimeWarningHint = NULL;

	if ( ! pFnLocalPlayerTimeWarningHint )
		pFnLocalPlayerTimeWarningHint = (UFunction*) UObject::GObjObjects()->Data[ 108326 ];

	USFXEngagement_MobileAnnex_Base_execLocalPlayerTimeWarningHint_Parms LocalPlayerTimeWarningHint_Parms;

	this->ProcessEvent ( pFnLocalPlayerTimeWarningHint, &LocalPlayerTimeWarningHint_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.SetTimeLimit
// [0x00020002] 
// Parameters infos:
// float                          TimeLimit                      ( CPF_Parm )

void USFXEngagement_MobileAnnex_Base::SetTimeLimit ( float TimeLimit )
{
	static UFunction* pFnSetTimeLimit = NULL;

	if ( ! pFnSetTimeLimit )
		pFnSetTimeLimit = (UFunction*) UObject::GObjObjects()->Data[ 108322 ];

	USFXEngagement_MobileAnnex_Base_execSetTimeLimit_Parms SetTimeLimit_Parms;
	SetTimeLimit_Parms.TimeLimit = TimeLimit;

	this->ProcessEvent ( pFnSetTimeLimit, &SetTimeLimit_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.BeginWaveTimeLimit
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex_Base::BeginWaveTimeLimit ( )
{
	static UFunction* pFnBeginWaveTimeLimit = NULL;

	if ( ! pFnBeginWaveTimeLimit )
		pFnBeginWaveTimeLimit = (UFunction*) UObject::GObjObjects()->Data[ 108318 ];

	USFXEngagement_MobileAnnex_Base_execBeginWaveTimeLimit_Parms BeginWaveTimeLimit_Parms;

	this->ProcessEvent ( pFnBeginWaveTimeLimit, &BeginWaveTimeLimit_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.DeactivateObjectiveCombatZone
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class AActor*                  ObjectiveActor                 ( CPF_Parm )

void USFXEngagement_MobileAnnex_Base::DeactivateObjectiveCombatZone ( class AActor* ObjectiveActor )
{
	static UFunction* pFnDeactivateObjectiveCombatZone = NULL;

	if ( ! pFnDeactivateObjectiveCombatZone )
		pFnDeactivateObjectiveCombatZone = (UFunction*) UObject::GObjObjects()->Data[ 108313 ];

	USFXEngagement_MobileAnnex_Base_execDeactivateObjectiveCombatZone_Parms DeactivateObjectiveCombatZone_Parms;
	DeactivateObjectiveCombatZone_Parms.ObjectiveActor = ObjectiveActor;

	this->ProcessEvent ( pFnDeactivateObjectiveCombatZone, &DeactivateObjectiveCombatZone_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.ActivateObjectiveCombatZone
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class AActor*                  ObjectiveActor                 ( CPF_Parm )

void USFXEngagement_MobileAnnex_Base::ActivateObjectiveCombatZone ( class AActor* ObjectiveActor )
{
	static UFunction* pFnActivateObjectiveCombatZone = NULL;

	if ( ! pFnActivateObjectiveCombatZone )
		pFnActivateObjectiveCombatZone = (UFunction*) UObject::GObjObjects()->Data[ 108307 ];

	USFXEngagement_MobileAnnex_Base_execActivateObjectiveCombatZone_Parms ActivateObjectiveCombatZone_Parms;
	ActivateObjectiveCombatZone_Parms.ObjectiveActor = ObjectiveActor;

	this->ProcessEvent ( pFnActivateObjectiveCombatZone, &ActivateObjectiveCombatZone_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.PawnDestroyed
// [0x00020102] 
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )

void USFXEngagement_MobileAnnex_Base::PawnDestroyed ( class ABioPawn* Pawn )
{
	static UFunction* pFnPawnDestroyed = NULL;

	if ( ! pFnPawnDestroyed )
		pFnPawnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 108312 ];

	USFXEngagement_MobileAnnex_Base_execPawnDestroyed_Parms PawnDestroyed_Parms;
	PawnDestroyed_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnPawnDestroyed, &PawnDestroyed_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.PawnRevived
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )

void USFXEngagement_MobileAnnex_Base::PawnRevived ( class ABioPawn* Pawn )
{
	static UFunction* pFnPawnRevived = NULL;

	if ( ! pFnPawnRevived )
		pFnPawnRevived = (UFunction*) UObject::GObjObjects()->Data[ 108303 ];

	USFXEngagement_MobileAnnex_Base_execPawnRevived_Parms PawnRevived_Parms;
	PawnRevived_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnPawnRevived, &PawnRevived_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.PawnDowned
// [0x00020102] 
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )

void USFXEngagement_MobileAnnex_Base::PawnDowned ( class ABioPawn* Pawn )
{
	static UFunction* pFnPawnDowned = NULL;

	if ( ! pFnPawnDowned )
		pFnPawnDowned = (UFunction*) UObject::GObjObjects()->Data[ 108299 ];

	USFXEngagement_MobileAnnex_Base_execPawnDowned_Parms PawnDowned_Parms;
	PawnDowned_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnPawnDowned, &PawnDowned_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.DetermineObjectivesToSpawn
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex_Base::DetermineObjectivesToSpawn ( )
{
	static UFunction* pFnDetermineObjectivesToSpawn = NULL;

	if ( ! pFnDetermineObjectivesToSpawn )
		pFnDetermineObjectivesToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 108283 ];

	USFXEngagement_MobileAnnex_Base_execDetermineObjectivesToSpawn_Parms DetermineObjectivesToSpawn_Parms;

	this->ProcessEvent ( pFnDetermineObjectivesToSpawn, &DetermineObjectivesToSpawn_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.RateEnemyStart
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ANavigationPoint*        NavPoint                       ( CPF_Parm )

float USFXEngagement_MobileAnnex_Base::RateEnemyStart ( class ANavigationPoint* NavPoint )
{
	static UFunction* pFnRateEnemyStart = NULL;

	if ( ! pFnRateEnemyStart )
		pFnRateEnemyStart = (UFunction*) UObject::GObjObjects()->Data[ 108269 ];

	USFXEngagement_MobileAnnex_Base_execRateEnemyStart_Parms RateEnemyStart_Parms;
	RateEnemyStart_Parms.NavPoint = NavPoint;

	this->ProcessEvent ( pFnRateEnemyStart, &RateEnemyStart_Parms, NULL );

	return RateEnemyStart_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxwave_operation.DelayedFinishWave
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex_Base::DelayedFinishWave ( )
{
	static UFunction* pFnDelayedFinishWave = NULL;

	if ( ! pFnDelayedFinishWave )
		pFnDelayedFinishWave = (UFunction*) UObject::GObjObjects()->Data[ 108267 ];

	USFXEngagement_MobileAnnex_Base_execDelayedFinishWave_Parms DelayedFinishWave_Parms;

	this->ProcessEvent ( pFnDelayedFinishWave, &DelayedFinishWave_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.FinishWave
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex_Base::FinishWave ( )
{
	static UFunction* pFnFinishWave = NULL;

	if ( ! pFnFinishWave )
		pFnFinishWave = (UFunction*) UObject::GObjObjects()->Data[ 108262 ];

	USFXEngagement_MobileAnnex_Base_execFinishWave_Parms FinishWave_Parms;

	this->ProcessEvent ( pFnFinishWave, &FinishWave_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.ShowBeginWaveMessage
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex_Base::ShowBeginWaveMessage ( )
{
	static UFunction* pFnShowBeginWaveMessage = NULL;

	if ( ! pFnShowBeginWaveMessage )
		pFnShowBeginWaveMessage = (UFunction*) UObject::GObjObjects()->Data[ 108260 ];

	USFXEngagement_MobileAnnex_Base_execShowBeginWaveMessage_Parms ShowBeginWaveMessage_Parms;

	this->ProcessEvent ( pFnShowBeginWaveMessage, &ShowBeginWaveMessage_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.BeginWave
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXEngagement_MobileAnnex_Base::BeginWave ( )
{
	static UFunction* pFnBeginWave = NULL;

	if ( ! pFnBeginWave )
		pFnBeginWave = (UFunction*) UObject::GObjObjects()->Data[ 108216 ];

	USFXEngagement_MobileAnnex_Base_execBeginWave_Parms BeginWave_Parms;

	this->ProcessEvent ( pFnBeginWave, &BeginWave_Parms, NULL );

	return BeginWave_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxwave_operation.ObjectiveSpawnSort
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFXOperation_ObjectiveSpawnPoint* A                              ( CPF_Parm )
// class ASFXOperation_ObjectiveSpawnPoint* B                              ( CPF_Parm )

int USFXEngagement_MobileAnnex_Base::ObjectiveSpawnSort ( class ASFXOperation_ObjectiveSpawnPoint* A, class ASFXOperation_ObjectiveSpawnPoint* B )
{
	static UFunction* pFnObjectiveSpawnSort = NULL;

	if ( ! pFnObjectiveSpawnSort )
		pFnObjectiveSpawnSort = (UFunction*) UObject::GObjObjects()->Data[ 108212 ];

	USFXEngagement_MobileAnnex_Base_execObjectiveSpawnSort_Parms ObjectiveSpawnSort_Parms;
	ObjectiveSpawnSort_Parms.A = A;
	ObjectiveSpawnSort_Parms.B = B;

	this->ProcessEvent ( pFnObjectiveSpawnSort, &ObjectiveSpawnSort_Parms, NULL );

	return ObjectiveSpawnSort_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxwave_operation.InitializeWave
// [0x00020002] 
// Parameters infos:
// class ASFXWaveManager*         OwnerManager                   ( CPF_Parm )

void USFXEngagement_MobileAnnex_Base::InitializeWave ( class ASFXWaveManager* OwnerManager )
{
	static UFunction* pFnInitializeWave = NULL;

	if ( ! pFnInitializeWave )
		pFnInitializeWave = (UFunction*) UObject::GObjObjects()->Data[ 108207 ];

	USFXEngagement_MobileAnnex_Base_execInitializeWave_Parms InitializeWave_Parms;
	InitializeWave_Parms.OwnerManager = OwnerManager;

	this->ProcessEvent ( pFnInitializeWave, &InitializeWave_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.AS_SetCurrentNameText
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 sName                          ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPWeaponSelection_DLC::AS_SetCurrentNameText ( struct FString sName )
{
	static UFunction* pFnAS_SetCurrentNameText = NULL;

	if ( ! pFnAS_SetCurrentNameText )
		pFnAS_SetCurrentNameText = (UFunction*) UObject::GObjObjects()->Data[ 74512 ];

	USFXGUI_MPWeaponSelection_DLC_execAS_SetCurrentNameText_Parms AS_SetCurrentNameText_Parms;
	memcpy ( &AS_SetCurrentNameText_Parms.sName, &sName, 0xC );

	this->ProcessEvent ( pFnAS_SetCurrentNameText, &AS_SetCurrentNameText_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.AS_TeamSetHenchman
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            nIndex                         ( CPF_Parm )
// struct FString                 sName                          ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sIconResource                  ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPWeaponSelection_DLC::AS_TeamSetHenchman ( int nIndex, struct FString sName, struct FString sIconResource )
{
	static UFunction* pFnAS_TeamSetHenchman = NULL;

	if ( ! pFnAS_TeamSetHenchman )
		pFnAS_TeamSetHenchman = (UFunction*) UObject::GObjObjects()->Data[ 74513 ];

	USFXGUI_MPWeaponSelection_DLC_execAS_TeamSetHenchman_Parms AS_TeamSetHenchman_Parms;
	AS_TeamSetHenchman_Parms.nIndex = nIndex;
	memcpy ( &AS_TeamSetHenchman_Parms.sName, &sName, 0xC );
	memcpy ( &AS_TeamSetHenchman_Parms.sIconResource, &sIconResource, 0xC );

	this->ProcessEvent ( pFnAS_TeamSetHenchman, &AS_TeamSetHenchman_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.AS_TeamSetVisible
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bVisible                       ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::AS_TeamSetVisible ( unsigned long bVisible )
{
	static UFunction* pFnAS_TeamSetVisible = NULL;

	if ( ! pFnAS_TeamSetVisible )
		pFnAS_TeamSetVisible = (UFunction*) UObject::GObjObjects()->Data[ 74498 ];

	USFXGUI_MPWeaponSelection_DLC_execAS_TeamSetVisible_Parms AS_TeamSetVisible_Parms;
	AS_TeamSetVisible_Parms.bVisible = bVisible;

	this->ProcessEvent ( pFnAS_TeamSetVisible, &AS_TeamSetVisible_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.AS_SetModDisplay
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            nDisplay                       ( CPF_Parm )
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sImgPath                       ( CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPWeaponSelection_DLC::AS_SetModDisplay ( int nDisplay, struct FString sName, struct FString sImgPath )
{
	static UFunction* pFnAS_SetModDisplay = NULL;

	if ( ! pFnAS_SetModDisplay )
		pFnAS_SetModDisplay = (UFunction*) UObject::GObjObjects()->Data[ 74648 ];

	USFXGUI_MPWeaponSelection_DLC_execAS_SetModDisplay_Parms AS_SetModDisplay_Parms;
	AS_SetModDisplay_Parms.nDisplay = nDisplay;
	memcpy ( &AS_SetModDisplay_Parms.sName, &sName, 0xC );
	memcpy ( &AS_SetModDisplay_Parms.sImgPath, &sImgPath, 0xC );

	this->ProcessEvent ( pFnAS_SetModDisplay, &AS_SetModDisplay_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.AS_AddWeaponStat
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )
// float                          fValue                         ( CPF_Parm )
// float                          fBonus                         ( CPF_Parm )
// float                          fCompare                       ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::AS_AddWeaponStat ( struct FString sName, float fValue, float fBonus, float fCompare )
{
	static UFunction* pFnAS_AddWeaponStat = NULL;

	if ( ! pFnAS_AddWeaponStat )
		pFnAS_AddWeaponStat = (UFunction*) UObject::GObjObjects()->Data[ 74638 ];

	USFXGUI_MPWeaponSelection_DLC_execAS_AddWeaponStat_Parms AS_AddWeaponStat_Parms;
	memcpy ( &AS_AddWeaponStat_Parms.sName, &sName, 0xC );
	AS_AddWeaponStat_Parms.fValue = fValue;
	AS_AddWeaponStat_Parms.fBonus = fBonus;
	AS_AddWeaponStat_Parms.fCompare = fCompare;

	this->ProcessEvent ( pFnAS_AddWeaponStat, &AS_AddWeaponStat_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.AS_ClearWeaponStatsDisplay
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::AS_ClearWeaponStatsDisplay ( )
{
	static UFunction* pFnAS_ClearWeaponStatsDisplay = NULL;

	if ( ! pFnAS_ClearWeaponStatsDisplay )
		pFnAS_ClearWeaponStatsDisplay = (UFunction*) UObject::GObjObjects()->Data[ 74636 ];

	USFXGUI_MPWeaponSelection_DLC_execAS_ClearWeaponStatsDisplay_Parms AS_ClearWeaponStatsDisplay_Parms;

	this->ProcessEvent ( pFnAS_ClearWeaponStatsDisplay, &AS_ClearWeaponStatsDisplay_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.AS_SelectWeaponSlot
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            nSlotID                        ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::AS_SelectWeaponSlot ( int nSlotID )
{
	static UFunction* pFnAS_SelectWeaponSlot = NULL;

	if ( ! pFnAS_SelectWeaponSlot )
		pFnAS_SelectWeaponSlot = (UFunction*) UObject::GObjObjects()->Data[ 74501 ];

	USFXGUI_MPWeaponSelection_DLC_execAS_SelectWeaponSlot_Parms AS_SelectWeaponSlot_Parms;
	AS_SelectWeaponSlot_Parms.nSlotID = nSlotID;

	this->ProcessEvent ( pFnAS_SelectWeaponSlot, &AS_SelectWeaponSlot_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.AS_PerformPlayerWeaponAction
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bAccept                        ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::AS_PerformPlayerWeaponAction ( unsigned long bAccept )
{
	static UFunction* pFnAS_PerformPlayerWeaponAction = NULL;

	if ( ! pFnAS_PerformPlayerWeaponAction )
		pFnAS_PerformPlayerWeaponAction = (UFunction*) UObject::GObjObjects()->Data[ 74730 ];

	USFXGUI_MPWeaponSelection_DLC_execAS_PerformPlayerWeaponAction_Parms AS_PerformPlayerWeaponAction_Parms;
	AS_PerformPlayerWeaponAction_Parms.bAccept = bAccept;

	this->ProcessEvent ( pFnAS_PerformPlayerWeaponAction, &AS_PerformPlayerWeaponAction_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.AS_ScrollInfoText
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// float                          fScroll                        ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::AS_ScrollInfoText ( float fScroll )
{
	static UFunction* pFnAS_ScrollInfoText = NULL;

	if ( ! pFnAS_ScrollInfoText )
		pFnAS_ScrollInfoText = (UFunction*) UObject::GObjObjects()->Data[ 74735 ];

	USFXGUI_MPWeaponSelection_DLC_execAS_ScrollInfoText_Parms AS_ScrollInfoText_Parms;
	AS_ScrollInfoText_Parms.fScroll = fScroll;

	this->ProcessEvent ( pFnAS_ScrollInfoText, &AS_ScrollInfoText_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.AS_SetSlotNewIcon
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            nSlot                          ( CPF_Parm )
// unsigned long                  bHasNew                        ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::AS_SetSlotNewIcon ( int nSlot, unsigned long bHasNew )
{
	static UFunction* pFnAS_SetSlotNewIcon = NULL;

	if ( ! pFnAS_SetSlotNewIcon )
		pFnAS_SetSlotNewIcon = (UFunction*) UObject::GObjObjects()->Data[ 74667 ];

	USFXGUI_MPWeaponSelection_DLC_execAS_SetSlotNewIcon_Parms AS_SetSlotNewIcon_Parms;
	AS_SetSlotNewIcon_Parms.nSlot = nSlot;
	AS_SetSlotNewIcon_Parms.bHasNew = bHasNew;

	this->ProcessEvent ( pFnAS_SetSlotNewIcon, &AS_SetSlotNewIcon_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.AS_SetWeaponAction
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 sButtonText                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sCallbackMethodName            ( CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPWeaponSelection_DLC::AS_SetWeaponAction ( struct FString sButtonText, struct FString sCallbackMethodName )
{
	static UFunction* pFnAS_SetWeaponAction = NULL;

	if ( ! pFnAS_SetWeaponAction )
		pFnAS_SetWeaponAction = (UFunction*) UObject::GObjObjects()->Data[ 74765 ];

	USFXGUI_MPWeaponSelection_DLC_execAS_SetWeaponAction_Parms AS_SetWeaponAction_Parms;
	memcpy ( &AS_SetWeaponAction_Parms.sButtonText, &sButtonText, 0xC );
	memcpy ( &AS_SetWeaponAction_Parms.sCallbackMethodName, &sCallbackMethodName, 0xC );

	this->ProcessEvent ( pFnAS_SetWeaponAction, &AS_SetWeaponAction_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.AS_SetInventoryWeapon
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sDesc                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sIconResource                  ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bNew                           ( CPF_Parm )
// int                            nNum                           ( CPF_Parm )
// int                            nTotal                         ( CPF_Parm )
// unsigned long                  bFlourish                      ( CPF_Parm )
// struct FString                 sClassPath                     ( CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPWeaponSelection_DLC::AS_SetInventoryWeapon ( struct FString sName, struct FString sDesc, struct FString sIconResource, unsigned long bNew, int nNum, int nTotal, unsigned long bFlourish, struct FString sClassPath )
{
	static UFunction* pFnAS_SetInventoryWeapon = NULL;

	if ( ! pFnAS_SetInventoryWeapon )
		pFnAS_SetInventoryWeapon = (UFunction*) UObject::GObjObjects()->Data[ 74665 ];

	USFXGUI_MPWeaponSelection_DLC_execAS_SetInventoryWeapon_Parms AS_SetInventoryWeapon_Parms;
	memcpy ( &AS_SetInventoryWeapon_Parms.sName, &sName, 0xC );
	memcpy ( &AS_SetInventoryWeapon_Parms.sDesc, &sDesc, 0xC );
	memcpy ( &AS_SetInventoryWeapon_Parms.sIconResource, &sIconResource, 0xC );
	AS_SetInventoryWeapon_Parms.bNew = bNew;
	AS_SetInventoryWeapon_Parms.nNum = nNum;
	AS_SetInventoryWeapon_Parms.nTotal = nTotal;
	AS_SetInventoryWeapon_Parms.bFlourish = bFlourish;
	memcpy ( &AS_SetInventoryWeapon_Parms.sClassPath, &sClassPath, 0xC );

	this->ProcessEvent ( pFnAS_SetInventoryWeapon, &AS_SetInventoryWeapon_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.AS_SetWeightDisplay
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            nPercent                       ( CPF_Parm )
// int                            nComparePct                    ( CPF_Parm )
// struct FString                 sBarLabel                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sInfo                          ( CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPWeaponSelection_DLC::AS_SetWeightDisplay ( int nPercent, int nComparePct, struct FString sBarLabel, struct FString sInfo )
{
	static UFunction* pFnAS_SetWeightDisplay = NULL;

	if ( ! pFnAS_SetWeightDisplay )
		pFnAS_SetWeightDisplay = (UFunction*) UObject::GObjObjects()->Data[ 74706 ];

	USFXGUI_MPWeaponSelection_DLC_execAS_SetWeightDisplay_Parms AS_SetWeightDisplay_Parms;
	AS_SetWeightDisplay_Parms.nPercent = nPercent;
	AS_SetWeightDisplay_Parms.nComparePct = nComparePct;
	memcpy ( &AS_SetWeightDisplay_Parms.sBarLabel, &sBarLabel, 0xC );
	memcpy ( &AS_SetWeightDisplay_Parms.sInfo, &sInfo, 0xC );

	this->ProcessEvent ( pFnAS_SetWeightDisplay, &AS_SetWeightDisplay_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.AS_SetWeaponInfoDisplay
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 sWeaponName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sWeaponDescription             ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sCategory                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sWeaponImage                   ( CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPWeaponSelection_DLC::AS_SetWeaponInfoDisplay ( struct FString sWeaponName, struct FString sWeaponDescription, struct FString sCategory, struct FString sWeaponImage )
{
	static UFunction* pFnAS_SetWeaponInfoDisplay = NULL;

	if ( ! pFnAS_SetWeaponInfoDisplay )
		pFnAS_SetWeaponInfoDisplay = (UFunction*) UObject::GObjObjects()->Data[ 74655 ];

	USFXGUI_MPWeaponSelection_DLC_execAS_SetWeaponInfoDisplay_Parms AS_SetWeaponInfoDisplay_Parms;
	memcpy ( &AS_SetWeaponInfoDisplay_Parms.sWeaponName, &sWeaponName, 0xC );
	memcpy ( &AS_SetWeaponInfoDisplay_Parms.sWeaponDescription, &sWeaponDescription, 0xC );
	memcpy ( &AS_SetWeaponInfoDisplay_Parms.sCategory, &sCategory, 0xC );
	memcpy ( &AS_SetWeaponInfoDisplay_Parms.sWeaponImage, &sWeaponImage, 0xC );

	this->ProcessEvent ( pFnAS_SetWeaponInfoDisplay, &AS_SetWeaponInfoDisplay_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.AS_SetWeaponSlot
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            nSlotID                        ( CPF_Parm )
// int                            nWeaponID                      ( CPF_Parm )
// struct FString                 sWeaponIconResource            ( CPF_Parm | CPF_NeedCtorLink )
// int                            nWeaponIconIndex               ( CPF_Parm )
// int                            nNumOtherWeapons               ( CPF_Parm )
// unsigned long                  bHaveNewWeapons                ( CPF_Parm )
// int                            nCategory                      ( CPF_Parm )
// unsigned long                  bValid                         ( CPF_Parm )
// unsigned long                  bHasModsAvailable              ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::AS_SetWeaponSlot ( int nSlotID, int nWeaponID, struct FString sWeaponIconResource, int nWeaponIconIndex, int nNumOtherWeapons, unsigned long bHaveNewWeapons, int nCategory, unsigned long bValid, unsigned long bHasModsAvailable )
{
	static UFunction* pFnAS_SetWeaponSlot = NULL;

	if ( ! pFnAS_SetWeaponSlot )
		pFnAS_SetWeaponSlot = (UFunction*) UObject::GObjObjects()->Data[ 74558 ];

	USFXGUI_MPWeaponSelection_DLC_execAS_SetWeaponSlot_Parms AS_SetWeaponSlot_Parms;
	AS_SetWeaponSlot_Parms.nSlotID = nSlotID;
	AS_SetWeaponSlot_Parms.nWeaponID = nWeaponID;
	memcpy ( &AS_SetWeaponSlot_Parms.sWeaponIconResource, &sWeaponIconResource, 0xC );
	AS_SetWeaponSlot_Parms.nWeaponIconIndex = nWeaponIconIndex;
	AS_SetWeaponSlot_Parms.nNumOtherWeapons = nNumOtherWeapons;
	AS_SetWeaponSlot_Parms.bHaveNewWeapons = bHaveNewWeapons;
	AS_SetWeaponSlot_Parms.nCategory = nCategory;
	AS_SetWeaponSlot_Parms.bValid = bValid;
	AS_SetWeaponSlot_Parms.bHasModsAvailable = bHasModsAvailable;

	this->ProcessEvent ( pFnAS_SetWeaponSlot, &AS_SetWeaponSlot_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.AS_SetLoading
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bLoading                       ( CPF_Parm )
// struct FString                 sText                          ( CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPWeaponSelection_DLC::AS_SetLoading ( unsigned long bLoading, struct FString sText )
{
	static UFunction* pFnAS_SetLoading = NULL;

	if ( ! pFnAS_SetLoading )
		pFnAS_SetLoading = (UFunction*) UObject::GObjObjects()->Data[ 74488 ];

	USFXGUI_MPWeaponSelection_DLC_execAS_SetLoading_Parms AS_SetLoading_Parms;
	AS_SetLoading_Parms.bLoading = bLoading;
	memcpy ( &AS_SetLoading_Parms.sText, &sText, 0xC );

	this->ProcessEvent ( pFnAS_SetLoading, &AS_SetLoading_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.AS_SetVisible
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bVisible                       ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::AS_SetVisible ( unsigned long bVisible )
{
	static UFunction* pFnAS_SetVisible = NULL;

	if ( ! pFnAS_SetVisible )
		pFnAS_SetVisible = (UFunction*) UObject::GObjObjects()->Data[ 74736 ];

	USFXGUI_MPWeaponSelection_DLC_execAS_SetVisible_Parms AS_SetVisible_Parms;
	AS_SetVisible_Parms.bVisible = bVisible;

	this->ProcessEvent ( pFnAS_SetVisible, &AS_SetVisible_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.HandleInputEvent
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Event                          ( CPF_Parm )
// float                          fValue                         ( CPF_OptionalParm | CPF_Parm )

bool USFXGUI_MPWeaponSelection_DLC::eventHandleInputEvent ( unsigned char Event, float fValue )
{
	static UFunction* pFnHandleInputEvent = NULL;

	if ( ! pFnHandleInputEvent )
		pFnHandleInputEvent = (UFunction*) UObject::GObjObjects()->Data[ 74731 ];

	USFXGUI_MPWeaponSelection_DLC_eventHandleInputEvent_Parms HandleInputEvent_Parms;
	HandleInputEvent_Parms.Event = Event;
	HandleInputEvent_Parms.fValue = fValue;

	this->ProcessEvent ( pFnHandleInputEvent, &HandleInputEvent_Parms, NULL );

	return HandleInputEvent_Parms.ReturnValue;
};

// Function SFXGame.sfxgui_weaponselection.PlayerDiscardWeaponCallback
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class UBioSFHandler_MessageBox* oMsgBox                        ( CPF_Parm )
// int                            nChoiceID                      ( CPF_Parm )
// unsigned long                  bCancelled                     ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::PlayerDiscardWeaponCallback ( class UBioSFHandler_MessageBox* oMsgBox, int nChoiceID, unsigned long bCancelled )
{
	static UFunction* pFnPlayerDiscardWeaponCallback = NULL;

	if ( ! pFnPlayerDiscardWeaponCallback )
		pFnPlayerDiscardWeaponCallback = (UFunction*) UObject::GObjObjects()->Data[ 74726 ];

	USFXGUI_MPWeaponSelection_DLC_execPlayerDiscardWeaponCallback_Parms PlayerDiscardWeaponCallback_Parms;
	PlayerDiscardWeaponCallback_Parms.oMsgBox = oMsgBox;
	PlayerDiscardWeaponCallback_Parms.nChoiceID = nChoiceID;
	PlayerDiscardWeaponCallback_Parms.bCancelled = bCancelled;

	this->ProcessEvent ( pFnPlayerDiscardWeaponCallback, &PlayerDiscardWeaponCallback_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.PromptPlayerToDiscardMPWeapon
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            nWeapCategory                  ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::PromptPlayerToDiscardMPWeapon ( int nWeapCategory )
{
	static UFunction* pFnPromptPlayerToDiscardMPWeapon = NULL;

	if ( ! pFnPromptPlayerToDiscardMPWeapon )
		pFnPromptPlayerToDiscardMPWeapon = (UFunction*) UObject::GObjObjects()->Data[ 74716 ];

	USFXGUI_MPWeaponSelection_DLC_execPromptPlayerToDiscardMPWeapon_Parms PromptPlayerToDiscardMPWeapon_Parms;
	PromptPlayerToDiscardMPWeapon_Parms.nWeapCategory = nWeapCategory;

	this->ProcessEvent ( pFnPromptPlayerToDiscardMPWeapon, &PromptPlayerToDiscardMPWeapon_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.CheckCanEquipWeapon
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nWeapCategory                  ( CPF_Parm )

bool USFXGUI_MPWeaponSelection_DLC::CheckCanEquipWeapon ( int nWeapCategory )
{
	static UFunction* pFnCheckCanEquipWeapon = NULL;

	if ( ! pFnCheckCanEquipWeapon )
		pFnCheckCanEquipWeapon = (UFunction*) UObject::GObjObjects()->Data[ 74711 ];

	USFXGUI_MPWeaponSelection_DLC_execCheckCanEquipWeapon_Parms CheckCanEquipWeapon_Parms;
	CheckCanEquipWeapon_Parms.nWeapCategory = nWeapCategory;

	this->ProcessEvent ( pFnCheckCanEquipWeapon, &CheckCanEquipWeapon_Parms, NULL );

	return CheckCanEquipWeapon_Parms.ReturnValue;
};

// Function SFXGame.sfxgui_weaponselection.CheckCanSelectWeapon
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nWeapCategory                  ( CPF_Parm )

bool USFXGUI_MPWeaponSelection_DLC::CheckCanSelectWeapon ( int nWeapCategory )
{
	static UFunction* pFnCheckCanSelectWeapon = NULL;

	if ( ! pFnCheckCanSelectWeapon )
		pFnCheckCanSelectWeapon = (UFunction*) UObject::GObjObjects()->Data[ 74708 ];

	USFXGUI_MPWeaponSelection_DLC_execCheckCanSelectWeapon_Parms CheckCanSelectWeapon_Parms;
	CheckCanSelectWeapon_Parms.nWeapCategory = nWeapCategory;

	this->ProcessEvent ( pFnCheckCanSelectWeapon, &CheckCanSelectWeapon_Parms, NULL );

	return CheckCanSelectWeapon_Parms.ReturnValue;
};

// Function SFXGame.sfxgui_weaponselection.UpdateWeaponEncumbranceDisplay
// [0x00820003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::UpdateWeaponEncumbranceDisplay ( )
{
	static UFunction* pFnUpdateWeaponEncumbranceDisplay = NULL;

	if ( ! pFnUpdateWeaponEncumbranceDisplay )
		pFnUpdateWeaponEncumbranceDisplay = (UFunction*) UObject::GObjObjects()->Data[ 74559 ];

	USFXGUI_MPWeaponSelection_DLC_execUpdateWeaponEncumbranceDisplay_Parms UpdateWeaponEncumbranceDisplay_Parms;

	this->ProcessEvent ( pFnUpdateWeaponEncumbranceDisplay, &UpdateWeaponEncumbranceDisplay_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.UpdateCurrentLoadoutWeaponDisplay
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::UpdateCurrentLoadoutWeaponDisplay ( )
{
	static UFunction* pFnUpdateCurrentLoadoutWeaponDisplay = NULL;

	if ( ! pFnUpdateCurrentLoadoutWeaponDisplay )
		pFnUpdateCurrentLoadoutWeaponDisplay = (UFunction*) UObject::GObjObjects()->Data[ 74679 ];

	USFXGUI_MPWeaponSelection_DLC_execUpdateCurrentLoadoutWeaponDisplay_Parms UpdateCurrentLoadoutWeaponDisplay_Parms;

	this->ProcessEvent ( pFnUpdateCurrentLoadoutWeaponDisplay, &UpdateCurrentLoadoutWeaponDisplay_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.SelectNextHenchman
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::SelectNextHenchman ( )
{
	static UFunction* pFnSelectNextHenchman = NULL;

	if ( ! pFnSelectNextHenchman )
		pFnSelectNextHenchman = (UFunction*) UObject::GObjObjects()->Data[ 74682 ];

	USFXGUI_MPWeaponSelection_DLC_execSelectNextHenchman_Parms SelectNextHenchman_Parms;

	this->ProcessEvent ( pFnSelectNextHenchman, &SelectNextHenchman_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.SelectPreviousHenchman
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::SelectPreviousHenchman ( )
{
	static UFunction* pFnSelectPreviousHenchman = NULL;

	if ( ! pFnSelectPreviousHenchman )
		pFnSelectPreviousHenchman = (UFunction*) UObject::GObjObjects()->Data[ 74680 ];

	USFXGUI_MPWeaponSelection_DLC_execSelectPreviousHenchman_Parms SelectPreviousHenchman_Parms;

	this->ProcessEvent ( pFnSelectPreviousHenchman, &SelectPreviousHenchman_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.WeaponSelectionItemChanged
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::WeaponSelectionItemChanged ( )
{
	static UFunction* pFnWeaponSelectionItemChanged = NULL;

	if ( ! pFnWeaponSelectionItemChanged )
		pFnWeaponSelectionItemChanged = (UFunction*) UObject::GObjObjects()->Data[ 74670 ];

	USFXGUI_MPWeaponSelection_DLC_execWeaponSelectionItemChanged_Parms WeaponSelectionItemChanged_Parms;

	this->ProcessEvent ( pFnWeaponSelectionItemChanged, &WeaponSelectionItemChanged_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.WeaponLoadoutItemChanged
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            nID                            ( CPF_Parm )
// int                            nCategory                      ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::WeaponLoadoutItemChanged ( int nID, int nCategory )
{
	static UFunction* pFnWeaponLoadoutItemChanged = NULL;

	if ( ! pFnWeaponLoadoutItemChanged )
		pFnWeaponLoadoutItemChanged = (UFunction*) UObject::GObjObjects()->Data[ 74676 ];

	USFXGUI_MPWeaponSelection_DLC_execWeaponLoadoutItemChanged_Parms WeaponLoadoutItemChanged_Parms;
	WeaponLoadoutItemChanged_Parms.nID = nID;
	WeaponLoadoutItemChanged_Parms.nCategory = nCategory;

	this->ProcessEvent ( pFnWeaponLoadoutItemChanged, &WeaponLoadoutItemChanged_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.SwitchToWeaponLoadout
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::SwitchToWeaponLoadout ( )
{
	static UFunction* pFnSwitchToWeaponLoadout = NULL;

	if ( ! pFnSwitchToWeaponLoadout )
		pFnSwitchToWeaponLoadout = (UFunction*) UObject::GObjObjects()->Data[ 74674 ];

	USFXGUI_MPWeaponSelection_DLC_execSwitchToWeaponLoadout_Parms SwitchToWeaponLoadout_Parms;

	this->ProcessEvent ( pFnSwitchToWeaponLoadout, &SwitchToWeaponLoadout_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.UndoWeaponSelection
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::UndoWeaponSelection ( )
{
	static UFunction* pFnUndoWeaponSelection = NULL;

	if ( ! pFnUndoWeaponSelection )
		pFnUndoWeaponSelection = (UFunction*) UObject::GObjObjects()->Data[ 74673 ];

	USFXGUI_MPWeaponSelection_DLC_execUndoWeaponSelection_Parms UndoWeaponSelection_Parms;

	this->ProcessEvent ( pFnUndoWeaponSelection, &UndoWeaponSelection_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.SelectPrevWeapon
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::SelectPrevWeapon ( )
{
	static UFunction* pFnSelectPrevWeapon = NULL;

	if ( ! pFnSelectPrevWeapon )
		pFnSelectPrevWeapon = (UFunction*) UObject::GObjObjects()->Data[ 74671 ];

	USFXGUI_MPWeaponSelection_DLC_execSelectPrevWeapon_Parms SelectPrevWeapon_Parms;

	this->ProcessEvent ( pFnSelectPrevWeapon, &SelectPrevWeapon_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.SelectNextWeapon
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::SelectNextWeapon ( )
{
	static UFunction* pFnSelectNextWeapon = NULL;

	if ( ! pFnSelectNextWeapon )
		pFnSelectNextWeapon = (UFunction*) UObject::GObjObjects()->Data[ 74668 ];

	USFXGUI_MPWeaponSelection_DLC_execSelectNextWeapon_Parms SelectNextWeapon_Parms;

	this->ProcessEvent ( pFnSelectNextWeapon, &SelectNextWeapon_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.DisplayCurrentWeaponSelection
// [0x00820003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bFlourish                      ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::DisplayCurrentWeaponSelection ( unsigned long bFlourish )
{
	static UFunction* pFnDisplayCurrentWeaponSelection = NULL;

	if ( ! pFnDisplayCurrentWeaponSelection )
		pFnDisplayCurrentWeaponSelection = (UFunction*) UObject::GObjObjects()->Data[ 74660 ];

	USFXGUI_MPWeaponSelection_DLC_execDisplayCurrentWeaponSelection_Parms DisplayCurrentWeaponSelection_Parms;
	DisplayCurrentWeaponSelection_Parms.bFlourish = bFlourish;

	this->ProcessEvent ( pFnDisplayCurrentWeaponSelection, &DisplayCurrentWeaponSelection_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.SwitchToWeaponSelection
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            nWeaponType                    ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::SwitchToWeaponSelection ( int nWeaponType )
{
	static UFunction* pFnSwitchToWeaponSelection = NULL;

	if ( ! pFnSwitchToWeaponSelection )
		pFnSwitchToWeaponSelection = (UFunction*) UObject::GObjObjects()->Data[ 74657 ];

	USFXGUI_MPWeaponSelection_DLC_execSwitchToWeaponSelection_Parms SwitchToWeaponSelection_Parms;
	SwitchToWeaponSelection_Parms.nWeaponType = nWeaponType;

	this->ProcessEvent ( pFnSwitchToWeaponSelection, &SwitchToWeaponSelection_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.MainMovieLoaded
// [0x00020001] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::MainMovieLoaded ( )
{
	static UFunction* pFnMainMovieLoaded = NULL;

	if ( ! pFnMainMovieLoaded )
		pFnMainMovieLoaded = (UFunction*) UObject::GObjObjects()->Data[ 74656 ];

	USFXGUI_MPWeaponSelection_DLC_execMainMovieLoaded_Parms MainMovieLoaded_Parms;

	this->ProcessEvent ( pFnMainMovieLoaded, &MainMovieLoaded_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.SetWeaponInfoDisplay
// [0x00824003] ( FUNC_Final )
// Parameters infos:
// int                            nWeaponIndex                   ( CPF_Parm )
// int                            nCategory                      ( CPF_OptionalParm | CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::SetWeaponInfoDisplay ( int nWeaponIndex, int nCategory )
{
	static UFunction* pFnSetWeaponInfoDisplay = NULL;

	if ( ! pFnSetWeaponInfoDisplay )
		pFnSetWeaponInfoDisplay = (UFunction*) UObject::GObjObjects()->Data[ 74650 ];

	USFXGUI_MPWeaponSelection_DLC_execSetWeaponInfoDisplay_Parms SetWeaponInfoDisplay_Parms;
	SetWeaponInfoDisplay_Parms.nWeaponIndex = nWeaponIndex;
	SetWeaponInfoDisplay_Parms.nCategory = nCategory;

	this->ProcessEvent ( pFnSetWeaponInfoDisplay, &SetWeaponInfoDisplay_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.SetWeaponModsDisplay
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            nWeapIndex                     ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::SetWeaponModsDisplay ( int nWeapIndex )
{
	static UFunction* pFnSetWeaponModsDisplay = NULL;

	if ( ! pFnSetWeaponModsDisplay )
		pFnSetWeaponModsDisplay = (UFunction*) UObject::GObjObjects()->Data[ 74640 ];

	USFXGUI_MPWeaponSelection_DLC_execSetWeaponModsDisplay_Parms SetWeaponModsDisplay_Parms;
	SetWeaponModsDisplay_Parms.nWeapIndex = nWeapIndex;

	this->ProcessEvent ( pFnSetWeaponModsDisplay, &SetWeaponModsDisplay_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.SetWeaponStatsDisplay
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            nWeapIndex                     ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::SetWeaponStatsDisplay ( int nWeapIndex )
{
	static UFunction* pFnSetWeaponStatsDisplay = NULL;

	if ( ! pFnSetWeaponStatsDisplay )
		pFnSetWeaponStatsDisplay = (UFunction*) UObject::GObjObjects()->Data[ 74628 ];

	USFXGUI_MPWeaponSelection_DLC_execSetWeaponStatsDisplay_Parms SetWeaponStatsDisplay_Parms;
	SetWeaponStatsDisplay_Parms.nWeapIndex = nWeapIndex;

	this->ProcessEvent ( pFnSetWeaponStatsDisplay, &SetWeaponStatsDisplay_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.RestorePowerBonuses
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::RestorePowerBonuses ( )
{
	static UFunction* pFnRestorePowerBonuses = NULL;

	if ( ! pFnRestorePowerBonuses )
		pFnRestorePowerBonuses = (UFunction*) UObject::GObjObjects()->Data[ 74587 ];

	USFXGUI_MPWeaponSelection_DLC_execRestorePowerBonuses_Parms RestorePowerBonuses_Parms;

	this->ProcessEvent ( pFnRestorePowerBonuses, &RestorePowerBonuses_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.MakeLoadoutsActive
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::MakeLoadoutsActive ( )
{
	static UFunction* pFnMakeLoadoutsActive = NULL;

	if ( ! pFnMakeLoadoutsActive )
		pFnMakeLoadoutsActive = (UFunction*) UObject::GObjObjects()->Data[ 74485 ];

	USFXGUI_MPWeaponSelection_DLC_execMakeLoadoutsActive_Parms MakeLoadoutsActive_Parms;

	this->ProcessEvent ( pFnMakeLoadoutsActive, &MakeLoadoutsActive_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.ApplyWeaponLoadout
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::ApplyWeaponLoadout ( )
{
	static UFunction* pFnApplyWeaponLoadout = NULL;

	if ( ! pFnApplyWeaponLoadout )
		pFnApplyWeaponLoadout = (UFunction*) UObject::GObjObjects()->Data[ 74586 ];

	USFXGUI_MPWeaponSelection_DLC_execApplyWeaponLoadout_Parms ApplyWeaponLoadout_Parms;

	this->ProcessEvent ( pFnApplyWeaponLoadout, &ApplyWeaponLoadout_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.ShowMinimumRequiredWeaponsMessage
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::ShowMinimumRequiredWeaponsMessage ( )
{
	static UFunction* pFnShowMinimumRequiredWeaponsMessage = NULL;

	if ( ! pFnShowMinimumRequiredWeaponsMessage )
		pFnShowMinimumRequiredWeaponsMessage = (UFunction*) UObject::GObjObjects()->Data[ 74585 ];

	USFXGUI_MPWeaponSelection_DLC_execShowMinimumRequiredWeaponsMessage_Parms ShowMinimumRequiredWeaponsMessage_Parms;

	this->ProcessEvent ( pFnShowMinimumRequiredWeaponsMessage, &ShowMinimumRequiredWeaponsMessage_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.Exit
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::Exit ( )
{
	static UFunction* pFnExit = NULL;

	if ( ! pFnExit )
		pFnExit = (UFunction*) UObject::GObjObjects()->Data[ 74583 ];

	USFXGUI_MPWeaponSelection_DLC_execExit_Parms Exit_Parms;

	this->ProcessEvent ( pFnExit, &Exit_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.CountCurrentPawnWeapons
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXGUI_MPWeaponSelection_DLC::CountCurrentPawnWeapons ( )
{
	static UFunction* pFnCountCurrentPawnWeapons = NULL;

	if ( ! pFnCountCurrentPawnWeapons )
		pFnCountCurrentPawnWeapons = (UFunction*) UObject::GObjObjects()->Data[ 74579 ];

	USFXGUI_MPWeaponSelection_DLC_execCountCurrentPawnWeapons_Parms CountCurrentPawnWeapons_Parms;

	this->ProcessEvent ( pFnCountCurrentPawnWeapons, &CountCurrentPawnWeapons_Parms, NULL );

	return CountCurrentPawnWeapons_Parms.ReturnValue;
};

// Function SFXGame.sfxgui_weaponselection.CurrentPawnHasWeapon
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPWeaponSelection_DLC::CurrentPawnHasWeapon ( )
{
	static UFunction* pFnCurrentPawnHasWeapon = NULL;

	if ( ! pFnCurrentPawnHasWeapon )
		pFnCurrentPawnHasWeapon = (UFunction*) UObject::GObjObjects()->Data[ 74577 ];

	USFXGUI_MPWeaponSelection_DLC_execCurrentPawnHasWeapon_Parms CurrentPawnHasWeapon_Parms;

	this->ProcessEvent ( pFnCurrentPawnHasWeapon, &CurrentPawnHasWeapon_Parms, NULL );

	return CurrentPawnHasWeapon_Parms.ReturnValue;
};

// Function SFXGame.sfxgui_weaponselection.GetCurrentHenchTag
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName USFXGUI_MPWeaponSelection_DLC::GetCurrentHenchTag ( )
{
	static UFunction* pFnGetCurrentHenchTag = NULL;

	if ( ! pFnGetCurrentHenchTag )
		pFnGetCurrentHenchTag = (UFunction*) UObject::GObjObjects()->Data[ 74574 ];

	USFXGUI_MPWeaponSelection_DLC_execGetCurrentHenchTag_Parms GetCurrentHenchTag_Parms;

	this->ProcessEvent ( pFnGetCurrentHenchTag, &GetCurrentHenchTag_Parms, NULL );

	return GetCurrentHenchTag_Parms.ReturnValue;
};

// Function SFXGame.sfxgui_weaponselection.GetBioPawn
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class ABioPawn*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nPawnID                        ( CPF_Parm )

class ABioPawn* USFXGUI_MPWeaponSelection_DLC::GetBioPawn ( int nPawnID )
{
	static UFunction* pFnGetBioPawn = NULL;

	if ( ! pFnGetBioPawn )
		pFnGetBioPawn = (UFunction*) UObject::GObjObjects()->Data[ 74486 ];

	USFXGUI_MPWeaponSelection_DLC_execGetBioPawn_Parms GetBioPawn_Parms;
	GetBioPawn_Parms.nPawnID = nPawnID;

	this->ProcessEvent ( pFnGetBioPawn, &GetBioPawn_Parms, NULL );

	return GetBioPawn_Parms.ReturnValue;
};

// Function SFXGame.sfxgui_weaponselection.CanPawnUseWeaponGroup
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nPawnID                        ( CPF_Parm )
// unsigned char                  eWeaponGroupID                 ( CPF_Parm )

bool USFXGUI_MPWeaponSelection_DLC::CanPawnUseWeaponGroup ( int nPawnID, unsigned char eWeaponGroupID )
{
	static UFunction* pFnCanPawnUseWeaponGroup = NULL;

	if ( ! pFnCanPawnUseWeaponGroup )
		pFnCanPawnUseWeaponGroup = (UFunction*) UObject::GObjObjects()->Data[ 74557 ];

	USFXGUI_MPWeaponSelection_DLC_execCanPawnUseWeaponGroup_Parms CanPawnUseWeaponGroup_Parms;
	CanPawnUseWeaponGroup_Parms.nPawnID = nPawnID;
	CanPawnUseWeaponGroup_Parms.eWeaponGroupID = eWeaponGroupID;

	this->ProcessEvent ( pFnCanPawnUseWeaponGroup, &CanPawnUseWeaponGroup_Parms, NULL );

	return CanPawnUseWeaponGroup_Parms.ReturnValue;
};

// Function SFXGame.sfxgui_weaponselection.WeaponTypeToSlotIndex
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eWeaponType                    ( CPF_Parm )

int USFXGUI_MPWeaponSelection_DLC::WeaponTypeToSlotIndex ( unsigned char eWeaponType )
{
	static UFunction* pFnWeaponTypeToSlotIndex = NULL;

	if ( ! pFnWeaponTypeToSlotIndex )
		pFnWeaponTypeToSlotIndex = (UFunction*) UObject::GObjObjects()->Data[ 74502 ];

	USFXGUI_MPWeaponSelection_DLC_execWeaponTypeToSlotIndex_Parms WeaponTypeToSlotIndex_Parms;
	WeaponTypeToSlotIndex_Parms.eWeaponType = eWeaponType;

	this->ProcessEvent ( pFnWeaponTypeToSlotIndex, &WeaponTypeToSlotIndex_Parms, NULL );

	return WeaponTypeToSlotIndex_Parms.ReturnValue;
};

// Function SFXGame.sfxgui_weaponselection.RefreshLoadoutWeaponDisplay
// [0x00820003] ( FUNC_Final )
// Parameters infos:
// unsigned char                  eWeaponType                    ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::RefreshLoadoutWeaponDisplay ( unsigned char eWeaponType )
{
	static UFunction* pFnRefreshLoadoutWeaponDisplay = NULL;

	if ( ! pFnRefreshLoadoutWeaponDisplay )
		pFnRefreshLoadoutWeaponDisplay = (UFunction*) UObject::GObjObjects()->Data[ 74505 ];

	USFXGUI_MPWeaponSelection_DLC_execRefreshLoadoutWeaponDisplay_Parms RefreshLoadoutWeaponDisplay_Parms;
	RefreshLoadoutWeaponDisplay_Parms.eWeaponType = eWeaponType;

	this->ProcessEvent ( pFnRefreshLoadoutWeaponDisplay, &RefreshLoadoutWeaponDisplay_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.BuildWeaponLoadout
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            nPawnID                        ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::BuildWeaponLoadout ( int nPawnID )
{
	static UFunction* pFnBuildWeaponLoadout = NULL;

	if ( ! pFnBuildWeaponLoadout )
		pFnBuildWeaponLoadout = (UFunction*) UObject::GObjObjects()->Data[ 74500 ];

	USFXGUI_MPWeaponSelection_DLC_execBuildWeaponLoadout_Parms BuildWeaponLoadout_Parms;
	BuildWeaponLoadout_Parms.nPawnID = nPawnID;

	this->ProcessEvent ( pFnBuildWeaponLoadout, &BuildWeaponLoadout_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.UpdateUIWorldPawnPosition
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::UpdateUIWorldPawnPosition ( )
{
	static UFunction* pFnUpdateUIWorldPawnPosition = NULL;

	if ( ! pFnUpdateUIWorldPawnPosition )
		pFnUpdateUIWorldPawnPosition = (UFunction*) UObject::GObjObjects()->Data[ 47358 ];

	USFXGUI_MPWeaponSelection_DLC_execUpdateUIWorldPawnPosition_Parms UpdateUIWorldPawnPosition_Parms;

	this->ProcessEvent ( pFnUpdateUIWorldPawnPosition, &UpdateUIWorldPawnPosition_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.CleanupUIWorld
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::CleanupUIWorld ( )
{
	static UFunction* pFnCleanupUIWorld = NULL;

	if ( ! pFnCleanupUIWorld )
		pFnCleanupUIWorld = (UFunction*) UObject::GObjObjects()->Data[ 74469 ];

	USFXGUI_MPWeaponSelection_DLC_execCleanupUIWorld_Parms CleanupUIWorld_Parms;

	this->ProcessEvent ( pFnCleanupUIWorld, &CleanupUIWorld_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.ApplyPlayerPawnCustomization
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UObject*                 InData                         ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::ApplyPlayerPawnCustomization ( class UObject* InData )
{
	static UFunction* pFnApplyPlayerPawnCustomization = NULL;

	if ( ! pFnApplyPlayerPawnCustomization )
		pFnApplyPlayerPawnCustomization = (UFunction*) UObject::GObjObjects()->Data[ 74517 ];

	USFXGUI_MPWeaponSelection_DLC_execApplyPlayerPawnCustomization_Parms ApplyPlayerPawnCustomization_Parms;
	ApplyPlayerPawnCustomization_Parms.InData = InData;

	this->ProcessEvent ( pFnApplyPlayerPawnCustomization, &ApplyPlayerPawnCustomization_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.SetupUIWorld
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::SetupUIWorld ( )
{
	static UFunction* pFnSetupUIWorld = NULL;

	if ( ! pFnSetupUIWorld )
		pFnSetupUIWorld = (UFunction*) UObject::GObjObjects()->Data[ 74493 ];

	USFXGUI_MPWeaponSelection_DLC_execSetupUIWorld_Parms SetupUIWorld_Parms;

	this->ProcessEvent ( pFnSetupUIWorld, &SetupUIWorld_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.UpdateHenchmenDisplay
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::UpdateHenchmenDisplay ( )
{
	static UFunction* pFnUpdateHenchmenDisplay = NULL;

	if ( ! pFnUpdateHenchmenDisplay )
		pFnUpdateHenchmenDisplay = (UFunction*) UObject::GObjObjects()->Data[ 74492 ];

	USFXGUI_MPWeaponSelection_DLC_execUpdateHenchmenDisplay_Parms UpdateHenchmenDisplay_Parms;

	this->ProcessEvent ( pFnUpdateHenchmenDisplay, &UpdateHenchmenDisplay_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.SetCurrentPawnID
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            nID                            ( CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::SetCurrentPawnID ( int nID )
{
	static UFunction* pFnSetCurrentPawnID = NULL;

	if ( ! pFnSetCurrentPawnID )
		pFnSetCurrentPawnID = (UFunction*) UObject::GObjObjects()->Data[ 74503 ];

	USFXGUI_MPWeaponSelection_DLC_execSetCurrentPawnID_Parms SetCurrentPawnID_Parms;
	SetCurrentPawnID_Parms.nID = nID;

	this->ProcessEvent ( pFnSetCurrentPawnID, &SetCurrentPawnID_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.OnWeaponUIDataLoaded
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::OnWeaponUIDataLoaded ( )
{
	static UFunction* pFnOnWeaponUIDataLoaded = NULL;

	if ( ! pFnOnWeaponUIDataLoaded )
		pFnOnWeaponUIDataLoaded = (UFunction*) UObject::GObjObjects()->Data[ 74499 ];

	USFXGUI_MPWeaponSelection_DLC_execOnWeaponUIDataLoaded_Parms OnWeaponUIDataLoaded_Parms;

	this->ProcessEvent ( pFnOnWeaponUIDataLoaded, &OnWeaponUIDataLoaded_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.InitializeTeamSelectOverlay
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::InitializeTeamSelectOverlay ( )
{
	static UFunction* pFnInitializeTeamSelectOverlay = NULL;

	if ( ! pFnInitializeTeamSelectOverlay )
		pFnInitializeTeamSelectOverlay = (UFunction*) UObject::GObjObjects()->Data[ 74491 ];

	USFXGUI_MPWeaponSelection_DLC_execInitializeTeamSelectOverlay_Parms InitializeTeamSelectOverlay_Parms;

	this->ProcessEvent ( pFnInitializeTeamSelectOverlay, &InitializeTeamSelectOverlay_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.PreLoadData
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FScriptDelegate         doneCallback                   ( CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPWeaponSelection_DLC::PreLoadData ( struct FScriptDelegate doneCallback )
{
	static UFunction* pFnPreLoadData = NULL;

	if ( ! pFnPreLoadData )
		pFnPreLoadData = (UFunction*) UObject::GObjObjects()->Data[ 74494 ];

	USFXGUI_MPWeaponSelection_DLC_execPreLoadData_Parms PreLoadData_Parms;
	memcpy ( &PreLoadData_Parms.doneCallback, &doneCallback, 0xC );

	this->ProcessEvent ( pFnPreLoadData, &PreLoadData_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.Launch
// [0x00024003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bPauseGame                     ( CPF_OptionalParm | CPF_Parm )

void USFXGUI_MPWeaponSelection_DLC::Launch ( unsigned long bPauseGame )
{
	static UFunction* pFnLaunch = NULL;

	if ( ! pFnLaunch )
		pFnLaunch = (UFunction*) UObject::GObjObjects()->Data[ 74467 ];

	USFXGUI_MPWeaponSelection_DLC_execLaunch_Parms Launch_Parms;
	Launch_Parms.bPauseGame = bPauseGame;

	this->ProcessEvent ( pFnLaunch, &Launch_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.IsMultiPlayerCharacter
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPWeaponSelection_DLC::IsMultiPlayerCharacter ( )
{
	static UFunction* pFnIsMultiPlayerCharacter = NULL;

	if ( ! pFnIsMultiPlayerCharacter )
		pFnIsMultiPlayerCharacter = (UFunction*) UObject::GObjObjects()->Data[ 74473 ];

	USFXGUI_MPWeaponSelection_DLC_execIsMultiPlayerCharacter_Parms IsMultiPlayerCharacter_Parms;

	this->ProcessEvent ( pFnIsMultiPlayerCharacter, &IsMultiPlayerCharacter_Parms, NULL );

	return IsMultiPlayerCharacter_Parms.ReturnValue;
};

// Function SFXGame.sfxgui_weaponselection.DisplayNoEngineMessage
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::DisplayNoEngineMessage ( )
{
	static UFunction* pFnDisplayNoEngineMessage = NULL;

	if ( ! pFnDisplayNoEngineMessage )
		pFnDisplayNoEngineMessage = (UFunction*) UObject::GObjObjects()->Data[ 74465 ];

	USFXGUI_MPWeaponSelection_DLC_execDisplayNoEngineMessage_Parms DisplayNoEngineMessage_Parms;

	this->ProcessEvent ( pFnDisplayNoEngineMessage, &DisplayNoEngineMessage_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.OnClose
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::eventOnClose ( )
{
	static UFunction* pFnOnClose = NULL;

	if ( ! pFnOnClose )
		pFnOnClose = (UFunction*) UObject::GObjObjects()->Data[ 74468 ];

	USFXGUI_MPWeaponSelection_DLC_eventOnClose_Parms OnClose_Parms;

	this->ProcessEvent ( pFnOnClose, &OnClose_Parms, NULL );
};

// Function SFXGame.sfxgui_weaponselection.OnStart
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXGUI_MPWeaponSelection_DLC::eventOnStart ( )
{
	static UFunction* pFnOnStart = NULL;

	if ( ! pFnOnStart )
		pFnOnStart = (UFunction*) UObject::GObjObjects()->Data[ 74464 ];

	USFXGUI_MPWeaponSelection_DLC_eventOnStart_Parms OnStart_Parms;

	this->ProcessEvent ( pFnOnStart, &OnStart_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.AS_SetDetails
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// struct FString                 sInfo                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sImgResource                   ( CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPChallenges::eventAS_SetDetails ( struct FString sInfo, struct FString sImgResource )
{
	static UFunction* pFnAS_SetDetails = NULL;

	if ( ! pFnAS_SetDetails )
		pFnAS_SetDetails = (UFunction*) UObject::GObjObjects()->Data[ 125186 ];

	USFXGUI_MPChallenges_eventAS_SetDetails_Parms AS_SetDetails_Parms;
	memcpy ( &AS_SetDetails_Parms.sInfo, &sInfo, 0xC );
	memcpy ( &AS_SetDetails_Parms.sImgResource, &sImgResource, 0xC );

	this->ProcessEvent ( pFnAS_SetDetails, &AS_SetDetails_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.AS_EndDisplayList
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// int                            nLastEntryID                   ( CPF_Parm )

void USFXGUI_MPChallenges::eventAS_EndDisplayList ( int nLastEntryID )
{
	static UFunction* pFnAS_EndDisplayList = NULL;

	if ( ! pFnAS_EndDisplayList )
		pFnAS_EndDisplayList = (UFunction*) UObject::GObjObjects()->Data[ 125141 ];

	USFXGUI_MPChallenges_eventAS_EndDisplayList_Parms AS_EndDisplayList_Parms;
	AS_EndDisplayList_Parms.nLastEntryID = nLastEntryID;

	this->ProcessEvent ( pFnAS_EndDisplayList, &AS_EndDisplayList_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.AS_SetSubItems
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// TArray< struct FChallengeListItem > aSubItems                      ( CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPChallenges::eventAS_SetSubItems ( TArray< struct FChallengeListItem > aSubItems )
{
	static UFunction* pFnAS_SetSubItems = NULL;

	if ( ! pFnAS_SetSubItems )
		pFnAS_SetSubItems = (UFunction*) UObject::GObjObjects()->Data[ 125158 ];

	USFXGUI_MPChallenges_eventAS_SetSubItems_Parms AS_SetSubItems_Parms;
	memcpy ( &AS_SetSubItems_Parms.aSubItems, &aSubItems, 0xC );

	this->ProcessEvent ( pFnAS_SetSubItems, &AS_SetSubItems_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.AS_AddListItems
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// TArray< struct FChallengeListItem > aItems                         ( CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPChallenges::eventAS_AddListItems ( TArray< struct FChallengeListItem > aItems )
{
	static UFunction* pFnAS_AddListItems = NULL;

	if ( ! pFnAS_AddListItems )
		pFnAS_AddListItems = (UFunction*) UObject::GObjObjects()->Data[ 125140 ];

	USFXGUI_MPChallenges_eventAS_AddListItems_Parms AS_AddListItems_Parms;
	memcpy ( &AS_AddListItems_Parms.aItems, &aItems, 0xC );

	this->ProcessEvent ( pFnAS_AddListItems, &AS_AddListItems_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.AS_StartDisplayList
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// struct FString                 sLabel                         ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sTitle                         ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// int                            nListLen                       ( CPF_Parm )

void USFXGUI_MPChallenges::eventAS_StartDisplayList ( struct FString sLabel, struct FString sTitle, int nListLen )
{
	static UFunction* pFnAS_StartDisplayList = NULL;

	if ( ! pFnAS_StartDisplayList )
		pFnAS_StartDisplayList = (UFunction*) UObject::GObjObjects()->Data[ 125139 ];

	USFXGUI_MPChallenges_eventAS_StartDisplayList_Parms AS_StartDisplayList_Parms;
	memcpy ( &AS_StartDisplayList_Parms.sLabel, &sLabel, 0xC );
	memcpy ( &AS_StartDisplayList_Parms.sTitle, &sTitle, 0xC );
	AS_StartDisplayList_Parms.nListLen = nListLen;

	this->ProcessEvent ( pFnAS_StartDisplayList, &AS_StartDisplayList_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.AS_SetupVisualState
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// int                            nForceTab                      ( CPF_Parm )

void USFXGUI_MPChallenges::eventAS_SetupVisualState ( int nForceTab )
{
	static UFunction* pFnAS_SetupVisualState = NULL;

	if ( ! pFnAS_SetupVisualState )
		pFnAS_SetupVisualState = (UFunction*) UObject::GObjObjects()->Data[ 125125 ];

	USFXGUI_MPChallenges_eventAS_SetupVisualState_Parms AS_SetupVisualState_Parms;
	AS_SetupVisualState_Parms.nForceTab = nForceTab;

	this->ProcessEvent ( pFnAS_SetupVisualState, &AS_SetupVisualState_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.AS_ScrollDetailsAnalog
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// float                          fScroll                        ( CPF_Parm )

void USFXGUI_MPChallenges::eventAS_ScrollDetailsAnalog ( float fScroll )
{
	static UFunction* pFnAS_ScrollDetailsAnalog = NULL;

	if ( ! pFnAS_ScrollDetailsAnalog )
		pFnAS_ScrollDetailsAnalog = (UFunction*) UObject::GObjObjects()->Data[ 125194 ];

	USFXGUI_MPChallenges_eventAS_ScrollDetailsAnalog_Parms AS_ScrollDetailsAnalog_Parms;
	AS_ScrollDetailsAnalog_Parms.fScroll = fScroll;

	this->ProcessEvent ( pFnAS_ScrollDetailsAnalog, &AS_ScrollDetailsAnalog_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.AS_SetUnreadItemCounts
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// int                            nQuestPrimary                  ( CPF_Parm )
// int                            nQuestSecondary                ( CPF_Parm )
// int                            nCodexPrimary                  ( CPF_Parm )
// int                            nCodexSecondary                ( CPF_Parm )

void USFXGUI_MPChallenges::eventAS_SetUnreadItemCounts ( int nQuestPrimary, int nQuestSecondary, int nCodexPrimary, int nCodexSecondary )
{
	static UFunction* pFnAS_SetUnreadItemCounts = NULL;

	if ( ! pFnAS_SetUnreadItemCounts )
		pFnAS_SetUnreadItemCounts = (UFunction*) UObject::GObjObjects()->Data[ 125126 ];

	USFXGUI_MPChallenges_eventAS_SetUnreadItemCounts_Parms AS_SetUnreadItemCounts_Parms;
	AS_SetUnreadItemCounts_Parms.nQuestPrimary = nQuestPrimary;
	AS_SetUnreadItemCounts_Parms.nQuestSecondary = nQuestSecondary;
	AS_SetUnreadItemCounts_Parms.nCodexPrimary = nCodexPrimary;
	AS_SetUnreadItemCounts_Parms.nCodexSecondary = nCodexSecondary;

	this->ProcessEvent ( pFnAS_SetUnreadItemCounts, &AS_SetUnreadItemCounts_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.IsAccomplishmentRepeatable
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            AccomplishmentDataIndex        ( CPF_Parm )

bool USFXGUI_MPChallenges::IsAccomplishmentRepeatable ( int AccomplishmentDataIndex )
{
	static UFunction* pFnIsAccomplishmentRepeatable = NULL;

	if ( ! pFnIsAccomplishmentRepeatable )
		pFnIsAccomplishmentRepeatable = (UFunction*) UObject::GObjObjects()->Data[ 125087 ];

	USFXGUI_MPChallenges_execIsAccomplishmentRepeatable_Parms IsAccomplishmentRepeatable_Parms;
	IsAccomplishmentRepeatable_Parms.AccomplishmentDataIndex = AccomplishmentDataIndex;

	this->ProcessEvent ( pFnIsAccomplishmentRepeatable, &IsAccomplishmentRepeatable_Parms, NULL );

	return IsAccomplishmentRepeatable_Parms.ReturnValue;
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.SetAccomplishmentRepeatable
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// TArray< unsigned long >        NewAccomplishmentDataRepeatable ( CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPChallenges::SetAccomplishmentRepeatable ( TArray< unsigned long > NewAccomplishmentDataRepeatable )
{
	static UFunction* pFnSetAccomplishmentRepeatable = NULL;

	if ( ! pFnSetAccomplishmentRepeatable )
		pFnSetAccomplishmentRepeatable = (UFunction*) UObject::GObjObjects()->Data[ 125195 ];

	USFXGUI_MPChallenges_execSetAccomplishmentRepeatable_Parms SetAccomplishmentRepeatable_Parms;
	memcpy ( &SetAccomplishmentRepeatable_Parms.NewAccomplishmentDataRepeatable, &NewAccomplishmentDataRepeatable, 0xC );

	this->ProcessEvent ( pFnSetAccomplishmentRepeatable, &SetAccomplishmentRepeatable_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.HandleInputEvent
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Event                          ( CPF_Parm )
// float                          fValue                         ( CPF_OptionalParm | CPF_Parm )

bool USFXGUI_MPChallenges::eventHandleInputEvent ( unsigned char Event, float fValue )
{
	static UFunction* pFnHandleInputEvent = NULL;

	if ( ! pFnHandleInputEvent )
		pFnHandleInputEvent = (UFunction*) UObject::GObjObjects()->Data[ 125190 ];

	USFXGUI_MPChallenges_eventHandleInputEvent_Parms HandleInputEvent_Parms;
	HandleInputEvent_Parms.Event = Event;
	HandleInputEvent_Parms.fValue = fValue;

	this->ProcessEvent ( pFnHandleInputEvent, &HandleInputEvent_Parms, NULL );

	return HandleInputEvent_Parms.ReturnValue;
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ReturnToBrowser
// [0x00020002] 
// Parameters infos:

void USFXGUI_MPChallenges::ReturnToBrowser ( )
{
	static UFunction* pFnReturnToBrowser = NULL;

	if ( ! pFnReturnToBrowser )
		pFnReturnToBrowser = (UFunction*) UObject::GObjObjects()->Data[ 125189 ];

	USFXGUI_MPChallenges_execReturnToBrowser_Parms ReturnToBrowser_Parms;

	this->ProcessEvent ( pFnReturnToBrowser, &ReturnToBrowser_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.OnRequestImageComplete
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// struct FSFXOnlineImageRequest  ImageRequestResult             ( CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPChallenges::OnRequestImageComplete ( struct FSFXOnlineImageRequest ImageRequestResult )
{
	static UFunction* pFnOnRequestImageComplete = NULL;

	if ( ! pFnOnRequestImageComplete )
		pFnOnRequestImageComplete = (UFunction*) UObject::GObjObjects()->Data[ 125187 ];

	USFXGUI_MPChallenges_execOnRequestImageComplete_Parms OnRequestImageComplete_Parms;
	memcpy ( &OnRequestImageComplete_Parms.ImageRequestResult, &ImageRequestResult, 0x18 );

	this->ProcessEvent ( pFnOnRequestImageComplete, &OnRequestImageComplete_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.SetDetails
// [0x00024003] ( FUNC_Final )
// Parameters infos:
// struct FString                 sBody                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sImageResourceString           ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sImageAssetPath                ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPChallenges::SetDetails ( struct FString sBody, struct FString sImageResourceString, struct FString sImageAssetPath )
{
	static UFunction* pFnSetDetails = NULL;

	if ( ! pFnSetDetails )
		pFnSetDetails = (UFunction*) UObject::GObjObjects()->Data[ 125146 ];

	USFXGUI_MPChallenges_execSetDetails_Parms SetDetails_Parms;
	memcpy ( &SetDetails_Parms.sBody, &sBody, 0xC );
	memcpy ( &SetDetails_Parms.sImageResourceString, &sImageResourceString, 0xC );
	memcpy ( &SetDetails_Parms.sImageAssetPath, &sImageAssetPath, 0xC );

	this->ProcessEvent ( pFnSetDetails, &SetDetails_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.SetRewardButtonEnabled
// [0x00020002] 
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void USFXGUI_MPChallenges::SetRewardButtonEnabled ( unsigned long bEnabled )
{
	static UFunction* pFnSetRewardButtonEnabled = NULL;

	if ( ! pFnSetRewardButtonEnabled )
		pFnSetRewardButtonEnabled = (UFunction*) UObject::GObjObjects()->Data[ 125178 ];

	USFXGUI_MPChallenges_execSetRewardButtonEnabled_Parms SetRewardButtonEnabled_Parms;
	SetRewardButtonEnabled_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnSetRewardButtonEnabled, &SetRewardButtonEnabled_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.SetRewardButtonVisibility
// [0x00020002] 
// Parameters infos:
// unsigned long                  bVisible                       ( CPF_Parm )

void USFXGUI_MPChallenges::SetRewardButtonVisibility ( unsigned long bVisible )
{
	static UFunction* pFnSetRewardButtonVisibility = NULL;

	if ( ! pFnSetRewardButtonVisibility )
		pFnSetRewardButtonVisibility = (UFunction*) UObject::GObjObjects()->Data[ 125175 ];

	USFXGUI_MPChallenges_execSetRewardButtonVisibility_Parms SetRewardButtonVisibility_Parms;
	SetRewardButtonVisibility_Parms.bVisible = bVisible;

	this->ProcessEvent ( pFnSetRewardButtonVisibility, &SetRewardButtonVisibility_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.DoNothingFunction
// [0x00020001] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPChallenges::DoNothingFunction ( )
{
	static UFunction* pFnDoNothingFunction = NULL;

	if ( ! pFnDoNothingFunction )
		pFnDoNothingFunction = (UFunction*) UObject::GObjObjects()->Data[ 125174 ];

	USFXGUI_MPChallenges_execDoNothingFunction_Parms DoNothingFunction_Parms;

	this->ProcessEvent ( pFnDoNothingFunction, &DoNothingFunction_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.HandleRewardSelection
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPChallenges::HandleRewardSelection ( )
{
	static UFunction* pFnHandleRewardSelection = NULL;

	if ( ! pFnHandleRewardSelection )
		pFnHandleRewardSelection = (UFunction*) UObject::GObjObjects()->Data[ 125165 ];

	USFXGUI_MPChallenges_execHandleRewardSelection_Parms HandleRewardSelection_Parms;

	this->ProcessEvent ( pFnHandleRewardSelection, &HandleRewardSelection_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.FocusOnSubentry
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// TArray< struct FChallengeDisplayItem > aChallenges                    ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// int                            nIndex                         ( CPF_Parm )

void USFXGUI_MPChallenges::FocusOnSubentry ( TArray< struct FChallengeDisplayItem > aChallenges, int nIndex )
{
	static UFunction* pFnFocusOnSubentry = NULL;

	if ( ! pFnFocusOnSubentry )
		pFnFocusOnSubentry = (UFunction*) UObject::GObjObjects()->Data[ 125161 ];

	USFXGUI_MPChallenges_execFocusOnSubentry_Parms FocusOnSubentry_Parms;
	memcpy ( &FocusOnSubentry_Parms.aChallenges, &aChallenges, 0xC );
	FocusOnSubentry_Parms.nIndex = nIndex;

	this->ProcessEvent ( pFnFocusOnSubentry, &FocusOnSubentry_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ExFocusOnSubentry
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            nChallengeIndex                ( CPF_Parm )

void USFXGUI_MPChallenges::ExFocusOnSubentry ( int nChallengeIndex )
{
	static UFunction* pFnExFocusOnSubentry = NULL;

	if ( ! pFnExFocusOnSubentry )
		pFnExFocusOnSubentry = (UFunction*) UObject::GObjObjects()->Data[ 125159 ];

	USFXGUI_MPChallenges_execExFocusOnSubentry_Parms ExFocusOnSubentry_Parms;
	ExFocusOnSubentry_Parms.nChallengeIndex = nChallengeIndex;

	this->ProcessEvent ( pFnExFocusOnSubentry, &ExFocusOnSubentry_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ExpandListEntry
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// TArray< struct FChallengeDisplayItem > aChallenges                    ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPChallenges::ExpandListEntry ( TArray< struct FChallengeDisplayItem > aChallenges )
{
	static UFunction* pFnExpandListEntry = NULL;

	if ( ! pFnExpandListEntry )
		pFnExpandListEntry = (UFunction*) UObject::GObjObjects()->Data[ 125148 ];

	USFXGUI_MPChallenges_execExpandListEntry_Parms ExpandListEntry_Parms;
	memcpy ( &ExpandListEntry_Parms.aChallenges, &aChallenges, 0xC );

	this->ProcessEvent ( pFnExpandListEntry, &ExpandListEntry_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ExExpandEntry
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPChallenges::ExExpandEntry ( )
{
	static UFunction* pFnExExpandEntry = NULL;

	if ( ! pFnExExpandEntry )
		pFnExExpandEntry = (UFunction*) UObject::GObjObjects()->Data[ 125147 ];

	USFXGUI_MPChallenges_execExExpandEntry_Parms ExExpandEntry_Parms;

	this->ProcessEvent ( pFnExExpandEntry, &ExExpandEntry_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ExSetLastEntry
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            nListIndex                     ( CPF_Parm )

void USFXGUI_MPChallenges::ExSetLastEntry ( int nListIndex )
{
	static UFunction* pFnExSetLastEntry = NULL;

	if ( ! pFnExSetLastEntry )
		pFnExSetLastEntry = (UFunction*) UObject::GObjObjects()->Data[ 125142 ];

	USFXGUI_MPChallenges_execExSetLastEntry_Parms ExSetLastEntry_Parms;
	ExSetLastEntry_Parms.nListIndex = nListIndex;

	this->ProcessEvent ( pFnExSetLastEntry, &ExSetLastEntry_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.DisplayCategoryChallenges
// [0x00024003] ( FUNC_Final )
// Parameters infos:
// TArray< struct FChallengeDisplayItem > aChallenges                    ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// int                            nSelectChallengeId             ( CPF_OptionalParm | CPF_Parm )

void USFXGUI_MPChallenges::DisplayCategoryChallenges ( TArray< struct FChallengeDisplayItem > aChallenges, int nSelectChallengeId )
{
	static UFunction* pFnDisplayCategoryChallenges = NULL;

	if ( ! pFnDisplayCategoryChallenges )
		pFnDisplayCategoryChallenges = (UFunction*) UObject::GObjObjects()->Data[ 125130 ];

	USFXGUI_MPChallenges_execDisplayCategoryChallenges_Parms DisplayCategoryChallenges_Parms;
	memcpy ( &DisplayCategoryChallenges_Parms.aChallenges, &aChallenges, 0xC );
	DisplayCategoryChallenges_Parms.nSelectChallengeId = nSelectChallengeId;

	this->ProcessEvent ( pFnDisplayCategoryChallenges, &DisplayCategoryChallenges_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ExFocusOnTab
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            nTab                           ( CPF_Parm )

void USFXGUI_MPChallenges::ExFocusOnTab ( int nTab )
{
	static UFunction* pFnExFocusOnTab = NULL;

	if ( ! pFnExFocusOnTab )
		pFnExFocusOnTab = (UFunction*) UObject::GObjObjects()->Data[ 125127 ];

	USFXGUI_MPChallenges_execExFocusOnTab_Parms ExFocusOnTab_Parms;
	ExFocusOnTab_Parms.nTab = nTab;

	this->ProcessEvent ( pFnExFocusOnTab, &ExFocusOnTab_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ExInitializeJournal
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPChallenges::ExInitializeJournal ( )
{
	static UFunction* pFnExInitializeJournal = NULL;

	if ( ! pFnExInitializeJournal )
		pFnExInitializeJournal = (UFunction*) UObject::GObjObjects()->Data[ 125124 ];

	USFXGUI_MPChallenges_execExInitializeJournal_Parms ExInitializeJournal_Parms;

	this->ProcessEvent ( pFnExInitializeJournal, &ExInitializeJournal_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.BuildPercentCompletion_Helper
// [0x00C40003] ( FUNC_Final )
// Parameters infos:
// int                            nCurrentChallengeIndex         ( CPF_Parm )
// class USFXAccomplishmentManager* AccomplishmentManager          ( CPF_Parm )
// TArray< float >                PercentCompletion              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FChallengeDisplayItem > aChallenges                    ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXGUI_MPChallenges::BuildPercentCompletion_Helper ( int nCurrentChallengeIndex, class USFXAccomplishmentManager* AccomplishmentManager, TArray< float >* PercentCompletion, TArray< struct FChallengeDisplayItem >* aChallenges )
{
	static UFunction* pFnBuildPercentCompletion_Helper = NULL;

	if ( ! pFnBuildPercentCompletion_Helper )
		pFnBuildPercentCompletion_Helper = (UFunction*) UObject::GObjObjects()->Data[ 125099 ];

	USFXGUI_MPChallenges_execBuildPercentCompletion_Helper_Parms BuildPercentCompletion_Helper_Parms;
	BuildPercentCompletion_Helper_Parms.nCurrentChallengeIndex = nCurrentChallengeIndex;
	BuildPercentCompletion_Helper_Parms.AccomplishmentManager = AccomplishmentManager;

	this->ProcessEvent ( pFnBuildPercentCompletion_Helper, &BuildPercentCompletion_Helper_Parms, NULL );

	if ( PercentCompletion )
		memcpy ( PercentCompletion, &BuildPercentCompletion_Helper_Parms.PercentCompletion, 0xC );

	if ( aChallenges )
		memcpy ( aChallenges, &BuildPercentCompletion_Helper_Parms.aChallenges, 0xC );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.BuildPercentCompletion
// [0x00420003] ( FUNC_Final )
// Parameters infos:
// class USFXAccomplishmentManager* AccomplishmentManager          ( CPF_Parm )
// TArray< float >                PercentCompletion              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FChallengeDisplayItem > aChallenges                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXGUI_MPChallenges::BuildPercentCompletion ( class USFXAccomplishmentManager* AccomplishmentManager, TArray< float >* PercentCompletion, TArray< struct FChallengeDisplayItem >* aChallenges )
{
	static UFunction* pFnBuildPercentCompletion = NULL;

	if ( ! pFnBuildPercentCompletion )
		pFnBuildPercentCompletion = (UFunction*) UObject::GObjObjects()->Data[ 125060 ];

	USFXGUI_MPChallenges_execBuildPercentCompletion_Parms BuildPercentCompletion_Parms;
	BuildPercentCompletion_Parms.AccomplishmentManager = AccomplishmentManager;

	this->ProcessEvent ( pFnBuildPercentCompletion, &BuildPercentCompletion_Parms, NULL );

	if ( PercentCompletion )
		memcpy ( PercentCompletion, &BuildPercentCompletion_Parms.PercentCompletion, 0xC );

	if ( aChallenges )
		memcpy ( aChallenges, &BuildPercentCompletion_Parms.aChallenges, 0xC );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.BuildUIData
// [0x00C24003] ( FUNC_Final )
// Parameters infos:
// int                            nChallengeIndex                ( CPF_Parm )
// class USFXAccomplishmentManager* AccomplishmentManager          ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FChallengeDisplayItem > aChallenges                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< float >                PercentageCompletion           ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXGUI_MPChallenges::BuildUIData ( int nChallengeIndex, class USFXAccomplishmentManager* AccomplishmentManager, TArray< struct FChallengeDisplayItem >* aChallenges, TArray< float >* PercentageCompletion )
{
	static UFunction* pFnBuildUIData = NULL;

	if ( ! pFnBuildUIData )
		pFnBuildUIData = (UFunction*) UObject::GObjObjects()->Data[ 125061 ];

	USFXGUI_MPChallenges_execBuildUIData_Parms BuildUIData_Parms;
	BuildUIData_Parms.nChallengeIndex = nChallengeIndex;
	BuildUIData_Parms.AccomplishmentManager = AccomplishmentManager;

	this->ProcessEvent ( pFnBuildUIData, &BuildUIData_Parms, NULL );

	if ( aChallenges )
		memcpy ( aChallenges, &BuildUIData_Parms.aChallenges, 0xC );

	if ( PercentageCompletion )
		memcpy ( PercentageCompletion, &BuildUIData_Parms.PercentageCompletion, 0xC );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.InitializeChallengeArray
// [0x00420003] ( FUNC_Final )
// Parameters infos:
// class USFXAccomplishmentManager* AccomplishmentManager          ( CPF_Parm )
// TArray< struct FChallengeDisplayItem > aChallenges                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXGUI_MPChallenges::InitializeChallengeArray ( class USFXAccomplishmentManager* AccomplishmentManager, TArray< struct FChallengeDisplayItem >* aChallenges )
{
	static UFunction* pFnInitializeChallengeArray = NULL;

	if ( ! pFnInitializeChallengeArray )
		pFnInitializeChallengeArray = (UFunction*) UObject::GObjObjects()->Data[ 125053 ];

	USFXGUI_MPChallenges_execInitializeChallengeArray_Parms InitializeChallengeArray_Parms;
	InitializeChallengeArray_Parms.AccomplishmentManager = AccomplishmentManager;

	this->ProcessEvent ( pFnInitializeChallengeArray, &InitializeChallengeArray_Parms, NULL );

	if ( aChallenges )
		memcpy ( aChallenges, &InitializeChallengeArray_Parms.aChallenges, 0xC );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.CheckInitializeData
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPChallenges::CheckInitializeData ( )
{
	static UFunction* pFnCheckInitializeData = NULL;

	if ( ! pFnCheckInitializeData )
		pFnCheckInitializeData = (UFunction*) UObject::GObjObjects()->Data[ 125050 ];

	USFXGUI_MPChallenges_execCheckInitializeData_Parms CheckInitializeData_Parms;

	this->ProcessEvent ( pFnCheckInitializeData, &CheckInitializeData_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ChallengeSort_Parent
// [0x00120003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FChallengeDisplayItem   A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FChallengeDisplayItem   B                              ( CPF_Parm | CPF_NeedCtorLink )

int USFXGUI_MPChallenges::ChallengeSort_Parent ( struct FChallengeDisplayItem A, struct FChallengeDisplayItem B )
{
	static UFunction* pFnChallengeSort_Parent = NULL;

	if ( ! pFnChallengeSort_Parent )
		pFnChallengeSort_Parent = (UFunction*) UObject::GObjObjects()->Data[ 125046 ];

	USFXGUI_MPChallenges_execChallengeSort_Parent_Parms ChallengeSort_Parent_Parms;
	memcpy ( &ChallengeSort_Parent_Parms.A, &A, 0x6C );
	memcpy ( &ChallengeSort_Parent_Parms.B, &B, 0x6C );

	this->ProcessEvent ( pFnChallengeSort_Parent, &ChallengeSort_Parent_Parms, NULL );

	return ChallengeSort_Parent_Parms.ReturnValue;
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ChallengeSort_Rank_Index
// [0x00120003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FChallengeDisplayItem   A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FChallengeDisplayItem   B                              ( CPF_Parm | CPF_NeedCtorLink )

int USFXGUI_MPChallenges::ChallengeSort_Rank_Index ( struct FChallengeDisplayItem A, struct FChallengeDisplayItem B )
{
	static UFunction* pFnChallengeSort_Rank_Index = NULL;

	if ( ! pFnChallengeSort_Rank_Index )
		pFnChallengeSort_Rank_Index = (UFunction*) UObject::GObjObjects()->Data[ 125042 ];

	USFXGUI_MPChallenges_execChallengeSort_Rank_Index_Parms ChallengeSort_Rank_Index_Parms;
	memcpy ( &ChallengeSort_Rank_Index_Parms.A, &A, 0x6C );
	memcpy ( &ChallengeSort_Rank_Index_Parms.B, &B, 0x6C );

	this->ProcessEvent ( pFnChallengeSort_Rank_Index, &ChallengeSort_Rank_Index_Parms, NULL );

	return ChallengeSort_Rank_Index_Parms.ReturnValue;
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ConstructEnumObjects
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPChallenges::ConstructEnumObjects ( )
{
	static UFunction* pFnConstructEnumObjects = NULL;

	if ( ! pFnConstructEnumObjects )
		pFnConstructEnumObjects = (UFunction*) UObject::GObjObjects()->Data[ 125034 ];

	USFXGUI_MPChallenges_execConstructEnumObjects_Parms ConstructEnumObjects_Parms;

	this->ProcessEvent ( pFnConstructEnumObjects, &ConstructEnumObjects_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.SetupFunctionIntercepts
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPChallenges::SetupFunctionIntercepts ( )
{
	static UFunction* pFnSetupFunctionIntercepts = NULL;

	if ( ! pFnSetupFunctionIntercepts )
		pFnSetupFunctionIntercepts = (UFunction*) UObject::GObjObjects()->Data[ 125033 ];

	USFXGUI_MPChallenges_execSetupFunctionIntercepts_Parms SetupFunctionIntercepts_Parms;

	this->ProcessEvent ( pFnSetupFunctionIntercepts, &SetupFunctionIntercepts_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ResetStartupOverrides
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPChallenges::ResetStartupOverrides ( )
{
	static UFunction* pFnResetStartupOverrides = NULL;

	if ( ! pFnResetStartupOverrides )
		pFnResetStartupOverrides = (UFunction*) UObject::GObjObjects()->Data[ 125037 ];

	USFXGUI_MPChallenges_execResetStartupOverrides_Parms ResetStartupOverrides_Parms;

	this->ProcessEvent ( pFnResetStartupOverrides, &ResetStartupOverrides_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.OnClose
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXGUI_MPChallenges::eventOnClose ( )
{
	static UFunction* pFnOnClose = NULL;

	if ( ! pFnOnClose )
		pFnOnClose = (UFunction*) UObject::GObjObjects()->Data[ 125035 ];

	USFXGUI_MPChallenges_eventOnClose_Parms OnClose_Parms;

	this->ProcessEvent ( pFnOnClose, &OnClose_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.OnStart
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXGUI_MPChallenges::eventOnStart ( )
{
	static UFunction* pFnOnStart = NULL;

	if ( ! pFnOnStart )
		pFnOnStart = (UFunction*) UObject::GObjObjects()->Data[ 125032 ];

	USFXGUI_MPChallenges_eventOnStart_Parms OnStart_Parms;

	this->ProcessEvent ( pFnOnStart, &OnStart_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.IsChallengeSystemEnabled
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::IsChallengeSystemEnabled ( )
{
	static UFunction* pFnIsChallengeSystemEnabled = NULL;

	if ( ! pFnIsChallengeSystemEnabled )
		pFnIsChallengeSystemEnabled = (UFunction*) UObject::GObjObjects()->Data[ 110280 ];

	USFXGUI_MPLobby_DLC_execIsChallengeSystemEnabled_Parms IsChallengeSystemEnabled_Parms;

	this->ProcessEvent ( pFnIsChallengeSystemEnabled, &IsChallengeSystemEnabled_Parms, NULL );

	return IsChallengeSystemEnabled_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowMPChallengeScreen
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ShowMPChallengeScreen ( )
{
	static UFunction* pFnShowMPChallengeScreen = NULL;

	if ( ! pFnShowMPChallengeScreen )
		pFnShowMPChallengeScreen = (UFunction*) UObject::GObjObjects()->Data[ 110288 ];

	USFXGUI_MPLobby_DLC_execShowMPChallengeScreen_Parms ShowMPChallengeScreen_Parms;

	this->ProcessEvent ( pFnShowMPChallengeScreen, &ShowMPChallengeScreen_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.OnRequestImageComplete
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// struct FSFXOnlineImageRequest  ImageRequestResult             ( CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPLobby_DLC::OnRequestImageComplete ( struct FSFXOnlineImageRequest ImageRequestResult )
{
	static UFunction* pFnOnRequestImageComplete = NULL;

	if ( ! pFnOnRequestImageComplete )
		pFnOnRequestImageComplete = (UFunction*) UObject::GObjObjects()->Data[ 110290 ];

	USFXGUI_MPLobby_DLC_execOnRequestImageComplete_Parms OnRequestImageComplete_Parms;
	memcpy ( &OnRequestImageComplete_Parms.ImageRequestResult, &ImageRequestResult, 0x18 );

	this->ProcessEvent ( pFnOnRequestImageComplete, &OnRequestImageComplete_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.RequestImage
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Resource                       ( CPF_Parm | CPF_NeedCtorLink )

struct FString USFXGUI_MPLobby_DLC::RequestImage ( struct FString Resource )
{
	static UFunction* pFnRequestImage = NULL;

	if ( ! pFnRequestImage )
		pFnRequestImage = (UFunction*) UObject::GObjObjects()->Data[ 110293 ];

	USFXGUI_MPLobby_DLC_execRequestImage_Parms RequestImage_Parms;
	memcpy ( &RequestImage_Parms.Resource, &Resource, 0xC );

	this->ProcessEvent ( pFnRequestImage, &RequestImage_Parms, NULL );

	return RequestImage_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetEmblemData
// [0x00020002] 
// Parameters infos:
// struct FEmblemDisplayInfo      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            EmblemID                       ( CPF_Parm )

struct FEmblemDisplayInfo USFXGUI_MPLobby_DLC::GetEmblemData ( int EmblemID )
{
	static UFunction* pFnGetEmblemData = NULL;

	if ( ! pFnGetEmblemData )
		pFnGetEmblemData = (UFunction*) UObject::GObjObjects()->Data[ 110296 ];

	USFXGUI_MPLobby_DLC_execGetEmblemData_Parms GetEmblemData_Parms;
	GetEmblemData_Parms.EmblemID = EmblemID;

	this->ProcessEvent ( pFnGetEmblemData, &GetEmblemData_Parms, NULL );

	return GetEmblemData_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.CheckIfSignedInFailSafe
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::CheckIfSignedInFailSafe ( )
{
	static UFunction* pFnCheckIfSignedInFailSafe = NULL;

	if ( ! pFnCheckIfSignedInFailSafe )
		pFnCheckIfSignedInFailSafe = (UFunction*) UObject::GObjObjects()->Data[ 110141 ];

	USFXGUI_MPLobby_DLC_execCheckIfSignedInFailSafe_Parms CheckIfSignedInFailSafe_Parms;

	this->ProcessEvent ( pFnCheckIfSignedInFailSafe, &CheckIfSignedInFailSafe_Parms, NULL );

	return CheckIfSignedInFailSafe_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetGAWZoneBonusText
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            MapId                          ( CPF_Parm )

struct FString USFXGUI_MPLobby_DLC::GetGAWZoneBonusText ( int MapId )
{
	static UFunction* pFnGetGAWZoneBonusText = NULL;

	if ( ! pFnGetGAWZoneBonusText )
		pFnGetGAWZoneBonusText = (UFunction*) UObject::GObjObjects()->Data[ 110262 ];

	USFXGUI_MPLobby_DLC_execGetGAWZoneBonusText_Parms GetGAWZoneBonusText_Parms;
	GetGAWZoneBonusText_Parms.MapId = MapId;

	this->ProcessEvent ( pFnGetGAWZoneBonusText, &GetGAWZoneBonusText_Parms, NULL );

	return GetGAWZoneBonusText_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.CameFromSelectFirstCharacter
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::CameFromSelectFirstCharacter ( )
{
	static UFunction* pFnCameFromSelectFirstCharacter = NULL;

	if ( ! pFnCameFromSelectFirstCharacter )
		pFnCameFromSelectFirstCharacter = (UFunction*) UObject::GObjObjects()->Data[ 110259 ];

	USFXGUI_MPLobby_DLC_execCameFromSelectFirstCharacter_Parms CameFromSelectFirstCharacter_Parms;

	this->ProcessEvent ( pFnCameFromSelectFirstCharacter, &CameFromSelectFirstCharacter_Parms, NULL );

	return CameFromSelectFirstCharacter_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.ViewInvitations
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ViewInvitations ( )
{
	static UFunction* pFnViewInvitations = NULL;

	if ( ! pFnViewInvitations )
		pFnViewInvitations = (UFunction*) UObject::GObjObjects()->Data[ 110257 ];

	USFXGUI_MPLobby_DLC_execViewInvitations_Parms ViewInvitations_Parms;

	this->ProcessEvent ( pFnViewInvitations, &ViewInvitations_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.GetMapZoneID
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MapName                        ( CPF_Parm | CPF_NeedCtorLink )

int USFXGUI_MPLobby_DLC::GetMapZoneID ( struct FString MapName )
{
	static UFunction* pFnGetMapZoneID = NULL;

	if ( ! pFnGetMapZoneID )
		pFnGetMapZoneID = (UFunction*) UObject::GObjObjects()->Data[ 110250 ];

	USFXGUI_MPLobby_DLC_execGetMapZoneID_Parms GetMapZoneID_Parms;
	memcpy ( &GetMapZoneID_Parms.MapName, &MapName, 0xC );

	this->ProcessEvent ( pFnGetMapZoneID, &GetMapZoneID_Parms, NULL );

	return GetMapZoneID_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetFormattedReadinessPercentage
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            nReadiness                     ( CPF_Parm )

struct FString USFXGUI_MPLobby_DLC::GetFormattedReadinessPercentage ( int nReadiness )
{
	static UFunction* pFnGetFormattedReadinessPercentage = NULL;

	if ( ! pFnGetFormattedReadinessPercentage )
		pFnGetFormattedReadinessPercentage = (UFunction*) UObject::GObjObjects()->Data[ 110245 ];

	USFXGUI_MPLobby_DLC_execGetFormattedReadinessPercentage_Parms GetFormattedReadinessPercentage_Parms;
	GetFormattedReadinessPercentage_Parms.nReadiness = nReadiness;

	this->ProcessEvent ( pFnGetFormattedReadinessPercentage, &GetFormattedReadinessPercentage_Parms, NULL );

	return GetFormattedReadinessPercentage_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.ShouldShowChatDisabledMessage
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::ShouldShowChatDisabledMessage ( )
{
	static UFunction* pFnShouldShowChatDisabledMessage = NULL;

	if ( ! pFnShouldShowChatDisabledMessage )
		pFnShouldShowChatDisabledMessage = (UFunction*) UObject::GObjObjects()->Data[ 110241 ];

	USFXGUI_MPLobby_DLC_execShouldShowChatDisabledMessage_Parms ShouldShowChatDisabledMessage_Parms;

	this->ProcessEvent ( pFnShouldShowChatDisabledMessage, &ShouldShowChatDisabledMessage_Parms, NULL );

	return ShouldShowChatDisabledMessage_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.PreloadLobbyImages
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::PreloadLobbyImages ( )
{
	static UFunction* pFnPreloadLobbyImages = NULL;

	if ( ! pFnPreloadLobbyImages )
		pFnPreloadLobbyImages = (UFunction*) UObject::GObjObjects()->Data[ 109894 ];

	USFXGUI_MPLobby_DLC_execPreloadLobbyImages_Parms PreloadLobbyImages_Parms;

	this->ProcessEvent ( pFnPreloadLobbyImages, &PreloadLobbyImages_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.IsHostingNewMission
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::IsHostingNewMission ( )
{
	static UFunction* pFnIsHostingNewMission = NULL;

	if ( ! pFnIsHostingNewMission )
		pFnIsHostingNewMission = (UFunction*) UObject::GObjObjects()->Data[ 110226 ];

	USFXGUI_MPLobby_DLC_execIsHostingNewMission_Parms IsHostingNewMission_Parms;

	this->ProcessEvent ( pFnIsHostingNewMission, &IsHostingNewMission_Parms, NULL );

	return IsHostingNewMission_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetMaxActiveConsumables
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXGUI_MPLobby_DLC::GetMaxActiveConsumables ( )
{
	static UFunction* pFnGetMaxActiveConsumables = NULL;

	if ( ! pFnGetMaxActiveConsumables )
		pFnGetMaxActiveConsumables = (UFunction*) UObject::GObjObjects()->Data[ 110223 ];

	USFXGUI_MPLobby_DLC_execGetMaxActiveConsumables_Parms GetMaxActiveConsumables_Parms;

	this->ProcessEvent ( pFnGetMaxActiveConsumables, &GetMaxActiveConsumables_Parms, NULL );

	return GetMaxActiveConsumables_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetEnemyBonusText
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            EnemyIndex                     ( CPF_Parm )
// unsigned long                  UseXP                          ( CPF_Parm )

struct FString USFXGUI_MPLobby_DLC::GetEnemyBonusText ( int EnemyIndex, unsigned long UseXP )
{
	static UFunction* pFnGetEnemyBonusText = NULL;

	if ( ! pFnGetEnemyBonusText )
		pFnGetEnemyBonusText = (UFunction*) UObject::GObjObjects()->Data[ 110225 ];

	USFXGUI_MPLobby_DLC_execGetEnemyBonusText_Parms GetEnemyBonusText_Parms;
	GetEnemyBonusText_Parms.EnemyIndex = EnemyIndex;
	GetEnemyBonusText_Parms.UseXP = UseXP;

	this->ProcessEvent ( pFnGetEnemyBonusText, &GetEnemyBonusText_Parms, NULL );

	return GetEnemyBonusText_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetMapBonusText
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            MapIndex                       ( CPF_Parm )
// unsigned long                  UseXP                          ( CPF_Parm )

struct FString USFXGUI_MPLobby_DLC::GetMapBonusText ( int MapIndex, unsigned long UseXP )
{
	static UFunction* pFnGetMapBonusText = NULL;

	if ( ! pFnGetMapBonusText )
		pFnGetMapBonusText = (UFunction*) UObject::GObjObjects()->Data[ 110311 ];

	USFXGUI_MPLobby_DLC_execGetMapBonusText_Parms GetMapBonusText_Parms;
	GetMapBonusText_Parms.MapIndex = MapIndex;
	GetMapBonusText_Parms.UseXP = UseXP;

	this->ProcessEvent ( pFnGetMapBonusText, &GetMapBonusText_Parms, NULL );

	return GetMapBonusText_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetRandomEnemyBonusText
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXGUI_MPLobby_DLC::GetRandomEnemyBonusText ( )
{
	static UFunction* pFnGetRandomEnemyBonusText = NULL;

	if ( ! pFnGetRandomEnemyBonusText )
		pFnGetRandomEnemyBonusText = (UFunction*) UObject::GObjObjects()->Data[ 110221 ];

	USFXGUI_MPLobby_DLC_execGetRandomEnemyBonusText_Parms GetRandomEnemyBonusText_Parms;

	this->ProcessEvent ( pFnGetRandomEnemyBonusText, &GetRandomEnemyBonusText_Parms, NULL );

	return GetRandomEnemyBonusText_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetRandomMapBonusText
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXGUI_MPLobby_DLC::GetRandomMapBonusText ( )
{
	static UFunction* pFnGetRandomMapBonusText = NULL;

	if ( ! pFnGetRandomMapBonusText )
		pFnGetRandomMapBonusText = (UFunction*) UObject::GObjObjects()->Data[ 110219 ];

	USFXGUI_MPLobby_DLC_execGetRandomMapBonusText_Parms GetRandomMapBonusText_Parms;

	this->ProcessEvent ( pFnGetRandomMapBonusText, &GetRandomMapBonusText_Parms, NULL );

	return GetRandomMapBonusText_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.ChangeMapMusic
// [0x00020002] 
// Parameters infos:
// int                            nMapId                         ( CPF_Parm )

void USFXGUI_MPLobby_DLC::ChangeMapMusic ( int nMapId )
{
	static UFunction* pFnChangeMapMusic = NULL;

	if ( ! pFnChangeMapMusic )
		pFnChangeMapMusic = (UFunction*) UObject::GObjObjects()->Data[ 110217 ];

	USFXGUI_MPLobby_DLC_execChangeMapMusic_Parms ChangeMapMusic_Parms;
	ChangeMapMusic_Parms.nMapId = nMapId;

	this->ProcessEvent ( pFnChangeMapMusic, &ChangeMapMusic_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.VoteToKickPlayerInSlot
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// int                            SlotIndex                      ( CPF_Parm )
// unsigned long                  bKick                          ( CPF_Parm )

void USFXGUI_MPLobby_DLC::VoteToKickPlayerInSlot ( int SlotIndex, unsigned long bKick )
{
	static UFunction* pFnVoteToKickPlayerInSlot = NULL;

	if ( ! pFnVoteToKickPlayerInSlot )
		pFnVoteToKickPlayerInSlot = (UFunction*) UObject::GObjObjects()->Data[ 110212 ];

	USFXGUI_MPLobby_DLC_execVoteToKickPlayerInSlot_Parms VoteToKickPlayerInSlot_Parms;
	VoteToKickPlayerInSlot_Parms.SlotIndex = SlotIndex;
	VoteToKickPlayerInSlot_Parms.bKick = bKick;

	this->ProcessEvent ( pFnVoteToKickPlayerInSlot, &VoteToKickPlayerInSlot_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.HasVotedToKickPlayerInSlot
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SlotIndex                      ( CPF_Parm )

bool USFXGUI_MPLobby_DLC::HasVotedToKickPlayerInSlot ( int SlotIndex )
{
	static UFunction* pFnHasVotedToKickPlayerInSlot = NULL;

	if ( ! pFnHasVotedToKickPlayerInSlot )
		pFnHasVotedToKickPlayerInSlot = (UFunction*) UObject::GObjObjects()->Data[ 110207 ];

	USFXGUI_MPLobby_DLC_execHasVotedToKickPlayerInSlot_Parms HasVotedToKickPlayerInSlot_Parms;
	HasVotedToKickPlayerInSlot_Parms.SlotIndex = SlotIndex;

	this->ProcessEvent ( pFnHasVotedToKickPlayerInSlot, &HasVotedToKickPlayerInSlot_Parms, NULL );

	return HasVotedToKickPlayerInSlot_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.ClearAllNewWeaponNotifications
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ClearAllNewWeaponNotifications ( )
{
	static UFunction* pFnClearAllNewWeaponNotifications = NULL;

	if ( ! pFnClearAllNewWeaponNotifications )
		pFnClearAllNewWeaponNotifications = (UFunction*) UObject::GObjObjects()->Data[ 109899 ];

	USFXGUI_MPLobby_DLC_execClearAllNewWeaponNotifications_Parms ClearAllNewWeaponNotifications_Parms;

	this->ProcessEvent ( pFnClearAllNewWeaponNotifications, &ClearAllNewWeaponNotifications_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.CanAffordNewStoreItems
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::CanAffordNewStoreItems ( )
{
	static UFunction* pFnCanAffordNewStoreItems = NULL;

	if ( ! pFnCanAffordNewStoreItems )
		pFnCanAffordNewStoreItems = (UFunction*) UObject::GObjObjects()->Data[ 110202 ];

	USFXGUI_MPLobby_DLC_execCanAffordNewStoreItems_Parms CanAffordNewStoreItems_Parms;

	this->ProcessEvent ( pFnCanAffordNewStoreItems, &CanAffordNewStoreItems_Parms, NULL );

	return CanAffordNewStoreItems_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.HasNewMatchConsumables
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::HasNewMatchConsumables ( )
{
	static UFunction* pFnHasNewMatchConsumables = NULL;

	if ( ! pFnHasNewMatchConsumables )
		pFnHasNewMatchConsumables = (UFunction*) UObject::GObjObjects()->Data[ 110199 ];

	USFXGUI_MPLobby_DLC_execHasNewMatchConsumables_Parms HasNewMatchConsumables_Parms;

	this->ProcessEvent ( pFnHasNewMatchConsumables, &HasNewMatchConsumables_Parms, NULL );

	return HasNewMatchConsumables_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.HasNewAppearanceOptions
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::HasNewAppearanceOptions ( )
{
	static UFunction* pFnHasNewAppearanceOptions = NULL;

	if ( ! pFnHasNewAppearanceOptions )
		pFnHasNewAppearanceOptions = (UFunction*) UObject::GObjObjects()->Data[ 110195 ];

	USFXGUI_MPLobby_DLC_execHasNewAppearanceOptions_Parms HasNewAppearanceOptions_Parms;

	this->ProcessEvent ( pFnHasNewAppearanceOptions, &HasNewAppearanceOptions_Parms, NULL );

	return HasNewAppearanceOptions_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.HasNewWeapons
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::HasNewWeapons ( )
{
	static UFunction* pFnHasNewWeapons = NULL;

	if ( ! pFnHasNewWeapons )
		pFnHasNewWeapons = (UFunction*) UObject::GObjObjects()->Data[ 110191 ];

	USFXGUI_MPLobby_DLC_execHasNewWeapons_Parms HasNewWeapons_Parms;

	this->ProcessEvent ( pFnHasNewWeapons, &HasNewWeapons_Parms, NULL );

	return HasNewWeapons_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.ToggleMuteForSlot
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            SlotIndex                      ( CPF_Parm )

void USFXGUI_MPLobby_DLC::ToggleMuteForSlot ( int SlotIndex )
{
	static UFunction* pFnToggleMuteForSlot = NULL;

	if ( ! pFnToggleMuteForSlot )
		pFnToggleMuteForSlot = (UFunction*) UObject::GObjObjects()->Data[ 110186 ];

	USFXGUI_MPLobby_DLC_execToggleMuteForSlot_Parms ToggleMuteForSlot_Parms;
	ToggleMuteForSlot_Parms.SlotIndex = SlotIndex;

	this->ProcessEvent ( pFnToggleMuteForSlot, &ToggleMuteForSlot_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.SetPreviouslySelectedItem
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            Subscreen                      ( CPF_Parm )
// int                            ItemIndex                      ( CPF_Parm )

void USFXGUI_MPLobby_DLC::SetPreviouslySelectedItem ( int Subscreen, int ItemIndex )
{
	static UFunction* pFnSetPreviouslySelectedItem = NULL;

	if ( ! pFnSetPreviouslySelectedItem )
		pFnSetPreviouslySelectedItem = (UFunction*) UObject::GObjObjects()->Data[ 110183 ];

	USFXGUI_MPLobby_DLC_execSetPreviouslySelectedItem_Parms SetPreviouslySelectedItem_Parms;
	SetPreviouslySelectedItem_Parms.Subscreen = Subscreen;
	SetPreviouslySelectedItem_Parms.ItemIndex = ItemIndex;

	this->ProcessEvent ( pFnSetPreviouslySelectedItem, &SetPreviouslySelectedItem_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.GetPreviouslySelectedItem
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Subscreen                      ( CPF_Parm )

int USFXGUI_MPLobby_DLC::GetPreviouslySelectedItem ( int Subscreen )
{
	static UFunction* pFnGetPreviouslySelectedItem = NULL;

	if ( ! pFnGetPreviouslySelectedItem )
		pFnGetPreviouslySelectedItem = (UFunction*) UObject::GObjObjects()->Data[ 110179 ];

	USFXGUI_MPLobby_DLC_execGetPreviouslySelectedItem_Parms GetPreviouslySelectedItem_Parms;
	GetPreviouslySelectedItem_Parms.Subscreen = Subscreen;

	this->ProcessEvent ( pFnGetPreviouslySelectedItem, &GetPreviouslySelectedItem_Parms, NULL );

	return GetPreviouslySelectedItem_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.CancelMatchSettings
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::CancelMatchSettings ( )
{
	static UFunction* pFnCancelMatchSettings = NULL;

	if ( ! pFnCancelMatchSettings )
		pFnCancelMatchSettings = (UFunction*) UObject::GObjObjects()->Data[ 110178 ];

	USFXGUI_MPLobby_DLC_execCancelMatchSettings_Parms CancelMatchSettings_Parms;

	this->ProcessEvent ( pFnCancelMatchSettings, &CancelMatchSettings_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ChangeMatchSettings
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ChangeMatchSettings ( )
{
	static UFunction* pFnChangeMatchSettings = NULL;

	if ( ! pFnChangeMatchSettings )
		pFnChangeMatchSettings = (UFunction*) UObject::GObjObjects()->Data[ 110170 ];

	USFXGUI_MPLobby_DLC_execChangeMatchSettings_Parms ChangeMatchSettings_Parms;

	this->ProcessEvent ( pFnChangeMatchSettings, &ChangeMatchSettings_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.GetCredits
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXGUI_MPLobby_DLC::GetCredits ( )
{
	static UFunction* pFnGetCredits = NULL;

	if ( ! pFnGetCredits )
		pFnGetCredits = (UFunction*) UObject::GObjObjects()->Data[ 110168 ];

	USFXGUI_MPLobby_DLC_execGetCredits_Parms GetCredits_Parms;

	this->ProcessEvent ( pFnGetCredits, &GetCredits_Parms, NULL );

	return GetCredits_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.QuickMatch
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::QuickMatch ( )
{
	static UFunction* pFnQuickMatch = NULL;

	if ( ! pFnQuickMatch )
		pFnQuickMatch = (UFunction*) UObject::GObjObjects()->Data[ 110167 ];

	USFXGUI_MPLobby_DLC_execQuickMatch_Parms QuickMatch_Parms;

	this->ProcessEvent ( pFnQuickMatch, &QuickMatch_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.SwitchCharacter
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::SwitchCharacter ( )
{
	static UFunction* pFnSwitchCharacter = NULL;

	if ( ! pFnSwitchCharacter )
		pFnSwitchCharacter = (UFunction*) UObject::GObjObjects()->Data[ 110164 ];

	USFXGUI_MPLobby_DLC_execSwitchCharacter_Parms SwitchCharacter_Parms;

	this->ProcessEvent ( pFnSwitchCharacter, &SwitchCharacter_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowOptionsScreen
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ShowOptionsScreen ( )
{
	static UFunction* pFnShowOptionsScreen = NULL;

	if ( ! pFnShowOptionsScreen )
		pFnShowOptionsScreen = (UFunction*) UObject::GObjObjects()->Data[ 110162 ];

	USFXGUI_MPLobby_DLC_execShowOptionsScreen_Parms ShowOptionsScreen_Parms;

	this->ProcessEvent ( pFnShowOptionsScreen, &ShowOptionsScreen_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowLeaderboardScreen
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ShowLeaderboardScreen ( )
{
	static UFunction* pFnShowLeaderboardScreen = NULL;

	if ( ! pFnShowLeaderboardScreen )
		pFnShowLeaderboardScreen = (UFunction*) UObject::GObjObjects()->Data[ 110160 ];

	USFXGUI_MPLobby_DLC_execShowLeaderboardScreen_Parms ShowLeaderboardScreen_Parms;

	this->ProcessEvent ( pFnShowLeaderboardScreen, &ShowLeaderboardScreen_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowMatchConsumablesScreen
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ShowMatchConsumablesScreen ( )
{
	static UFunction* pFnShowMatchConsumablesScreen = NULL;

	if ( ! pFnShowMatchConsumablesScreen )
		pFnShowMatchConsumablesScreen = (UFunction*) UObject::GObjObjects()->Data[ 110158 ];

	USFXGUI_MPLobby_DLC_execShowMatchConsumablesScreen_Parms ShowMatchConsumablesScreen_Parms;

	this->ProcessEvent ( pFnShowMatchConsumablesScreen, &ShowMatchConsumablesScreen_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowAppearanceScreen
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ShowAppearanceScreen ( )
{
	static UFunction* pFnShowAppearanceScreen = NULL;

	if ( ! pFnShowAppearanceScreen )
		pFnShowAppearanceScreen = (UFunction*) UObject::GObjObjects()->Data[ 110155 ];

	USFXGUI_MPLobby_DLC_execShowAppearanceScreen_Parms ShowAppearanceScreen_Parms;

	this->ProcessEvent ( pFnShowAppearanceScreen, &ShowAppearanceScreen_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowStoreScreen
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ShowStoreScreen ( )
{
	static UFunction* pFnShowStoreScreen = NULL;

	if ( ! pFnShowStoreScreen )
		pFnShowStoreScreen = (UFunction*) UObject::GObjObjects()->Data[ 110153 ];

	USFXGUI_MPLobby_DLC_execShowStoreScreen_Parms ShowStoreScreen_Parms;

	this->ProcessEvent ( pFnShowStoreScreen, &ShowStoreScreen_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowWeaponsScreen
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ShowWeaponsScreen ( )
{
	static UFunction* pFnShowWeaponsScreen = NULL;

	if ( ! pFnShowWeaponsScreen )
		pFnShowWeaponsScreen = (UFunction*) UObject::GObjObjects()->Data[ 110151 ];

	USFXGUI_MPLobby_DLC_execShowWeaponsScreen_Parms ShowWeaponsScreen_Parms;

	this->ProcessEvent ( pFnShowWeaponsScreen, &ShowWeaponsScreen_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowTalentsLevelUpScreen
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ShowTalentsLevelUpScreen ( )
{
	static UFunction* pFnShowTalentsLevelUpScreen = NULL;

	if ( ! pFnShowTalentsLevelUpScreen )
		pFnShowTalentsLevelUpScreen = (UFunction*) UObject::GObjObjects()->Data[ 110148 ];

	USFXGUI_MPLobby_DLC_execShowTalentsLevelUpScreen_Parms ShowTalentsLevelUpScreen_Parms;

	this->ProcessEvent ( pFnShowTalentsLevelUpScreen, &ShowTalentsLevelUpScreen_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowMatchSettingsScreen
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ShowMatchSettingsScreen ( )
{
	static UFunction* pFnShowMatchSettingsScreen = NULL;

	if ( ! pFnShowMatchSettingsScreen )
		pFnShowMatchSettingsScreen = (UFunction*) UObject::GObjObjects()->Data[ 110145 ];

	USFXGUI_MPLobby_DLC_execShowMatchSettingsScreen_Parms ShowMatchSettingsScreen_Parms;

	this->ProcessEvent ( pFnShowMatchSettingsScreen, &ShowMatchSettingsScreen_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.HostNewMission
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::HostNewMission ( )
{
	static UFunction* pFnHostNewMission = NULL;

	if ( ! pFnHostNewMission )
		pFnHostNewMission = (UFunction*) UObject::GObjObjects()->Data[ 110143 ];

	USFXGUI_MPLobby_DLC_execHostNewMission_Parms HostNewMission_Parms;

	this->ProcessEvent ( pFnHostNewMission, &HostNewMission_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.CustomMatch
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::CustomMatch ( )
{
	static UFunction* pFnCustomMatch = NULL;

	if ( ! pFnCustomMatch )
		pFnCustomMatch = (UFunction*) UObject::GObjObjects()->Data[ 110140 ];

	USFXGUI_MPLobby_DLC_execCustomMatch_Parms CustomMatch_Parms;

	this->ProcessEvent ( pFnCustomMatch, &CustomMatch_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ConfirmExitMultiplayer
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ConfirmExitMultiplayer ( )
{
	static UFunction* pFnConfirmExitMultiplayer = NULL;

	if ( ! pFnConfirmExitMultiplayer )
		pFnConfirmExitMultiplayer = (UFunction*) UObject::GObjObjects()->Data[ 110138 ];

	USFXGUI_MPLobby_DLC_execConfirmExitMultiplayer_Parms ConfirmExitMultiplayer_Parms;

	this->ProcessEvent ( pFnConfirmExitMultiplayer, &ConfirmExitMultiplayer_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ExitMultiplayerConfirmationPopupInputDelegate
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bAPressed                      ( CPF_Parm )
// int                            nContext                       ( CPF_Parm )

void USFXGUI_MPLobby_DLC::ExitMultiplayerConfirmationPopupInputDelegate ( unsigned long bAPressed, int nContext )
{
	static UFunction* pFnExitMultiplayerConfirmationPopupInputDelegate = NULL;

	if ( ! pFnExitMultiplayerConfirmationPopupInputDelegate )
		pFnExitMultiplayerConfirmationPopupInputDelegate = (UFunction*) UObject::GObjObjects()->Data[ 110135 ];

	USFXGUI_MPLobby_DLC_execExitMultiplayerConfirmationPopupInputDelegate_Parms ExitMultiplayerConfirmationPopupInputDelegate_Parms;
	ExitMultiplayerConfirmationPopupInputDelegate_Parms.bAPressed = bAPressed;
	ExitMultiplayerConfirmationPopupInputDelegate_Parms.nContext = nContext;

	this->ProcessEvent ( pFnExitMultiplayerConfirmationPopupInputDelegate, &ExitMultiplayerConfirmationPopupInputDelegate_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowExitMultiplayerConfirmationPopup
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ShowExitMultiplayerConfirmationPopup ( )
{
	static UFunction* pFnShowExitMultiplayerConfirmationPopup = NULL;

	if ( ! pFnShowExitMultiplayerConfirmationPopup )
		pFnShowExitMultiplayerConfirmationPopup = (UFunction*) UObject::GObjObjects()->Data[ 110130 ];

	USFXGUI_MPLobby_DLC_execShowExitMultiplayerConfirmationPopup_Parms ShowExitMultiplayerConfirmationPopup_Parms;

	this->ProcessEvent ( pFnShowExitMultiplayerConfirmationPopup, &ShowExitMultiplayerConfirmationPopup_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ExitMultiplayer
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ExitMultiplayer ( )
{
	static UFunction* pFnExitMultiplayer = NULL;

	if ( ! pFnExitMultiplayer )
		pFnExitMultiplayer = (UFunction*) UObject::GObjObjects()->Data[ 110129 ];

	USFXGUI_MPLobby_DLC_execExitMultiplayer_Parms ExitMultiplayer_Parms;

	this->ProcessEvent ( pFnExitMultiplayer, &ExitMultiplayer_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.GoBackToSelectFirstCharacter
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::GoBackToSelectFirstCharacter ( )
{
	static UFunction* pFnGoBackToSelectFirstCharacter = NULL;

	if ( ! pFnGoBackToSelectFirstCharacter )
		pFnGoBackToSelectFirstCharacter = (UFunction*) UObject::GObjObjects()->Data[ 110127 ];

	USFXGUI_MPLobby_DLC_execGoBackToSelectFirstCharacter_Parms GoBackToSelectFirstCharacter_Parms;

	this->ProcessEvent ( pFnGoBackToSelectFirstCharacter, &GoBackToSelectFirstCharacter_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ConfirmExitLobby
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ConfirmExitLobby ( )
{
	static UFunction* pFnConfirmExitLobby = NULL;

	if ( ! pFnConfirmExitLobby )
		pFnConfirmExitLobby = (UFunction*) UObject::GObjObjects()->Data[ 110124 ];

	USFXGUI_MPLobby_DLC_execConfirmExitLobby_Parms ConfirmExitLobby_Parms;

	this->ProcessEvent ( pFnConfirmExitLobby, &ConfirmExitLobby_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ExitLobbyPopupInputDelegate
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bAPressed                      ( CPF_Parm )
// int                            nContext                       ( CPF_Parm )

void USFXGUI_MPLobby_DLC::ExitLobbyPopupInputDelegate ( unsigned long bAPressed, int nContext )
{
	static UFunction* pFnExitLobbyPopupInputDelegate = NULL;

	if ( ! pFnExitLobbyPopupInputDelegate )
		pFnExitLobbyPopupInputDelegate = (UFunction*) UObject::GObjObjects()->Data[ 110121 ];

	USFXGUI_MPLobby_DLC_execExitLobbyPopupInputDelegate_Parms ExitLobbyPopupInputDelegate_Parms;
	ExitLobbyPopupInputDelegate_Parms.bAPressed = bAPressed;
	ExitLobbyPopupInputDelegate_Parms.nContext = nContext;

	this->ProcessEvent ( pFnExitLobbyPopupInputDelegate, &ExitLobbyPopupInputDelegate_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ExitLobby
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ExitLobby ( )
{
	static UFunction* pFnExitLobby = NULL;

	if ( ! pFnExitLobby )
		pFnExitLobby = (UFunction*) UObject::GObjObjects()->Data[ 110115 ];

	USFXGUI_MPLobby_DLC_execExitLobby_Parms ExitLobby_Parms;

	this->ProcessEvent ( pFnExitLobby, &ExitLobby_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowPartySessions
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::ShowPartySessions ( )
{
	static UFunction* pFnShowPartySessions = NULL;

	if ( ! pFnShowPartySessions )
		pFnShowPartySessions = (UFunction*) UObject::GObjObjects()->Data[ 110112 ];

	USFXGUI_MPLobby_DLC_execShowPartySessions_Parms ShowPartySessions_Parms;

	this->ProcessEvent ( pFnShowPartySessions, &ShowPartySessions_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.InviteParty
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::InviteParty ( )
{
	static UFunction* pFnInviteParty = NULL;

	if ( ! pFnInviteParty )
		pFnInviteParty = (UFunction*) UObject::GObjObjects()->Data[ 110110 ];

	USFXGUI_MPLobby_DLC_execInviteParty_Parms InviteParty_Parms;

	this->ProcessEvent ( pFnInviteParty, &InviteParty_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.IsInParty
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::IsInParty ( )
{
	static UFunction* pFnIsInParty = NULL;

	if ( ! pFnIsInParty )
		pFnIsInParty = (UFunction*) UObject::GObjObjects()->Data[ 109907 ];

	USFXGUI_MPLobby_DLC_execIsInParty_Parms IsInParty_Parms;

	this->ProcessEvent ( pFnIsInParty, &IsInParty_Parms, NULL );

	return IsInParty_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.InviteFriends
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::InviteFriends ( )
{
	static UFunction* pFnInviteFriends = NULL;

	if ( ! pFnInviteFriends )
		pFnInviteFriends = (UFunction*) UObject::GObjObjects()->Data[ 110101 ];

	USFXGUI_MPLobby_DLC_execInviteFriends_Parms InviteFriends_Parms;

	this->ProcessEvent ( pFnInviteFriends, &InviteFriends_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ShowGamercard
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            SlotIndex                      ( CPF_Parm )

void USFXGUI_MPLobby_DLC::ShowGamercard ( int SlotIndex )
{
	static UFunction* pFnShowGamercard = NULL;

	if ( ! pFnShowGamercard )
		pFnShowGamercard = (UFunction*) UObject::GObjObjects()->Data[ 110097 ];

	USFXGUI_MPLobby_DLC_execShowGamercard_Parms ShowGamercard_Parms;
	ShowGamercard_Parms.SlotIndex = SlotIndex;

	this->ProcessEvent ( pFnShowGamercard, &ShowGamercard_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.SetReady
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  Ready                          ( CPF_Parm )

void USFXGUI_MPLobby_DLC::SetReady ( unsigned long Ready )
{
	static UFunction* pFnSetReady = NULL;

	if ( ! pFnSetReady )
		pFnSetReady = (UFunction*) UObject::GObjObjects()->Data[ 110095 ];

	USFXGUI_MPLobby_DLC_execSetReady_Parms SetReady_Parms;
	SetReady_Parms.Ready = Ready;

	this->ProcessEvent ( pFnSetReady, &SetReady_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.GetLeaderboardNotificationText
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXGUI_MPLobby_DLC::GetLeaderboardNotificationText ( )
{
	static UFunction* pFnGetLeaderboardNotificationText = NULL;

	if ( ! pFnGetLeaderboardNotificationText )
		pFnGetLeaderboardNotificationText = (UFunction*) UObject::GObjObjects()->Data[ 110092 ];

	USFXGUI_MPLobby_DLC_execGetLeaderboardNotificationText_Parms GetLeaderboardNotificationText_Parms;

	this->ProcessEvent ( pFnGetLeaderboardNotificationText, &GetLeaderboardNotificationText_Parms, NULL );

	return GetLeaderboardNotificationText_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.HasLeaderboardNotifications
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::HasLeaderboardNotifications ( )
{
	static UFunction* pFnHasLeaderboardNotifications = NULL;

	if ( ! pFnHasLeaderboardNotifications )
		pFnHasLeaderboardNotifications = (UFunction*) UObject::GObjObjects()->Data[ 110090 ];

	USFXGUI_MPLobby_DLC_execHasLeaderboardNotifications_Parms HasLeaderboardNotifications_Parms;

	this->ProcessEvent ( pFnHasLeaderboardNotifications, &HasLeaderboardNotifications_Parms, NULL );

	return HasLeaderboardNotifications_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetPreviousSubScreen
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXGUI_MPLobby_DLC::GetPreviousSubScreen ( )
{
	static UFunction* pFnGetPreviousSubScreen = NULL;

	if ( ! pFnGetPreviousSubScreen )
		pFnGetPreviousSubScreen = (UFunction*) UObject::GObjObjects()->Data[ 109898 ];

	USFXGUI_MPLobby_DLC_execGetPreviousSubScreen_Parms GetPreviousSubScreen_Parms;

	this->ProcessEvent ( pFnGetPreviousSubScreen, &GetPreviousSubScreen_Parms, NULL );

	return GetPreviousSubScreen_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.HasCreditsToSpend
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::HasCreditsToSpend ( )
{
	static UFunction* pFnHasCreditsToSpend = NULL;

	if ( ! pFnHasCreditsToSpend )
		pFnHasCreditsToSpend = (UFunction*) UObject::GObjObjects()->Data[ 110084 ];

	USFXGUI_MPLobby_DLC_execHasCreditsToSpend_Parms HasCreditsToSpend_Parms;

	this->ProcessEvent ( pFnHasCreditsToSpend, &HasCreditsToSpend_Parms, NULL );

	return HasCreditsToSpend_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.HasTalentPointsToSpend
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::HasTalentPointsToSpend ( )
{
	static UFunction* pFnHasTalentPointsToSpend = NULL;

	if ( ! pFnHasTalentPointsToSpend )
		pFnHasTalentPointsToSpend = (UFunction*) UObject::GObjObjects()->Data[ 110080 ];

	USFXGUI_MPLobby_DLC_execHasTalentPointsToSpend_Parms HasTalentPointsToSpend_Parms;

	this->ProcessEvent ( pFnHasTalentPointsToSpend, &HasTalentPointsToSpend_Parms, NULL );

	return HasTalentPointsToSpend_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.CanLevelUp
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::CanLevelUp ( )
{
	static UFunction* pFnCanLevelUp = NULL;

	if ( ! pFnCanLevelUp )
		pFnCanLevelUp = (UFunction*) UObject::GObjObjects()->Data[ 110078 ];

	USFXGUI_MPLobby_DLC_execCanLevelUp_Parms CanLevelUp_Parms;

	this->ProcessEvent ( pFnCanLevelUp, &CanLevelUp_Parms, NULL );

	return CanLevelUp_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.IsReady
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::IsReady ( )
{
	static UFunction* pFnIsReady = NULL;

	if ( ! pFnIsReady )
		pFnIsReady = (UFunction*) UObject::GObjObjects()->Data[ 110075 ];

	USFXGUI_MPLobby_DLC_execIsReady_Parms IsReady_Parms;

	this->ProcessEvent ( pFnIsReady, &IsReady_Parms, NULL );

	return IsReady_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetPrivacy
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXGUI_MPLobby_DLC::GetPrivacy ( )
{
	static UFunction* pFnGetPrivacy = NULL;

	if ( ! pFnGetPrivacy )
		pFnGetPrivacy = (UFunction*) UObject::GObjObjects()->Data[ 110077 ];

	USFXGUI_MPLobby_DLC_execGetPrivacy_Parms GetPrivacy_Parms;

	this->ProcessEvent ( pFnGetPrivacy, &GetPrivacy_Parms, NULL );

	return GetPrivacy_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.IsPrivateMatch
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::IsPrivateMatch ( )
{
	static UFunction* pFnIsPrivateMatch = NULL;

	if ( ! pFnIsPrivateMatch )
		pFnIsPrivateMatch = (UFunction*) UObject::GObjObjects()->Data[ 110073 ];

	USFXGUI_MPLobby_DLC_execIsPrivateMatch_Parms IsPrivateMatch_Parms;

	this->ProcessEvent ( pFnIsPrivateMatch, &IsPrivateMatch_Parms, NULL );

	return IsPrivateMatch_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.IsGameFull
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::IsGameFull ( )
{
	static UFunction* pFnIsGameFull = NULL;

	if ( ! pFnIsGameFull )
		pFnIsGameFull = (UFunction*) UObject::GObjObjects()->Data[ 110071 ];

	USFXGUI_MPLobby_DLC_execIsGameFull_Parms IsGameFull_Parms;

	this->ProcessEvent ( pFnIsGameFull, &IsGameFull_Parms, NULL );

	return IsGameFull_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.CanInteract
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::CanInteract ( )
{
	static UFunction* pFnCanInteract = NULL;

	if ( ! pFnCanInteract )
		pFnCanInteract = (UFunction*) UObject::GObjObjects()->Data[ 109909 ];

	USFXGUI_MPLobby_DLC_execCanInteract_Parms CanInteract_Parms;

	this->ProcessEvent ( pFnCanInteract, &CanInteract_Parms, NULL );

	return CanInteract_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetMatchConsumableSlotTypeForCategory
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Category                       ( CPF_Parm )

int USFXGUI_MPLobby_DLC::GetMatchConsumableSlotTypeForCategory ( int Category )
{
	static UFunction* pFnGetMatchConsumableSlotTypeForCategory = NULL;

	if ( ! pFnGetMatchConsumableSlotTypeForCategory )
		pFnGetMatchConsumableSlotTypeForCategory = (UFunction*) UObject::GObjObjects()->Data[ 110066 ];

	USFXGUI_MPLobby_DLC_execGetMatchConsumableSlotTypeForCategory_Parms GetMatchConsumableSlotTypeForCategory_Parms;
	GetMatchConsumableSlotTypeForCategory_Parms.Category = Category;

	this->ProcessEvent ( pFnGetMatchConsumableSlotTypeForCategory, &GetMatchConsumableSlotTypeForCategory_Parms, NULL );

	return GetMatchConsumableSlotTypeForCategory_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetCharacterInfo_Patch
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FPlayerDisplayInfo_Patch ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class Asfxprimp*               PRI                            ( CPF_Parm )

struct FPlayerDisplayInfo_Patch USFXGUI_MPLobby_DLC::GetCharacterInfo_Patch ( class Asfxprimp* PRI )
{
	static UFunction* pFnGetCharacterInfo_Patch = NULL;

	if ( ! pFnGetCharacterInfo_Patch )
		pFnGetCharacterInfo_Patch = (UFunction*) UObject::GObjObjects()->Data[ 110069 ];

	USFXGUI_MPLobby_DLC_execGetCharacterInfo_Patch_Parms GetCharacterInfo_Patch_Parms;
	GetCharacterInfo_Patch_Parms.PRI = PRI;

	this->ProcessEvent ( pFnGetCharacterInfo_Patch, &GetCharacterInfo_Patch_Parms, NULL );

	return GetCharacterInfo_Patch_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetPlayerSlotInfo_Patch
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FPlayerDisplayInfo_Patch ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

struct FPlayerDisplayInfo_Patch USFXGUI_MPLobby_DLC::GetPlayerSlotInfo_Patch ( int Index )
{
	static UFunction* pFnGetPlayerSlotInfo_Patch = NULL;

	if ( ! pFnGetPlayerSlotInfo_Patch )
		pFnGetPlayerSlotInfo_Patch = (UFunction*) UObject::GObjObjects()->Data[ 110325 ];

	USFXGUI_MPLobby_DLC_execGetPlayerSlotInfo_Patch_Parms GetPlayerSlotInfo_Patch_Parms;
	GetPlayerSlotInfo_Patch_Parms.Index = Index;

	this->ProcessEvent ( pFnGetPlayerSlotInfo_Patch, &GetPlayerSlotInfo_Patch_Parms, NULL );

	return GetPlayerSlotInfo_Patch_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetCharacterConsumableInfo
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// TArray< struct FMatchConsumableDisplayInfo > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class Asfxprimp*               PRI                            ( CPF_Parm )

TArray< struct FMatchConsumableDisplayInfo > USFXGUI_MPLobby_DLC::GetCharacterConsumableInfo ( class Asfxprimp* PRI )
{
	static UFunction* pFnGetCharacterConsumableInfo = NULL;

	if ( ! pFnGetCharacterConsumableInfo )
		pFnGetCharacterConsumableInfo = (UFunction*) UObject::GObjObjects()->Data[ 110019 ];

	USFXGUI_MPLobby_DLC_execGetCharacterConsumableInfo_Parms GetCharacterConsumableInfo_Parms;
	GetCharacterConsumableInfo_Parms.PRI = PRI;

	this->ProcessEvent ( pFnGetCharacterConsumableInfo, &GetCharacterConsumableInfo_Parms, NULL );

	return GetCharacterConsumableInfo_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetCharacterWeaponInfo
// [0x00820003] ( FUNC_Final )
// Parameters infos:
// TArray< struct FWeaponDisplayInfo > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class Asfxprimp*               PRI                            ( CPF_Parm )

TArray< struct FWeaponDisplayInfo > USFXGUI_MPLobby_DLC::GetCharacterWeaponInfo ( class Asfxprimp* PRI )
{
	static UFunction* pFnGetCharacterWeaponInfo = NULL;

	if ( ! pFnGetCharacterWeaponInfo )
		pFnGetCharacterWeaponInfo = (UFunction*) UObject::GObjObjects()->Data[ 110018 ];

	USFXGUI_MPLobby_DLC_execGetCharacterWeaponInfo_Parms GetCharacterWeaponInfo_Parms;
	GetCharacterWeaponInfo_Parms.PRI = PRI;

	this->ProcessEvent ( pFnGetCharacterWeaponInfo, &GetCharacterWeaponInfo_Parms, NULL );

	return GetCharacterWeaponInfo_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetCharacterPowerInfo
// [0x00820003] ( FUNC_Final )
// Parameters infos:
// TArray< struct FPowerDisplayInfo > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class Asfxprimp*               PRI                            ( CPF_Parm )

TArray< struct FPowerDisplayInfo > USFXGUI_MPLobby_DLC::GetCharacterPowerInfo ( class Asfxprimp* PRI )
{
	static UFunction* pFnGetCharacterPowerInfo = NULL;

	if ( ! pFnGetCharacterPowerInfo )
		pFnGetCharacterPowerInfo = (UFunction*) UObject::GObjObjects()->Data[ 110017 ];

	USFXGUI_MPLobby_DLC_execGetCharacterPowerInfo_Parms GetCharacterPowerInfo_Parms;
	GetCharacterPowerInfo_Parms.PRI = PRI;

	this->ProcessEvent ( pFnGetCharacterPowerInfo, &GetCharacterPowerInfo_Parms, NULL );

	return GetCharacterPowerInfo_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetCharacterInfoDetailed
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FPlayerDisplayInfo      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class Asfxprimp*               PRI                            ( CPF_Parm )

struct FPlayerDisplayInfo USFXGUI_MPLobby_DLC::GetCharacterInfoDetailed ( class Asfxprimp* PRI )
{
	static UFunction* pFnGetCharacterInfoDetailed = NULL;

	if ( ! pFnGetCharacterInfoDetailed )
		pFnGetCharacterInfoDetailed = (UFunction*) UObject::GObjObjects()->Data[ 109990 ];

	USFXGUI_MPLobby_DLC_execGetCharacterInfoDetailed_Parms GetCharacterInfoDetailed_Parms;
	GetCharacterInfoDetailed_Parms.PRI = PRI;

	this->ProcessEvent ( pFnGetCharacterInfoDetailed, &GetCharacterInfoDetailed_Parms, NULL );

	return GetCharacterInfoDetailed_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetCharacterInfoBasic
// [0x00820003] ( FUNC_Final )
// Parameters infos:
// struct FPlayerDisplayInfo      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class Asfxprimp*               PRI                            ( CPF_Parm )

struct FPlayerDisplayInfo USFXGUI_MPLobby_DLC::GetCharacterInfoBasic ( class Asfxprimp* PRI )
{
	static UFunction* pFnGetCharacterInfoBasic = NULL;

	if ( ! pFnGetCharacterInfoBasic )
		pFnGetCharacterInfoBasic = (UFunction*) UObject::GObjObjects()->Data[ 109986 ];

	USFXGUI_MPLobby_DLC_execGetCharacterInfoBasic_Parms GetCharacterInfoBasic_Parms;
	GetCharacterInfoBasic_Parms.PRI = PRI;

	this->ProcessEvent ( pFnGetCharacterInfoBasic, &GetCharacterInfoBasic_Parms, NULL );

	return GetCharacterInfoBasic_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetLocalPlayerDetailedInfo
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FPlayerDisplayInfo      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FPlayerDisplayInfo USFXGUI_MPLobby_DLC::GetLocalPlayerDetailedInfo ( )
{
	static UFunction* pFnGetLocalPlayerDetailedInfo = NULL;

	if ( ! pFnGetLocalPlayerDetailedInfo )
		pFnGetLocalPlayerDetailedInfo = (UFunction*) UObject::GObjObjects()->Data[ 109993 ];

	USFXGUI_MPLobby_DLC_execGetLocalPlayerDetailedInfo_Parms GetLocalPlayerDetailedInfo_Parms;

	this->ProcessEvent ( pFnGetLocalPlayerDetailedInfo, &GetLocalPlayerDetailedInfo_Parms, NULL );

	return GetLocalPlayerDetailedInfo_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetLocalPlayerBasicInfo
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FPlayerDisplayInfo      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FPlayerDisplayInfo USFXGUI_MPLobby_DLC::GetLocalPlayerBasicInfo ( )
{
	static UFunction* pFnGetLocalPlayerBasicInfo = NULL;

	if ( ! pFnGetLocalPlayerBasicInfo )
		pFnGetLocalPlayerBasicInfo = (UFunction*) UObject::GObjObjects()->Data[ 109991 ];

	USFXGUI_MPLobby_DLC_execGetLocalPlayerBasicInfo_Parms GetLocalPlayerBasicInfo_Parms;

	this->ProcessEvent ( pFnGetLocalPlayerBasicInfo, &GetLocalPlayerBasicInfo_Parms, NULL );

	return GetLocalPlayerBasicInfo_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetPlayerSlotDetailedInfo
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FPlayerDisplayInfo      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )

struct FPlayerDisplayInfo USFXGUI_MPLobby_DLC::GetPlayerSlotDetailedInfo ( int Index )
{
	static UFunction* pFnGetPlayerSlotDetailedInfo = NULL;

	if ( ! pFnGetPlayerSlotDetailedInfo )
		pFnGetPlayerSlotDetailedInfo = (UFunction*) UObject::GObjObjects()->Data[ 109987 ];

	USFXGUI_MPLobby_DLC_execGetPlayerSlotDetailedInfo_Parms GetPlayerSlotDetailedInfo_Parms;
	GetPlayerSlotDetailedInfo_Parms.Index = Index;

	this->ProcessEvent ( pFnGetPlayerSlotDetailedInfo, &GetPlayerSlotDetailedInfo_Parms, NULL );

	return GetPlayerSlotDetailedInfo_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetPlayerSlotBasicInfo
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FPlayerDisplayInfo      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )

struct FPlayerDisplayInfo USFXGUI_MPLobby_DLC::GetPlayerSlotBasicInfo ( int Index )
{
	static UFunction* pFnGetPlayerSlotBasicInfo = NULL;

	if ( ! pFnGetPlayerSlotBasicInfo )
		pFnGetPlayerSlotBasicInfo = (UFunction*) UObject::GObjObjects()->Data[ 109983 ];

	USFXGUI_MPLobby_DLC_execGetPlayerSlotBasicInfo_Parms GetPlayerSlotBasicInfo_Parms;
	GetPlayerSlotBasicInfo_Parms.Index = Index;

	this->ProcessEvent ( pFnGetPlayerSlotBasicInfo, &GetPlayerSlotBasicInfo_Parms, NULL );

	return GetPlayerSlotBasicInfo_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetPlayerInSlot
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class Asfxprimp*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

class Asfxprimp* USFXGUI_MPLobby_DLC::GetPlayerInSlot ( int Index )
{
	static UFunction* pFnGetPlayerInSlot = NULL;

	if ( ! pFnGetPlayerInSlot )
		pFnGetPlayerInSlot = (UFunction*) UObject::GObjObjects()->Data[ 109979 ];

	USFXGUI_MPLobby_DLC_execGetPlayerInSlot_Parms GetPlayerInSlot_Parms;
	GetPlayerInSlot_Parms.Index = Index;

	this->ProcessEvent ( pFnGetPlayerInSlot, &GetPlayerInSlot_Parms, NULL );

	return GetPlayerInSlot_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetNumPlayers
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXGUI_MPLobby_DLC::GetNumPlayers ( )
{
	static UFunction* pFnGetNumPlayers = NULL;

	if ( ! pFnGetNumPlayers )
		pFnGetNumPlayers = (UFunction*) UObject::GObjObjects()->Data[ 109977 ];

	USFXGUI_MPLobby_DLC_execGetNumPlayers_Parms GetNumPlayers_Parms;

	this->ProcessEvent ( pFnGetNumPlayers, &GetNumPlayers_Parms, NULL );

	return GetNumPlayers_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetNumPlayerSlots
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXGUI_MPLobby_DLC::GetNumPlayerSlots ( )
{
	static UFunction* pFnGetNumPlayerSlots = NULL;

	if ( ! pFnGetNumPlayerSlots )
		pFnGetNumPlayerSlots = (UFunction*) UObject::GObjObjects()->Data[ 109975 ];

	USFXGUI_MPLobby_DLC_execGetNumPlayerSlots_Parms GetNumPlayerSlots_Parms;

	this->ProcessEvent ( pFnGetNumPlayerSlots, &GetNumPlayerSlots_Parms, NULL );

	return GetNumPlayerSlots_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetLobbyStatusString
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXGUI_MPLobby_DLC::GetLobbyStatusString ( )
{
	static UFunction* pFnGetLobbyStatusString = NULL;

	if ( ! pFnGetLobbyStatusString )
		pFnGetLobbyStatusString = (UFunction*) UObject::GObjObjects()->Data[ 109973 ];

	USFXGUI_MPLobby_DLC_execGetLobbyStatusString_Parms GetLobbyStatusString_Parms;

	this->ProcessEvent ( pFnGetLobbyStatusString, &GetLobbyStatusString_Parms, NULL );

	return GetLobbyStatusString_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.GetLobbyStatus
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXGUI_MPLobby_DLC::GetLobbyStatus ( )
{
	static UFunction* pFnGetLobbyStatus = NULL;

	if ( ! pFnGetLobbyStatus )
		pFnGetLobbyStatus = (UFunction*) UObject::GObjObjects()->Data[ 109971 ];

	USFXGUI_MPLobby_DLC_execGetLobbyStatus_Parms GetLobbyStatus_Parms;

	this->ProcessEvent ( pFnGetLobbyStatus, &GetLobbyStatus_Parms, NULL );

	return GetLobbyStatus_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.IsUIWorldPawnRequired
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Subscreen                      ( CPF_Parm )

bool USFXGUI_MPLobby_DLC::IsUIWorldPawnRequired ( int Subscreen )
{
	static UFunction* pFnIsUIWorldPawnRequired = NULL;

	if ( ! pFnIsUIWorldPawnRequired )
		pFnIsUIWorldPawnRequired = (UFunction*) UObject::GObjObjects()->Data[ 109895 ];

	USFXGUI_MPLobby_DLC_execIsUIWorldPawnRequired_Parms IsUIWorldPawnRequired_Parms;
	IsUIWorldPawnRequired_Parms.Subscreen = Subscreen;

	this->ProcessEvent ( pFnIsUIWorldPawnRequired, &IsUIWorldPawnRequired_Parms, NULL );

	return IsUIWorldPawnRequired_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.LoadTab
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            NewTab                         ( CPF_Parm )

void USFXGUI_MPLobby_DLC::LoadTab ( int NewTab )
{
	static UFunction* pFnLoadTab = NULL;

	if ( ! pFnLoadTab )
		pFnLoadTab = (UFunction*) UObject::GObjObjects()->Data[ 109965 ];

	USFXGUI_MPLobby_DLC_execLoadTab_Parms LoadTab_Parms;
	LoadTab_Parms.NewTab = NewTab;

	this->ProcessEvent ( pFnLoadTab, &LoadTab_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.GetCurrentLobbyTab
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXGUI_MPLobby_DLC::GetCurrentLobbyTab ( )
{
	static UFunction* pFnGetCurrentLobbyTab = NULL;

	if ( ! pFnGetCurrentLobbyTab )
		pFnGetCurrentLobbyTab = (UFunction*) UObject::GObjObjects()->Data[ 109963 ];

	USFXGUI_MPLobby_DLC_execGetCurrentLobbyTab_Parms GetCurrentLobbyTab_Parms;

	this->ProcessEvent ( pFnGetCurrentLobbyTab, &GetCurrentLobbyTab_Parms, NULL );

	return GetCurrentLobbyTab_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_ExitMultiplayerCancelled
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::AS_ExitMultiplayerCancelled ( )
{
	static UFunction* pFnAS_ExitMultiplayerCancelled = NULL;

	if ( ! pFnAS_ExitMultiplayerCancelled )
		pFnAS_ExitMultiplayerCancelled = (UFunction*) UObject::GObjObjects()->Data[ 109962 ];

	USFXGUI_MPLobby_DLC_execAS_ExitMultiplayerCancelled_Parms AS_ExitMultiplayerCancelled_Parms;

	this->ProcessEvent ( pFnAS_ExitMultiplayerCancelled, &AS_ExitMultiplayerCancelled_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_ExitLobbyCancelled
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::AS_ExitLobbyCancelled ( )
{
	static UFunction* pFnAS_ExitLobbyCancelled = NULL;

	if ( ! pFnAS_ExitLobbyCancelled )
		pFnAS_ExitLobbyCancelled = (UFunction*) UObject::GObjObjects()->Data[ 109961 ];

	USFXGUI_MPLobby_DLC_execAS_ExitLobbyCancelled_Parms AS_ExitLobbyCancelled_Parms;

	this->ProcessEvent ( pFnAS_ExitLobbyCancelled, &AS_ExitLobbyCancelled_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_RefreshGalaxyAtWarMap
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::AS_RefreshGalaxyAtWarMap ( )
{
	static UFunction* pFnAS_RefreshGalaxyAtWarMap = NULL;

	if ( ! pFnAS_RefreshGalaxyAtWarMap )
		pFnAS_RefreshGalaxyAtWarMap = (UFunction*) UObject::GObjObjects()->Data[ 109918 ];

	USFXGUI_MPLobby_DLC_execAS_RefreshGalaxyAtWarMap_Parms AS_RefreshGalaxyAtWarMap_Parms;

	this->ProcessEvent ( pFnAS_RefreshGalaxyAtWarMap, &AS_RefreshGalaxyAtWarMap_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_RefreshAllSpeakerIcons
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// TArray< float >                VoiceData                      ( CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPLobby_DLC::AS_RefreshAllSpeakerIcons ( TArray< float > VoiceData )
{
	static UFunction* pFnAS_RefreshAllSpeakerIcons = NULL;

	if ( ! pFnAS_RefreshAllSpeakerIcons )
		pFnAS_RefreshAllSpeakerIcons = (UFunction*) UObject::GObjObjects()->Data[ 109936 ];

	USFXGUI_MPLobby_DLC_execAS_RefreshAllSpeakerIcons_Parms AS_RefreshAllSpeakerIcons_Parms;
	memcpy ( &AS_RefreshAllSpeakerIcons_Parms.VoiceData, &VoiceData, 0xC );

	this->ProcessEvent ( pFnAS_RefreshAllSpeakerIcons, &AS_RefreshAllSpeakerIcons_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_GetChallengeSetting
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXGUI_MPLobby_DLC::AS_GetChallengeSetting ( )
{
	static UFunction* pFnAS_GetChallengeSetting = NULL;

	if ( ! pFnAS_GetChallengeSetting )
		pFnAS_GetChallengeSetting = (UFunction*) UObject::GObjObjects()->Data[ 109957 ];

	USFXGUI_MPLobby_DLC_execAS_GetChallengeSetting_Parms AS_GetChallengeSetting_Parms;

	this->ProcessEvent ( pFnAS_GetChallengeSetting, &AS_GetChallengeSetting_Parms, NULL );

	return AS_GetChallengeSetting_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_GetEnemySetting
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXGUI_MPLobby_DLC::AS_GetEnemySetting ( )
{
	static UFunction* pFnAS_GetEnemySetting = NULL;

	if ( ! pFnAS_GetEnemySetting )
		pFnAS_GetEnemySetting = (UFunction*) UObject::GObjObjects()->Data[ 109955 ];

	USFXGUI_MPLobby_DLC_execAS_GetEnemySetting_Parms AS_GetEnemySetting_Parms;

	this->ProcessEvent ( pFnAS_GetEnemySetting, &AS_GetEnemySetting_Parms, NULL );

	return AS_GetEnemySetting_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_GetMapSetting
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXGUI_MPLobby_DLC::AS_GetMapSetting ( )
{
	static UFunction* pFnAS_GetMapSetting = NULL;

	if ( ! pFnAS_GetMapSetting )
		pFnAS_GetMapSetting = (UFunction*) UObject::GObjObjects()->Data[ 109953 ];

	USFXGUI_MPLobby_DLC_execAS_GetMapSetting_Parms AS_GetMapSetting_Parms;

	this->ProcessEvent ( pFnAS_GetMapSetting, &AS_GetMapSetting_Parms, NULL );

	return AS_GetMapSetting_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_GetPrivacySetting
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXGUI_MPLobby_DLC::AS_GetPrivacySetting ( )
{
	static UFunction* pFnAS_GetPrivacySetting = NULL;

	if ( ! pFnAS_GetPrivacySetting )
		pFnAS_GetPrivacySetting = (UFunction*) UObject::GObjObjects()->Data[ 109951 ];

	USFXGUI_MPLobby_DLC_execAS_GetPrivacySetting_Parms AS_GetPrivacySetting_Parms;

	this->ProcessEvent ( pFnAS_GetPrivacySetting, &AS_GetPrivacySetting_Parms, NULL );

	return AS_GetPrivacySetting_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_OnTabLoaded
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            Subscreen                      ( CPF_Parm )

void USFXGUI_MPLobby_DLC::AS_OnTabLoaded ( int Subscreen )
{
	static UFunction* pFnAS_OnTabLoaded = NULL;

	if ( ! pFnAS_OnTabLoaded )
		pFnAS_OnTabLoaded = (UFunction*) UObject::GObjObjects()->Data[ 109949 ];

	USFXGUI_MPLobby_DLC_execAS_OnTabLoaded_Parms AS_OnTabLoaded_Parms;
	AS_OnTabLoaded_Parms.Subscreen = Subscreen;

	this->ProcessEvent ( pFnAS_OnTabLoaded, &AS_OnTabLoaded_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.AS_RefreshScreen
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::AS_RefreshScreen ( )
{
	static UFunction* pFnAS_RefreshScreen = NULL;

	if ( ! pFnAS_RefreshScreen )
		pFnAS_RefreshScreen = (UFunction*) UObject::GObjObjects()->Data[ 109927 ];

	USFXGUI_MPLobby_DLC_execAS_RefreshScreen_Parms AS_RefreshScreen_Parms;

	this->ProcessEvent ( pFnAS_RefreshScreen, &AS_RefreshScreen_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.ApplyTinting
// [0x00020002] 
// Parameters infos:
// class UObject*                 InSettings                     ( CPF_Parm )

void USFXGUI_MPLobby_DLC::ApplyTinting ( class UObject* InSettings )
{
	static UFunction* pFnApplyTinting = NULL;

	if ( ! pFnApplyTinting )
		pFnApplyTinting = (UFunction*) UObject::GObjObjects()->Data[ 109944 ];

	USFXGUI_MPLobby_DLC_execApplyTinting_Parms ApplyTinting_Parms;
	ApplyTinting_Parms.InSettings = InSettings;

	this->ProcessEvent ( pFnApplyTinting, &ApplyTinting_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.SetInitialPawnPosition
// [0x00020002] 
// Parameters infos:
// class UObject*                 Data                           ( CPF_Parm )

void USFXGUI_MPLobby_DLC::SetInitialPawnPosition ( class UObject* Data )
{
	static UFunction* pFnSetInitialPawnPosition = NULL;

	if ( ! pFnSetInitialPawnPosition )
		pFnSetInitialPawnPosition = (UFunction*) UObject::GObjObjects()->Data[ 109940 ];

	USFXGUI_MPLobby_DLC_execSetInitialPawnPosition_Parms SetInitialPawnPosition_Parms;
	SetInitialPawnPosition_Parms.Data = Data;

	this->ProcessEvent ( pFnSetInitialPawnPosition, &SetInitialPawnPosition_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.CleanupUIWorldPawn
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::CleanupUIWorldPawn ( )
{
	static UFunction* pFnCleanupUIWorldPawn = NULL;

	if ( ! pFnCleanupUIWorldPawn )
		pFnCleanupUIWorldPawn = (UFunction*) UObject::GObjObjects()->Data[ 109903 ];

	USFXGUI_MPLobby_DLC_execCleanupUIWorldPawn_Parms CleanupUIWorldPawn_Parms;

	this->ProcessEvent ( pFnCleanupUIWorldPawn, &CleanupUIWorldPawn_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.SetupUIWorldPawn
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::SetupUIWorldPawn ( )
{
	static UFunction* pFnSetupUIWorldPawn = NULL;

	if ( ! pFnSetupUIWorldPawn )
		pFnSetupUIWorldPawn = (UFunction*) UObject::GObjObjects()->Data[ 109897 ];

	USFXGUI_MPLobby_DLC_execSetupUIWorldPawn_Parms SetupUIWorldPawn_Parms;

	this->ProcessEvent ( pFnSetupUIWorldPawn, &SetupUIWorldPawn_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.RefreshAllSpeakerIcons
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::RefreshAllSpeakerIcons ( )
{
	static UFunction* pFnRefreshAllSpeakerIcons = NULL;

	if ( ! pFnRefreshAllSpeakerIcons )
		pFnRefreshAllSpeakerIcons = (UFunction*) UObject::GObjObjects()->Data[ 109911 ];

	USFXGUI_MPLobby_DLC_execRefreshAllSpeakerIcons_Parms RefreshAllSpeakerIcons_Parms;

	this->ProcessEvent ( pFnRefreshAllSpeakerIcons, &RefreshAllSpeakerIcons_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.Refresh
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPLobby_DLC::Refresh ( )
{
	static UFunction* pFnRefresh = NULL;

	if ( ! pFnRefresh )
		pFnRefresh = (UFunction*) UObject::GObjObjects()->Data[ 109900 ];

	USFXGUI_MPLobby_DLC_execRefresh_Parms Refresh_Parms;

	this->ProcessEvent ( pFnRefresh, &Refresh_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.GetGAWRatings
// [0x00020002] 
// Parameters infos:
// TArray< struct FGAWZoneGUIData > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FGAWZoneGUIData > USFXGUI_MPLobby_DLC::GetGAWRatings ( )
{
	static UFunction* pFnGetGAWRatings = NULL;

	if ( ! pFnGetGAWRatings )
		pFnGetGAWRatings = (UFunction*) UObject::GObjObjects()->Data[ 109921 ];

	USFXGUI_MPLobby_DLC_execGetGAWRatings_Parms GetGAWRatings_Parms;

	this->ProcessEvent ( pFnGetGAWRatings, &GetGAWRatings_Parms, NULL );

	return GetGAWRatings_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.HasGAWRatingsError
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXGUI_MPLobby_DLC::HasGAWRatingsError ( )
{
	static UFunction* pFnHasGAWRatingsError = NULL;

	if ( ! pFnHasGAWRatingsError )
		pFnHasGAWRatingsError = (UFunction*) UObject::GObjObjects()->Data[ 109919 ];

	USFXGUI_MPLobby_DLC_execHasGAWRatingsError_Parms HasGAWRatingsError_Parms;

	this->ProcessEvent ( pFnHasGAWRatingsError, &HasGAWRatingsError_Parms, NULL );

	return HasGAWRatingsError_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mplobby.OnGAWRequestFinished
// [0x00020002] 
// Parameters infos:
// TArray< struct FGAWZoneGUIData > ZoneData                       ( CPF_Parm | CPF_NeedCtorLink )
// int                            Level                          ( CPF_Parm )
// int                            errorCode                      ( CPF_Parm )

void USFXGUI_MPLobby_DLC::OnGAWRequestFinished ( TArray< struct FGAWZoneGUIData > ZoneData, int Level, int errorCode )
{
	static UFunction* pFnOnGAWRequestFinished = NULL;

	if ( ! pFnOnGAWRequestFinished )
		pFnOnGAWRequestFinished = (UFunction*) UObject::GObjObjects()->Data[ 109912 ];

	USFXGUI_MPLobby_DLC_execOnGAWRequestFinished_Parms OnGAWRequestFinished_Parms;
	memcpy ( &OnGAWRequestFinished_Parms.ZoneData, &ZoneData, 0xC );
	OnGAWRequestFinished_Parms.Level = Level;
	OnGAWRequestFinished_Parms.errorCode = errorCode;

	this->ProcessEvent ( pFnOnGAWRequestFinished, &OnGAWRequestFinished_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.Update
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          fDeltaT                        ( CPF_Parm )

void USFXGUI_MPLobby_DLC::eventUpdate ( float fDeltaT )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 109904 ];

	USFXGUI_MPLobby_DLC_eventUpdate_Parms Update_Parms;
	Update_Parms.fDeltaT = fDeltaT;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.OnClose
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXGUI_MPLobby_DLC::eventOnClose ( )
{
	static UFunction* pFnOnClose = NULL;

	if ( ! pFnOnClose )
		pFnOnClose = (UFunction*) UObject::GObjObjects()->Data[ 109902 ];

	USFXGUI_MPLobby_DLC_eventOnClose_Parms OnClose_Parms;

	this->ProcessEvent ( pFnOnClose, &OnClose_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mplobby.OnStart
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXGUI_MPLobby_DLC::eventOnStart ( )
{
	static UFunction* pFnOnStart = NULL;

	if ( ! pFnOnStart )
		pFnOnStart = (UFunction*) UObject::GObjObjects()->Data[ 109893 ];

	USFXGUI_MPLobby_DLC_eventOnStart_Parms OnStart_Parms;

	this->ProcessEvent ( pFnOnStart, &OnStart_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPSelectKit_DLC.ShowCharacterInfoCallback
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bAPressed                      ( CPF_Parm )
// int                            Context                        ( CPF_Parm )

void USFXGUI_MPSelectKit_DLC::ShowCharacterInfoCallback ( unsigned long bAPressed, int Context )
{
	static UFunction* pFnShowCharacterInfoCallback = NULL;

	if ( ! pFnShowCharacterInfoCallback )
		pFnShowCharacterInfoCallback = (UFunction*) UObject::GObjObjects()->Data[ 125345 ];

	USFXGUI_MPSelectKit_DLC_execShowCharacterInfoCallback_Parms ShowCharacterInfoCallback_Parms;
	ShowCharacterInfoCallback_Parms.bAPressed = bAPressed;
	ShowCharacterInfoCallback_Parms.Context = Context;

	this->ProcessEvent ( pFnShowCharacterInfoCallback, &ShowCharacterInfoCallback_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPSelectKit_DLC.ComposeKitDescriptionString
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FKitDescriptionData     oData                          ( CPF_Parm | CPF_NeedCtorLink )

struct FString USFXGUI_MPSelectKit_DLC::ComposeKitDescriptionString ( struct FKitDescriptionData oData )
{
	static UFunction* pFnComposeKitDescriptionString = NULL;

	if ( ! pFnComposeKitDescriptionString )
		pFnComposeKitDescriptionString = (UFunction*) UObject::GObjObjects()->Data[ 125341 ];

	USFXGUI_MPSelectKit_DLC_execComposeKitDescriptionString_Parms ComposeKitDescriptionString_Parms;
	memcpy ( &ComposeKitDescriptionString_Parms.oData, &oData, 0x30 );

	this->ProcessEvent ( pFnComposeKitDescriptionString, &ComposeKitDescriptionString_Parms, NULL );

	return ComposeKitDescriptionString_Parms.ReturnValue;
};

// Function sfxgamempcontentdlc_shared_mp.SFXGUI_MPSelectKit_DLC.ShowCharacterInfo
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 KitName                        ( CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPSelectKit_DLC::ShowCharacterInfo ( struct FString KitName )
{
	static UFunction* pFnShowCharacterInfo = NULL;

	if ( ! pFnShowCharacterInfo )
		pFnShowCharacterInfo = (UFunction*) UObject::GObjObjects()->Data[ 125336 ];

	USFXGUI_MPSelectKit_DLC_execShowCharacterInfo_Parms ShowCharacterInfo_Parms;
	memcpy ( &ShowCharacterInfo_Parms.KitName, &KitName, 0xC );

	this->ProcessEvent ( pFnShowCharacterInfo, &ShowCharacterInfo_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.AS_RefreshScreen
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPMatchConsumables_DLC::AS_RefreshScreen ( )
{
	static UFunction* pFnAS_RefreshScreen = NULL;

	if ( ! pFnAS_RefreshScreen )
		pFnAS_RefreshScreen = (UFunction*) UObject::GObjObjects()->Data[ 110404 ];

	USFXGUI_MPMatchConsumables_DLC_execAS_RefreshScreen_Parms AS_RefreshScreen_Parms;

	this->ProcessEvent ( pFnAS_RefreshScreen, &AS_RefreshScreen_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetGUICategoryFromSlotType
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SlotType                       ( CPF_Parm )

unsigned char USFXGUI_MPMatchConsumables_DLC::GetGUICategoryFromSlotType ( int SlotType )
{
	static UFunction* pFnGetGUICategoryFromSlotType = NULL;

	if ( ! pFnGetGUICategoryFromSlotType )
		pFnGetGUICategoryFromSlotType = (UFunction*) UObject::GObjObjects()->Data[ 110488 ];

	USFXGUI_MPMatchConsumables_DLC_execGetGUICategoryFromSlotType_Parms GetGUICategoryFromSlotType_Parms;
	GetGUICategoryFromSlotType_Parms.SlotType = SlotType;

	this->ProcessEvent ( pFnGetGUICategoryFromSlotType, &GetGUICategoryFromSlotType_Parms, NULL );

	return GetGUICategoryFromSlotType_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.ClearNewFlagsForSlotType
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            SlotType                       ( CPF_Parm )

void USFXGUI_MPMatchConsumables_DLC::ClearNewFlagsForSlotType ( int SlotType )
{
	static UFunction* pFnClearNewFlagsForSlotType = NULL;

	if ( ! pFnClearNewFlagsForSlotType )
		pFnClearNewFlagsForSlotType = (UFunction*) UObject::GObjObjects()->Data[ 110466 ];

	USFXGUI_MPMatchConsumables_DLC_execClearNewFlagsForSlotType_Parms ClearNewFlagsForSlotType_Parms;
	ClearNewFlagsForSlotType_Parms.SlotType = SlotType;

	this->ProcessEvent ( pFnClearNewFlagsForSlotType, &ClearNewFlagsForSlotType_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.HasNewConsumablesOfSlotType
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SlotType                       ( CPF_Parm )

bool USFXGUI_MPMatchConsumables_DLC::HasNewConsumablesOfSlotType ( int SlotType )
{
	static UFunction* pFnHasNewConsumablesOfSlotType = NULL;

	if ( ! pFnHasNewConsumablesOfSlotType )
		pFnHasNewConsumablesOfSlotType = (UFunction*) UObject::GObjObjects()->Data[ 110483 ];

	USFXGUI_MPMatchConsumables_DLC_execHasNewConsumablesOfSlotType_Parms HasNewConsumablesOfSlotType_Parms;
	HasNewConsumablesOfSlotType_Parms.SlotType = SlotType;

	this->ProcessEvent ( pFnHasNewConsumablesOfSlotType, &HasNewConsumablesOfSlotType_Parms, NULL );

	return HasNewConsumablesOfSlotType_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetInGameConsumableInfo
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// TArray< struct FInGameConsumableInfo > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FInGameConsumableInfo > USFXGUI_MPMatchConsumables_DLC::GetInGameConsumableInfo ( )
{
	static UFunction* pFnGetInGameConsumableInfo = NULL;

	if ( ! pFnGetInGameConsumableInfo )
		pFnGetInGameConsumableInfo = (UFunction*) UObject::GObjObjects()->Data[ 110471 ];

	USFXGUI_MPMatchConsumables_DLC_execGetInGameConsumableInfo_Parms GetInGameConsumableInfo_Parms;

	this->ProcessEvent ( pFnGetInGameConsumableInfo, &GetInGameConsumableInfo_Parms, NULL );

	return GetInGameConsumableInfo_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.ShowStoreScreen
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPMatchConsumables_DLC::ShowStoreScreen ( )
{
	static UFunction* pFnShowStoreScreen = NULL;

	if ( ! pFnShowStoreScreen )
		pFnShowStoreScreen = (UFunction*) UObject::GObjObjects()->Data[ 110470 ];

	USFXGUI_MPMatchConsumables_DLC_execShowStoreScreen_Parms ShowStoreScreen_Parms;

	this->ProcessEvent ( pFnShowStoreScreen, &ShowStoreScreen_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetSlotTypeForCategory
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Category                       ( CPF_Parm )

int USFXGUI_MPMatchConsumables_DLC::GetSlotTypeForCategory ( int Category )
{
	static UFunction* pFnGetSlotTypeForCategory = NULL;

	if ( ! pFnGetSlotTypeForCategory )
		pFnGetSlotTypeForCategory = (UFunction*) UObject::GObjObjects()->Data[ 110436 ];

	USFXGUI_MPMatchConsumables_DLC_execGetSlotTypeForCategory_Parms GetSlotTypeForCategory_Parms;
	GetSlotTypeForCategory_Parms.Category = Category;

	this->ProcessEvent ( pFnGetSlotTypeForCategory, &GetSlotTypeForCategory_Parms, NULL );

	return GetSlotTypeForCategory_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.ExitScreen
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPMatchConsumables_DLC::ExitScreen ( )
{
	static UFunction* pFnExitScreen = NULL;

	if ( ! pFnExitScreen )
		pFnExitScreen = (UFunction*) UObject::GObjObjects()->Data[ 110465 ];

	USFXGUI_MPMatchConsumables_DLC_execExitScreen_Parms ExitScreen_Parms;

	this->ProcessEvent ( pFnExitScreen, &ExitScreen_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetMaxActiveConsumables
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXGUI_MPMatchConsumables_DLC::GetMaxActiveConsumables ( )
{
	static UFunction* pFnGetMaxActiveConsumables = NULL;

	if ( ! pFnGetMaxActiveConsumables )
		pFnGetMaxActiveConsumables = (UFunction*) UObject::GObjObjects()->Data[ 110463 ];

	USFXGUI_MPMatchConsumables_DLC_execGetMaxActiveConsumables_Parms GetMaxActiveConsumables_Parms;

	this->ProcessEvent ( pFnGetMaxActiveConsumables, &GetMaxActiveConsumables_Parms, NULL );

	return GetMaxActiveConsumables_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetActiveConsumables
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// TArray< struct FConsumableDisplayInfo > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FConsumableDisplayInfo > USFXGUI_MPMatchConsumables_DLC::GetActiveConsumables ( )
{
	static UFunction* pFnGetActiveConsumables = NULL;

	if ( ! pFnGetActiveConsumables )
		pFnGetActiveConsumables = (UFunction*) UObject::GObjObjects()->Data[ 110460 ];

	USFXGUI_MPMatchConsumables_DLC_execGetActiveConsumables_Parms GetActiveConsumables_Parms;

	this->ProcessEvent ( pFnGetActiveConsumables, &GetActiveConsumables_Parms, NULL );

	return GetActiveConsumables_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.UpdateActiveList
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPMatchConsumables_DLC::UpdateActiveList ( )
{
	static UFunction* pFnUpdateActiveList = NULL;

	if ( ! pFnUpdateActiveList )
		pFnUpdateActiveList = (UFunction*) UObject::GObjObjects()->Data[ 110403 ];

	USFXGUI_MPMatchConsumables_DLC_execUpdateActiveList_Parms UpdateActiveList_Parms;

	this->ProcessEvent ( pFnUpdateActiveList, &UpdateActiveList_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.DeactivateConsumablesOfSlotType
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            SlotType                       ( CPF_Parm )

void USFXGUI_MPMatchConsumables_DLC::DeactivateConsumablesOfSlotType ( int SlotType )
{
	static UFunction* pFnDeactivateConsumablesOfSlotType = NULL;

	if ( ! pFnDeactivateConsumablesOfSlotType )
		pFnDeactivateConsumablesOfSlotType = (UFunction*) UObject::GObjObjects()->Data[ 110455 ];

	USFXGUI_MPMatchConsumables_DLC_execDeactivateConsumablesOfSlotType_Parms DeactivateConsumablesOfSlotType_Parms;
	DeactivateConsumablesOfSlotType_Parms.SlotType = SlotType;

	this->ProcessEvent ( pFnDeactivateConsumablesOfSlotType, &DeactivateConsumablesOfSlotType_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.SetConsumableActive
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            Id                             ( CPF_Parm )
// int                            Version                        ( CPF_Parm )
// unsigned long                  bActive                        ( CPF_Parm )

void USFXGUI_MPMatchConsumables_DLC::SetConsumableActive ( int Id, int Version, unsigned long bActive )
{
	static UFunction* pFnSetConsumableActive = NULL;

	if ( ! pFnSetConsumableActive )
		pFnSetConsumableActive = (UFunction*) UObject::GObjObjects()->Data[ 110449 ];

	USFXGUI_MPMatchConsumables_DLC_execSetConsumableActive_Parms SetConsumableActive_Parms;
	SetConsumableActive_Parms.Id = Id;
	SetConsumableActive_Parms.Version = Version;
	SetConsumableActive_Parms.bActive = bActive;

	this->ProcessEvent ( pFnSetConsumableActive, &SetConsumableActive_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.IsConsumableAvailable
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXGAWReinforcementBase* CardOwner                      ( CPF_Parm )
// int                            Id                             ( CPF_Parm )
// int                            Version                        ( CPF_Parm )
// int                            Category                       ( CPF_Parm )

bool USFXGUI_MPMatchConsumables_DLC::IsConsumableAvailable ( class USFXGAWReinforcementBase* CardOwner, int Id, int Version, int Category )
{
	static UFunction* pFnIsConsumableAvailable = NULL;

	if ( ! pFnIsConsumableAvailable )
		pFnIsConsumableAvailable = (UFunction*) UObject::GObjObjects()->Data[ 110420 ];

	USFXGUI_MPMatchConsumables_DLC_execIsConsumableAvailable_Parms IsConsumableAvailable_Parms;
	IsConsumableAvailable_Parms.CardOwner = CardOwner;
	IsConsumableAvailable_Parms.Id = Id;
	IsConsumableAvailable_Parms.Version = Version;
	IsConsumableAvailable_Parms.Category = Category;

	this->ProcessEvent ( pFnIsConsumableAvailable, &IsConsumableAvailable_Parms, NULL );

	return IsConsumableAvailable_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetConsumable
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FConsumableDisplayInfo  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Id                             ( CPF_Parm )
// int                            Version                        ( CPF_Parm )

struct FConsumableDisplayInfo USFXGUI_MPMatchConsumables_DLC::GetConsumable ( int Id, int Version )
{
	static UFunction* pFnGetConsumable = NULL;

	if ( ! pFnGetConsumable )
		pFnGetConsumable = (UFunction*) UObject::GObjObjects()->Data[ 110437 ];

	USFXGUI_MPMatchConsumables_DLC_execGetConsumable_Parms GetConsumable_Parms;
	GetConsumable_Parms.Id = Id;
	GetConsumable_Parms.Version = Version;

	this->ProcessEvent ( pFnGetConsumable, &GetConsumable_Parms, NULL );

	return GetConsumable_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetConsumableListFilteredBySlot
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// TArray< struct FConsumableDisplayInfo > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            SlotIndex                      ( CPF_Parm )

TArray< struct FConsumableDisplayInfo > USFXGUI_MPMatchConsumables_DLC::GetConsumableListFilteredBySlot ( int SlotIndex )
{
	static UFunction* pFnGetConsumableListFilteredBySlot = NULL;

	if ( ! pFnGetConsumableListFilteredBySlot )
		pFnGetConsumableListFilteredBySlot = (UFunction*) UObject::GObjObjects()->Data[ 110428 ];

	USFXGUI_MPMatchConsumables_DLC_execGetConsumableListFilteredBySlot_Parms GetConsumableListFilteredBySlot_Parms;
	GetConsumableListFilteredBySlot_Parms.SlotIndex = SlotIndex;

	this->ProcessEvent ( pFnGetConsumableListFilteredBySlot, &GetConsumableListFilteredBySlot_Parms, NULL );

	return GetConsumableListFilteredBySlot_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetConsumableList
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// TArray< struct FConsumableDisplayInfo > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FConsumableDisplayInfo > USFXGUI_MPMatchConsumables_DLC::GetConsumableList ( )
{
	static UFunction* pFnGetConsumableList = NULL;

	if ( ! pFnGetConsumableList )
		pFnGetConsumableList = (UFunction*) UObject::GObjObjects()->Data[ 110421 ];

	USFXGUI_MPMatchConsumables_DLC_execGetConsumableList_Parms GetConsumableList_Parms;

	this->ProcessEvent ( pFnGetConsumableList, &GetConsumableList_Parms, NULL );

	return GetConsumableList_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.GetDisplayInfo
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FConsumableDisplayInfo  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            CardID                         ( CPF_Parm )
// struct FCardInfoData           CardData                       ( CPF_Parm | CPF_NeedCtorLink )

struct FConsumableDisplayInfo USFXGUI_MPMatchConsumables_DLC::GetDisplayInfo ( int CardID, struct FCardInfoData CardData )
{
	static UFunction* pFnGetDisplayInfo = NULL;

	if ( ! pFnGetDisplayInfo )
		pFnGetDisplayInfo = (UFunction*) UObject::GObjObjects()->Data[ 110407 ];

	USFXGUI_MPMatchConsumables_DLC_execGetDisplayInfo_Parms GetDisplayInfo_Parms;
	GetDisplayInfo_Parms.CardID = CardID;
	memcpy ( &GetDisplayInfo_Parms.CardData, &CardData, 0x68 );

	this->ProcessEvent ( pFnGetDisplayInfo, &GetDisplayInfo_Parms, NULL );

	return GetDisplayInfo_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.OnClose
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXGUI_MPMatchConsumables_DLC::eventOnClose ( )
{
	static UFunction* pFnOnClose = NULL;

	if ( ! pFnOnClose )
		pFnOnClose = (UFunction*) UObject::GObjObjects()->Data[ 110405 ];

	USFXGUI_MPMatchConsumables_DLC_eventOnClose_Parms OnClose_Parms;

	this->ProcessEvent ( pFnOnClose, &OnClose_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mpmatchconsumables.OnStart
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXGUI_MPMatchConsumables_DLC::eventOnStart ( )
{
	static UFunction* pFnOnStart = NULL;

	if ( ! pFnOnStart )
		pFnOnStart = (UFunction*) UObject::GObjObjects()->Data[ 110399 ];

	USFXGUI_MPMatchConsumables_DLC_eventOnStart_Parms OnStart_Parms;

	this->ProcessEvent ( pFnOnStart, &OnStart_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.AS_InitializeScreen
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  SkipIntro                      ( CPF_Parm )

void USFXGUI_MPReinforcementsReveal_DLC::AS_InitializeScreen ( unsigned long SkipIntro )
{
	static UFunction* pFnAS_InitializeScreen = NULL;

	if ( ! pFnAS_InitializeScreen )
		pFnAS_InitializeScreen = (UFunction*) UObject::GObjObjects()->Data[ 110821 ];

	USFXGUI_MPReinforcementsReveal_DLC_execAS_InitializeScreen_Parms AS_InitializeScreen_Parms;
	AS_InitializeScreen_Parms.SkipIntro = SkipIntro;

	this->ProcessEvent ( pFnAS_InitializeScreen, &AS_InitializeScreen_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.GetCardsToDisplay
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// TArray< struct FCardInfoData > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FCardInfoData > USFXGUI_MPReinforcementsReveal_DLC::GetCardsToDisplay ( )
{
	static UFunction* pFnGetCardsToDisplay = NULL;

	if ( ! pFnGetCardsToDisplay )
		pFnGetCardsToDisplay = (UFunction*) UObject::GObjObjects()->Data[ 110841 ];

	USFXGUI_MPReinforcementsReveal_DLC_execGetCardsToDisplay_Parms GetCardsToDisplay_Parms;

	this->ProcessEvent ( pFnGetCardsToDisplay, &GetCardsToDisplay_Parms, NULL );

	return GetCardsToDisplay_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.GetAwardedPackName
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXGUI_MPReinforcementsReveal_DLC::GetAwardedPackName ( )
{
	static UFunction* pFnGetAwardedPackName = NULL;

	if ( ! pFnGetAwardedPackName )
		pFnGetAwardedPackName = (UFunction*) UObject::GObjObjects()->Data[ 110818 ];

	USFXGUI_MPReinforcementsReveal_DLC_execGetAwardedPackName_Parms GetAwardedPackName_Parms;

	this->ProcessEvent ( pFnGetAwardedPackName, &GetAwardedPackName_Parms, NULL );

	return GetAwardedPackName_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.GetPackRevealSound
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName USFXGUI_MPReinforcementsReveal_DLC::GetPackRevealSound ( )
{
	static UFunction* pFnGetPackRevealSound = NULL;

	if ( ! pFnGetPackRevealSound )
		pFnGetPackRevealSound = (UFunction*) UObject::GObjObjects()->Data[ 110820 ];

	USFXGUI_MPReinforcementsReveal_DLC_execGetPackRevealSound_Parms GetPackRevealSound_Parms;

	this->ProcessEvent ( pFnGetPackRevealSound, &GetPackRevealSound_Parms, NULL );

	return GetPackRevealSound_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.GetPackIntroHoloTextureRef
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXGUI_MPReinforcementsReveal_DLC::GetPackIntroHoloTextureRef ( )
{
	static UFunction* pFnGetPackIntroHoloTextureRef = NULL;

	if ( ! pFnGetPackIntroHoloTextureRef )
		pFnGetPackIntroHoloTextureRef = (UFunction*) UObject::GObjObjects()->Data[ 110845 ];

	USFXGUI_MPReinforcementsReveal_DLC_execGetPackIntroHoloTextureRef_Parms GetPackIntroHoloTextureRef_Parms;

	this->ProcessEvent ( pFnGetPackIntroHoloTextureRef, &GetPackIntroHoloTextureRef_Parms, NULL );

	return GetPackIntroHoloTextureRef_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.GetPackIntroTextureRef
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXGUI_MPReinforcementsReveal_DLC::GetPackIntroTextureRef ( )
{
	static UFunction* pFnGetPackIntroTextureRef = NULL;

	if ( ! pFnGetPackIntroTextureRef )
		pFnGetPackIntroTextureRef = (UFunction*) UObject::GObjObjects()->Data[ 110843 ];

	USFXGUI_MPReinforcementsReveal_DLC_execGetPackIntroTextureRef_Parms GetPackIntroTextureRef_Parms;

	this->ProcessEvent ( pFnGetPackIntroTextureRef, &GetPackIntroTextureRef_Parms, NULL );

	return GetPackIntroTextureRef_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.Exit
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_MPReinforcementsReveal_DLC::Exit ( )
{
	static UFunction* pFnExit = NULL;

	if ( ! pFnExit )
		pFnExit = (UFunction*) UObject::GObjObjects()->Data[ 110842 ];

	USFXGUI_MPReinforcementsReveal_DLC_execExit_Parms Exit_Parms;

	this->ProcessEvent ( pFnExit, &Exit_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.GetCardData
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// TArray< struct FCardDisplayData > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FCardDisplayData > USFXGUI_MPReinforcementsReveal_DLC::GetCardData ( )
{
	static UFunction* pFnGetCardData = NULL;

	if ( ! pFnGetCardData )
		pFnGetCardData = (UFunction*) UObject::GObjObjects()->Data[ 110832 ];

	USFXGUI_MPReinforcementsReveal_DLC_execGetCardData_Parms GetCardData_Parms;

	this->ProcessEvent ( pFnGetCardData, &GetCardData_Parms, NULL );

	return GetCardData_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.GetPackName
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USFXGUI_MPReinforcementsReveal_DLC::GetPackName ( )
{
	static UFunction* pFnGetPackName = NULL;

	if ( ! pFnGetPackName )
		pFnGetPackName = (UFunction*) UObject::GObjObjects()->Data[ 110830 ];

	USFXGUI_MPReinforcementsReveal_DLC_execGetPackName_Parms GetPackName_Parms;

	this->ProcessEvent ( pFnGetPackName, &GetPackName_Parms, NULL );

	return GetPackName_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.GetCardDisplayData
// [0x00422003] ( FUNC_Final )
// Parameters infos:
// struct FCardDisplayData        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FCardInfoData           CardData                       ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FCardDisplayData USFXGUI_MPReinforcementsReveal_DLC::GetCardDisplayData ( struct FCardInfoData* CardData )
{
	static UFunction* pFnGetCardDisplayData = NULL;

	if ( ! pFnGetCardDisplayData )
		pFnGetCardDisplayData = (UFunction*) UObject::GObjObjects()->Data[ 110823 ];

	USFXGUI_MPReinforcementsReveal_DLC_execGetCardDisplayData_Parms GetCardDisplayData_Parms;

	this->ProcessEvent ( pFnGetCardDisplayData, &GetCardDisplayData_Parms, NULL );

	if ( CardData )
		memcpy ( CardData, &GetCardDisplayData_Parms.CardData, 0x68 );

	return GetCardDisplayData_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.OnClose
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXGUI_MPReinforcementsReveal_DLC::eventOnClose ( )
{
	static UFunction* pFnOnClose = NULL;

	if ( ! pFnOnClose )
		pFnOnClose = (UFunction*) UObject::GObjObjects()->Data[ 110822 ];

	USFXGUI_MPReinforcementsReveal_DLC_eventOnClose_Parms OnClose_Parms;

	this->ProcessEvent ( pFnOnClose, &OnClose_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.OnStart
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXGUI_MPReinforcementsReveal_DLC::eventOnStart ( )
{
	static UFunction* pFnOnStart = NULL;

	if ( ! pFnOnStart )
		pFnOnStart = (UFunction*) UObject::GObjObjects()->Data[ 110812 ];

	USFXGUI_MPReinforcementsReveal_DLC_eventOnStart_Parms OnStart_Parms;

	this->ProcessEvent ( pFnOnStart, &OnStart_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.SetOnCloseCallback
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         fn_OnCloseDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void USFXGUI_MPReinforcementsReveal_DLC::SetOnCloseCallback ( struct FScriptDelegate fn_OnCloseDelegate )
{
	static UFunction* pFnSetOnCloseCallback = NULL;

	if ( ! pFnSetOnCloseCallback )
		pFnSetOnCloseCallback = (UFunction*) UObject::GObjObjects()->Data[ 110809 ];

	USFXGUI_MPReinforcementsReveal_DLC_execSetOnCloseCallback_Parms SetOnCloseCallback_Parms;
	memcpy ( &SetOnCloseCallback_Parms.fn_OnCloseDelegate, &fn_OnCloseDelegate, 0xC );

	this->ProcessEvent ( pFnSetOnCloseCallback, &SetOnCloseCallback_Parms, NULL );
};

// Function sfxgamempcontent.sfxgui_mpreinforcementsreveal.OnCloseCallback
// [0x00120000] 
// Parameters infos:

void USFXGUI_MPReinforcementsReveal_DLC::OnCloseCallback ( )
{
	static UFunction* pFnOnCloseCallback = NULL;

	if ( ! pFnOnCloseCallback )
		pFnOnCloseCallback = (UFunction*) UObject::GObjObjects()->Data[ 110808 ];

	USFXGUI_MPReinforcementsReveal_DLC_execOnCloseCallback_Parms OnCloseCallback_Parms;

	this->ProcessEvent ( pFnOnCloseCallback, &OnCloseCallback_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear.OnAwarded
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FCardInfoData           CardInfoOut                    ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FCardInfoData > ChosenCards                    ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool USFXGAWReinforcementMatchConsumable_Gear::OnAwarded ( struct FCardInfoData* CardInfoOut, TArray< struct FCardInfoData >* ChosenCards )
{
	static UFunction* pFnOnAwarded = NULL;

	if ( ! pFnOnAwarded )
		pFnOnAwarded = (UFunction*) UObject::GObjObjects()->Data[ 124975 ];

	USFXGAWReinforcementMatchConsumable_Gear_execOnAwarded_Parms OnAwarded_Parms;

	this->ProcessEvent ( pFnOnAwarded, &OnAwarded_Parms, NULL );

	if ( CardInfoOut )
		memcpy ( CardInfoOut, &OnAwarded_Parms.CardInfoOut, 0x68 );

	if ( ChosenCards )
		memcpy ( ChosenCards, &OnAwarded_Parms.ChosenCards, 0xC );

	return OnAwarded_Parms.ReturnValue;
};

// Function sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear.Deactivate
// [0x00020002] 
// Parameters infos:
// int                            UniqueId                       ( CPF_Parm )
// float                          VersionIdx                     ( CPF_Parm )

void USFXGAWReinforcementMatchConsumable_Gear::Deactivate ( int UniqueId, float VersionIdx )
{
	static UFunction* pFnDeactivate = NULL;

	if ( ! pFnDeactivate )
		pFnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 124969 ];

	USFXGAWReinforcementMatchConsumable_Gear_execDeactivate_Parms Deactivate_Parms;
	Deactivate_Parms.UniqueId = UniqueId;
	Deactivate_Parms.VersionIdx = VersionIdx;

	this->ProcessEvent ( pFnDeactivate, &Deactivate_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear.Activate
// [0x00020002] 
// Parameters infos:
// int                            UniqueId                       ( CPF_Parm )
// float                          VersionIdx                     ( CPF_Parm )

void USFXGAWReinforcementMatchConsumable_Gear::Activate ( int UniqueId, float VersionIdx )
{
	static UFunction* pFnActivate = NULL;

	if ( ! pFnActivate )
		pFnActivate = (UFunction*) UObject::GObjObjects()->Data[ 124963 ];

	USFXGAWReinforcementMatchConsumable_Gear_execActivate_Parms Activate_Parms;
	Activate_Parms.UniqueId = UniqueId;
	Activate_Parms.VersionIdx = VersionIdx;

	this->ProcessEvent ( pFnActivate, &Activate_Parms, NULL );
};

// Function sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear.IsActive
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            UniqueId                       ( CPF_Parm )
// float                          VersionIdx                     ( CPF_Parm )

bool USFXGAWReinforcementMatchConsumable_Gear::IsActive ( int UniqueId, float VersionIdx )
{
	static UFunction* pFnIsActive = NULL;

	if ( ! pFnIsActive )
		pFnIsActive = (UFunction*) UObject::GObjObjects()->Data[ 124956 ];

	USFXGAWReinforcementMatchConsumable_Gear_execIsActive_Parms IsActive_Parms;
	IsActive_Parms.UniqueId = UniqueId;
	IsActive_Parms.VersionIdx = VersionIdx;

	this->ProcessEvent ( pFnIsActive, &IsActive_Parms, NULL );

	return IsActive_Parms.ReturnValue;
};

// Function sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear.TrimTrailingZeroes
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

struct FString USFXGAWReinforcementMatchConsumable_Gear::TrimTrailingZeroes ( struct FString S )
{
	static UFunction* pFnTrimTrailingZeroes = NULL;

	if ( ! pFnTrimTrailingZeroes )
		pFnTrimTrailingZeroes = (UFunction*) UObject::GObjObjects()->Data[ 124952 ];

	USFXGAWReinforcementMatchConsumable_Gear_execTrimTrailingZeroes_Parms TrimTrailingZeroes_Parms;
	memcpy ( &TrimTrailingZeroes_Parms.S, &S, 0xC );

	this->ProcessEvent ( pFnTrimTrailingZeroes, &TrimTrailingZeroes_Parms, NULL );

	return TrimTrailingZeroes_Parms.ReturnValue;
};

// Function sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear.FloatToPercentString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// float                          F                              ( CPF_Parm )

struct FString USFXGAWReinforcementMatchConsumable_Gear::FloatToPercentString ( float F )
{
	static UFunction* pFnFloatToPercentString = NULL;

	if ( ! pFnFloatToPercentString )
		pFnFloatToPercentString = (UFunction*) UObject::GObjObjects()->Data[ 124949 ];

	USFXGAWReinforcementMatchConsumable_Gear_execFloatToPercentString_Parms FloatToPercentString_Parms;
	FloatToPercentString_Parms.F = F;

	this->ProcessEvent ( pFnFloatToPercentString, &FloatToPercentString_Parms, NULL );

	return FloatToPercentString_Parms.ReturnValue;
};

// Function sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear.FindDescriptionTokens
// [0x00020002] 
// Parameters infos:
// struct FGearDescriptionTokens  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 CardUniqueName                 ( CPF_Parm | CPF_NeedCtorLink )

struct FGearDescriptionTokens USFXGAWReinforcementMatchConsumable_Gear::FindDescriptionTokens ( struct FString CardUniqueName )
{
	static UFunction* pFnFindDescriptionTokens = NULL;

	if ( ! pFnFindDescriptionTokens )
		pFnFindDescriptionTokens = (UFunction*) UObject::GObjObjects()->Data[ 124944 ];

	USFXGAWReinforcementMatchConsumable_Gear_execFindDescriptionTokens_Parms FindDescriptionTokens_Parms;
	memcpy ( &FindDescriptionTokens_Parms.CardUniqueName, &CardUniqueName, 0xC );

	this->ProcessEvent ( pFnFindDescriptionTokens, &FindDescriptionTokens_Parms, NULL );

	return FindDescriptionTokens_Parms.ReturnValue;
};

// Function sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear.PrepareCustomTokensForGearDescription
// [0x00020002] 
// Parameters infos:
// struct FString                 CardUniqueName                 ( CPF_Parm | CPF_NeedCtorLink )
// int                            GearLevel                      ( CPF_Parm )

void USFXGAWReinforcementMatchConsumable_Gear::PrepareCustomTokensForGearDescription ( struct FString CardUniqueName, int GearLevel )
{
	static UFunction* pFnPrepareCustomTokensForGearDescription = NULL;

	if ( ! pFnPrepareCustomTokensForGearDescription )
		pFnPrepareCustomTokensForGearDescription = (UFunction*) UObject::GObjObjects()->Data[ 124939 ];

	USFXGAWReinforcementMatchConsumable_Gear_execPrepareCustomTokensForGearDescription_Parms PrepareCustomTokensForGearDescription_Parms;
	memcpy ( &PrepareCustomTokensForGearDescription_Parms.CardUniqueName, &CardUniqueName, 0xC );
	PrepareCustomTokensForGearDescription_Parms.GearLevel = GearLevel;

	this->ProcessEvent ( pFnPrepareCustomTokensForGearDescription, &PrepareCustomTokensForGearDescription_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif