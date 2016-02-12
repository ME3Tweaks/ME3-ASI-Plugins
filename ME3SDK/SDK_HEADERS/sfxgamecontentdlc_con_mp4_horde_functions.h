/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_con_mp4_horde_functions.h
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

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.AS_GetCollectorCooldownForPowerIcon
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class UGFxValue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sIconID                        ( CPF_Parm | CPF_NeedCtorLink )

class UGFxValue* USFXGUI_CollectorHUDOverlay::AS_GetCollectorCooldownForPowerIcon ( struct FString sIconID )
{
	static UFunction* pFnAS_GetCollectorCooldownForPowerIcon = NULL;

	if ( ! pFnAS_GetCollectorCooldownForPowerIcon )
		pFnAS_GetCollectorCooldownForPowerIcon = (UFunction*) UObject::GObjObjects()->Data[ 124714 ];

	USFXGUI_CollectorHUDOverlay_execAS_GetCollectorCooldownForPowerIcon_Parms AS_GetCollectorCooldownForPowerIcon_Parms;
	memcpy ( &AS_GetCollectorCooldownForPowerIcon_Parms.sIconID, &sIconID, 0xC );

	this->ProcessEvent ( pFnAS_GetCollectorCooldownForPowerIcon, &AS_GetCollectorCooldownForPowerIcon_Parms, NULL );

	return AS_GetCollectorCooldownForPowerIcon_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.AS_ResetCooldownPowerIcons
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_CollectorHUDOverlay::AS_ResetCooldownPowerIcons ( )
{
	static UFunction* pFnAS_ResetCooldownPowerIcons = NULL;

	if ( ! pFnAS_ResetCooldownPowerIcons )
		pFnAS_ResetCooldownPowerIcons = (UFunction*) UObject::GObjObjects()->Data[ 124701 ];

	USFXGUI_CollectorHUDOverlay_execAS_ResetCooldownPowerIcons_Parms AS_ResetCooldownPowerIcons_Parms;

	this->ProcessEvent ( pFnAS_ResetCooldownPowerIcons, &AS_ResetCooldownPowerIcons_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.GetGlobalPosition
// [0x00420003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGFxValue*               val                            ( CPF_Parm )
// float                          X                              ( CPF_Parm | CPF_OutParm )
// float                          Y                              ( CPF_Parm | CPF_OutParm )

bool USFXGUI_CollectorHUDOverlay::GetGlobalPosition ( class UGFxValue* val, float* X, float* Y )
{
	static UFunction* pFnGetGlobalPosition = NULL;

	if ( ! pFnGetGlobalPosition )
		pFnGetGlobalPosition = (UFunction*) UObject::GObjObjects()->Data[ 124718 ];

	USFXGUI_CollectorHUDOverlay_execGetGlobalPosition_Parms GetGlobalPosition_Parms;
	GetGlobalPosition_Parms.val = val;

	this->ProcessEvent ( pFnGetGlobalPosition, &GetGlobalPosition_Parms, NULL );

	if ( X )
		*X = GetGlobalPosition_Parms.X;

	if ( Y )
		*Y = GetGlobalPosition_Parms.Y;

	return GetGlobalPosition_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.PositionPowerIconOverlays
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_CollectorHUDOverlay::PositionPowerIconOverlays ( )
{
	static UFunction* pFnPositionPowerIconOverlays = NULL;

	if ( ! pFnPositionPowerIconOverlays )
		pFnPositionPowerIconOverlays = (UFunction*) UObject::GObjObjects()->Data[ 124692 ];

	USFXGUI_CollectorHUDOverlay_execPositionPowerIconOverlays_Parms PositionPowerIconOverlays_Parms;

	this->ProcessEvent ( pFnPositionPowerIconOverlays, &PositionPowerIconOverlays_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.InitializePowerIconOverlay
// [0x00420003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXGUIValue_PowerIcon*  oPowerIcon                     ( CPF_Parm )
// float                          fScale                         ( CPF_Parm )
// struct FVector2D               vOffset                        ( CPF_Const | CPF_Parm | CPF_OutParm )

int USFXGUI_CollectorHUDOverlay::InitializePowerIconOverlay ( class USFXGUIValue_PowerIcon* oPowerIcon, float fScale, struct FVector2D* vOffset )
{
	static UFunction* pFnInitializePowerIconOverlay = NULL;

	if ( ! pFnInitializePowerIconOverlay )
		pFnInitializePowerIconOverlay = (UFunction*) UObject::GObjObjects()->Data[ 124703 ];

	USFXGUI_CollectorHUDOverlay_execInitializePowerIconOverlay_Parms InitializePowerIconOverlay_Parms;
	InitializePowerIconOverlay_Parms.oPowerIcon = oPowerIcon;
	InitializePowerIconOverlay_Parms.fScale = fScale;

	this->ProcessEvent ( pFnInitializePowerIconOverlay, &InitializePowerIconOverlay_Parms, NULL );

	if ( vOffset )
		memcpy ( vOffset, &InitializePowerIconOverlay_Parms.vOffset, 0x8 );

	return InitializePowerIconOverlay_Parms.ReturnValue;
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.InitializeMPHUDPowerIconOverlays
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_CollectorHUDOverlay::InitializeMPHUDPowerIconOverlays ( )
{
	static UFunction* pFnInitializeMPHUDPowerIconOverlays = NULL;

	if ( ! pFnInitializeMPHUDPowerIconOverlays )
		pFnInitializeMPHUDPowerIconOverlays = (UFunction*) UObject::GObjObjects()->Data[ 124691 ];

	USFXGUI_CollectorHUDOverlay_execInitializeMPHUDPowerIconOverlays_Parms InitializeMPHUDPowerIconOverlays_Parms;

	this->ProcessEvent ( pFnInitializeMPHUDPowerIconOverlays, &InitializeMPHUDPowerIconOverlays_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.InitializePCQuickslotIconOverlays
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_CollectorHUDOverlay::InitializePCQuickslotIconOverlays ( )
{
	static UFunction* pFnInitializePCQuickslotIconOverlays = NULL;

	if ( ! pFnInitializePCQuickslotIconOverlays )
		pFnInitializePCQuickslotIconOverlays = (UFunction*) UObject::GObjObjects()->Data[ 124690 ];

	USFXGUI_CollectorHUDOverlay_execInitializePCQuickslotIconOverlays_Parms InitializePCQuickslotIconOverlays_Parms;

	this->ProcessEvent ( pFnInitializePCQuickslotIconOverlays, &InitializePCQuickslotIconOverlays_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.ClearSwarmOverlays
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_CollectorHUDOverlay::ClearSwarmOverlays ( )
{
	static UFunction* pFnClearSwarmOverlays = NULL;

	if ( ! pFnClearSwarmOverlays )
		pFnClearSwarmOverlays = (UFunction*) UObject::GObjObjects()->Data[ 124689 ];

	USFXGUI_CollectorHUDOverlay_execClearSwarmOverlays_Parms ClearSwarmOverlays_Parms;

	this->ProcessEvent ( pFnClearSwarmOverlays, &ClearSwarmOverlays_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.OnClose
// [0x00020002] 
// Parameters infos:

void USFXGUI_CollectorHUDOverlay::OnClose ( )
{
	static UFunction* pFnOnClose = NULL;

	if ( ! pFnOnClose )
		pFnOnClose = (UFunction*) UObject::GObjObjects()->Data[ 124699 ];

	USFXGUI_CollectorHUDOverlay_execOnClose_Parms OnClose_Parms;

	this->ProcessEvent ( pFnOnClose, &OnClose_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.UpdateCooldownOverride
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_CollectorHUDOverlay::UpdateCooldownOverride ( )
{
	static UFunction* pFnUpdateCooldownOverride = NULL;

	if ( ! pFnUpdateCooldownOverride )
		pFnUpdateCooldownOverride = (UFunction*) UObject::GObjObjects()->Data[ 124695 ];

	USFXGUI_CollectorHUDOverlay_execUpdateCooldownOverride_Parms UpdateCooldownOverride_Parms;

	this->ProcessEvent ( pFnUpdateCooldownOverride, &UpdateCooldownOverride_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.ResetForcedCooldown
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_CollectorHUDOverlay::ResetForcedCooldown ( )
{
	static UFunction* pFnResetForcedCooldown = NULL;

	if ( ! pFnResetForcedCooldown )
		pFnResetForcedCooldown = (UFunction*) UObject::GObjObjects()->Data[ 124697 ];

	USFXGUI_CollectorHUDOverlay_execResetForcedCooldown_Parms ResetForcedCooldown_Parms;

	this->ProcessEvent ( pFnResetForcedCooldown, &ResetForcedCooldown_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.SetForcedCooldown
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_CollectorHUDOverlay::SetForcedCooldown ( )
{
	static UFunction* pFnSetForcedCooldown = NULL;

	if ( ! pFnSetForcedCooldown )
		pFnSetForcedCooldown = (UFunction*) UObject::GObjObjects()->Data[ 124693 ];

	USFXGUI_CollectorHUDOverlay_execSetForcedCooldown_Parms SetForcedCooldown_Parms;

	this->ProcessEvent ( pFnSetForcedCooldown, &SetForcedCooldown_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.CheckInitialize
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_CollectorHUDOverlay::CheckInitialize ( )
{
	static UFunction* pFnCheckInitialize = NULL;

	if ( ! pFnCheckInitialize )
		pFnCheckInitialize = (UFunction*) UObject::GObjObjects()->Data[ 124683 ];

	USFXGUI_CollectorHUDOverlay_execCheckInitialize_Parms CheckInitialize_Parms;

	this->ProcessEvent ( pFnCheckInitialize, &CheckInitialize_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.InternalOnStart
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void USFXGUI_CollectorHUDOverlay::InternalOnStart ( )
{
	static UFunction* pFnInternalOnStart = NULL;

	if ( ! pFnInternalOnStart )
		pFnInternalOnStart = (UFunction*) UObject::GObjObjects()->Data[ 124682 ];

	USFXGUI_CollectorHUDOverlay_execInternalOnStart_Parms InternalOnStart_Parms;

	this->ProcessEvent ( pFnInternalOnStart, &InternalOnStart_Parms, NULL );
};

// Function sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.OnStart
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXGUI_CollectorHUDOverlay::eventOnStart ( )
{
	static UFunction* pFnOnStart = NULL;

	if ( ! pFnOnStart )
		pFnOnStart = (UFunction*) UObject::GObjObjects()->Data[ 124681 ];

	USFXGUI_CollectorHUDOverlay_eventOnStart_Parms OnStart_Parms;

	this->ProcessEvent ( pFnOnStart, &OnStart_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.StartAutoBots
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXWave_Horde_Cerberus2::StartAutoBots ( )
{
	static UFunction* pFnStartAutoBots = NULL;

	if ( ! pFnStartAutoBots )
		pFnStartAutoBots = (UFunction*) UObject::GObjObjects()->Data[ 113152 ];

	USFXWave_Horde_Cerberus2_execStartAutoBots_Parms StartAutoBots_Parms;

	this->ProcessEvent ( pFnStartAutoBots, &StartAutoBots_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.GetScoreBudget
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXWave_Horde_Cerberus2::GetScoreBudget ( )
{
	static UFunction* pFnGetScoreBudget = NULL;

	if ( ! pFnGetScoreBudget )
		pFnGetScoreBudget = (UFunction*) UObject::GObjObjects()->Data[ 113316 ];

	USFXWave_Horde_Cerberus2_execGetScoreBudget_Parms GetScoreBudget_Parms;

	this->ProcessEvent ( pFnGetScoreBudget, &GetScoreBudget_Parms, NULL );

	return GetScoreBudget_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.CalculateSpawnedEnemyCost
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXWave_Horde_Cerberus2::CalculateSpawnedEnemyCost ( )
{
	static UFunction* pFnCalculateSpawnedEnemyCost = NULL;

	if ( ! pFnCalculateSpawnedEnemyCost )
		pFnCalculateSpawnedEnemyCost = (UFunction*) UObject::GObjObjects()->Data[ 113312 ];

	USFXWave_Horde_Cerberus2_execCalculateSpawnedEnemyCost_Parms CalculateSpawnedEnemyCost_Parms;

	this->ProcessEvent ( pFnCalculateSpawnedEnemyCost, &CalculateSpawnedEnemyCost_Parms, NULL );

	return CalculateSpawnedEnemyCost_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.PawnRevived
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )

void USFXWave_Horde_Cerberus2::PawnRevived ( class ABioPawn* Pawn )
{
	static UFunction* pFnPawnRevived = NULL;

	if ( ! pFnPawnRevived )
		pFnPawnRevived = (UFunction*) UObject::GObjObjects()->Data[ 113308 ];

	USFXWave_Horde_Cerberus2_execPawnRevived_Parms PawnRevived_Parms;
	PawnRevived_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnPawnRevived, &PawnRevived_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.GetEnemySpawnInfoForEnemyType
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FEnemySpawnInfo         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   EnemyType                      ( CPF_Parm )

struct FEnemySpawnInfo USFXWave_Horde_Cerberus2::GetEnemySpawnInfoForEnemyType ( struct FName EnemyType )
{
	static UFunction* pFnGetEnemySpawnInfoForEnemyType = NULL;

	if ( ! pFnGetEnemySpawnInfoForEnemyType )
		pFnGetEnemySpawnInfoForEnemyType = (UFunction*) UObject::GObjObjects()->Data[ 113151 ];

	USFXWave_Horde_Cerberus2_execGetEnemySpawnInfoForEnemyType_Parms GetEnemySpawnInfoForEnemyType_Parms;
	memcpy ( &GetEnemySpawnInfoForEnemyType_Parms.EnemyType, &EnemyType, 0x8 );

	this->ProcessEvent ( pFnGetEnemySpawnInfoForEnemyType, &GetEnemySpawnInfoForEnemyType_Parms, NULL );

	return GetEnemySpawnInfoForEnemyType_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.StopSpawningNewEnemies
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXWave_Horde_Cerberus2::StopSpawningNewEnemies ( )
{
	static UFunction* pFnStopSpawningNewEnemies = NULL;

	if ( ! pFnStopSpawningNewEnemies )
		pFnStopSpawningNewEnemies = (UFunction*) UObject::GObjObjects()->Data[ 113304 ];

	USFXWave_Horde_Cerberus2_execStopSpawningNewEnemies_Parms StopSpawningNewEnemies_Parms;

	this->ProcessEvent ( pFnStopSpawningNewEnemies, &StopSpawningNewEnemies_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.SetEndlessWaves
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  Endless                        ( CPF_Parm )

void USFXWave_Horde_Cerberus2::SetEndlessWaves ( unsigned long Endless )
{
	static UFunction* pFnSetEndlessWaves = NULL;

	if ( ! pFnSetEndlessWaves )
		pFnSetEndlessWaves = (UFunction*) UObject::GObjObjects()->Data[ 108141 ];

	USFXWave_Horde_Cerberus2_execSetEndlessWaves_Parms SetEndlessWaves_Parms;
	SetEndlessWaves_Parms.Endless = Endless;

	this->ProcessEvent ( pFnSetEndlessWaves, &SetEndlessWaves_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.EnemyBudgetRemaining
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Cerberus2::EnemyBudgetRemaining ( )
{
	static UFunction* pFnEnemyBudgetRemaining = NULL;

	if ( ! pFnEnemyBudgetRemaining )
		pFnEnemyBudgetRemaining = (UFunction*) UObject::GObjObjects()->Data[ 113251 ];

	USFXWave_Horde_Cerberus2_execEnemyBudgetRemaining_Parms EnemyBudgetRemaining_Parms;

	this->ProcessEvent ( pFnEnemyBudgetRemaining, &EnemyBudgetRemaining_Parms, NULL );

	return EnemyBudgetRemaining_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.GetCreatureWaveCost
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

int USFXWave_Horde_Cerberus2::GetCreatureWaveCost ( class APawn* P )
{
	static UFunction* pFnGetCreatureWaveCost = NULL;

	if ( ! pFnGetCreatureWaveCost )
		pFnGetCreatureWaveCost = (UFunction*) UObject::GObjObjects()->Data[ 113298 ];

	USFXWave_Horde_Cerberus2_execGetCreatureWaveCost_Parms GetCreatureWaveCost_Parms;
	GetCreatureWaveCost_Parms.P = P;

	this->ProcessEvent ( pFnGetCreatureWaveCost, &GetCreatureWaveCost_Parms, NULL );

	return GetCreatureWaveCost_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerWaveEndEvent
// [0x00020002] 
// Parameters infos:
// int                            Wave                           ( CPF_Parm )

void USFXWave_Horde_Cerberus2::TriggerWaveEndEvent ( int Wave )
{
	static UFunction* pFnTriggerWaveEndEvent = NULL;

	if ( ! pFnTriggerWaveEndEvent )
		pFnTriggerWaveEndEvent = (UFunction*) UObject::GObjObjects()->Data[ 113290 ];

	USFXWave_Horde_Cerberus2_execTriggerWaveEndEvent_Parms TriggerWaveEndEvent_Parms;
	TriggerWaveEndEvent_Parms.Wave = Wave;

	this->ProcessEvent ( pFnTriggerWaveEndEvent, &TriggerWaveEndEvent_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerEnemyKilledEvent
// [0x00020002] 
// Parameters infos:
// class APawn*                   Killed                         ( CPF_Parm )
// class APawn*                   Killer                         ( CPF_Parm )

void USFXWave_Horde_Cerberus2::TriggerEnemyKilledEvent ( class APawn* Killed, class APawn* Killer )
{
	static UFunction* pFnTriggerEnemyKilledEvent = NULL;

	if ( ! pFnTriggerEnemyKilledEvent )
		pFnTriggerEnemyKilledEvent = (UFunction*) UObject::GObjObjects()->Data[ 113282 ];

	USFXWave_Horde_Cerberus2_execTriggerEnemyKilledEvent_Parms TriggerEnemyKilledEvent_Parms;
	TriggerEnemyKilledEvent_Parms.Killed = Killed;
	TriggerEnemyKilledEvent_Parms.Killer = Killer;

	this->ProcessEvent ( pFnTriggerEnemyKilledEvent, &TriggerEnemyKilledEvent_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerWaveStartEvent
// [0x00020002] 
// Parameters infos:
// int                            Wave                           ( CPF_Parm )

void USFXWave_Horde_Cerberus2::TriggerWaveStartEvent ( int Wave )
{
	static UFunction* pFnTriggerWaveStartEvent = NULL;

	if ( ! pFnTriggerWaveStartEvent )
		pFnTriggerWaveStartEvent = (UFunction*) UObject::GObjObjects()->Data[ 113274 ];

	USFXWave_Horde_Cerberus2_execTriggerWaveStartEvent_Parms TriggerWaveStartEvent_Parms;
	TriggerWaveStartEvent_Parms.Wave = Wave;

	this->ProcessEvent ( pFnTriggerWaveStartEvent, &TriggerWaveStartEvent_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.ShouldSpawnSquad
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Cerberus2::ShouldSpawnSquad ( )
{
	static UFunction* pFnShouldSpawnSquad = NULL;

	if ( ! pFnShouldSpawnSquad )
		pFnShouldSpawnSquad = (UFunction*) UObject::GObjObjects()->Data[ 113253 ];

	USFXWave_Horde_Cerberus2_execShouldSpawnSquad_Parms ShouldSpawnSquad_Parms;

	this->ProcessEvent ( pFnShouldSpawnSquad, &ShouldSpawnSquad_Parms, NULL );

	return ShouldSpawnSquad_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.GetPlayerCount
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXWave_Horde_Cerberus2::GetPlayerCount ( )
{
	static UFunction* pFnGetPlayerCount = NULL;

	if ( ! pFnGetPlayerCount )
		pFnGetPlayerCount = (UFunction*) UObject::GObjObjects()->Data[ 113267 ];

	USFXWave_Horde_Cerberus2_execGetPlayerCount_Parms GetPlayerCount_Parms;

	this->ProcessEvent ( pFnGetPlayerCount, &GetPlayerCount_Parms, NULL );

	return GetPlayerCount_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.PawnDied
// [0x00024002] 
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )
// class ABioPawn*                Killer                         ( CPF_OptionalParm | CPF_Parm )

void USFXWave_Horde_Cerberus2::PawnDied ( class ABioPawn* Pawn, class ABioPawn* Killer )
{
	static UFunction* pFnPawnDied = NULL;

	if ( ! pFnPawnDied )
		pFnPawnDied = (UFunction*) UObject::GObjObjects()->Data[ 113261 ];

	USFXWave_Horde_Cerberus2_execPawnDied_Parms PawnDied_Parms;
	PawnDied_Parms.Pawn = Pawn;
	PawnDied_Parms.Killer = Killer;

	this->ProcessEvent ( pFnPawnDied, &PawnDied_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.ActivateEnemyObjectiveMarkers
// [0x00020002] 
// Parameters infos:

void USFXWave_Horde_Cerberus2::ActivateEnemyObjectiveMarkers ( )
{
	static UFunction* pFnActivateEnemyObjectiveMarkers = NULL;

	if ( ! pFnActivateEnemyObjectiveMarkers )
		pFnActivateEnemyObjectiveMarkers = (UFunction*) UObject::GObjObjects()->Data[ 113258 ];

	USFXWave_Horde_Cerberus2_execActivateEnemyObjectiveMarkers_Parms ActivateEnemyObjectiveMarkers_Parms;

	this->ProcessEvent ( pFnActivateEnemyObjectiveMarkers, &ActivateEnemyObjectiveMarkers_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.UpdateObjectiveStatus
// [0x00020002] 
// Parameters infos:

void USFXWave_Horde_Cerberus2::UpdateObjectiveStatus ( )
{
	static UFunction* pFnUpdateObjectiveStatus = NULL;

	if ( ! pFnUpdateObjectiveStatus )
		pFnUpdateObjectiveStatus = (UFunction*) UObject::GObjObjects()->Data[ 113254 ];

	USFXWave_Horde_Cerberus2_execUpdateObjectiveStatus_Parms UpdateObjectiveStatus_Parms;

	this->ProcessEvent ( pFnUpdateObjectiveStatus, &UpdateObjectiveStatus_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.SpawnHorde
// [0x00020002] 
// Parameters infos:

void USFXWave_Horde_Cerberus2::SpawnHorde ( )
{
	static UFunction* pFnSpawnHorde = NULL;

	if ( ! pFnSpawnHorde )
		pFnSpawnHorde = (UFunction*) UObject::GObjObjects()->Data[ 113249 ];

	USFXWave_Horde_Cerberus2_execSpawnHorde_Parms SpawnHorde_Parms;

	this->ProcessEvent ( pFnSpawnHorde, &SpawnHorde_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.SpawnEnemy
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void USFXWave_Horde_Cerberus2::SpawnEnemy ( int Index )
{
	static UFunction* pFnSpawnEnemy = NULL;

	if ( ! pFnSpawnEnemy )
		pFnSpawnEnemy = (UFunction*) UObject::GObjObjects()->Data[ 113242 ];

	USFXWave_Horde_Cerberus2_execSpawnEnemy_Parms SpawnEnemy_Parms;
	SpawnEnemy_Parms.Index = Index;

	this->ProcessEvent ( pFnSpawnEnemy, &SpawnEnemy_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.AreRemainingEnemiesOnMyTeam
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Cerberus2::AreRemainingEnemiesOnMyTeam ( )
{
	static UFunction* pFnAreRemainingEnemiesOnMyTeam = NULL;

	if ( ! pFnAreRemainingEnemiesOnMyTeam )
		pFnAreRemainingEnemiesOnMyTeam = (UFunction*) UObject::GObjObjects()->Data[ 113239 ];

	USFXWave_Horde_Cerberus2_execAreRemainingEnemiesOnMyTeam_Parms AreRemainingEnemiesOnMyTeam_Parms;

	this->ProcessEvent ( pFnAreRemainingEnemiesOnMyTeam, &AreRemainingEnemiesOnMyTeam_Parms, NULL );

	return AreRemainingEnemiesOnMyTeam_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseEnemyToSpawn
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXWave_Horde_Cerberus2::ChooseEnemyToSpawn ( )
{
	static UFunction* pFnChooseEnemyToSpawn = NULL;

	if ( ! pFnChooseEnemyToSpawn )
		pFnChooseEnemyToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 113228 ];

	USFXWave_Horde_Cerberus2_execChooseEnemyToSpawn_Parms ChooseEnemyToSpawn_Parms;

	this->ProcessEvent ( pFnChooseEnemyToSpawn, &ChooseEnemyToSpawn_Parms, NULL );

	return ChooseEnemyToSpawn_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseSquadToSpawn
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Cerberus2::ChooseSquadToSpawn ( )
{
	static UFunction* pFnChooseSquadToSpawn = NULL;

	if ( ! pFnChooseSquadToSpawn )
		pFnChooseSquadToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 113223 ];

	USFXWave_Horde_Cerberus2_execChooseSquadToSpawn_Parms ChooseSquadToSpawn_Parms;

	this->ProcessEvent ( pFnChooseSquadToSpawn, &ChooseSquadToSpawn_Parms, NULL );

	return ChooseSquadToSpawn_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.CanEnemyUseSpawnPoint
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  EnemyClass                     ( CPF_Parm )
// float                          EnemyRadius                    ( CPF_Parm )
// float                          EnemyHeight                    ( CPF_Parm )
// class ANavigationPoint*        NavPoint                       ( CPF_Parm )

bool USFXWave_Horde_Cerberus2::CanEnemyUseSpawnPoint ( class UClass* EnemyClass, float EnemyRadius, float EnemyHeight, class ANavigationPoint* NavPoint )
{
	static UFunction* pFnCanEnemyUseSpawnPoint = NULL;

	if ( ! pFnCanEnemyUseSpawnPoint )
		pFnCanEnemyUseSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 113203 ];

	USFXWave_Horde_Cerberus2_execCanEnemyUseSpawnPoint_Parms CanEnemyUseSpawnPoint_Parms;
	CanEnemyUseSpawnPoint_Parms.EnemyClass = EnemyClass;
	CanEnemyUseSpawnPoint_Parms.EnemyRadius = EnemyRadius;
	CanEnemyUseSpawnPoint_Parms.EnemyHeight = EnemyHeight;
	CanEnemyUseSpawnPoint_Parms.NavPoint = NavPoint;

	this->ProcessEvent ( pFnCanEnemyUseSpawnPoint, &CanEnemyUseSpawnPoint_Parms, NULL );

	return CanEnemyUseSpawnPoint_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.RateEnemyStart
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ANavigationPoint*        NavPoint                       ( CPF_Parm )
// float                          EnemyRadius                    ( CPF_Parm )
// float                          EnemyHeight                    ( CPF_Parm )
// class UClass*                  EnemyClass                     ( CPF_Parm )
// unsigned long                  bDoTraceCheck                  ( CPF_Parm )

float USFXWave_Horde_Cerberus2::RateEnemyStart ( class ANavigationPoint* NavPoint, float EnemyRadius, float EnemyHeight, class UClass* EnemyClass, unsigned long bDoTraceCheck )
{
	static UFunction* pFnRateEnemyStart = NULL;

	if ( ! pFnRateEnemyStart )
		pFnRateEnemyStart = (UFunction*) UObject::GObjObjects()->Data[ 113186 ];

	USFXWave_Horde_Cerberus2_execRateEnemyStart_Parms RateEnemyStart_Parms;
	RateEnemyStart_Parms.NavPoint = NavPoint;
	RateEnemyStart_Parms.EnemyRadius = EnemyRadius;
	RateEnemyStart_Parms.EnemyHeight = EnemyHeight;
	RateEnemyStart_Parms.EnemyClass = EnemyClass;
	RateEnemyStart_Parms.bDoTraceCheck = bDoTraceCheck;

	this->ProcessEvent ( pFnRateEnemyStart, &RateEnemyStart_Parms, NULL );

	return RateEnemyStart_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseEnemyStart
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class ANavigationPoint*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  EnemyClass                     ( CPF_Parm )

class ANavigationPoint* USFXWave_Horde_Cerberus2::ChooseEnemyStart ( class UClass* EnemyClass )
{
	static UFunction* pFnChooseEnemyStart = NULL;

	if ( ! pFnChooseEnemyStart )
		pFnChooseEnemyStart = (UFunction*) UObject::GObjObjects()->Data[ 113171 ];

	USFXWave_Horde_Cerberus2_execChooseEnemyStart_Parms ChooseEnemyStart_Parms;
	ChooseEnemyStart_Parms.EnemyClass = EnemyClass;

	this->ProcessEvent ( pFnChooseEnemyStart, &ChooseEnemyStart_Parms, NULL );

	return ChooseEnemyStart_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.FinishWave
// [0x00020002] 
// Parameters infos:

void USFXWave_Horde_Cerberus2::FinishWave ( )
{
	static UFunction* pFnFinishWave = NULL;

	if ( ! pFnFinishWave )
		pFnFinishWave = (UFunction*) UObject::GObjObjects()->Data[ 113168 ];

	USFXWave_Horde_Cerberus2_execFinishWave_Parms FinishWave_Parms;

	this->ProcessEvent ( pFnFinishWave, &FinishWave_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.BeginWave
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Cerberus2::BeginWave ( )
{
	static UFunction* pFnBeginWave = NULL;

	if ( ! pFnBeginWave )
		pFnBeginWave = (UFunction*) UObject::GObjObjects()->Data[ 113159 ];

	USFXWave_Horde_Cerberus2_execBeginWave_Parms BeginWave_Parms;

	this->ProcessEvent ( pFnBeginWave, &BeginWave_Parms, NULL );

	return BeginWave_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.GetEnemyArray
// [0x00420002] 
// Parameters infos:
// TArray< struct FEnemyWaveInfo > EnemyArray                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXWave_Horde_Cerberus2::GetEnemyArray ( TArray< struct FEnemyWaveInfo >* EnemyArray )
{
	static UFunction* pFnGetEnemyArray = NULL;

	if ( ! pFnGetEnemyArray )
		pFnGetEnemyArray = (UFunction*) UObject::GObjObjects()->Data[ 113153 ];

	USFXWave_Horde_Cerberus2_execGetEnemyArray_Parms GetEnemyArray_Parms;

	this->ProcessEvent ( pFnGetEnemyArray, &GetEnemyArray_Parms, NULL );

	if ( EnemyArray )
		memcpy ( EnemyArray, &GetEnemyArray_Parms.EnemyArray, 0xC );
};

// Function sfxgamempcontent.SFXWave_Horde.InitializeWave
// [0x00020002] 
// Parameters infos:
// class ASFXWaveManager*         OwnerManager                   ( CPF_Parm )

void USFXWave_Horde_Cerberus2::InitializeWave ( class ASFXWaveManager* OwnerManager )
{
	static UFunction* pFnInitializeWave = NULL;

	if ( ! pFnInitializeWave )
		pFnInitializeWave = (UFunction*) UObject::GObjObjects()->Data[ 113141 ];

	USFXWave_Horde_Cerberus2_execInitializeWave_Parms InitializeWave_Parms;
	InitializeWave_Parms.OwnerManager = OwnerManager;

	this->ProcessEvent ( pFnInitializeWave, &InitializeWave_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.StartAutoBots
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXWave_Horde_Collector::StartAutoBots ( )
{
	static UFunction* pFnStartAutoBots = NULL;

	if ( ! pFnStartAutoBots )
		pFnStartAutoBots = (UFunction*) UObject::GObjObjects()->Data[ 113152 ];

	USFXWave_Horde_Collector_execStartAutoBots_Parms StartAutoBots_Parms;

	this->ProcessEvent ( pFnStartAutoBots, &StartAutoBots_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.GetScoreBudget
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXWave_Horde_Collector::GetScoreBudget ( )
{
	static UFunction* pFnGetScoreBudget = NULL;

	if ( ! pFnGetScoreBudget )
		pFnGetScoreBudget = (UFunction*) UObject::GObjObjects()->Data[ 113316 ];

	USFXWave_Horde_Collector_execGetScoreBudget_Parms GetScoreBudget_Parms;

	this->ProcessEvent ( pFnGetScoreBudget, &GetScoreBudget_Parms, NULL );

	return GetScoreBudget_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.CalculateSpawnedEnemyCost
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXWave_Horde_Collector::CalculateSpawnedEnemyCost ( )
{
	static UFunction* pFnCalculateSpawnedEnemyCost = NULL;

	if ( ! pFnCalculateSpawnedEnemyCost )
		pFnCalculateSpawnedEnemyCost = (UFunction*) UObject::GObjObjects()->Data[ 113312 ];

	USFXWave_Horde_Collector_execCalculateSpawnedEnemyCost_Parms CalculateSpawnedEnemyCost_Parms;

	this->ProcessEvent ( pFnCalculateSpawnedEnemyCost, &CalculateSpawnedEnemyCost_Parms, NULL );

	return CalculateSpawnedEnemyCost_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.PawnRevived
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )

void USFXWave_Horde_Collector::PawnRevived ( class ABioPawn* Pawn )
{
	static UFunction* pFnPawnRevived = NULL;

	if ( ! pFnPawnRevived )
		pFnPawnRevived = (UFunction*) UObject::GObjObjects()->Data[ 113308 ];

	USFXWave_Horde_Collector_execPawnRevived_Parms PawnRevived_Parms;
	PawnRevived_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnPawnRevived, &PawnRevived_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.GetEnemySpawnInfoForEnemyType
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FEnemySpawnInfo         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   EnemyType                      ( CPF_Parm )

struct FEnemySpawnInfo USFXWave_Horde_Collector::GetEnemySpawnInfoForEnemyType ( struct FName EnemyType )
{
	static UFunction* pFnGetEnemySpawnInfoForEnemyType = NULL;

	if ( ! pFnGetEnemySpawnInfoForEnemyType )
		pFnGetEnemySpawnInfoForEnemyType = (UFunction*) UObject::GObjObjects()->Data[ 113151 ];

	USFXWave_Horde_Collector_execGetEnemySpawnInfoForEnemyType_Parms GetEnemySpawnInfoForEnemyType_Parms;
	memcpy ( &GetEnemySpawnInfoForEnemyType_Parms.EnemyType, &EnemyType, 0x8 );

	this->ProcessEvent ( pFnGetEnemySpawnInfoForEnemyType, &GetEnemySpawnInfoForEnemyType_Parms, NULL );

	return GetEnemySpawnInfoForEnemyType_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.StopSpawningNewEnemies
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXWave_Horde_Collector::StopSpawningNewEnemies ( )
{
	static UFunction* pFnStopSpawningNewEnemies = NULL;

	if ( ! pFnStopSpawningNewEnemies )
		pFnStopSpawningNewEnemies = (UFunction*) UObject::GObjObjects()->Data[ 113304 ];

	USFXWave_Horde_Collector_execStopSpawningNewEnemies_Parms StopSpawningNewEnemies_Parms;

	this->ProcessEvent ( pFnStopSpawningNewEnemies, &StopSpawningNewEnemies_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.SetEndlessWaves
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  Endless                        ( CPF_Parm )

void USFXWave_Horde_Collector::SetEndlessWaves ( unsigned long Endless )
{
	static UFunction* pFnSetEndlessWaves = NULL;

	if ( ! pFnSetEndlessWaves )
		pFnSetEndlessWaves = (UFunction*) UObject::GObjObjects()->Data[ 108141 ];

	USFXWave_Horde_Collector_execSetEndlessWaves_Parms SetEndlessWaves_Parms;
	SetEndlessWaves_Parms.Endless = Endless;

	this->ProcessEvent ( pFnSetEndlessWaves, &SetEndlessWaves_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.EnemyBudgetRemaining
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Collector::EnemyBudgetRemaining ( )
{
	static UFunction* pFnEnemyBudgetRemaining = NULL;

	if ( ! pFnEnemyBudgetRemaining )
		pFnEnemyBudgetRemaining = (UFunction*) UObject::GObjObjects()->Data[ 113251 ];

	USFXWave_Horde_Collector_execEnemyBudgetRemaining_Parms EnemyBudgetRemaining_Parms;

	this->ProcessEvent ( pFnEnemyBudgetRemaining, &EnemyBudgetRemaining_Parms, NULL );

	return EnemyBudgetRemaining_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.GetCreatureWaveCost
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

int USFXWave_Horde_Collector::GetCreatureWaveCost ( class APawn* P )
{
	static UFunction* pFnGetCreatureWaveCost = NULL;

	if ( ! pFnGetCreatureWaveCost )
		pFnGetCreatureWaveCost = (UFunction*) UObject::GObjObjects()->Data[ 113298 ];

	USFXWave_Horde_Collector_execGetCreatureWaveCost_Parms GetCreatureWaveCost_Parms;
	GetCreatureWaveCost_Parms.P = P;

	this->ProcessEvent ( pFnGetCreatureWaveCost, &GetCreatureWaveCost_Parms, NULL );

	return GetCreatureWaveCost_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerWaveEndEvent
// [0x00020002] 
// Parameters infos:
// int                            Wave                           ( CPF_Parm )

void USFXWave_Horde_Collector::TriggerWaveEndEvent ( int Wave )
{
	static UFunction* pFnTriggerWaveEndEvent = NULL;

	if ( ! pFnTriggerWaveEndEvent )
		pFnTriggerWaveEndEvent = (UFunction*) UObject::GObjObjects()->Data[ 113290 ];

	USFXWave_Horde_Collector_execTriggerWaveEndEvent_Parms TriggerWaveEndEvent_Parms;
	TriggerWaveEndEvent_Parms.Wave = Wave;

	this->ProcessEvent ( pFnTriggerWaveEndEvent, &TriggerWaveEndEvent_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerEnemyKilledEvent
// [0x00020002] 
// Parameters infos:
// class APawn*                   Killed                         ( CPF_Parm )
// class APawn*                   Killer                         ( CPF_Parm )

void USFXWave_Horde_Collector::TriggerEnemyKilledEvent ( class APawn* Killed, class APawn* Killer )
{
	static UFunction* pFnTriggerEnemyKilledEvent = NULL;

	if ( ! pFnTriggerEnemyKilledEvent )
		pFnTriggerEnemyKilledEvent = (UFunction*) UObject::GObjObjects()->Data[ 113282 ];

	USFXWave_Horde_Collector_execTriggerEnemyKilledEvent_Parms TriggerEnemyKilledEvent_Parms;
	TriggerEnemyKilledEvent_Parms.Killed = Killed;
	TriggerEnemyKilledEvent_Parms.Killer = Killer;

	this->ProcessEvent ( pFnTriggerEnemyKilledEvent, &TriggerEnemyKilledEvent_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerWaveStartEvent
// [0x00020002] 
// Parameters infos:
// int                            Wave                           ( CPF_Parm )

void USFXWave_Horde_Collector::TriggerWaveStartEvent ( int Wave )
{
	static UFunction* pFnTriggerWaveStartEvent = NULL;

	if ( ! pFnTriggerWaveStartEvent )
		pFnTriggerWaveStartEvent = (UFunction*) UObject::GObjObjects()->Data[ 113274 ];

	USFXWave_Horde_Collector_execTriggerWaveStartEvent_Parms TriggerWaveStartEvent_Parms;
	TriggerWaveStartEvent_Parms.Wave = Wave;

	this->ProcessEvent ( pFnTriggerWaveStartEvent, &TriggerWaveStartEvent_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.ShouldSpawnSquad
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Collector::ShouldSpawnSquad ( )
{
	static UFunction* pFnShouldSpawnSquad = NULL;

	if ( ! pFnShouldSpawnSquad )
		pFnShouldSpawnSquad = (UFunction*) UObject::GObjObjects()->Data[ 113253 ];

	USFXWave_Horde_Collector_execShouldSpawnSquad_Parms ShouldSpawnSquad_Parms;

	this->ProcessEvent ( pFnShouldSpawnSquad, &ShouldSpawnSquad_Parms, NULL );

	return ShouldSpawnSquad_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.GetPlayerCount
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXWave_Horde_Collector::GetPlayerCount ( )
{
	static UFunction* pFnGetPlayerCount = NULL;

	if ( ! pFnGetPlayerCount )
		pFnGetPlayerCount = (UFunction*) UObject::GObjObjects()->Data[ 113267 ];

	USFXWave_Horde_Collector_execGetPlayerCount_Parms GetPlayerCount_Parms;

	this->ProcessEvent ( pFnGetPlayerCount, &GetPlayerCount_Parms, NULL );

	return GetPlayerCount_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.PawnDied
// [0x00024002] 
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )
// class ABioPawn*                Killer                         ( CPF_OptionalParm | CPF_Parm )

void USFXWave_Horde_Collector::PawnDied ( class ABioPawn* Pawn, class ABioPawn* Killer )
{
	static UFunction* pFnPawnDied = NULL;

	if ( ! pFnPawnDied )
		pFnPawnDied = (UFunction*) UObject::GObjObjects()->Data[ 113261 ];

	USFXWave_Horde_Collector_execPawnDied_Parms PawnDied_Parms;
	PawnDied_Parms.Pawn = Pawn;
	PawnDied_Parms.Killer = Killer;

	this->ProcessEvent ( pFnPawnDied, &PawnDied_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.ActivateEnemyObjectiveMarkers
// [0x00020002] 
// Parameters infos:

void USFXWave_Horde_Collector::ActivateEnemyObjectiveMarkers ( )
{
	static UFunction* pFnActivateEnemyObjectiveMarkers = NULL;

	if ( ! pFnActivateEnemyObjectiveMarkers )
		pFnActivateEnemyObjectiveMarkers = (UFunction*) UObject::GObjObjects()->Data[ 113258 ];

	USFXWave_Horde_Collector_execActivateEnemyObjectiveMarkers_Parms ActivateEnemyObjectiveMarkers_Parms;

	this->ProcessEvent ( pFnActivateEnemyObjectiveMarkers, &ActivateEnemyObjectiveMarkers_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.UpdateObjectiveStatus
// [0x00020002] 
// Parameters infos:

void USFXWave_Horde_Collector::UpdateObjectiveStatus ( )
{
	static UFunction* pFnUpdateObjectiveStatus = NULL;

	if ( ! pFnUpdateObjectiveStatus )
		pFnUpdateObjectiveStatus = (UFunction*) UObject::GObjObjects()->Data[ 113254 ];

	USFXWave_Horde_Collector_execUpdateObjectiveStatus_Parms UpdateObjectiveStatus_Parms;

	this->ProcessEvent ( pFnUpdateObjectiveStatus, &UpdateObjectiveStatus_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.SpawnHorde
// [0x00020002] 
// Parameters infos:

void USFXWave_Horde_Collector::SpawnHorde ( )
{
	static UFunction* pFnSpawnHorde = NULL;

	if ( ! pFnSpawnHorde )
		pFnSpawnHorde = (UFunction*) UObject::GObjObjects()->Data[ 113249 ];

	USFXWave_Horde_Collector_execSpawnHorde_Parms SpawnHorde_Parms;

	this->ProcessEvent ( pFnSpawnHorde, &SpawnHorde_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.SpawnEnemy
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void USFXWave_Horde_Collector::SpawnEnemy ( int Index )
{
	static UFunction* pFnSpawnEnemy = NULL;

	if ( ! pFnSpawnEnemy )
		pFnSpawnEnemy = (UFunction*) UObject::GObjObjects()->Data[ 113242 ];

	USFXWave_Horde_Collector_execSpawnEnemy_Parms SpawnEnemy_Parms;
	SpawnEnemy_Parms.Index = Index;

	this->ProcessEvent ( pFnSpawnEnemy, &SpawnEnemy_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.AreRemainingEnemiesOnMyTeam
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Collector::AreRemainingEnemiesOnMyTeam ( )
{
	static UFunction* pFnAreRemainingEnemiesOnMyTeam = NULL;

	if ( ! pFnAreRemainingEnemiesOnMyTeam )
		pFnAreRemainingEnemiesOnMyTeam = (UFunction*) UObject::GObjObjects()->Data[ 113239 ];

	USFXWave_Horde_Collector_execAreRemainingEnemiesOnMyTeam_Parms AreRemainingEnemiesOnMyTeam_Parms;

	this->ProcessEvent ( pFnAreRemainingEnemiesOnMyTeam, &AreRemainingEnemiesOnMyTeam_Parms, NULL );

	return AreRemainingEnemiesOnMyTeam_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseEnemyToSpawn
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXWave_Horde_Collector::ChooseEnemyToSpawn ( )
{
	static UFunction* pFnChooseEnemyToSpawn = NULL;

	if ( ! pFnChooseEnemyToSpawn )
		pFnChooseEnemyToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 113228 ];

	USFXWave_Horde_Collector_execChooseEnemyToSpawn_Parms ChooseEnemyToSpawn_Parms;

	this->ProcessEvent ( pFnChooseEnemyToSpawn, &ChooseEnemyToSpawn_Parms, NULL );

	return ChooseEnemyToSpawn_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseSquadToSpawn
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Collector::ChooseSquadToSpawn ( )
{
	static UFunction* pFnChooseSquadToSpawn = NULL;

	if ( ! pFnChooseSquadToSpawn )
		pFnChooseSquadToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 113223 ];

	USFXWave_Horde_Collector_execChooseSquadToSpawn_Parms ChooseSquadToSpawn_Parms;

	this->ProcessEvent ( pFnChooseSquadToSpawn, &ChooseSquadToSpawn_Parms, NULL );

	return ChooseSquadToSpawn_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.CanEnemyUseSpawnPoint
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  EnemyClass                     ( CPF_Parm )
// float                          EnemyRadius                    ( CPF_Parm )
// float                          EnemyHeight                    ( CPF_Parm )
// class ANavigationPoint*        NavPoint                       ( CPF_Parm )

bool USFXWave_Horde_Collector::CanEnemyUseSpawnPoint ( class UClass* EnemyClass, float EnemyRadius, float EnemyHeight, class ANavigationPoint* NavPoint )
{
	static UFunction* pFnCanEnemyUseSpawnPoint = NULL;

	if ( ! pFnCanEnemyUseSpawnPoint )
		pFnCanEnemyUseSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 113203 ];

	USFXWave_Horde_Collector_execCanEnemyUseSpawnPoint_Parms CanEnemyUseSpawnPoint_Parms;
	CanEnemyUseSpawnPoint_Parms.EnemyClass = EnemyClass;
	CanEnemyUseSpawnPoint_Parms.EnemyRadius = EnemyRadius;
	CanEnemyUseSpawnPoint_Parms.EnemyHeight = EnemyHeight;
	CanEnemyUseSpawnPoint_Parms.NavPoint = NavPoint;

	this->ProcessEvent ( pFnCanEnemyUseSpawnPoint, &CanEnemyUseSpawnPoint_Parms, NULL );

	return CanEnemyUseSpawnPoint_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.RateEnemyStart
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ANavigationPoint*        NavPoint                       ( CPF_Parm )
// float                          EnemyRadius                    ( CPF_Parm )
// float                          EnemyHeight                    ( CPF_Parm )
// class UClass*                  EnemyClass                     ( CPF_Parm )
// unsigned long                  bDoTraceCheck                  ( CPF_Parm )

float USFXWave_Horde_Collector::RateEnemyStart ( class ANavigationPoint* NavPoint, float EnemyRadius, float EnemyHeight, class UClass* EnemyClass, unsigned long bDoTraceCheck )
{
	static UFunction* pFnRateEnemyStart = NULL;

	if ( ! pFnRateEnemyStart )
		pFnRateEnemyStart = (UFunction*) UObject::GObjObjects()->Data[ 113186 ];

	USFXWave_Horde_Collector_execRateEnemyStart_Parms RateEnemyStart_Parms;
	RateEnemyStart_Parms.NavPoint = NavPoint;
	RateEnemyStart_Parms.EnemyRadius = EnemyRadius;
	RateEnemyStart_Parms.EnemyHeight = EnemyHeight;
	RateEnemyStart_Parms.EnemyClass = EnemyClass;
	RateEnemyStart_Parms.bDoTraceCheck = bDoTraceCheck;

	this->ProcessEvent ( pFnRateEnemyStart, &RateEnemyStart_Parms, NULL );

	return RateEnemyStart_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseEnemyStart
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class ANavigationPoint*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  EnemyClass                     ( CPF_Parm )

class ANavigationPoint* USFXWave_Horde_Collector::ChooseEnemyStart ( class UClass* EnemyClass )
{
	static UFunction* pFnChooseEnemyStart = NULL;

	if ( ! pFnChooseEnemyStart )
		pFnChooseEnemyStart = (UFunction*) UObject::GObjObjects()->Data[ 113171 ];

	USFXWave_Horde_Collector_execChooseEnemyStart_Parms ChooseEnemyStart_Parms;
	ChooseEnemyStart_Parms.EnemyClass = EnemyClass;

	this->ProcessEvent ( pFnChooseEnemyStart, &ChooseEnemyStart_Parms, NULL );

	return ChooseEnemyStart_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.FinishWave
// [0x00020002] 
// Parameters infos:

void USFXWave_Horde_Collector::FinishWave ( )
{
	static UFunction* pFnFinishWave = NULL;

	if ( ! pFnFinishWave )
		pFnFinishWave = (UFunction*) UObject::GObjObjects()->Data[ 113168 ];

	USFXWave_Horde_Collector_execFinishWave_Parms FinishWave_Parms;

	this->ProcessEvent ( pFnFinishWave, &FinishWave_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.BeginWave
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Collector::BeginWave ( )
{
	static UFunction* pFnBeginWave = NULL;

	if ( ! pFnBeginWave )
		pFnBeginWave = (UFunction*) UObject::GObjObjects()->Data[ 113159 ];

	USFXWave_Horde_Collector_execBeginWave_Parms BeginWave_Parms;

	this->ProcessEvent ( pFnBeginWave, &BeginWave_Parms, NULL );

	return BeginWave_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.GetEnemyArray
// [0x00420002] 
// Parameters infos:
// TArray< struct FEnemyWaveInfo > EnemyArray                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXWave_Horde_Collector::GetEnemyArray ( TArray< struct FEnemyWaveInfo >* EnemyArray )
{
	static UFunction* pFnGetEnemyArray = NULL;

	if ( ! pFnGetEnemyArray )
		pFnGetEnemyArray = (UFunction*) UObject::GObjObjects()->Data[ 113153 ];

	USFXWave_Horde_Collector_execGetEnemyArray_Parms GetEnemyArray_Parms;

	this->ProcessEvent ( pFnGetEnemyArray, &GetEnemyArray_Parms, NULL );

	if ( EnemyArray )
		memcpy ( EnemyArray, &GetEnemyArray_Parms.EnemyArray, 0xC );
};

// Function sfxgamempcontent.SFXWave_Horde.InitializeWave
// [0x00020002] 
// Parameters infos:
// class ASFXWaveManager*         OwnerManager                   ( CPF_Parm )

void USFXWave_Horde_Collector::InitializeWave ( class ASFXWaveManager* OwnerManager )
{
	static UFunction* pFnInitializeWave = NULL;

	if ( ! pFnInitializeWave )
		pFnInitializeWave = (UFunction*) UObject::GObjObjects()->Data[ 113141 ];

	USFXWave_Horde_Collector_execInitializeWave_Parms InitializeWave_Parms;
	InitializeWave_Parms.OwnerManager = OwnerManager;

	this->ProcessEvent ( pFnInitializeWave, &InitializeWave_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.StartAutoBots
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXWave_Horde_Geth2::StartAutoBots ( )
{
	static UFunction* pFnStartAutoBots = NULL;

	if ( ! pFnStartAutoBots )
		pFnStartAutoBots = (UFunction*) UObject::GObjObjects()->Data[ 113152 ];

	USFXWave_Horde_Geth2_execStartAutoBots_Parms StartAutoBots_Parms;

	this->ProcessEvent ( pFnStartAutoBots, &StartAutoBots_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.GetScoreBudget
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXWave_Horde_Geth2::GetScoreBudget ( )
{
	static UFunction* pFnGetScoreBudget = NULL;

	if ( ! pFnGetScoreBudget )
		pFnGetScoreBudget = (UFunction*) UObject::GObjObjects()->Data[ 113316 ];

	USFXWave_Horde_Geth2_execGetScoreBudget_Parms GetScoreBudget_Parms;

	this->ProcessEvent ( pFnGetScoreBudget, &GetScoreBudget_Parms, NULL );

	return GetScoreBudget_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.CalculateSpawnedEnemyCost
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXWave_Horde_Geth2::CalculateSpawnedEnemyCost ( )
{
	static UFunction* pFnCalculateSpawnedEnemyCost = NULL;

	if ( ! pFnCalculateSpawnedEnemyCost )
		pFnCalculateSpawnedEnemyCost = (UFunction*) UObject::GObjObjects()->Data[ 113312 ];

	USFXWave_Horde_Geth2_execCalculateSpawnedEnemyCost_Parms CalculateSpawnedEnemyCost_Parms;

	this->ProcessEvent ( pFnCalculateSpawnedEnemyCost, &CalculateSpawnedEnemyCost_Parms, NULL );

	return CalculateSpawnedEnemyCost_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.PawnRevived
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )

void USFXWave_Horde_Geth2::PawnRevived ( class ABioPawn* Pawn )
{
	static UFunction* pFnPawnRevived = NULL;

	if ( ! pFnPawnRevived )
		pFnPawnRevived = (UFunction*) UObject::GObjObjects()->Data[ 113308 ];

	USFXWave_Horde_Geth2_execPawnRevived_Parms PawnRevived_Parms;
	PawnRevived_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnPawnRevived, &PawnRevived_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.GetEnemySpawnInfoForEnemyType
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FEnemySpawnInfo         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   EnemyType                      ( CPF_Parm )

struct FEnemySpawnInfo USFXWave_Horde_Geth2::GetEnemySpawnInfoForEnemyType ( struct FName EnemyType )
{
	static UFunction* pFnGetEnemySpawnInfoForEnemyType = NULL;

	if ( ! pFnGetEnemySpawnInfoForEnemyType )
		pFnGetEnemySpawnInfoForEnemyType = (UFunction*) UObject::GObjObjects()->Data[ 113151 ];

	USFXWave_Horde_Geth2_execGetEnemySpawnInfoForEnemyType_Parms GetEnemySpawnInfoForEnemyType_Parms;
	memcpy ( &GetEnemySpawnInfoForEnemyType_Parms.EnemyType, &EnemyType, 0x8 );

	this->ProcessEvent ( pFnGetEnemySpawnInfoForEnemyType, &GetEnemySpawnInfoForEnemyType_Parms, NULL );

	return GetEnemySpawnInfoForEnemyType_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.StopSpawningNewEnemies
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXWave_Horde_Geth2::StopSpawningNewEnemies ( )
{
	static UFunction* pFnStopSpawningNewEnemies = NULL;

	if ( ! pFnStopSpawningNewEnemies )
		pFnStopSpawningNewEnemies = (UFunction*) UObject::GObjObjects()->Data[ 113304 ];

	USFXWave_Horde_Geth2_execStopSpawningNewEnemies_Parms StopSpawningNewEnemies_Parms;

	this->ProcessEvent ( pFnStopSpawningNewEnemies, &StopSpawningNewEnemies_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.SetEndlessWaves
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  Endless                        ( CPF_Parm )

void USFXWave_Horde_Geth2::SetEndlessWaves ( unsigned long Endless )
{
	static UFunction* pFnSetEndlessWaves = NULL;

	if ( ! pFnSetEndlessWaves )
		pFnSetEndlessWaves = (UFunction*) UObject::GObjObjects()->Data[ 108141 ];

	USFXWave_Horde_Geth2_execSetEndlessWaves_Parms SetEndlessWaves_Parms;
	SetEndlessWaves_Parms.Endless = Endless;

	this->ProcessEvent ( pFnSetEndlessWaves, &SetEndlessWaves_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.EnemyBudgetRemaining
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Geth2::EnemyBudgetRemaining ( )
{
	static UFunction* pFnEnemyBudgetRemaining = NULL;

	if ( ! pFnEnemyBudgetRemaining )
		pFnEnemyBudgetRemaining = (UFunction*) UObject::GObjObjects()->Data[ 113251 ];

	USFXWave_Horde_Geth2_execEnemyBudgetRemaining_Parms EnemyBudgetRemaining_Parms;

	this->ProcessEvent ( pFnEnemyBudgetRemaining, &EnemyBudgetRemaining_Parms, NULL );

	return EnemyBudgetRemaining_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.GetCreatureWaveCost
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

int USFXWave_Horde_Geth2::GetCreatureWaveCost ( class APawn* P )
{
	static UFunction* pFnGetCreatureWaveCost = NULL;

	if ( ! pFnGetCreatureWaveCost )
		pFnGetCreatureWaveCost = (UFunction*) UObject::GObjObjects()->Data[ 113298 ];

	USFXWave_Horde_Geth2_execGetCreatureWaveCost_Parms GetCreatureWaveCost_Parms;
	GetCreatureWaveCost_Parms.P = P;

	this->ProcessEvent ( pFnGetCreatureWaveCost, &GetCreatureWaveCost_Parms, NULL );

	return GetCreatureWaveCost_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerWaveEndEvent
// [0x00020002] 
// Parameters infos:
// int                            Wave                           ( CPF_Parm )

void USFXWave_Horde_Geth2::TriggerWaveEndEvent ( int Wave )
{
	static UFunction* pFnTriggerWaveEndEvent = NULL;

	if ( ! pFnTriggerWaveEndEvent )
		pFnTriggerWaveEndEvent = (UFunction*) UObject::GObjObjects()->Data[ 113290 ];

	USFXWave_Horde_Geth2_execTriggerWaveEndEvent_Parms TriggerWaveEndEvent_Parms;
	TriggerWaveEndEvent_Parms.Wave = Wave;

	this->ProcessEvent ( pFnTriggerWaveEndEvent, &TriggerWaveEndEvent_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerEnemyKilledEvent
// [0x00020002] 
// Parameters infos:
// class APawn*                   Killed                         ( CPF_Parm )
// class APawn*                   Killer                         ( CPF_Parm )

void USFXWave_Horde_Geth2::TriggerEnemyKilledEvent ( class APawn* Killed, class APawn* Killer )
{
	static UFunction* pFnTriggerEnemyKilledEvent = NULL;

	if ( ! pFnTriggerEnemyKilledEvent )
		pFnTriggerEnemyKilledEvent = (UFunction*) UObject::GObjObjects()->Data[ 113282 ];

	USFXWave_Horde_Geth2_execTriggerEnemyKilledEvent_Parms TriggerEnemyKilledEvent_Parms;
	TriggerEnemyKilledEvent_Parms.Killed = Killed;
	TriggerEnemyKilledEvent_Parms.Killer = Killer;

	this->ProcessEvent ( pFnTriggerEnemyKilledEvent, &TriggerEnemyKilledEvent_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerWaveStartEvent
// [0x00020002] 
// Parameters infos:
// int                            Wave                           ( CPF_Parm )

void USFXWave_Horde_Geth2::TriggerWaveStartEvent ( int Wave )
{
	static UFunction* pFnTriggerWaveStartEvent = NULL;

	if ( ! pFnTriggerWaveStartEvent )
		pFnTriggerWaveStartEvent = (UFunction*) UObject::GObjObjects()->Data[ 113274 ];

	USFXWave_Horde_Geth2_execTriggerWaveStartEvent_Parms TriggerWaveStartEvent_Parms;
	TriggerWaveStartEvent_Parms.Wave = Wave;

	this->ProcessEvent ( pFnTriggerWaveStartEvent, &TriggerWaveStartEvent_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.ShouldSpawnSquad
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Geth2::ShouldSpawnSquad ( )
{
	static UFunction* pFnShouldSpawnSquad = NULL;

	if ( ! pFnShouldSpawnSquad )
		pFnShouldSpawnSquad = (UFunction*) UObject::GObjObjects()->Data[ 113253 ];

	USFXWave_Horde_Geth2_execShouldSpawnSquad_Parms ShouldSpawnSquad_Parms;

	this->ProcessEvent ( pFnShouldSpawnSquad, &ShouldSpawnSquad_Parms, NULL );

	return ShouldSpawnSquad_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.GetPlayerCount
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXWave_Horde_Geth2::GetPlayerCount ( )
{
	static UFunction* pFnGetPlayerCount = NULL;

	if ( ! pFnGetPlayerCount )
		pFnGetPlayerCount = (UFunction*) UObject::GObjObjects()->Data[ 113267 ];

	USFXWave_Horde_Geth2_execGetPlayerCount_Parms GetPlayerCount_Parms;

	this->ProcessEvent ( pFnGetPlayerCount, &GetPlayerCount_Parms, NULL );

	return GetPlayerCount_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.PawnDied
// [0x00024002] 
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )
// class ABioPawn*                Killer                         ( CPF_OptionalParm | CPF_Parm )

void USFXWave_Horde_Geth2::PawnDied ( class ABioPawn* Pawn, class ABioPawn* Killer )
{
	static UFunction* pFnPawnDied = NULL;

	if ( ! pFnPawnDied )
		pFnPawnDied = (UFunction*) UObject::GObjObjects()->Data[ 113261 ];

	USFXWave_Horde_Geth2_execPawnDied_Parms PawnDied_Parms;
	PawnDied_Parms.Pawn = Pawn;
	PawnDied_Parms.Killer = Killer;

	this->ProcessEvent ( pFnPawnDied, &PawnDied_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.ActivateEnemyObjectiveMarkers
// [0x00020002] 
// Parameters infos:

void USFXWave_Horde_Geth2::ActivateEnemyObjectiveMarkers ( )
{
	static UFunction* pFnActivateEnemyObjectiveMarkers = NULL;

	if ( ! pFnActivateEnemyObjectiveMarkers )
		pFnActivateEnemyObjectiveMarkers = (UFunction*) UObject::GObjObjects()->Data[ 113258 ];

	USFXWave_Horde_Geth2_execActivateEnemyObjectiveMarkers_Parms ActivateEnemyObjectiveMarkers_Parms;

	this->ProcessEvent ( pFnActivateEnemyObjectiveMarkers, &ActivateEnemyObjectiveMarkers_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.UpdateObjectiveStatus
// [0x00020002] 
// Parameters infos:

void USFXWave_Horde_Geth2::UpdateObjectiveStatus ( )
{
	static UFunction* pFnUpdateObjectiveStatus = NULL;

	if ( ! pFnUpdateObjectiveStatus )
		pFnUpdateObjectiveStatus = (UFunction*) UObject::GObjObjects()->Data[ 113254 ];

	USFXWave_Horde_Geth2_execUpdateObjectiveStatus_Parms UpdateObjectiveStatus_Parms;

	this->ProcessEvent ( pFnUpdateObjectiveStatus, &UpdateObjectiveStatus_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.SpawnHorde
// [0x00020002] 
// Parameters infos:

void USFXWave_Horde_Geth2::SpawnHorde ( )
{
	static UFunction* pFnSpawnHorde = NULL;

	if ( ! pFnSpawnHorde )
		pFnSpawnHorde = (UFunction*) UObject::GObjObjects()->Data[ 113249 ];

	USFXWave_Horde_Geth2_execSpawnHorde_Parms SpawnHorde_Parms;

	this->ProcessEvent ( pFnSpawnHorde, &SpawnHorde_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.SpawnEnemy
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void USFXWave_Horde_Geth2::SpawnEnemy ( int Index )
{
	static UFunction* pFnSpawnEnemy = NULL;

	if ( ! pFnSpawnEnemy )
		pFnSpawnEnemy = (UFunction*) UObject::GObjObjects()->Data[ 113242 ];

	USFXWave_Horde_Geth2_execSpawnEnemy_Parms SpawnEnemy_Parms;
	SpawnEnemy_Parms.Index = Index;

	this->ProcessEvent ( pFnSpawnEnemy, &SpawnEnemy_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.AreRemainingEnemiesOnMyTeam
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Geth2::AreRemainingEnemiesOnMyTeam ( )
{
	static UFunction* pFnAreRemainingEnemiesOnMyTeam = NULL;

	if ( ! pFnAreRemainingEnemiesOnMyTeam )
		pFnAreRemainingEnemiesOnMyTeam = (UFunction*) UObject::GObjObjects()->Data[ 113239 ];

	USFXWave_Horde_Geth2_execAreRemainingEnemiesOnMyTeam_Parms AreRemainingEnemiesOnMyTeam_Parms;

	this->ProcessEvent ( pFnAreRemainingEnemiesOnMyTeam, &AreRemainingEnemiesOnMyTeam_Parms, NULL );

	return AreRemainingEnemiesOnMyTeam_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseEnemyToSpawn
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXWave_Horde_Geth2::ChooseEnemyToSpawn ( )
{
	static UFunction* pFnChooseEnemyToSpawn = NULL;

	if ( ! pFnChooseEnemyToSpawn )
		pFnChooseEnemyToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 113228 ];

	USFXWave_Horde_Geth2_execChooseEnemyToSpawn_Parms ChooseEnemyToSpawn_Parms;

	this->ProcessEvent ( pFnChooseEnemyToSpawn, &ChooseEnemyToSpawn_Parms, NULL );

	return ChooseEnemyToSpawn_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseSquadToSpawn
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Geth2::ChooseSquadToSpawn ( )
{
	static UFunction* pFnChooseSquadToSpawn = NULL;

	if ( ! pFnChooseSquadToSpawn )
		pFnChooseSquadToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 113223 ];

	USFXWave_Horde_Geth2_execChooseSquadToSpawn_Parms ChooseSquadToSpawn_Parms;

	this->ProcessEvent ( pFnChooseSquadToSpawn, &ChooseSquadToSpawn_Parms, NULL );

	return ChooseSquadToSpawn_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.CanEnemyUseSpawnPoint
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  EnemyClass                     ( CPF_Parm )
// float                          EnemyRadius                    ( CPF_Parm )
// float                          EnemyHeight                    ( CPF_Parm )
// class ANavigationPoint*        NavPoint                       ( CPF_Parm )

bool USFXWave_Horde_Geth2::CanEnemyUseSpawnPoint ( class UClass* EnemyClass, float EnemyRadius, float EnemyHeight, class ANavigationPoint* NavPoint )
{
	static UFunction* pFnCanEnemyUseSpawnPoint = NULL;

	if ( ! pFnCanEnemyUseSpawnPoint )
		pFnCanEnemyUseSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 113203 ];

	USFXWave_Horde_Geth2_execCanEnemyUseSpawnPoint_Parms CanEnemyUseSpawnPoint_Parms;
	CanEnemyUseSpawnPoint_Parms.EnemyClass = EnemyClass;
	CanEnemyUseSpawnPoint_Parms.EnemyRadius = EnemyRadius;
	CanEnemyUseSpawnPoint_Parms.EnemyHeight = EnemyHeight;
	CanEnemyUseSpawnPoint_Parms.NavPoint = NavPoint;

	this->ProcessEvent ( pFnCanEnemyUseSpawnPoint, &CanEnemyUseSpawnPoint_Parms, NULL );

	return CanEnemyUseSpawnPoint_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.RateEnemyStart
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ANavigationPoint*        NavPoint                       ( CPF_Parm )
// float                          EnemyRadius                    ( CPF_Parm )
// float                          EnemyHeight                    ( CPF_Parm )
// class UClass*                  EnemyClass                     ( CPF_Parm )
// unsigned long                  bDoTraceCheck                  ( CPF_Parm )

float USFXWave_Horde_Geth2::RateEnemyStart ( class ANavigationPoint* NavPoint, float EnemyRadius, float EnemyHeight, class UClass* EnemyClass, unsigned long bDoTraceCheck )
{
	static UFunction* pFnRateEnemyStart = NULL;

	if ( ! pFnRateEnemyStart )
		pFnRateEnemyStart = (UFunction*) UObject::GObjObjects()->Data[ 113186 ];

	USFXWave_Horde_Geth2_execRateEnemyStart_Parms RateEnemyStart_Parms;
	RateEnemyStart_Parms.NavPoint = NavPoint;
	RateEnemyStart_Parms.EnemyRadius = EnemyRadius;
	RateEnemyStart_Parms.EnemyHeight = EnemyHeight;
	RateEnemyStart_Parms.EnemyClass = EnemyClass;
	RateEnemyStart_Parms.bDoTraceCheck = bDoTraceCheck;

	this->ProcessEvent ( pFnRateEnemyStart, &RateEnemyStart_Parms, NULL );

	return RateEnemyStart_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseEnemyStart
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class ANavigationPoint*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  EnemyClass                     ( CPF_Parm )

class ANavigationPoint* USFXWave_Horde_Geth2::ChooseEnemyStart ( class UClass* EnemyClass )
{
	static UFunction* pFnChooseEnemyStart = NULL;

	if ( ! pFnChooseEnemyStart )
		pFnChooseEnemyStart = (UFunction*) UObject::GObjObjects()->Data[ 113171 ];

	USFXWave_Horde_Geth2_execChooseEnemyStart_Parms ChooseEnemyStart_Parms;
	ChooseEnemyStart_Parms.EnemyClass = EnemyClass;

	this->ProcessEvent ( pFnChooseEnemyStart, &ChooseEnemyStart_Parms, NULL );

	return ChooseEnemyStart_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.FinishWave
// [0x00020002] 
// Parameters infos:

void USFXWave_Horde_Geth2::FinishWave ( )
{
	static UFunction* pFnFinishWave = NULL;

	if ( ! pFnFinishWave )
		pFnFinishWave = (UFunction*) UObject::GObjObjects()->Data[ 113168 ];

	USFXWave_Horde_Geth2_execFinishWave_Parms FinishWave_Parms;

	this->ProcessEvent ( pFnFinishWave, &FinishWave_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.BeginWave
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Geth2::BeginWave ( )
{
	static UFunction* pFnBeginWave = NULL;

	if ( ! pFnBeginWave )
		pFnBeginWave = (UFunction*) UObject::GObjObjects()->Data[ 113159 ];

	USFXWave_Horde_Geth2_execBeginWave_Parms BeginWave_Parms;

	this->ProcessEvent ( pFnBeginWave, &BeginWave_Parms, NULL );

	return BeginWave_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.GetEnemyArray
// [0x00420002] 
// Parameters infos:
// TArray< struct FEnemyWaveInfo > EnemyArray                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXWave_Horde_Geth2::GetEnemyArray ( TArray< struct FEnemyWaveInfo >* EnemyArray )
{
	static UFunction* pFnGetEnemyArray = NULL;

	if ( ! pFnGetEnemyArray )
		pFnGetEnemyArray = (UFunction*) UObject::GObjObjects()->Data[ 113153 ];

	USFXWave_Horde_Geth2_execGetEnemyArray_Parms GetEnemyArray_Parms;

	this->ProcessEvent ( pFnGetEnemyArray, &GetEnemyArray_Parms, NULL );

	if ( EnemyArray )
		memcpy ( EnemyArray, &GetEnemyArray_Parms.EnemyArray, 0xC );
};

// Function sfxgamempcontent.SFXWave_Horde.InitializeWave
// [0x00020002] 
// Parameters infos:
// class ASFXWaveManager*         OwnerManager                   ( CPF_Parm )

void USFXWave_Horde_Geth2::InitializeWave ( class ASFXWaveManager* OwnerManager )
{
	static UFunction* pFnInitializeWave = NULL;

	if ( ! pFnInitializeWave )
		pFnInitializeWave = (UFunction*) UObject::GObjObjects()->Data[ 113141 ];

	USFXWave_Horde_Geth2_execInitializeWave_Parms InitializeWave_Parms;
	InitializeWave_Parms.OwnerManager = OwnerManager;

	this->ProcessEvent ( pFnInitializeWave, &InitializeWave_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.StartAutoBots
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXWave_Horde_Reaper2::StartAutoBots ( )
{
	static UFunction* pFnStartAutoBots = NULL;

	if ( ! pFnStartAutoBots )
		pFnStartAutoBots = (UFunction*) UObject::GObjObjects()->Data[ 113152 ];

	USFXWave_Horde_Reaper2_execStartAutoBots_Parms StartAutoBots_Parms;

	this->ProcessEvent ( pFnStartAutoBots, &StartAutoBots_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.GetScoreBudget
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float USFXWave_Horde_Reaper2::GetScoreBudget ( )
{
	static UFunction* pFnGetScoreBudget = NULL;

	if ( ! pFnGetScoreBudget )
		pFnGetScoreBudget = (UFunction*) UObject::GObjObjects()->Data[ 113316 ];

	USFXWave_Horde_Reaper2_execGetScoreBudget_Parms GetScoreBudget_Parms;

	this->ProcessEvent ( pFnGetScoreBudget, &GetScoreBudget_Parms, NULL );

	return GetScoreBudget_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.CalculateSpawnedEnemyCost
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXWave_Horde_Reaper2::CalculateSpawnedEnemyCost ( )
{
	static UFunction* pFnCalculateSpawnedEnemyCost = NULL;

	if ( ! pFnCalculateSpawnedEnemyCost )
		pFnCalculateSpawnedEnemyCost = (UFunction*) UObject::GObjObjects()->Data[ 113312 ];

	USFXWave_Horde_Reaper2_execCalculateSpawnedEnemyCost_Parms CalculateSpawnedEnemyCost_Parms;

	this->ProcessEvent ( pFnCalculateSpawnedEnemyCost, &CalculateSpawnedEnemyCost_Parms, NULL );

	return CalculateSpawnedEnemyCost_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.PawnRevived
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )

void USFXWave_Horde_Reaper2::PawnRevived ( class ABioPawn* Pawn )
{
	static UFunction* pFnPawnRevived = NULL;

	if ( ! pFnPawnRevived )
		pFnPawnRevived = (UFunction*) UObject::GObjObjects()->Data[ 113308 ];

	USFXWave_Horde_Reaper2_execPawnRevived_Parms PawnRevived_Parms;
	PawnRevived_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnPawnRevived, &PawnRevived_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.GetEnemySpawnInfoForEnemyType
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FEnemySpawnInfo         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   EnemyType                      ( CPF_Parm )

struct FEnemySpawnInfo USFXWave_Horde_Reaper2::GetEnemySpawnInfoForEnemyType ( struct FName EnemyType )
{
	static UFunction* pFnGetEnemySpawnInfoForEnemyType = NULL;

	if ( ! pFnGetEnemySpawnInfoForEnemyType )
		pFnGetEnemySpawnInfoForEnemyType = (UFunction*) UObject::GObjObjects()->Data[ 113151 ];

	USFXWave_Horde_Reaper2_execGetEnemySpawnInfoForEnemyType_Parms GetEnemySpawnInfoForEnemyType_Parms;
	memcpy ( &GetEnemySpawnInfoForEnemyType_Parms.EnemyType, &EnemyType, 0x8 );

	this->ProcessEvent ( pFnGetEnemySpawnInfoForEnemyType, &GetEnemySpawnInfoForEnemyType_Parms, NULL );

	return GetEnemySpawnInfoForEnemyType_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.StopSpawningNewEnemies
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXWave_Horde_Reaper2::StopSpawningNewEnemies ( )
{
	static UFunction* pFnStopSpawningNewEnemies = NULL;

	if ( ! pFnStopSpawningNewEnemies )
		pFnStopSpawningNewEnemies = (UFunction*) UObject::GObjObjects()->Data[ 113304 ];

	USFXWave_Horde_Reaper2_execStopSpawningNewEnemies_Parms StopSpawningNewEnemies_Parms;

	this->ProcessEvent ( pFnStopSpawningNewEnemies, &StopSpawningNewEnemies_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.SetEndlessWaves
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  Endless                        ( CPF_Parm )

void USFXWave_Horde_Reaper2::SetEndlessWaves ( unsigned long Endless )
{
	static UFunction* pFnSetEndlessWaves = NULL;

	if ( ! pFnSetEndlessWaves )
		pFnSetEndlessWaves = (UFunction*) UObject::GObjObjects()->Data[ 108141 ];

	USFXWave_Horde_Reaper2_execSetEndlessWaves_Parms SetEndlessWaves_Parms;
	SetEndlessWaves_Parms.Endless = Endless;

	this->ProcessEvent ( pFnSetEndlessWaves, &SetEndlessWaves_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.EnemyBudgetRemaining
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Reaper2::EnemyBudgetRemaining ( )
{
	static UFunction* pFnEnemyBudgetRemaining = NULL;

	if ( ! pFnEnemyBudgetRemaining )
		pFnEnemyBudgetRemaining = (UFunction*) UObject::GObjObjects()->Data[ 113251 ];

	USFXWave_Horde_Reaper2_execEnemyBudgetRemaining_Parms EnemyBudgetRemaining_Parms;

	this->ProcessEvent ( pFnEnemyBudgetRemaining, &EnemyBudgetRemaining_Parms, NULL );

	return EnemyBudgetRemaining_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.GetCreatureWaveCost
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

int USFXWave_Horde_Reaper2::GetCreatureWaveCost ( class APawn* P )
{
	static UFunction* pFnGetCreatureWaveCost = NULL;

	if ( ! pFnGetCreatureWaveCost )
		pFnGetCreatureWaveCost = (UFunction*) UObject::GObjObjects()->Data[ 113298 ];

	USFXWave_Horde_Reaper2_execGetCreatureWaveCost_Parms GetCreatureWaveCost_Parms;
	GetCreatureWaveCost_Parms.P = P;

	this->ProcessEvent ( pFnGetCreatureWaveCost, &GetCreatureWaveCost_Parms, NULL );

	return GetCreatureWaveCost_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerWaveEndEvent
// [0x00020002] 
// Parameters infos:
// int                            Wave                           ( CPF_Parm )

void USFXWave_Horde_Reaper2::TriggerWaveEndEvent ( int Wave )
{
	static UFunction* pFnTriggerWaveEndEvent = NULL;

	if ( ! pFnTriggerWaveEndEvent )
		pFnTriggerWaveEndEvent = (UFunction*) UObject::GObjObjects()->Data[ 113290 ];

	USFXWave_Horde_Reaper2_execTriggerWaveEndEvent_Parms TriggerWaveEndEvent_Parms;
	TriggerWaveEndEvent_Parms.Wave = Wave;

	this->ProcessEvent ( pFnTriggerWaveEndEvent, &TriggerWaveEndEvent_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerEnemyKilledEvent
// [0x00020002] 
// Parameters infos:
// class APawn*                   Killed                         ( CPF_Parm )
// class APawn*                   Killer                         ( CPF_Parm )

void USFXWave_Horde_Reaper2::TriggerEnemyKilledEvent ( class APawn* Killed, class APawn* Killer )
{
	static UFunction* pFnTriggerEnemyKilledEvent = NULL;

	if ( ! pFnTriggerEnemyKilledEvent )
		pFnTriggerEnemyKilledEvent = (UFunction*) UObject::GObjObjects()->Data[ 113282 ];

	USFXWave_Horde_Reaper2_execTriggerEnemyKilledEvent_Parms TriggerEnemyKilledEvent_Parms;
	TriggerEnemyKilledEvent_Parms.Killed = Killed;
	TriggerEnemyKilledEvent_Parms.Killer = Killer;

	this->ProcessEvent ( pFnTriggerEnemyKilledEvent, &TriggerEnemyKilledEvent_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.TriggerWaveStartEvent
// [0x00020002] 
// Parameters infos:
// int                            Wave                           ( CPF_Parm )

void USFXWave_Horde_Reaper2::TriggerWaveStartEvent ( int Wave )
{
	static UFunction* pFnTriggerWaveStartEvent = NULL;

	if ( ! pFnTriggerWaveStartEvent )
		pFnTriggerWaveStartEvent = (UFunction*) UObject::GObjObjects()->Data[ 113274 ];

	USFXWave_Horde_Reaper2_execTriggerWaveStartEvent_Parms TriggerWaveStartEvent_Parms;
	TriggerWaveStartEvent_Parms.Wave = Wave;

	this->ProcessEvent ( pFnTriggerWaveStartEvent, &TriggerWaveStartEvent_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.ShouldSpawnSquad
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Reaper2::ShouldSpawnSquad ( )
{
	static UFunction* pFnShouldSpawnSquad = NULL;

	if ( ! pFnShouldSpawnSquad )
		pFnShouldSpawnSquad = (UFunction*) UObject::GObjObjects()->Data[ 113253 ];

	USFXWave_Horde_Reaper2_execShouldSpawnSquad_Parms ShouldSpawnSquad_Parms;

	this->ProcessEvent ( pFnShouldSpawnSquad, &ShouldSpawnSquad_Parms, NULL );

	return ShouldSpawnSquad_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.GetPlayerCount
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXWave_Horde_Reaper2::GetPlayerCount ( )
{
	static UFunction* pFnGetPlayerCount = NULL;

	if ( ! pFnGetPlayerCount )
		pFnGetPlayerCount = (UFunction*) UObject::GObjObjects()->Data[ 113267 ];

	USFXWave_Horde_Reaper2_execGetPlayerCount_Parms GetPlayerCount_Parms;

	this->ProcessEvent ( pFnGetPlayerCount, &GetPlayerCount_Parms, NULL );

	return GetPlayerCount_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.PawnDied
// [0x00024002] 
// Parameters infos:
// class ABioPawn*                Pawn                           ( CPF_Parm )
// class ABioPawn*                Killer                         ( CPF_OptionalParm | CPF_Parm )

void USFXWave_Horde_Reaper2::PawnDied ( class ABioPawn* Pawn, class ABioPawn* Killer )
{
	static UFunction* pFnPawnDied = NULL;

	if ( ! pFnPawnDied )
		pFnPawnDied = (UFunction*) UObject::GObjObjects()->Data[ 113261 ];

	USFXWave_Horde_Reaper2_execPawnDied_Parms PawnDied_Parms;
	PawnDied_Parms.Pawn = Pawn;
	PawnDied_Parms.Killer = Killer;

	this->ProcessEvent ( pFnPawnDied, &PawnDied_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.ActivateEnemyObjectiveMarkers
// [0x00020002] 
// Parameters infos:

void USFXWave_Horde_Reaper2::ActivateEnemyObjectiveMarkers ( )
{
	static UFunction* pFnActivateEnemyObjectiveMarkers = NULL;

	if ( ! pFnActivateEnemyObjectiveMarkers )
		pFnActivateEnemyObjectiveMarkers = (UFunction*) UObject::GObjObjects()->Data[ 113258 ];

	USFXWave_Horde_Reaper2_execActivateEnemyObjectiveMarkers_Parms ActivateEnemyObjectiveMarkers_Parms;

	this->ProcessEvent ( pFnActivateEnemyObjectiveMarkers, &ActivateEnemyObjectiveMarkers_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.UpdateObjectiveStatus
// [0x00020002] 
// Parameters infos:

void USFXWave_Horde_Reaper2::UpdateObjectiveStatus ( )
{
	static UFunction* pFnUpdateObjectiveStatus = NULL;

	if ( ! pFnUpdateObjectiveStatus )
		pFnUpdateObjectiveStatus = (UFunction*) UObject::GObjObjects()->Data[ 113254 ];

	USFXWave_Horde_Reaper2_execUpdateObjectiveStatus_Parms UpdateObjectiveStatus_Parms;

	this->ProcessEvent ( pFnUpdateObjectiveStatus, &UpdateObjectiveStatus_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.SpawnHorde
// [0x00020002] 
// Parameters infos:

void USFXWave_Horde_Reaper2::SpawnHorde ( )
{
	static UFunction* pFnSpawnHorde = NULL;

	if ( ! pFnSpawnHorde )
		pFnSpawnHorde = (UFunction*) UObject::GObjObjects()->Data[ 113249 ];

	USFXWave_Horde_Reaper2_execSpawnHorde_Parms SpawnHorde_Parms;

	this->ProcessEvent ( pFnSpawnHorde, &SpawnHorde_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.SpawnEnemy
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void USFXWave_Horde_Reaper2::SpawnEnemy ( int Index )
{
	static UFunction* pFnSpawnEnemy = NULL;

	if ( ! pFnSpawnEnemy )
		pFnSpawnEnemy = (UFunction*) UObject::GObjObjects()->Data[ 113242 ];

	USFXWave_Horde_Reaper2_execSpawnEnemy_Parms SpawnEnemy_Parms;
	SpawnEnemy_Parms.Index = Index;

	this->ProcessEvent ( pFnSpawnEnemy, &SpawnEnemy_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.AreRemainingEnemiesOnMyTeam
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Reaper2::AreRemainingEnemiesOnMyTeam ( )
{
	static UFunction* pFnAreRemainingEnemiesOnMyTeam = NULL;

	if ( ! pFnAreRemainingEnemiesOnMyTeam )
		pFnAreRemainingEnemiesOnMyTeam = (UFunction*) UObject::GObjObjects()->Data[ 113239 ];

	USFXWave_Horde_Reaper2_execAreRemainingEnemiesOnMyTeam_Parms AreRemainingEnemiesOnMyTeam_Parms;

	this->ProcessEvent ( pFnAreRemainingEnemiesOnMyTeam, &AreRemainingEnemiesOnMyTeam_Parms, NULL );

	return AreRemainingEnemiesOnMyTeam_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseEnemyToSpawn
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXWave_Horde_Reaper2::ChooseEnemyToSpawn ( )
{
	static UFunction* pFnChooseEnemyToSpawn = NULL;

	if ( ! pFnChooseEnemyToSpawn )
		pFnChooseEnemyToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 113228 ];

	USFXWave_Horde_Reaper2_execChooseEnemyToSpawn_Parms ChooseEnemyToSpawn_Parms;

	this->ProcessEvent ( pFnChooseEnemyToSpawn, &ChooseEnemyToSpawn_Parms, NULL );

	return ChooseEnemyToSpawn_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseSquadToSpawn
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Reaper2::ChooseSquadToSpawn ( )
{
	static UFunction* pFnChooseSquadToSpawn = NULL;

	if ( ! pFnChooseSquadToSpawn )
		pFnChooseSquadToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 113223 ];

	USFXWave_Horde_Reaper2_execChooseSquadToSpawn_Parms ChooseSquadToSpawn_Parms;

	this->ProcessEvent ( pFnChooseSquadToSpawn, &ChooseSquadToSpawn_Parms, NULL );

	return ChooseSquadToSpawn_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.CanEnemyUseSpawnPoint
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  EnemyClass                     ( CPF_Parm )
// float                          EnemyRadius                    ( CPF_Parm )
// float                          EnemyHeight                    ( CPF_Parm )
// class ANavigationPoint*        NavPoint                       ( CPF_Parm )

bool USFXWave_Horde_Reaper2::CanEnemyUseSpawnPoint ( class UClass* EnemyClass, float EnemyRadius, float EnemyHeight, class ANavigationPoint* NavPoint )
{
	static UFunction* pFnCanEnemyUseSpawnPoint = NULL;

	if ( ! pFnCanEnemyUseSpawnPoint )
		pFnCanEnemyUseSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 113203 ];

	USFXWave_Horde_Reaper2_execCanEnemyUseSpawnPoint_Parms CanEnemyUseSpawnPoint_Parms;
	CanEnemyUseSpawnPoint_Parms.EnemyClass = EnemyClass;
	CanEnemyUseSpawnPoint_Parms.EnemyRadius = EnemyRadius;
	CanEnemyUseSpawnPoint_Parms.EnemyHeight = EnemyHeight;
	CanEnemyUseSpawnPoint_Parms.NavPoint = NavPoint;

	this->ProcessEvent ( pFnCanEnemyUseSpawnPoint, &CanEnemyUseSpawnPoint_Parms, NULL );

	return CanEnemyUseSpawnPoint_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.RateEnemyStart
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ANavigationPoint*        NavPoint                       ( CPF_Parm )
// float                          EnemyRadius                    ( CPF_Parm )
// float                          EnemyHeight                    ( CPF_Parm )
// class UClass*                  EnemyClass                     ( CPF_Parm )
// unsigned long                  bDoTraceCheck                  ( CPF_Parm )

float USFXWave_Horde_Reaper2::RateEnemyStart ( class ANavigationPoint* NavPoint, float EnemyRadius, float EnemyHeight, class UClass* EnemyClass, unsigned long bDoTraceCheck )
{
	static UFunction* pFnRateEnemyStart = NULL;

	if ( ! pFnRateEnemyStart )
		pFnRateEnemyStart = (UFunction*) UObject::GObjObjects()->Data[ 113186 ];

	USFXWave_Horde_Reaper2_execRateEnemyStart_Parms RateEnemyStart_Parms;
	RateEnemyStart_Parms.NavPoint = NavPoint;
	RateEnemyStart_Parms.EnemyRadius = EnemyRadius;
	RateEnemyStart_Parms.EnemyHeight = EnemyHeight;
	RateEnemyStart_Parms.EnemyClass = EnemyClass;
	RateEnemyStart_Parms.bDoTraceCheck = bDoTraceCheck;

	this->ProcessEvent ( pFnRateEnemyStart, &RateEnemyStart_Parms, NULL );

	return RateEnemyStart_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.ChooseEnemyStart
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class ANavigationPoint*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  EnemyClass                     ( CPF_Parm )

class ANavigationPoint* USFXWave_Horde_Reaper2::ChooseEnemyStart ( class UClass* EnemyClass )
{
	static UFunction* pFnChooseEnemyStart = NULL;

	if ( ! pFnChooseEnemyStart )
		pFnChooseEnemyStart = (UFunction*) UObject::GObjObjects()->Data[ 113171 ];

	USFXWave_Horde_Reaper2_execChooseEnemyStart_Parms ChooseEnemyStart_Parms;
	ChooseEnemyStart_Parms.EnemyClass = EnemyClass;

	this->ProcessEvent ( pFnChooseEnemyStart, &ChooseEnemyStart_Parms, NULL );

	return ChooseEnemyStart_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.FinishWave
// [0x00020002] 
// Parameters infos:

void USFXWave_Horde_Reaper2::FinishWave ( )
{
	static UFunction* pFnFinishWave = NULL;

	if ( ! pFnFinishWave )
		pFnFinishWave = (UFunction*) UObject::GObjObjects()->Data[ 113168 ];

	USFXWave_Horde_Reaper2_execFinishWave_Parms FinishWave_Parms;

	this->ProcessEvent ( pFnFinishWave, &FinishWave_Parms, NULL );
};

// Function sfxgamempcontent.SFXWave_Horde.BeginWave
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFXWave_Horde_Reaper2::BeginWave ( )
{
	static UFunction* pFnBeginWave = NULL;

	if ( ! pFnBeginWave )
		pFnBeginWave = (UFunction*) UObject::GObjObjects()->Data[ 113159 ];

	USFXWave_Horde_Reaper2_execBeginWave_Parms BeginWave_Parms;

	this->ProcessEvent ( pFnBeginWave, &BeginWave_Parms, NULL );

	return BeginWave_Parms.ReturnValue;
};

// Function sfxgamempcontent.SFXWave_Horde.GetEnemyArray
// [0x00420002] 
// Parameters infos:
// TArray< struct FEnemyWaveInfo > EnemyArray                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USFXWave_Horde_Reaper2::GetEnemyArray ( TArray< struct FEnemyWaveInfo >* EnemyArray )
{
	static UFunction* pFnGetEnemyArray = NULL;

	if ( ! pFnGetEnemyArray )
		pFnGetEnemyArray = (UFunction*) UObject::GObjObjects()->Data[ 113153 ];

	USFXWave_Horde_Reaper2_execGetEnemyArray_Parms GetEnemyArray_Parms;

	this->ProcessEvent ( pFnGetEnemyArray, &GetEnemyArray_Parms, NULL );

	if ( EnemyArray )
		memcpy ( EnemyArray, &GetEnemyArray_Parms.EnemyArray, 0xC );
};

// Function sfxgamempcontent.SFXWave_Horde.InitializeWave
// [0x00020002] 
// Parameters infos:
// class ASFXWaveManager*         OwnerManager                   ( CPF_Parm )

void USFXWave_Horde_Reaper2::InitializeWave ( class ASFXWaveManager* OwnerManager )
{
	static UFunction* pFnInitializeWave = NULL;

	if ( ! pFnInitializeWave )
		pFnInitializeWave = (UFunction*) UObject::GObjObjects()->Data[ 113141 ];

	USFXWave_Horde_Reaper2_execInitializeWave_Parms InitializeWave_Parms;
	InitializeWave_Parms.OwnerManager = OwnerManager;

	this->ProcessEvent ( pFnInitializeWave, &InitializeWave_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif