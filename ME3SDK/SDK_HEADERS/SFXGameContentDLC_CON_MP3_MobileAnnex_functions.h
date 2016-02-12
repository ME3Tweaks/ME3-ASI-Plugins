/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGameContentDLC_CON_MP3_MobileAnnex_functions.h
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

float USFXEngagement_MobileAnnex::GetCreditsReward ( )
{
	static UFunction* pFnGetCreditsReward = NULL;

	if ( ! pFnGetCreditsReward )
		pFnGetCreditsReward = (UFunction*) UObject::GObjObjects()->Data[ 108350 ];

	USFXEngagement_MobileAnnex_execGetCreditsReward_Parms GetCreditsReward_Parms;

	this->ProcessEvent ( pFnGetCreditsReward, &GetCreditsReward_Parms, NULL );

	return GetCreditsReward_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxwave_operation.GetCreditBudget
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXEngagement_MobileAnnex::GetCreditBudget ( )
{
	static UFunction* pFnGetCreditBudget = NULL;

	if ( ! pFnGetCreditBudget )
		pFnGetCreditBudget = (UFunction*) UObject::GObjObjects()->Data[ 108348 ];

	USFXEngagement_MobileAnnex_execGetCreditBudget_Parms GetCreditBudget_Parms;

	this->ProcessEvent ( pFnGetCreditBudget, &GetCreditBudget_Parms, NULL );

	return GetCreditBudget_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxwave_operation.DistributeObjectiveScore
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex::DistributeObjectiveScore ( )
{
	static UFunction* pFnDistributeObjectiveScore = NULL;

	if ( ! pFnDistributeObjectiveScore )
		pFnDistributeObjectiveScore = (UFunction*) UObject::GObjObjects()->Data[ 108333 ];

	USFXEngagement_MobileAnnex_execDistributeObjectiveScore_Parms DistributeObjectiveScore_Parms;

	this->ProcessEvent ( pFnDistributeObjectiveScore, &DistributeObjectiveScore_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.CountdownTimerExpired
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex::CountdownTimerExpired ( )
{
	static UFunction* pFnCountdownTimerExpired = NULL;

	if ( ! pFnCountdownTimerExpired )
		pFnCountdownTimerExpired = (UFunction*) UObject::GObjObjects()->Data[ 108331 ];

	USFXEngagement_MobileAnnex_execCountdownTimerExpired_Parms CountdownTimerExpired_Parms;

	this->ProcessEvent ( pFnCountdownTimerExpired, &CountdownTimerExpired_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.CancelCountdownTimer
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex::CancelCountdownTimer ( )
{
	static UFunction* pFnCancelCountdownTimer = NULL;

	if ( ! pFnCancelCountdownTimer )
		pFnCancelCountdownTimer = (UFunction*) UObject::GObjObjects()->Data[ 108329 ];

	USFXEngagement_MobileAnnex_execCancelCountdownTimer_Parms CancelCountdownTimer_Parms;

	this->ProcessEvent ( pFnCancelCountdownTimer, &CancelCountdownTimer_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.LocalPlayerTimeWarningHint
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex::LocalPlayerTimeWarningHint ( )
{
	static UFunction* pFnLocalPlayerTimeWarningHint = NULL;

	if ( ! pFnLocalPlayerTimeWarningHint )
		pFnLocalPlayerTimeWarningHint = (UFunction*) UObject::GObjObjects()->Data[ 108326 ];

	USFXEngagement_MobileAnnex_execLocalPlayerTimeWarningHint_Parms LocalPlayerTimeWarningHint_Parms;

	this->ProcessEvent ( pFnLocalPlayerTimeWarningHint, &LocalPlayerTimeWarningHint_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.SetTimeLimit
// [0x00020002] 
// Parameters infos:
// float                          TimeLimit                      ( CPF_Parm )

void USFXEngagement_MobileAnnex::SetTimeLimit ( float TimeLimit )
{
	static UFunction* pFnSetTimeLimit = NULL;

	if ( ! pFnSetTimeLimit )
		pFnSetTimeLimit = (UFunction*) UObject::GObjObjects()->Data[ 108322 ];

	USFXEngagement_MobileAnnex_execSetTimeLimit_Parms SetTimeLimit_Parms;
	SetTimeLimit_Parms.TimeLimit = TimeLimit;

	this->ProcessEvent ( pFnSetTimeLimit, &SetTimeLimit_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.BeginWaveTimeLimit
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex::BeginWaveTimeLimit ( )
{
	static UFunction* pFnBeginWaveTimeLimit = NULL;

	if ( ! pFnBeginWaveTimeLimit )
		pFnBeginWaveTimeLimit = (UFunction*) UObject::GObjObjects()->Data[ 108318 ];

	USFXEngagement_MobileAnnex_execBeginWaveTimeLimit_Parms BeginWaveTimeLimit_Parms;

	this->ProcessEvent ( pFnBeginWaveTimeLimit, &BeginWaveTimeLimit_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.DeactivateObjectiveCombatZone
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class AActor*                  ObjectiveActor                 ( CPF_Parm )

void USFXEngagement_MobileAnnex::DeactivateObjectiveCombatZone ( class AActor* ObjectiveActor )
{
	static UFunction* pFnDeactivateObjectiveCombatZone = NULL;

	if ( ! pFnDeactivateObjectiveCombatZone )
		pFnDeactivateObjectiveCombatZone = (UFunction*) UObject::GObjObjects()->Data[ 108313 ];

	USFXEngagement_MobileAnnex_execDeactivateObjectiveCombatZone_Parms DeactivateObjectiveCombatZone_Parms;
	DeactivateObjectiveCombatZone_Parms.ObjectiveActor = ObjectiveActor;

	this->ProcessEvent ( pFnDeactivateObjectiveCombatZone, &DeactivateObjectiveCombatZone_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.ActivateObjectiveCombatZone
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class AActor*                  ObjectiveActor                 ( CPF_Parm )

void USFXEngagement_MobileAnnex::ActivateObjectiveCombatZone ( class AActor* ObjectiveActor )
{
	static UFunction* pFnActivateObjectiveCombatZone = NULL;

	if ( ! pFnActivateObjectiveCombatZone )
		pFnActivateObjectiveCombatZone = (UFunction*) UObject::GObjObjects()->Data[ 108307 ];

	USFXEngagement_MobileAnnex_execActivateObjectiveCombatZone_Parms ActivateObjectiveCombatZone_Parms;
	ActivateObjectiveCombatZone_Parms.ObjectiveActor = ObjectiveActor;

	this->ProcessEvent ( pFnActivateObjectiveCombatZone, &ActivateObjectiveCombatZone_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.PawnDestroyed
// [0x00020102] 
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )

void USFXEngagement_MobileAnnex::PawnDestroyed ( class ABioPawn* Pawn )
{
	static UFunction* pFnPawnDestroyed = NULL;

	if ( ! pFnPawnDestroyed )
		pFnPawnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 108312 ];

	USFXEngagement_MobileAnnex_execPawnDestroyed_Parms PawnDestroyed_Parms;
	PawnDestroyed_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnPawnDestroyed, &PawnDestroyed_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.PawnRevived
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )

void USFXEngagement_MobileAnnex::PawnRevived ( class ABioPawn* Pawn )
{
	static UFunction* pFnPawnRevived = NULL;

	if ( ! pFnPawnRevived )
		pFnPawnRevived = (UFunction*) UObject::GObjObjects()->Data[ 108303 ];

	USFXEngagement_MobileAnnex_execPawnRevived_Parms PawnRevived_Parms;
	PawnRevived_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnPawnRevived, &PawnRevived_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.PawnDowned
// [0x00020102] 
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )

void USFXEngagement_MobileAnnex::PawnDowned ( class ABioPawn* Pawn )
{
	static UFunction* pFnPawnDowned = NULL;

	if ( ! pFnPawnDowned )
		pFnPawnDowned = (UFunction*) UObject::GObjObjects()->Data[ 108299 ];

	USFXEngagement_MobileAnnex_execPawnDowned_Parms PawnDowned_Parms;
	PawnDowned_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnPawnDowned, &PawnDowned_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.DetermineObjectivesToSpawn
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex::DetermineObjectivesToSpawn ( )
{
	static UFunction* pFnDetermineObjectivesToSpawn = NULL;

	if ( ! pFnDetermineObjectivesToSpawn )
		pFnDetermineObjectivesToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 108283 ];

	USFXEngagement_MobileAnnex_execDetermineObjectivesToSpawn_Parms DetermineObjectivesToSpawn_Parms;

	this->ProcessEvent ( pFnDetermineObjectivesToSpawn, &DetermineObjectivesToSpawn_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.RateEnemyStart
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ANavigationPoint*        NavPoint                       ( CPF_Parm )

float USFXEngagement_MobileAnnex::RateEnemyStart ( class ANavigationPoint* NavPoint )
{
	static UFunction* pFnRateEnemyStart = NULL;

	if ( ! pFnRateEnemyStart )
		pFnRateEnemyStart = (UFunction*) UObject::GObjObjects()->Data[ 108269 ];

	USFXEngagement_MobileAnnex_execRateEnemyStart_Parms RateEnemyStart_Parms;
	RateEnemyStart_Parms.NavPoint = NavPoint;

	this->ProcessEvent ( pFnRateEnemyStart, &RateEnemyStart_Parms, NULL );

	return RateEnemyStart_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxwave_operation.DelayedFinishWave
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex::DelayedFinishWave ( )
{
	static UFunction* pFnDelayedFinishWave = NULL;

	if ( ! pFnDelayedFinishWave )
		pFnDelayedFinishWave = (UFunction*) UObject::GObjObjects()->Data[ 108267 ];

	USFXEngagement_MobileAnnex_execDelayedFinishWave_Parms DelayedFinishWave_Parms;

	this->ProcessEvent ( pFnDelayedFinishWave, &DelayedFinishWave_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.FinishWave
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex::FinishWave ( )
{
	static UFunction* pFnFinishWave = NULL;

	if ( ! pFnFinishWave )
		pFnFinishWave = (UFunction*) UObject::GObjObjects()->Data[ 108262 ];

	USFXEngagement_MobileAnnex_execFinishWave_Parms FinishWave_Parms;

	this->ProcessEvent ( pFnFinishWave, &FinishWave_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.ShowBeginWaveMessage
// [0x00020002] 
// Parameters infos:

void USFXEngagement_MobileAnnex::ShowBeginWaveMessage ( )
{
	static UFunction* pFnShowBeginWaveMessage = NULL;

	if ( ! pFnShowBeginWaveMessage )
		pFnShowBeginWaveMessage = (UFunction*) UObject::GObjObjects()->Data[ 108260 ];

	USFXEngagement_MobileAnnex_execShowBeginWaveMessage_Parms ShowBeginWaveMessage_Parms;

	this->ProcessEvent ( pFnShowBeginWaveMessage, &ShowBeginWaveMessage_Parms, NULL );
};

// Function sfxgamempcontent.sfxwave_operation.BeginWave
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXEngagement_MobileAnnex::BeginWave ( )
{
	static UFunction* pFnBeginWave = NULL;

	if ( ! pFnBeginWave )
		pFnBeginWave = (UFunction*) UObject::GObjObjects()->Data[ 108216 ];

	USFXEngagement_MobileAnnex_execBeginWave_Parms BeginWave_Parms;

	this->ProcessEvent ( pFnBeginWave, &BeginWave_Parms, NULL );

	return BeginWave_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxwave_operation.ObjectiveSpawnSort
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFXOperation_ObjectiveSpawnPoint* A                              ( CPF_Parm )
// class ASFXOperation_ObjectiveSpawnPoint* B                              ( CPF_Parm )

int USFXEngagement_MobileAnnex::ObjectiveSpawnSort ( class ASFXOperation_ObjectiveSpawnPoint* A, class ASFXOperation_ObjectiveSpawnPoint* B )
{
	static UFunction* pFnObjectiveSpawnSort = NULL;

	if ( ! pFnObjectiveSpawnSort )
		pFnObjectiveSpawnSort = (UFunction*) UObject::GObjObjects()->Data[ 108212 ];

	USFXEngagement_MobileAnnex_execObjectiveSpawnSort_Parms ObjectiveSpawnSort_Parms;
	ObjectiveSpawnSort_Parms.A = A;
	ObjectiveSpawnSort_Parms.B = B;

	this->ProcessEvent ( pFnObjectiveSpawnSort, &ObjectiveSpawnSort_Parms, NULL );

	return ObjectiveSpawnSort_Parms.ReturnValue;
};

// Function sfxgamempcontent.sfxwave_operation.InitializeWave
// [0x00020002] 
// Parameters infos:
// class ASFXWaveManager*         OwnerManager                   ( CPF_Parm )

void USFXEngagement_MobileAnnex::InitializeWave ( class ASFXWaveManager* OwnerManager )
{
	static UFunction* pFnInitializeWave = NULL;

	if ( ! pFnInitializeWave )
		pFnInitializeWave = (UFunction*) UObject::GObjObjects()->Data[ 108207 ];

	USFXEngagement_MobileAnnex_execInitializeWave_Parms InitializeWave_Parms;
	InitializeWave_Parms.OwnerManager = OwnerManager;

	this->ProcessEvent ( pFnInitializeWave, &InitializeWave_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif