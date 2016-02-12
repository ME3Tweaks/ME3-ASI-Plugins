/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGameContentDLC_CON_MP3_MobileAnnex_classes.h
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

// Class SFXGameContentDLC_CON_MP3_MobileAnnex.SFXEngagement_MobileAnnex
// 0x0000 (0x010C - 0x010C)
class USFXEngagement_MobileAnnex : public USFXEngagement_MobileAnnex_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124620 ];

		return pClassPointer;
	};

	float GetCreditsReward ( );
	float GetCreditBudget ( );
	void DistributeObjectiveScore ( );
	void CountdownTimerExpired ( );
	void CancelCountdownTimer ( );
	void LocalPlayerTimeWarningHint ( );
	void SetTimeLimit ( float TimeLimit );
	void BeginWaveTimeLimit ( );
	void DeactivateObjectiveCombatZone ( class AActor* ObjectiveActor );
	void ActivateObjectiveCombatZone ( class AActor* ObjectiveActor );
	void PawnDestroyed ( class ABioPawn* Pawn );
	void PawnRevived ( class ABioPawn* Pawn );
	void PawnDowned ( class ABioPawn* Pawn );
	void DetermineObjectivesToSpawn ( );
	float RateEnemyStart ( class ANavigationPoint* NavPoint );
	void DelayedFinishWave ( );
	void FinishWave ( );
	void ShowBeginWaveMessage ( );
	bool BeginWave ( );
	int ObjectiveSpawnSort ( class ASFXOperation_ObjectiveSpawnPoint* A, class ASFXOperation_ObjectiveSpawnPoint* B );
	void InitializeWave ( class ASFXWaveManager* OwnerManager );
};

UClass* USFXEngagement_MobileAnnex::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif