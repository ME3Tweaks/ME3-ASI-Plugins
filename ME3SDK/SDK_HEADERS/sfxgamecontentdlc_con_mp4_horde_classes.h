/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_con_mp4_horde_classes.h
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

// Class sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay
// 0x005B (0x02BC - 0x0261)
class USFXGUI_CollectorHUDOverlay : public USFXGUIMovie
{
public:
	TArray< struct FCollectorSwarmOverlay >            m_aSwarmOverlays;                                 		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector2D                                   PCQuickSlotOffset;                                		// 0x0270 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FVector2D                                   MPHUDIconOffset;                                  		// 0x0278 (0x0008) [0x0000000000004000]              ( CPF_Config )
	class USFXSFHandler_HUD*                           m_oSPHUD;                                         		// 0x0280 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USFXSFHandler_PCPowerWheel*                  m_oPCPowerWheel;                                  		// 0x0284 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USFXGUI_MPHUD*                               m_oMPHUD;                                         		// 0x0288 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PCQuickSlotScale;                                 		// 0x028C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MPHUDIconScale;                                   		// 0x0290 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                NumDrones;                                        		// 0x0294 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                NumFlashes;                                       		// 0x0298 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                NumSweeps;                                        		// 0x029C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                DroneFrequency;                                   		// 0x02A0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                FlashFrequency;                                   		// 0x02A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                SweepFrequency;                                   		// 0x02A8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                SwarmFrequency;                                   		// 0x02AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              PositionPowerIconOverlaysPeriod;                  		// 0x02B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class UGFxMovieInfo*                               CollectorHUDOverlayResource;                      		// 0x02B4 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bInitialized : 1;                               		// 0x02B8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bCooldownOverrideOn : 1;                        		// 0x02B8 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124673 ];

		return pClassPointer;
	};

	class UGFxValue* AS_GetCollectorCooldownForPowerIcon ( struct FString sIconID );
	void AS_ResetCooldownPowerIcons ( );
	bool GetGlobalPosition ( class UGFxValue* val, float* X, float* Y );
	void PositionPowerIconOverlays ( );
	int InitializePowerIconOverlay ( class USFXGUIValue_PowerIcon* oPowerIcon, float fScale, struct FVector2D* vOffset );
	void InitializeMPHUDPowerIconOverlays ( );
	void InitializePCQuickslotIconOverlays ( );
	void ClearSwarmOverlays ( );
	void OnClose ( );
	void UpdateCooldownOverride ( );
	void ResetForcedCooldown ( );
	void SetForcedCooldown ( );
	void CheckInitialize ( );
	void InternalOnStart ( );
	void eventOnStart ( );
};

UClass* USFXGUI_CollectorHUDOverlay::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4_horde.SFXMP4_ForcedReference
// 0x0000 (0x003C - 0x003C)
class USFXMP4_ForcedReference : public USFXSharedMP_ForcedReference
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124739 ];

		return pClassPointer;
	};

};

UClass* USFXMP4_ForcedReference::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4_horde.SFXWave_Horde_Cerberus2
// 0x0000 (0x0148 - 0x0148)
class USFXWave_Horde_Cerberus2 : public USFXWave_Horde
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124741 ];

		return pClassPointer;
	};

	void StartAutoBots ( );
	float GetScoreBudget ( );
	int CalculateSpawnedEnemyCost ( );
	void PawnRevived ( class ABioPawn* Pawn );
	struct FEnemySpawnInfo GetEnemySpawnInfoForEnemyType ( struct FName EnemyType );
	void StopSpawningNewEnemies ( );
	void SetEndlessWaves ( unsigned long Endless );
	bool EnemyBudgetRemaining ( );
	int GetCreatureWaveCost ( class APawn* P );
	void TriggerWaveEndEvent ( int Wave );
	void TriggerEnemyKilledEvent ( class APawn* Killed, class APawn* Killer );
	void TriggerWaveStartEvent ( int Wave );
	bool ShouldSpawnSquad ( );
	int GetPlayerCount ( );
	void PawnDied ( class ABioPawn* Pawn, class ABioPawn* Killer );
	void ActivateEnemyObjectiveMarkers ( );
	void UpdateObjectiveStatus ( );
	void SpawnHorde ( );
	void SpawnEnemy ( int Index );
	bool AreRemainingEnemiesOnMyTeam ( );
	int ChooseEnemyToSpawn ( );
	bool ChooseSquadToSpawn ( );
	bool CanEnemyUseSpawnPoint ( class UClass* EnemyClass, float EnemyRadius, float EnemyHeight, class ANavigationPoint* NavPoint );
	float RateEnemyStart ( class ANavigationPoint* NavPoint, float EnemyRadius, float EnemyHeight, class UClass* EnemyClass, unsigned long bDoTraceCheck );
	class ANavigationPoint* ChooseEnemyStart ( class UClass* EnemyClass );
	void FinishWave ( );
	bool BeginWave ( );
	void GetEnemyArray ( TArray< struct FEnemyWaveInfo >* EnemyArray );
	void InitializeWave ( class ASFXWaveManager* OwnerManager );
};

UClass* USFXWave_Horde_Cerberus2::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4_horde.SFXWave_Horde_Collector
// 0x0000 (0x0148 - 0x0148)
class USFXWave_Horde_Collector : public USFXWave_Horde
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124743 ];

		return pClassPointer;
	};

	void StartAutoBots ( );
	float GetScoreBudget ( );
	int CalculateSpawnedEnemyCost ( );
	void PawnRevived ( class ABioPawn* Pawn );
	struct FEnemySpawnInfo GetEnemySpawnInfoForEnemyType ( struct FName EnemyType );
	void StopSpawningNewEnemies ( );
	void SetEndlessWaves ( unsigned long Endless );
	bool EnemyBudgetRemaining ( );
	int GetCreatureWaveCost ( class APawn* P );
	void TriggerWaveEndEvent ( int Wave );
	void TriggerEnemyKilledEvent ( class APawn* Killed, class APawn* Killer );
	void TriggerWaveStartEvent ( int Wave );
	bool ShouldSpawnSquad ( );
	int GetPlayerCount ( );
	void PawnDied ( class ABioPawn* Pawn, class ABioPawn* Killer );
	void ActivateEnemyObjectiveMarkers ( );
	void UpdateObjectiveStatus ( );
	void SpawnHorde ( );
	void SpawnEnemy ( int Index );
	bool AreRemainingEnemiesOnMyTeam ( );
	int ChooseEnemyToSpawn ( );
	bool ChooseSquadToSpawn ( );
	bool CanEnemyUseSpawnPoint ( class UClass* EnemyClass, float EnemyRadius, float EnemyHeight, class ANavigationPoint* NavPoint );
	float RateEnemyStart ( class ANavigationPoint* NavPoint, float EnemyRadius, float EnemyHeight, class UClass* EnemyClass, unsigned long bDoTraceCheck );
	class ANavigationPoint* ChooseEnemyStart ( class UClass* EnemyClass );
	void FinishWave ( );
	bool BeginWave ( );
	void GetEnemyArray ( TArray< struct FEnemyWaveInfo >* EnemyArray );
	void InitializeWave ( class ASFXWaveManager* OwnerManager );
};

UClass* USFXWave_Horde_Collector::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4_horde.SFXWave_Horde_Geth2
// 0x0000 (0x0148 - 0x0148)
class USFXWave_Horde_Geth2 : public USFXWave_Horde
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124745 ];

		return pClassPointer;
	};

	void StartAutoBots ( );
	float GetScoreBudget ( );
	int CalculateSpawnedEnemyCost ( );
	void PawnRevived ( class ABioPawn* Pawn );
	struct FEnemySpawnInfo GetEnemySpawnInfoForEnemyType ( struct FName EnemyType );
	void StopSpawningNewEnemies ( );
	void SetEndlessWaves ( unsigned long Endless );
	bool EnemyBudgetRemaining ( );
	int GetCreatureWaveCost ( class APawn* P );
	void TriggerWaveEndEvent ( int Wave );
	void TriggerEnemyKilledEvent ( class APawn* Killed, class APawn* Killer );
	void TriggerWaveStartEvent ( int Wave );
	bool ShouldSpawnSquad ( );
	int GetPlayerCount ( );
	void PawnDied ( class ABioPawn* Pawn, class ABioPawn* Killer );
	void ActivateEnemyObjectiveMarkers ( );
	void UpdateObjectiveStatus ( );
	void SpawnHorde ( );
	void SpawnEnemy ( int Index );
	bool AreRemainingEnemiesOnMyTeam ( );
	int ChooseEnemyToSpawn ( );
	bool ChooseSquadToSpawn ( );
	bool CanEnemyUseSpawnPoint ( class UClass* EnemyClass, float EnemyRadius, float EnemyHeight, class ANavigationPoint* NavPoint );
	float RateEnemyStart ( class ANavigationPoint* NavPoint, float EnemyRadius, float EnemyHeight, class UClass* EnemyClass, unsigned long bDoTraceCheck );
	class ANavigationPoint* ChooseEnemyStart ( class UClass* EnemyClass );
	void FinishWave ( );
	bool BeginWave ( );
	void GetEnemyArray ( TArray< struct FEnemyWaveInfo >* EnemyArray );
	void InitializeWave ( class ASFXWaveManager* OwnerManager );
};

UClass* USFXWave_Horde_Geth2::pClassPointer = NULL;

// Class sfxgamecontentdlc_con_mp4_horde.SFXWave_Horde_Reaper2
// 0x0000 (0x0148 - 0x0148)
class USFXWave_Horde_Reaper2 : public USFXWave_Horde
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124747 ];

		return pClassPointer;
	};

	void StartAutoBots ( );
	float GetScoreBudget ( );
	int CalculateSpawnedEnemyCost ( );
	void PawnRevived ( class ABioPawn* Pawn );
	struct FEnemySpawnInfo GetEnemySpawnInfoForEnemyType ( struct FName EnemyType );
	void StopSpawningNewEnemies ( );
	void SetEndlessWaves ( unsigned long Endless );
	bool EnemyBudgetRemaining ( );
	int GetCreatureWaveCost ( class APawn* P );
	void TriggerWaveEndEvent ( int Wave );
	void TriggerEnemyKilledEvent ( class APawn* Killed, class APawn* Killer );
	void TriggerWaveStartEvent ( int Wave );
	bool ShouldSpawnSquad ( );
	int GetPlayerCount ( );
	void PawnDied ( class ABioPawn* Pawn, class ABioPawn* Killer );
	void ActivateEnemyObjectiveMarkers ( );
	void UpdateObjectiveStatus ( );
	void SpawnHorde ( );
	void SpawnEnemy ( int Index );
	bool AreRemainingEnemiesOnMyTeam ( );
	int ChooseEnemyToSpawn ( );
	bool ChooseSquadToSpawn ( );
	bool CanEnemyUseSpawnPoint ( class UClass* EnemyClass, float EnemyRadius, float EnemyHeight, class ANavigationPoint* NavPoint );
	float RateEnemyStart ( class ANavigationPoint* NavPoint, float EnemyRadius, float EnemyHeight, class UClass* EnemyClass, unsigned long bDoTraceCheck );
	class ANavigationPoint* ChooseEnemyStart ( class UClass* EnemyClass );
	void FinishWave ( );
	bool BeginWave ( );
	void GetEnemyArray ( TArray< struct FEnemyWaveInfo >* EnemyArray );
	void InitializeWave ( class ASFXWaveManager* OwnerManager );
};

UClass* USFXWave_Horde_Reaper2::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif