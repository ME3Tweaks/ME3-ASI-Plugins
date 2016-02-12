/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamempcontentdlc_shared_mp_classes.h
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

// Enum sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.MPChallengeCategory
/*enum MPChallengeCategory
{
	MPChallengeCat_NONE                                = 0,
	MPChallengeCat_General                             = 1,
	MPChallengeCat_Aliens                              = 2,
	MPChallengeCat_Weapons                             = 3,
	MPChallengeCat_MAX                                 = 4
};*/

// Enum sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.MPChallengeRankIcon
/*enum MPChallengeRankIcon
{
	MPChallengeRankIcon_Bronze                         = 0,
	MPChallengeRankIcon_Bronze_Complete                = 1,
	MPChallengeRankIcon_Silver                         = 2,
	MPChallengeRankIcon_Silver_Complete                = 3,
	MPChallengeRankIcon_Gold                           = 4,
	MPChallengeRankIcon_Gold_Complete                  = 5,
	MPChallengeRankIcon_MAX                            = 6
};*/

// Enum sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.MPChallengeRank
/*enum MPChallengeRank
{
	MPChallengeRank_Unknown                            = 0,
	MPChallengeRank_Gold                               = 1,
	MPChallengeRank_Silver                             = 2,
	MPChallengeRank_Bronze                             = 3,
	MPChallengeRank_MAX                                = 4
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class sfxgamempcontentdlc_shared_mp.SFXEngagement_Retrieve_DLC_Base
// 0x0000 (0x010C - 0x010C)
class USFXEngagement_Retrieve_DLC_Base : public Usfxwave_operation
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124467 ];

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

UClass* USFXEngagement_Retrieve_DLC_Base::pClassPointer = NULL;

// Class sfxgamempcontentdlc_shared_mp.SFXEngagement_MobileAnnex_Base
// 0x0000 (0x010C - 0x010C)
class USFXEngagement_MobileAnnex_Base : public Usfxwave_operation
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124617 ];

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

UClass* USFXEngagement_MobileAnnex_Base::pClassPointer = NULL;

// Class sfxgamempcontentdlc_shared_mp.SFXSharedMP_ForcedReference
// 0x0000 (0x003C - 0x003C)
class USFXSharedMP_ForcedReference : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124737 ];

		return pClassPointer;
	};

};

UClass* USFXSharedMP_ForcedReference::pClassPointer = NULL;

// Class sfxgamempcontentdlc_shared_mp.SFXGameInfoMP_Lobby_DLC
// 0x000F (0x0764 - 0x0755)
class ASFXGameInfoMP_Lobby_DLC : public Asfxgameinfomp_lobby
{
public:
	class UClass*                                      WeaponSelectClass;                                		// 0x0758 (0x0004) [0x0000000000000000]              
	class UClass*                                      MPChallengeUIClass;                               		// 0x075C (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               MPChallengeUIScreen;                              		// 0x0760 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124895 ];

		return pClassPointer;
	};

};

UClass* ASFXGameInfoMP_Lobby_DLC::pClassPointer = NULL;

// Class sfxgamempcontentdlc_shared_mp.SFXGUI_MPWeaponSelection_DLC
// 0x0000 (0x036A - 0x036A)
class USFXGUI_MPWeaponSelection_DLC : public Usfxgui_weaponselection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124900 ];

		return pClassPointer;
	};

	void AS_SetCurrentNameText ( struct FString sName );
	void AS_TeamSetHenchman ( int nIndex, struct FString sName, struct FString sIconResource );
	void AS_TeamSetVisible ( unsigned long bVisible );
	void AS_SetModDisplay ( int nDisplay, struct FString sName, struct FString sImgPath );
	void AS_AddWeaponStat ( struct FString sName, float fValue, float fBonus, float fCompare );
	void AS_ClearWeaponStatsDisplay ( );
	void AS_SelectWeaponSlot ( int nSlotID );
	void AS_PerformPlayerWeaponAction ( unsigned long bAccept );
	void AS_ScrollInfoText ( float fScroll );
	void AS_SetSlotNewIcon ( int nSlot, unsigned long bHasNew );
	void AS_SetWeaponAction ( struct FString sButtonText, struct FString sCallbackMethodName );
	void AS_SetInventoryWeapon ( struct FString sName, struct FString sDesc, struct FString sIconResource, unsigned long bNew, int nNum, int nTotal, unsigned long bFlourish, struct FString sClassPath );
	void AS_SetWeightDisplay ( int nPercent, int nComparePct, struct FString sBarLabel, struct FString sInfo );
	void AS_SetWeaponInfoDisplay ( struct FString sWeaponName, struct FString sWeaponDescription, struct FString sCategory, struct FString sWeaponImage );
	void AS_SetWeaponSlot ( int nSlotID, int nWeaponID, struct FString sWeaponIconResource, int nWeaponIconIndex, int nNumOtherWeapons, unsigned long bHaveNewWeapons, int nCategory, unsigned long bValid, unsigned long bHasModsAvailable );
	void AS_SetLoading ( unsigned long bLoading, struct FString sText );
	void AS_SetVisible ( unsigned long bVisible );
	bool eventHandleInputEvent ( unsigned char Event, float fValue );
	void PlayerDiscardWeaponCallback ( class UBioSFHandler_MessageBox* oMsgBox, int nChoiceID, unsigned long bCancelled );
	void PromptPlayerToDiscardMPWeapon ( int nWeapCategory );
	bool CheckCanEquipWeapon ( int nWeapCategory );
	bool CheckCanSelectWeapon ( int nWeapCategory );
	void UpdateWeaponEncumbranceDisplay ( );
	void UpdateCurrentLoadoutWeaponDisplay ( );
	void SelectNextHenchman ( );
	void SelectPreviousHenchman ( );
	void WeaponSelectionItemChanged ( );
	void WeaponLoadoutItemChanged ( int nID, int nCategory );
	void SwitchToWeaponLoadout ( );
	void UndoWeaponSelection ( );
	void SelectPrevWeapon ( );
	void SelectNextWeapon ( );
	void DisplayCurrentWeaponSelection ( unsigned long bFlourish );
	void SwitchToWeaponSelection ( int nWeaponType );
	void MainMovieLoaded ( );
	void SetWeaponInfoDisplay ( int nWeaponIndex, int nCategory );
	void SetWeaponModsDisplay ( int nWeapIndex );
	void SetWeaponStatsDisplay ( int nWeapIndex );
	void RestorePowerBonuses ( );
	void MakeLoadoutsActive ( );
	void ApplyWeaponLoadout ( );
	void ShowMinimumRequiredWeaponsMessage ( );
	void Exit ( );
	int CountCurrentPawnWeapons ( );
	bool CurrentPawnHasWeapon ( );
	struct FName GetCurrentHenchTag ( );
	class ABioPawn* GetBioPawn ( int nPawnID );
	bool CanPawnUseWeaponGroup ( int nPawnID, unsigned char eWeaponGroupID );
	int WeaponTypeToSlotIndex ( unsigned char eWeaponType );
	void RefreshLoadoutWeaponDisplay ( unsigned char eWeaponType );
	void BuildWeaponLoadout ( int nPawnID );
	void UpdateUIWorldPawnPosition ( );
	void CleanupUIWorld ( );
	void ApplyPlayerPawnCustomization ( class UObject* InData );
	void SetupUIWorld ( );
	void UpdateHenchmenDisplay ( );
	void SetCurrentPawnID ( int nID );
	void OnWeaponUIDataLoaded ( );
	void InitializeTeamSelectOverlay ( );
	void PreLoadData ( struct FScriptDelegate doneCallback );
	void Launch ( unsigned long bPauseGame );
	bool IsMultiPlayerCharacter ( );
	void DisplayNoEngineMessage ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* USFXGUI_MPWeaponSelection_DLC::pClassPointer = NULL;

// Class sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges
// 0x00C5 (0x0326 - 0x0261)
class USFXGUI_MPChallenges : public USFXGUIMovie
{
public:
	TArray< int >                                      m_aCurrentAccomplishmentIndices;                  		// 0x0264 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned long >                            m_bAccomplishmentDataRepeatable;                  		// 0x0270 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FBWEntitlementInfo >                Entitlements;                                     		// 0x027C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     m_sCurrentDetailBody;                             		// 0x0288 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     m_sCurrentDetailImageResource;                    		// 0x0294 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FChallengeDisplayItem >             GeneralChallenges;                                		// 0x02A0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FChallengeDisplayItem >             AlienChallenges;                                  		// 0x02AC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FChallengeDisplayItem >             WeaponChallenges;                                 		// 0x02B8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __ChallengeSort_Rank_Index__Delegate;             		// 0x02C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __ChallengeSort_Parent__Delegate;                 		// 0x02D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nCurrentChallengeIndex;                         		// 0x02DC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_nDefaultChallengeId;                            		// 0x02E0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	void*                                              TitleText;                                        		// 0x02E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              ExitText;                                         		// 0x02E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              BackText;                                         		// 0x02EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              CloseSubListText;                                 		// 0x02F0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              Tab1Text;                                         		// 0x02F4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              Tab2Text;                                         		// 0x02F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              Tab3Text;                                         		// 0x02FC (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              ViewText;                                         		// 0x0300 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              ContinueText;                                     		// 0x0304 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              MarkAllViewedText;                                		// 0x0308 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              TitleTemplateString;                              		// 0x030C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              BodyTemplateString;                               		// 0x0310 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              TimesCompletedString;                             		// 0x0314 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              ChallengePointsString;                            		// 0x0318 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              SetTitleConfirmString;                            		// 0x031C (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      m_bInitialized : 1;                               		// 0x0320 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      m_bIsRewardButtonEnabled : 1;                     		// 0x0320 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned char                                      m_eStartupTab;                                    		// 0x0324 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      m_eCurrentTab;                                    		// 0x0325 (0x0001) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124901 ];

		return pClassPointer;
	};

	void eventAS_SetDetails ( struct FString sInfo, struct FString sImgResource );
	void eventAS_EndDisplayList ( int nLastEntryID );
	void eventAS_SetSubItems ( TArray< struct FChallengeListItem > aSubItems );
	void eventAS_AddListItems ( TArray< struct FChallengeListItem > aItems );
	void eventAS_StartDisplayList ( struct FString sLabel, struct FString sTitle, int nListLen );
	void eventAS_SetupVisualState ( int nForceTab );
	void eventAS_ScrollDetailsAnalog ( float fScroll );
	void eventAS_SetUnreadItemCounts ( int nQuestPrimary, int nQuestSecondary, int nCodexPrimary, int nCodexSecondary );
	bool IsAccomplishmentRepeatable ( int AccomplishmentDataIndex );
	void SetAccomplishmentRepeatable ( TArray< unsigned long > NewAccomplishmentDataRepeatable );
	bool eventHandleInputEvent ( unsigned char Event, float fValue );
	void ReturnToBrowser ( );
	void OnRequestImageComplete ( struct FSFXOnlineImageRequest ImageRequestResult );
	void SetDetails ( struct FString sBody, struct FString sImageResourceString, struct FString sImageAssetPath );
	void SetRewardButtonEnabled ( unsigned long bEnabled );
	void SetRewardButtonVisibility ( unsigned long bVisible );
	void DoNothingFunction ( );
	void HandleRewardSelection ( );
	void FocusOnSubentry ( TArray< struct FChallengeDisplayItem > aChallenges, int nIndex );
	void ExFocusOnSubentry ( int nChallengeIndex );
	void ExpandListEntry ( TArray< struct FChallengeDisplayItem > aChallenges );
	void ExExpandEntry ( );
	void ExSetLastEntry ( int nListIndex );
	void DisplayCategoryChallenges ( TArray< struct FChallengeDisplayItem > aChallenges, int nSelectChallengeId );
	void ExFocusOnTab ( int nTab );
	void ExInitializeJournal ( );
	void BuildPercentCompletion_Helper ( int nCurrentChallengeIndex, class USFXAccomplishmentManager* AccomplishmentManager, TArray< float >* PercentCompletion, TArray< struct FChallengeDisplayItem >* aChallenges );
	void BuildPercentCompletion ( class USFXAccomplishmentManager* AccomplishmentManager, TArray< float >* PercentCompletion, TArray< struct FChallengeDisplayItem >* aChallenges );
	void BuildUIData ( int nChallengeIndex, class USFXAccomplishmentManager* AccomplishmentManager, TArray< struct FChallengeDisplayItem >* aChallenges, TArray< float >* PercentageCompletion );
	void InitializeChallengeArray ( class USFXAccomplishmentManager* AccomplishmentManager, TArray< struct FChallengeDisplayItem >* aChallenges );
	void CheckInitializeData ( );
	int ChallengeSort_Parent ( struct FChallengeDisplayItem A, struct FChallengeDisplayItem B );
	int ChallengeSort_Rank_Index ( struct FChallengeDisplayItem A, struct FChallengeDisplayItem B );
	void ConstructEnumObjects ( );
	void SetupFunctionIntercepts ( );
	void ResetStartupOverrides ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* USFXGUI_MPChallenges::pClassPointer = NULL;

// Class sfxgamempcontentdlc_shared_mp.SFXGUI_MPLobby_DLC
// 0x0000 (0x02EC - 0x02EC)
class USFXGUI_MPLobby_DLC : public Usfxgui_mplobby
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124904 ];

		return pClassPointer;
	};

	bool IsChallengeSystemEnabled ( );
	void ShowMPChallengeScreen ( );
	void OnRequestImageComplete ( struct FSFXOnlineImageRequest ImageRequestResult );
	struct FString RequestImage ( struct FString Resource );
	struct FEmblemDisplayInfo GetEmblemData ( int EmblemID );
	bool CheckIfSignedInFailSafe ( );
	struct FString GetGAWZoneBonusText ( int MapId );
	bool CameFromSelectFirstCharacter ( );
	void ViewInvitations ( );
	int GetMapZoneID ( struct FString MapName );
	struct FString GetFormattedReadinessPercentage ( int nReadiness );
	bool ShouldShowChatDisabledMessage ( );
	void PreloadLobbyImages ( );
	bool IsHostingNewMission ( );
	int GetMaxActiveConsumables ( );
	struct FString GetEnemyBonusText ( int EnemyIndex, unsigned long UseXP );
	struct FString GetMapBonusText ( int MapIndex, unsigned long UseXP );
	struct FString GetRandomEnemyBonusText ( );
	struct FString GetRandomMapBonusText ( );
	void ChangeMapMusic ( int nMapId );
	void VoteToKickPlayerInSlot ( int SlotIndex, unsigned long bKick );
	bool HasVotedToKickPlayerInSlot ( int SlotIndex );
	void ClearAllNewWeaponNotifications ( );
	bool CanAffordNewStoreItems ( );
	bool HasNewMatchConsumables ( );
	bool HasNewAppearanceOptions ( );
	bool HasNewWeapons ( );
	void ToggleMuteForSlot ( int SlotIndex );
	void SetPreviouslySelectedItem ( int Subscreen, int ItemIndex );
	int GetPreviouslySelectedItem ( int Subscreen );
	void CancelMatchSettings ( );
	void ChangeMatchSettings ( );
	int GetCredits ( );
	void QuickMatch ( );
	void SwitchCharacter ( );
	void ShowOptionsScreen ( );
	void ShowLeaderboardScreen ( );
	void ShowMatchConsumablesScreen ( );
	void ShowAppearanceScreen ( );
	void ShowStoreScreen ( );
	void ShowWeaponsScreen ( );
	void ShowTalentsLevelUpScreen ( );
	void ShowMatchSettingsScreen ( );
	void HostNewMission ( );
	void CustomMatch ( );
	void ConfirmExitMultiplayer ( );
	void ExitMultiplayerConfirmationPopupInputDelegate ( unsigned long bAPressed, int nContext );
	void ShowExitMultiplayerConfirmationPopup ( );
	void ExitMultiplayer ( );
	void GoBackToSelectFirstCharacter ( );
	void ConfirmExitLobby ( );
	void ExitLobbyPopupInputDelegate ( unsigned long bAPressed, int nContext );
	void ExitLobby ( );
	void ShowPartySessions ( );
	void InviteParty ( );
	bool IsInParty ( );
	void InviteFriends ( );
	void ShowGamercard ( int SlotIndex );
	void SetReady ( unsigned long Ready );
	struct FString GetLeaderboardNotificationText ( );
	bool HasLeaderboardNotifications ( );
	int GetPreviousSubScreen ( );
	bool HasCreditsToSpend ( );
	bool HasTalentPointsToSpend ( );
	bool CanLevelUp ( );
	bool IsReady ( );
	int GetPrivacy ( );
	bool IsPrivateMatch ( );
	bool IsGameFull ( );
	bool CanInteract ( );
	int GetMatchConsumableSlotTypeForCategory ( int Category );
	struct FPlayerDisplayInfo_Patch GetCharacterInfo_Patch ( class Asfxprimp* PRI );
	struct FPlayerDisplayInfo_Patch GetPlayerSlotInfo_Patch ( int Index );
	TArray< struct FMatchConsumableDisplayInfo > GetCharacterConsumableInfo ( class Asfxprimp* PRI );
	TArray< struct FWeaponDisplayInfo > GetCharacterWeaponInfo ( class Asfxprimp* PRI );
	TArray< struct FPowerDisplayInfo > GetCharacterPowerInfo ( class Asfxprimp* PRI );
	struct FPlayerDisplayInfo GetCharacterInfoDetailed ( class Asfxprimp* PRI );
	struct FPlayerDisplayInfo GetCharacterInfoBasic ( class Asfxprimp* PRI );
	struct FPlayerDisplayInfo GetLocalPlayerDetailedInfo ( );
	struct FPlayerDisplayInfo GetLocalPlayerBasicInfo ( );
	struct FPlayerDisplayInfo GetPlayerSlotDetailedInfo ( int Index );
	struct FPlayerDisplayInfo GetPlayerSlotBasicInfo ( int Index );
	class Asfxprimp* GetPlayerInSlot ( int Index );
	int GetNumPlayers ( );
	int GetNumPlayerSlots ( );
	struct FString GetLobbyStatusString ( );
	struct FString GetLobbyStatus ( );
	bool IsUIWorldPawnRequired ( int Subscreen );
	void LoadTab ( int NewTab );
	int GetCurrentLobbyTab ( );
	void AS_ExitMultiplayerCancelled ( );
	void AS_ExitLobbyCancelled ( );
	void AS_RefreshGalaxyAtWarMap ( );
	void AS_RefreshAllSpeakerIcons ( TArray< float > VoiceData );
	int AS_GetChallengeSetting ( );
	int AS_GetEnemySetting ( );
	int AS_GetMapSetting ( );
	int AS_GetPrivacySetting ( );
	void AS_OnTabLoaded ( int Subscreen );
	void AS_RefreshScreen ( );
	void ApplyTinting ( class UObject* InSettings );
	void SetInitialPawnPosition ( class UObject* Data );
	void CleanupUIWorldPawn ( );
	void SetupUIWorldPawn ( );
	void RefreshAllSpeakerIcons ( );
	void Refresh ( );
	TArray< struct FGAWZoneGUIData > GetGAWRatings ( );
	bool HasGAWRatingsError ( );
	void OnGAWRequestFinished ( TArray< struct FGAWZoneGUIData > ZoneData, int Level, int errorCode );
	void eventUpdate ( float fDeltaT );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* USFXGUI_MPLobby_DLC::pClassPointer = NULL;

// Class sfxgamempcontentdlc_shared_mp.SFXGUI_MPSelectKit_DLC
// 0x000C (0x02BC - 0x02B0)
class USFXGUI_MPSelectKit_DLC : public Usfxgui_mpselectkit
{
public:
	TArray< struct FKitDescriptionData >               KitDescriptions;                                  		// 0x02B0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124905 ];

		return pClassPointer;
	};

	void ShowCharacterInfoCallback ( unsigned long bAPressed, int Context );
	struct FString ComposeKitDescriptionString ( struct FKitDescriptionData oData );
	void ShowCharacterInfo ( struct FString KitName );
};

UClass* USFXGUI_MPSelectKit_DLC::pClassPointer = NULL;

// Class sfxgamempcontentdlc_shared_mp.SFXGUI_MPMatchConsumables_DLC
// 0x0000 (0x0294 - 0x0294)
class USFXGUI_MPMatchConsumables_DLC : public Usfxgui_mpmatchconsumables
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124906 ];

		return pClassPointer;
	};

	void AS_RefreshScreen ( );
	unsigned char GetGUICategoryFromSlotType ( int SlotType );
	void ClearNewFlagsForSlotType ( int SlotType );
	bool HasNewConsumablesOfSlotType ( int SlotType );
	TArray< struct FInGameConsumableInfo > GetInGameConsumableInfo ( );
	void ShowStoreScreen ( );
	int GetSlotTypeForCategory ( int Category );
	void ExitScreen ( );
	int GetMaxActiveConsumables ( );
	TArray< struct FConsumableDisplayInfo > GetActiveConsumables ( );
	void UpdateActiveList ( );
	void DeactivateConsumablesOfSlotType ( int SlotType );
	void SetConsumableActive ( int Id, int Version, unsigned long bActive );
	bool IsConsumableAvailable ( class USFXGAWReinforcementBase* CardOwner, int Id, int Version, int Category );
	struct FConsumableDisplayInfo GetConsumable ( int Id, int Version );
	TArray< struct FConsumableDisplayInfo > GetConsumableListFilteredBySlot ( int SlotIndex );
	TArray< struct FConsumableDisplayInfo > GetConsumableList ( );
	struct FConsumableDisplayInfo GetDisplayInfo ( int CardID, struct FCardInfoData CardData );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* USFXGUI_MPMatchConsumables_DLC::pClassPointer = NULL;

// Class sfxgamempcontentdlc_shared_mp.SFXGUI_MPReinforcementsReveal_DLC
// 0x0000 (0x0288 - 0x0288)
class USFXGUI_MPReinforcementsReveal_DLC : public Usfxgui_mpreinforcementsreveal
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124921 ];

		return pClassPointer;
	};

	void AS_InitializeScreen ( unsigned long SkipIntro );
	TArray< struct FCardInfoData > GetCardsToDisplay ( );
	struct FString GetAwardedPackName ( );
	struct FName GetPackRevealSound ( );
	struct FString GetPackIntroHoloTextureRef ( );
	struct FString GetPackIntroTextureRef ( );
	void Exit ( );
	TArray< struct FCardDisplayData > GetCardData ( );
	struct FString GetPackName ( );
	struct FCardDisplayData GetCardDisplayData ( struct FCardInfoData* CardData );
	void eventOnClose ( );
	void eventOnStart ( );
	void SetOnCloseCallback ( struct FScriptDelegate fn_OnCloseDelegate );
	void OnCloseCallback ( );
};

UClass* USFXGUI_MPReinforcementsReveal_DLC::pClassPointer = NULL;

// Class sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear
// 0x000C (0x007C - 0x0070)
class USFXGAWReinforcementMatchConsumable_Gear : public Usfxgawreinforcementmatchconsumable
{
public:
	TArray< struct FGearDescriptionTokens >            GearTokensList;                                   		// 0x0070 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124924 ];

		return pClassPointer;
	};

	bool OnAwarded ( struct FCardInfoData* CardInfoOut, TArray< struct FCardInfoData >* ChosenCards );
	void Deactivate ( int UniqueId, float VersionIdx );
	void Activate ( int UniqueId, float VersionIdx );
	bool IsActive ( int UniqueId, float VersionIdx );
	struct FString TrimTrailingZeroes ( struct FString S );
	struct FString FloatToPercentString ( float F );
	struct FGearDescriptionTokens FindDescriptionTokens ( struct FString CardUniqueName );
	void PrepareCustomTokensForGearDescription ( struct FString CardUniqueName, int GearLevel );
};

UClass* USFXGAWReinforcementMatchConsumable_Gear::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif