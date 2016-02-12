/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamempcontent_classes.h
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

#define CONST_MAX_SQUAD_MEDALS                                   10
#define CONST_NUM_TICKER_SLOTS                                   4
#define CONST_NUM_OBJECTIVE_CIRCLES                              4
#define CONST_VOICE_CHAT_ICON_UPDATE_FREQUENCY                   0.5
#define CONST_VOIP_REMOTE_HEADSETOK                              16
#define CONST_MAX_MP_WEAPONS                                     2
#define CONST_MAX_POWERS                                         6
#define CONST_MAX_WEAPON_MODS                                    2
#define CONST_MAX_WEAPONS                                        2
#define CONST_MAX_POWER_EVOLVED_CHOICES                          6
#define CONST_MAX_PLAYER_MEDALS                                  10
#define CONST_MAX_MAPS                                           30

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum sfxgamempcontent.SFXGAWReinforcementBase.ECardRarity
/*enum ECardRarity
{
	Rarity_Common                                      = 0,
	Rarity_Uncommon                                    = 1,
	Rarity_Rare                                        = 2,
	Rarity_UltraRare                                   = 3,
	Rarity_MAX                                         = 4
};*/

// Enum sfxgamempcontent.sfxgawreinforcementmanager.EPurchaseType
/*enum EPurchaseType
{
	EPurchaseType_CreditsOnly                          = 0,
	EPurchaseType_PlatformOnly                         = 1,
	EPurchaseType_PlatformAndCredits                   = 2,
	EPurchaseType_Free                                 = 3,
	EPurchaseType_Unknown                              = 4,
	EPurchaseType_MAX                                  = 5
};*/

// Enum sfxgamempcontent.sfxgawreinforcementmanager.EStoreImageLocation
/*enum EStoreImageLocation
{
	EStoreImageLocation_Local                          = 0,
	EStoreImageLocation_Remote                         = 1,
	EStoreImageLocation_Default                        = 2,
	EStoreImageLocation_MAX                            = 3
};*/

// Enum sfxgamempcontent.sfxgameinfomp_lobby.EMatchTimerState
/*enum EMatchTimerState
{
	MatchTimer_NoTimer                                 = 0,
	MatchTimer_AllPlayersReady                         = 1,
	MatchTimer_WaitingOnLastMan                        = 2,
	MatchTimer_MAX                                     = 3
};*/

// Enum sfxgamempcontent.sfxgawreinforcementmatchconsumable.EUpgradeSlotType
/*enum EUpgradeSlotType
{
	Slot_Ammo                                          = 0,
	Slot_Weapon                                        = 1,
	Slot_Armor                                         = 2,
	Slot_Gear                                          = 3,
	Slot_MAX                                           = 4
};*/

// Enum sfxgamempcontent.sfxgrimp.EGameStatus
/*enum EGameStatus
{
	GS_None                                            = 0,
	GS_PendingMatch                                    = 1,
	GS_MatchInProgress                                 = 2,
	GS_MatchOver_Win                                   = 3,
	GS_MatchOver_Lost                                  = 4,
	GS_ReturningToMainMenu                             = 5,
	GS_MAX                                             = 6
};*/

// Enum sfxgamempcontent.sfxgui_mpappearance.EAppearanceMenuItemState
/*enum EAppearanceMenuItemState
{
	EAppearanceMenuItemState_Normal                    = 0,
	EAppearanceMenuItemState_Disabled                  = 1,
	EAppearanceMenuItemState_New                       = 2,
	EAppearanceMenuItemState_MAX                       = 3
};*/

// Enum sfxgamempcontent.sfxlobbyflow.ELobbySubscreen
/*enum ELobbySubscreen
{
	LSS_None                                           = 0,
	LSS_SelectCharacter                                = 1,
	LSS_MissionSetup                                   = 2,
	LSS_Character                                      = 3,
	LSS_Weapons                                        = 4,
	LSS_Store                                          = 5,
	LSS_Leaderboards                                   = 6,
	LSS_MatchResults                                   = 7,
	LSS_MatchRewards                                   = 8,
	LSS_Appearance                                     = 9,
	LSS_MatchConsumables                               = 10,
	LSS_MultiplayerMenu                                = 11,
	LSS_Lobby                                          = 12,
	LSS_Squad                                          = 13,
	LSS_TalentsLevelUp                                 = 14,
	LSS_MAX                                            = 15
};*/

// Enum sfxgamempcontent.sfxobjective_retrieve_pickupobject.EPickupObjectEvent
/*enum EPickupObjectEvent
{
	EPO_PickedUp                                       = 0,
	EPO_Dropped                                        = 1,
	EPO_Retrieved                                      = 2,
	EPO_MAX                                            = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class sfxgamempcontent.sfxgawreinforcementmanager
// 0x0114 (0x0150 - 0x003C)
class Usfxgawreinforcementmanager : public USFXGAWReinforcementManagerBase
{
public:
	TArray< struct FCardPackEntry >                    PackList;                                         		// 0x003C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FStoreInfoEntry >                   StoreInfoArray;                                   		// 0x0048 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FConsumableToPackEntry >            ConsumableIdPackNameMap;                          		// 0x0054 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FCardInfoData >                     CardData;                                         		// 0x0060 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FCardInfoData >                     LastAwardedCards;                                 		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCardInfoData >                     AwardedCards;                                     		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LastAwardedPackName;                              		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCardInfoData >                     ManualAwardedCards;                               		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ManualAwardedPackName;                            		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class Usfxgawreinforcementmatchconsumable* > MatchConsumables;                                 		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USFXGAWReinforcementBase* >          Deck;                                             		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FBWConsumableInfo >                 OutstandingConsumableIDs;                         		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            KnownConsumableTypes;                             		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sCachedDataBaseKey;                               		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPurchaseItemDelegate__Delegate;               		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnProcessConsumablesDelegate__Delegate;         		// 0x00F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPurchaseItemWithCreditsDelegate__Delegate;    		// 0x00FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __CardSort__Delegate;                             		// 0x0108 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __MatchConsumableSort__Delegate;                  		// 0x0114 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __StoreItemSort__Delegate;                        		// 0x0120 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ConsumptionFlowResult;                            		// 0x012C (0x0004) [0x0000000000000000]              
	int                                                fTimeoutRefreshDigitalRights;                     		// 0x0130 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                fTimeoutRefreshMPSaves;                           		// 0x0134 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                fTimeoutConsumeID;                                		// 0x0138 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                fTimeoutSaveMPRecord;                             		// 0x013C (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FBWEntitlementId                            PackPurchasedEntitlement;                         		// 0x0140 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                nTestConsumptionError;                            		// 0x0144 (0x0004) [0x0000000000000000]              
	class USFXSaveManagerMP*                           SaveManager;                                      		// 0x0148 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bFetchingProductDetails : 1;                      		// 0x014C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRetryProcessConsumables : 1;                     		// 0x014C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bProcessConsumableCriticalError : 1;              		// 0x014C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bCreditPurchaseRetry : 1;                       		// 0x014C (0x0004) [0x0000000000000000] [0x00000008] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 105408 ];

		return pClassPointer;
	};

	bool CanAffordNewStoreItems ( int OldCredits, int NewCredits );
	struct FString GetPCPointsBalance ( );
	int GetOfferIDFromStoreID ( int StoreID );
	int GetStoreItemIDFromOffer ( int offerId );
	void ConsumptionFlow_Finished ( int nResult );
	void ExitConsumptionFlow ( );
	void FinishPurchase ( int nResult );
	void AwardPacks ( int nID, int nCopies );
	void UpdateLastAwardedCards ( );
	void ConsumptionFlow_SaveComplete ( int nResult );
	void ConsumptionFlow_ProcessRemote ( );
	void GrantPackPurchasedEntitlement ( );
	void ConsumptionFlow_ProcessLocal ( struct FBWConsumableId Id, int nCopies, int nResult );
	void ConsumptionFlow_Top ( int nResult );
	void StartConsumptionFlow ( unsigned long bRefreshSave );
	void ConsumptionFlow_Setup ( int nResult );
	void ProcessConsumables ( struct FScriptDelegate ConsumeCallback, unsigned long bRetry );
	bool ConsumptionFlow_ClearCallbackTimer ( );
	bool ConsumptionFlow_SetCallbackTimer ( float fTime );
	void ConsumptionFlow_Timer ( );
	void ConsumptionFlowError ( struct FString sMsg, unsigned long bAbortFlow, unsigned long bWipeSave );
	bool PurchaseItemFromPlatform ( int ItemId, struct FScriptDelegate PurchaseCallback );
	bool CanPurchaseItemWithCredits ( int ItemId );
	void ReloadPlayerSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	void OnPurchaseItemWithCreditsFinished ( int nResult );
	void PurchaseItemWithCredits ( int ItemId, struct FScriptDelegate SaveRecordsCallback );
	bool EntitlementVisiblityCheck ( struct FVisibleCondition* visible, TArray< struct FBWEntitlementInfo >* Entitlements );
	bool CheckOfferVisibility ( struct FStoreInfoEntry* StoreItem, TArray< struct FBWEntitlementInfo >* Entitlements );
	int FindOfferIndex ( int nOfferID, TArray< struct FBWOfferInfo >* Offers );
	unsigned char GetStoreItemPurchaseType ( struct FString FirstPartyPrice, struct FStoreInfoEntry* StoreItem );
	int GetPlatformCostValue ( int ItemId );
	struct FString GetPlatformCost ( int ItemId );
	int GetCreditCost ( int ItemId );
	int StoreItemSort ( struct FStoreGUIData Entry_A, struct FStoreGUIData Entry_B );
	TArray< struct FStoreGUIData > GetStoreItems ( );
	TArray< struct FStoreInfoEntry > GetStoreInfo ( );
	bool IsFetchingProductDetails ( );
	void GetProductDetailsComplete ( );
	bool UpdateStoreDescriptions ( );
	int MatchConsumableSort ( struct FCardInfoData ItemA, struct FCardInfoData ItemB );
	class Usfxgawreinforcementmatchconsumable* GetUniqueMatchConsumables ( );
	TArray< struct FCardInfoData > GiveCardPack ( struct FString PackName, int nConsumableId );
	int AwardRandomCardsFromPoolCards ( struct FString PoolName, int Quantity, unsigned long AllowDupes, TArray< struct FCardInfoData >* ChosenCards );
	bool PopulateCardData ( struct FCardInfoData* Card );
	TArray< class USFXGAWReinforcementBase* > GetCardsOfType ( struct FString PoolName );
	int CardSort ( class USFXGAWReinforcementBase* CardA, class USFXGAWReinforcementBase* CardB );
	void LoadDeck ( );
	void OnPurchaseItemWithCreditsDelegate ( int nResult );
	void OnProcessConsumablesDelegate ( int nResult );
	void OnPurchaseItemDelegate ( int nResult );
};

UClass* Usfxgawreinforcementmanager::pClassPointer = NULL;

// Class sfxgamempcontent.SFXGAWReinforcementBase
// 0x0028 (0x0064 - 0x003C)
class USFXGAWReinforcementBase : public UObject
{
public:
	struct FString                                     PoolName;                                         		// 0x003C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FCardInfoData >                     CardList;                                         		// 0x0048 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< int >                                      RequiredDLCModuleIDs;                             		// 0x0054 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class Usfxgawreinforcementmanager*                 GAWManager;                                       		// 0x0060 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 105467 ];

		return pClassPointer;
	};

	void ConsumeNonGameplayConsumable ( struct FName UniqueName, int VersionIdx );
	void GenerateCardUniqueID ( int idx );
	int GetCardUniqueID ( int idx );
	struct FName GetPlayerVariableNameFromCard ( struct FCardInfoData* Card );
	struct FName GetPlayerVariableName ( int idx );
	int GetCurrentCount ( int SearchUniqueID, int VersionIdx );
	bool OnAwarded ( struct FCardInfoData* CardInfoOut, TArray< struct FCardInfoData >* ChosenCards );
	void SetCurrentValue ( struct FName VarName, int Value );
	int GetCurrentValue ( struct FName VarName );
	void Initialize ( );
	bool IsActive ( int UniqueId, float VersionIdx );
	void Deactivate ( int UniqueId, float VersionIdx );
	void Activate ( int UniqueId, float VersionIdx );
};

UClass* USFXGAWReinforcementBase::pClassPointer = NULL;

// Class sfxgamempcontent.BioStartLocationMP
// 0x0006 (0x01FC - 0x01F6)
class ABioStartLocationMP : public AActor
{
public:
	unsigned long                                      bPrimaryStart : 1;                                		// 0x01F8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 105475 ];

		return pClassPointer;
	};

};

UClass* ABioStartLocationMP::pClassPointer = NULL;

// Class sfxgamempcontent.sfxgawreinforcementmatchconsumable
// 0x000C (0x0070 - 0x0064)
class Usfxgawreinforcementmatchconsumable : public USFXGAWReinforcementBase
{
public:
	TArray< struct FDescriptionTokens >                TokensList;                                       		// 0x0064 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107626 ];

		return pClassPointer;
	};

	struct FString TrimTrailingZeroes_NoGear ( struct FString S, unsigned long KeepDecimal );
	struct FString FloatToString_NoGear ( float F );
	struct FString FloatToPercentString_NoGear ( float F );
	struct FDescriptionTokens FindDescriptionTokens_NoGear ( struct FString CardUniqueName );
	void PrepareCustomTokensForDescription ( struct FString CardUniqueName );
	bool OnAwarded ( struct FCardInfoData* CardInfoOut, TArray< struct FCardInfoData >* ChosenCards );
	struct FName GetPlayerVariableNameFromCard ( struct FCardInfoData* Card );
	struct FName GetPlayerVariableName ( int idx );
	int GetSlotTypeForCategory ( int Category );
	void Deactivate ( int UniqueId, float VersionIdx );
	void Activate ( int UniqueId, float VersionIdx );
	bool IsActive ( int UniqueId, float VersionIdx );
	bool ContainsCard ( int UniqueId, float VersionIdx );
	int FindCardIndexFromID ( int UniqueId, float VersionIdx );
	class Asfxpri* GetPRI ( );
};

UClass* Usfxgawreinforcementmatchconsumable::pClassPointer = NULL;

// Class sfxgamempcontent.sfxtelemetryhooksmp
// 0x0000 (0x00B0 - 0x00B0)
class Usfxtelemetryhooksmp : public Usfxtelemetryhooks
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107720 ];

		return pClassPointer;
	};

	void SendCachedDisconnectEvent ( );
	void SendLanguageOverrideSettings ( );
	struct FGuid eventGetCharacterID ( class ABioPawn* Pawn );
	void SendProfileDependentTelemetry ( unsigned char LocalUserNum );
	void SendTelemetryOnProfileReadComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	void OnLoginChange ( unsigned char LocalUserNum );
	void OnAuthenticate ( );
	void eventInitConnectionDelegates ( );
	void OnDisconnect ( int Error, int PreviousState, int NewState, struct FString SessionId );
	bool IsCollectionEnabled ( );
	void AddAttributeToArray ( unsigned char Type, struct FString Key, int nData, float fData, unsigned long bData, struct FName nmData, TArray< struct FTelemetryAttribute >* Attributes, struct FString* sData );
	void SendAchievement ( int AchievementId );
	struct FString GenerateUniqueClassId ( class UObject* Object );
	struct FString GenerateUniqueClassIdFromString ( struct FString* FullFriendlyName );
	int FStringToFourCC ( struct FString* s4CharID );
	void SendArray ( struct FName HookName, TArray< struct FTelemetryAttribute > Attributes );
	void SendBool ( struct FName HookName, unsigned long B );
	void SendFloat ( struct FName HookName, float F );
	void SendInt ( struct FName HookName, int i );
	void SendString ( struct FName HookName, struct FString S );
	void SendName ( struct FName HookName, struct FName N );
	void SendVoid ( struct FName HookName );
	class USFXTelemetryGameSession* GetInstanceGameSession ( );
};

UClass* Usfxtelemetryhooksmp::pClassPointer = NULL;

// Class sfxgamempcontent.SFXGAWReinforcementInGameConsumable
// 0x0000 (0x0064 - 0x0064)
class USFXGAWReinforcementInGameConsumable : public USFXGAWReinforcementBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107955 ];

		return pClassPointer;
	};

	void ConsumeNonGameplayConsumable ( struct FName UniqueName, int VersionIdx );
	void GenerateCardUniqueID ( int idx );
	int GetCardUniqueID ( int idx );
	struct FName GetPlayerVariableNameFromCard ( struct FCardInfoData* Card );
	struct FName GetPlayerVariableName ( int idx );
	int GetCurrentCount ( int SearchUniqueID, int VersionIdx );
	bool OnAwarded ( struct FCardInfoData* CardInfoOut, TArray< struct FCardInfoData >* ChosenCards );
	void SetCurrentValue ( struct FName VarName, int Value );
	int GetCurrentValue ( struct FName VarName );
	void Initialize ( );
	bool IsActive ( int UniqueId, float VersionIdx );
	void Deactivate ( int UniqueId, float VersionIdx );
	void Activate ( int UniqueId, float VersionIdx );
};

UClass* USFXGAWReinforcementInGameConsumable::pClassPointer = NULL;

// Class sfxgamempcontent.SFXGAWReinforcementInventoryUnlock
// 0x0000 (0x0064 - 0x0064)
class USFXGAWReinforcementInventoryUnlock : public USFXGAWReinforcementBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107956 ];

		return pClassPointer;
	};

	void ConsumeNonGameplayConsumable ( struct FName UniqueName, int VersionIdx );
	void GenerateCardUniqueID ( int idx );
	int GetCardUniqueID ( int idx );
	struct FName GetPlayerVariableNameFromCard ( struct FCardInfoData* Card );
	struct FName GetPlayerVariableName ( int idx );
	int GetCurrentCount ( int SearchUniqueID, int VersionIdx );
	bool OnAwarded ( struct FCardInfoData* CardInfoOut, TArray< struct FCardInfoData >* ChosenCards );
	void SetCurrentValue ( struct FName VarName, int Value );
	int GetCurrentValue ( struct FName VarName );
	void Initialize ( );
	bool IsActive ( int UniqueId, float VersionIdx );
	void Deactivate ( int UniqueId, float VersionIdx );
	void Activate ( int UniqueId, float VersionIdx );
};

UClass* USFXGAWReinforcementInventoryUnlock::pClassPointer = NULL;

// Class sfxgamempcontent.SFXGAWReinforcementMatchConsumable_NonGameplay
// 0x0000 (0x0070 - 0x0070)
class USFXGAWReinforcementMatchConsumable_NonGameplay : public Usfxgawreinforcementmatchconsumable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107957 ];

		return pClassPointer;
	};

	struct FString TrimTrailingZeroes_NoGear ( struct FString S, unsigned long KeepDecimal );
	struct FString FloatToString_NoGear ( float F );
	struct FString FloatToPercentString_NoGear ( float F );
	struct FDescriptionTokens FindDescriptionTokens_NoGear ( struct FString CardUniqueName );
	void PrepareCustomTokensForDescription ( struct FString CardUniqueName );
	bool OnAwarded ( struct FCardInfoData* CardInfoOut, TArray< struct FCardInfoData >* ChosenCards );
	struct FName GetPlayerVariableNameFromCard ( struct FCardInfoData* Card );
	struct FName GetPlayerVariableName ( int idx );
	int GetSlotTypeForCategory ( int Category );
	void Deactivate ( int UniqueId, float VersionIdx );
	void Activate ( int UniqueId, float VersionIdx );
	bool IsActive ( int UniqueId, float VersionIdx );
	bool ContainsCard ( int UniqueId, float VersionIdx );
	int FindCardIndexFromID ( int UniqueId, float VersionIdx );
	class Asfxpri* GetPRI ( );
};

UClass* USFXGAWReinforcementMatchConsumable_NonGameplay::pClassPointer = NULL;

// Class sfxgamempcontent.SFXGAWReinforcementPermanentUpgrade
// 0x0000 (0x0064 - 0x0064)
class USFXGAWReinforcementPermanentUpgrade : public USFXGAWReinforcementBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107958 ];

		return pClassPointer;
	};

	void ConsumeNonGameplayConsumable ( struct FName UniqueName, int VersionIdx );
	void GenerateCardUniqueID ( int idx );
	int GetCardUniqueID ( int idx );
	struct FName GetPlayerVariableNameFromCard ( struct FCardInfoData* Card );
	struct FName GetPlayerVariableName ( int idx );
	int GetCurrentCount ( int SearchUniqueID, int VersionIdx );
	bool OnAwarded ( struct FCardInfoData* CardInfoOut, TArray< struct FCardInfoData >* ChosenCards );
	void SetCurrentValue ( struct FName VarName, int Value );
	int GetCurrentValue ( struct FName VarName );
	void Initialize ( );
	bool IsActive ( int UniqueId, float VersionIdx );
	void Deactivate ( int UniqueId, float VersionIdx );
	void Activate ( int UniqueId, float VersionIdx );
};

UClass* USFXGAWReinforcementPermanentUpgrade::pClassPointer = NULL;

// Class sfxgamempcontent.SFXGAWReinforcementUnsaved
// 0x0000 (0x0064 - 0x0064)
class USFXGAWReinforcementUnsaved : public USFXGAWReinforcementBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107960 ];

		return pClassPointer;
	};

	void ConsumeNonGameplayConsumable ( struct FName UniqueName, int VersionIdx );
	void GenerateCardUniqueID ( int idx );
	int GetCardUniqueID ( int idx );
	struct FName GetPlayerVariableNameFromCard ( struct FCardInfoData* Card );
	struct FName GetPlayerVariableName ( int idx );
	int GetCurrentCount ( int SearchUniqueID, int VersionIdx );
	bool OnAwarded ( struct FCardInfoData* CardInfoOut, TArray< struct FCardInfoData >* ChosenCards );
	void SetCurrentValue ( struct FName VarName, int Value );
	int GetCurrentValue ( struct FName VarName );
	void Initialize ( );
	bool IsActive ( int UniqueId, float VersionIdx );
	void Deactivate ( int UniqueId, float VersionIdx );
	void Activate ( int UniqueId, float VersionIdx );
};

UClass* USFXGAWReinforcementUnsaved::pClassPointer = NULL;

// Class sfxgamempcontent.SFXGAWReinforcementCredits
// 0x0000 (0x0064 - 0x0064)
class USFXGAWReinforcementCredits : public USFXGAWReinforcementUnsaved
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107959 ];

		return pClassPointer;
	};

	void ConsumeNonGameplayConsumable ( struct FName UniqueName, int VersionIdx );
	void GenerateCardUniqueID ( int idx );
	int GetCardUniqueID ( int idx );
	struct FName GetPlayerVariableNameFromCard ( struct FCardInfoData* Card );
	struct FName GetPlayerVariableName ( int idx );
	int GetCurrentCount ( int SearchUniqueID, int VersionIdx );
	bool OnAwarded ( struct FCardInfoData* CardInfoOut, TArray< struct FCardInfoData >* ChosenCards );
	void SetCurrentValue ( struct FName VarName, int Value );
	int GetCurrentValue ( struct FName VarName );
	void Initialize ( );
	bool IsActive ( int UniqueId, float VersionIdx );
	void Deactivate ( int UniqueId, float VersionIdx );
	void Activate ( int UniqueId, float VersionIdx );
};

UClass* USFXGAWReinforcementCredits::pClassPointer = NULL;

// Class sfxgamempcontent.SFXGAWReinforcementKitUnlock
// 0x000C (0x0070 - 0x0064)
class USFXGAWReinforcementKitUnlock : public USFXGAWReinforcementBase
{
public:
	TArray< int >                                      XPBonus;                                          		// 0x0064 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107961 ];

		return pClassPointer;
	};

	bool OnAwarded ( struct FCardInfoData* CardInfoOut, TArray< struct FCardInfoData >* ChosenCards );
};

UClass* USFXGAWReinforcementKitUnlock::pClassPointer = NULL;

// Class sfxgamempcontent.sfxcheatmanagernonnativemp
// 0x000C (0x0170 - 0x0164)
class Usfxcheatmanagernonnativemp : public Ubiocheatmanagernonnative
{
public:
	TArray< struct FString >                           DisplayPools;                                     		// 0x0164 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107962 ];

		return pClassPointer;
	};

	void SetEmblem ( int nEmblemID );
	void KickServer ( );
	void EndCurrentWave ( );
	void ToggleEndlessWave ( );
	void ProfileMPGame ( );
	void PlayObjectiveLine ( struct FString EventName, int ObjectiveIndex, int LineIndex );
	void PlayHordeLine ( struct FString EventName, int Index );
	void SkipWave ( );
	void RestartWithFaction ( struct FString Faction );
	void RestartFromBeginning ( );
	void RestartFromCheckpoint ( );
	void RestartFromWave ( int nWave );
	void ShowAllMPCards ( );
	void TestPurchaseEntitlement ( );
	void TestConsumptionError ( int nCriticalLocation );
	void TestPurchaseFromPlatform ( int nID );
	void UnlockAllMPCards ( );
	void ReplicationDebugCam ( );
	void TestSquads ( );
	void TestHostile ( );
	void GiveMPConsumables ( int Quantity );
	void GiveShieldConsumable ( int Quantity );
	void GiveRocketConsumable ( int Quantity );
	void GiveReviveConsumable ( int Quantity );
	void GiveAmmoConsumable ( int Quantity );
	void GiveAllMatchConsumables ( );
	void DebugMatchConsumables ( );
	void LoadDeck ( );
	void CheatCardPack ( struct FString PackName );
	void CreditsCardPack ( struct FString PackName );
	void ProfileDeck ( );
	void SetKit ( struct FString KitName );
};

UClass* Usfxcheatmanagernonnativemp::pClassPointer = NULL;

// Class sfxgamempcontent.sfxprimp
// 0x02A5 (0x0679 - 0x03D4)
class Asfxprimp : public Asfxpri
{
public:
	struct FUniqueNetId                                KickVotePlayerId;                                 		// 0x03D4 (0x0008) [0x0000000000000020]              ( CPF_Net )
	struct FMPCharacterData                            CharacterData;                                    		// 0x03DC (0x0048) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	struct FString                                     ComputerName;                                     		// 0x0424 (0x000C) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	struct FString                                     DisplayName;                                      		// 0x0430 (0x000C) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	TArray< float >                                    XPBonusMultipliers;                               		// 0x043C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           DefaultLoadClasses;                               		// 0x0448 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DEFAULT_PLAYER_ARCHETYPE_PATH;                    		// 0x0454 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FMapConfigData >                    MapSettings;                                      		// 0x0460 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FEmblemDisplayInfo >                EmblemList;                                       		// 0x046C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __PRITotalPointSort__Delegate;                    		// 0x0478 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMPPowerData                                CharacterPowers[ 0x6 ];                           		// 0x0484 (0x00D8) [0x0000000000000020]              ( CPF_Net )
	struct FMPWeaponData                               CharacterWeapons[ 0x2 ];                          		// 0x055C (0x0038) [0x0000000000000020]              ( CPF_Net )
	int                                                PlayerMedals[ 0xA ];                              		// 0x0594 (0x0028) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	int                                                PlayerMedalsCache[ 0xA ];                         		// 0x05BC (0x0028) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                NametagColor;                                     		// 0x05E4 (0x0010) [0x0000000000000000]              
	struct FName                                       ActiveXPBonusMultiplierPV;                        		// 0x05F4 (0x0008) [0x0000000000000000]              
	struct FName                                       DEFAULT_PLAYER_KIT;                               		// 0x05FC (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       MatchConsumableGECategory;                        		// 0x0604 (0x0008) [0x0000000000000000]              
	class Asfxpawn*                                    sfxpawn;                                          		// 0x060C (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              EndOfMatchScreenDisplayTime;                      		// 0x0610 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                LobbyListOrder;                                   		// 0x0614 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              MaxReadinessXPBonus;                              		// 0x0618 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class AController*                                 m_pControllerOfLastClientInitialize;              		// 0x061C (0x0004) [0x0000000000000000]              
	float                                              GlobalZoneIncrease;                               		// 0x0620 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              RandomGlobalZoneIncrease;                         		// 0x0624 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ScaledGlobalZoneIncrease;                         		// 0x0628 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ScaledMapZoneIncrease;                            		// 0x062C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ScaledRandomGlobalZoneIncrease;                   		// 0x0630 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                NumConsumablesAllowedPerMatch;                    		// 0x0634 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      ReadyInLobby : 1;                                 		// 0x0638 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      StoreIsOpen : 1;                                  		// 0x0638 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      ReadyToTransitionToLobby : 1;                     		// 0x0638 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bEndOfMatchRecordsSaved : 1;                      		// 0x0638 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bEndOfMatchRatingsUpdated : 1;                    		// 0x0638 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bEndOfMatchScreenShownForLongEnough : 1;          		// 0x0638 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bSaveRecordSet : 1;                               		// 0x0638 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bReplicationReady : 1;                            		// 0x0638 (0x0004) [0x0000000000000020] [0x00000080] ( CPF_Net )
	unsigned long                                      bIsReplicationValid_CharacterPowers : 1;          		// 0x0638 (0x0004) [0x0000000000002000] [0x00000100] ( CPF_Transient )
	unsigned long                                      bIsReplicationValid_CharacterWeapons : 1;         		// 0x0638 (0x0004) [0x0000000000002000] [0x00000200] ( CPF_Transient )
	unsigned long                                      bWaitingForPawn : 1;                              		// 0x0638 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bLocalMapsSent : 1;                               		// 0x0638 (0x0004) [0x0000000000000020] [0x00000800] ( CPF_Net )
	unsigned char                                      LocalMapArray[ 0x1E ];                            		// 0x063C (0x001E) [0x0000000000000000]              
	unsigned char                                      CombinedMapArray[ 0x1E ];                         		// 0x065A (0x001E) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      NumKickVotesReceived;                             		// 0x0678 (0x0001) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107967 ];

		return pClassPointer;
	};

	void* GetPlayerChallengeTitle ( );
	struct FEmblemDisplayInfo GetCurrentEmblemData ( );
	struct FEmblemDisplayInfo GetEmblemData ( int EmblemID );
	void SendTelemetryForWeapons ( );
	bool GetStoreIsOpen ( );
	void ServerSetStoreIsOpen ( unsigned long NewStoreIsOpen );
	void SetStoreIsOpen ( unsigned long NewStoreIsOpen );
	void ServerSetReadyToTransitionToLobby ( unsigned long bReady );
	void ServerSetKickVote ( struct FUniqueNetId KickVote );
	void SetKickVote ( struct FUniqueNetId KickVote );
	void ServerSetMapArray ( unsigned char* MapArray );
	void OnPlayerMedalsChanged ( unsigned long bDisplay );
	void AddPlayerMedal ( int Medal, int ReplaceMedal, unsigned long bDisplay );
	void DisplayPlayerMedal ( int nMedal );
	void ApplyMatchConsumableGameEffects ( class ASFXPawn_Player* pPawn );
	bool VerifyPawnPowers ( class ASFXPawn_Player* Pawn );
	bool IsMatchConsumableActive ( int UniqueConsumableID, float Value );
	void ClearActiveMatchConsumables ( );
	void GetAppearanceData ( int* Tint1ID, int* Tint2ID, int* PatternID, int* PatternColorID, int* PhongID, int* EmissiveID, int* SkinToneID );
	void GetCharacterData_Patch ( int* NumClassPromotions, int* EmblemID, int* ChallengePoints );
	void SetCharacterData_Patch ( int NumClassPromotions, int EmblemID, int ChallengePoints );
	void GetCharacterData ( struct FString* CharacterName, struct FName* CharacterKit, void** ClassPrettyName, int* Level, float* XP, int* n7Rating );
	void SetCharacterData ( struct FString CharacterName, struct FName CharacterKit, void* ClassPrettyName, int Level, float XP, int n7Rating );
	void SetAppearanceData ( int Tint1ID, int Tint2ID, int PatternID, int PatternColorID, int PhongID, int EmissiveID, int SkinToneID );
	void SetCharacterName ( struct FString CharacterName );
	struct FName GetCharacterKit ( );
	void SetCharacterKit ( struct FName CharacterKit );
	bool GetPower ( int PowerIndex, struct FName* PowerClassPath, int* EvolvedChoices, int* CurrentRank );
	bool SetPower ( int PowerIndex, struct FName PowerClassPath, int* EvolvedChoices, int CurrentRank );
	void ClearPowerData ( );
	bool GetWeaponMod ( int WeaponIndex, int ModIndex, struct FName* WeaponModClassPath, int* WeaponModLevel );
	bool SetWeaponMod ( int WeaponIndex, int ModIndex, struct FName WeaponModClassPath, int WeaponModLevel );
	int GetWeaponLevel ( struct FName WeaponClassPath );
	bool GetWeapon ( int WeaponIndex, struct FName* WeaponClassPath );
	void SetWeapon ( int WeaponIndex, struct FName WeaponClassPath, int WeaponLevel );
	void ClearWeaponData ( );
	unsigned char GetAsyncLoadingStatus ( );
	struct FString GetPawnArchetype ( );
	class APawn* GetAPawn ( );
	void NotifyPawnCharacterChanged ( );
	void OnCharacterChanged ( );
	void SendCharacterDataToServer ( unsigned long bCharacter, unsigned long bWeapon, unsigned long bPower );
	void UnregisterPlayerFromSession ( );
	void CopyProperties ( class APlayerReplicationInfo* PRI );
	int PRITotalPointSort ( class Asfxprimp* A, class Asfxprimp* B );
	void EndOfMatchScreenFinished ( );
	void OnUpdatedRankingsComplete ( int nResult );
	void OnSaveRecordsComplete ( int nResult );
	void GatherMatchResults ( unsigned long bMatchWin, int* ExtractedPlayers );
	void GetZoneIncreases ( unsigned long bRandomMap, int Wave, int Map, float* ZoneIncrease, float* OverallIncrease );
	void GrantCredits ( int nCredits );
	void GrantXP ( float fXP );
	void SetReadyToPlay ( unsigned long NewReadyState );
	void ServerSetReadyInLobby ( unsigned long NewReadyState );
	void SetReadyInLobby ( unsigned long NewReadyState );
	bool CanSetReadyInLobby ( );
	bool IsReadyInLobby ( );
	void LoadWeaponDataFromSave ( class Usfxmpcharacterrecord* Character );
	void LoadPowerDataFromSave ( class Usfxmpcharacterrecord* Character );
	void LoadDataFromSave ( class Usfxmpcharacterrecord* Character );
	bool ShouldBroadCastWelcomeMessage ( unsigned long bExiting );
	void ServerSetPowerSelection ( struct FMPPowerData* Data );
	void ServerSetWeaponSelection ( struct FMPWeaponData* Data );
	void ServerSetCharacterSelection ( struct FMPCharacterData Data );
	void ServerSetComputerName ( struct FString sComputerName );
	void SetComputerName ( struct FString sComputerName );
	void TriggerNewScoreTag ( int Amount, struct FString Message );
	bool IsAI ( );
	bool IsPlayer ( );
	void SetPawn ( class Asfxpawn* P );
	void eventReplicatedEvent ( struct FName VarName );
	void ServerSetReplicationReady ( );
	void SetReplicationReady ( );
	class Asfxlobbyflow* GetLobbyFlow ( );
	void BuildLocalMapArray ( TArray< struct FMPMapInfo > AvailableMaps );
	void PostBeginPlay ( );
};

UClass* Asfxprimp::pClassPointer = NULL;

// Class sfxgamempcontent.SFXWave_Horde
// 0x00EC (0x0148 - 0x005C)
class USFXWave_Horde : public Usfxwave
{
public:
	TArray< struct FEnemySpawnInfo >                   EnemyList;                                        		// 0x005C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPetData >                          PetList;                                          		// 0x0068 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FEnemySquadInfo >                   EnemySquadList;                                   		// 0x0074 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FBerserkStartCount >                BerserkStartCounts;                               		// 0x0080 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FDifficultyLevelEnemies >           Enemies;                                          		// 0x008C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< int >                                      Squads;                                           		// 0x0098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSpawnedEnemy >                     EnemiesSpawned;                                   		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      AliveEnemiesByType;                               		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      NumSpawnedEnemiesByType;                          		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              SpawnDelay;                                       		// 0x00C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                WaveIndex;                                        		// 0x00CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                WavePoints;                                       		// 0x00D0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SquadChance;                                      		// 0x00D4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MinPlayersToSpawnSquad;                           		// 0x00D8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class ABioBaseSquad*                               EnemySquad;                                       		// 0x00DC (0x0004) [0x0000000000000000]              
	int                                                CurrentWave;                                      		// 0x00E0 (0x0004) [0x0000000000000000]              
	int                                                WavePointsRemaining;                              		// 0x00E4 (0x0004) [0x0000000000000000]              
	int                                                CurrentSquadIndex;                                		// 0x00E8 (0x0004) [0x0000000000000000]              
	int                                                NextSquadEnemyIndex;                              		// 0x00EC (0x0004) [0x0000000000000000]              
	class ANavigationPoint*                            LastEnemyNavPoint;                                		// 0x00F0 (0x0004) [0x0000000000000000]              
	class ASFXEnemySpawnPoint*                         CurrentEnemySpawnPoint;                           		// 0x00F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CurrentEnemySpawnPointCount;                      		// 0x00F8 (0x0004) [0x0000000000000000]              
	int                                                MaxEnemiesPerSpawnPoint;                          		// 0x00FC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxEnemies;                                       		// 0x0100 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srWaveNumber;                                     		// 0x0104 (0x0004) [0x0000000000000002]              ( CPF_Const )
	void*                                              SrEnemiesAlive;                                   		// 0x0108 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SpawnPenaltyOnTop;                                		// 0x010C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpawnPenaltyLineOfSight;                          		// 0x0110 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpawnPenaltyLineOfSightMaxDist;                   		// 0x0114 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpawnDistancePenaltyClose;                        		// 0x0118 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpawnRandomVariance;                              		// 0x011C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpawnDesignerWeightMultiplier;                    		// 0x0120 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpawnDistanceClose;                               		// 0x0124 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpawnBaseRating;                                  		// 0x0128 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpawnMinRatingForRespawn;                         		// 0x012C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                EnemiesRemainingToActivateObjective;              		// 0x0130 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              EnemyObjectiveMarkerDelay;                        		// 0x0134 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                DamageReductionTimerOnSpawnIn;                    		// 0x0138 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              EndOfRoundSpeedBonus;                             		// 0x013C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              WavePointsToBudget;                               		// 0x0140 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      EndlessWave : 1;                                  		// 0x0144 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEndRushTriggered : 1;                            		// 0x0144 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      DisplayObjectivesForAllEnemies : 1;               		// 0x0144 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      bWaveIsOver : 1;                                  		// 0x0144 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108035 ];

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

UClass* USFXWave_Horde::pClassPointer = NULL;

// Class sfxgamempcontent.SFXSquadCombatMP
// 0x0000 (0x0228 - 0x0228)
class ASFXSquadCombatMP : public ABioBaseSquad
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108037 ];

		return pClassPointer;
	};

	void NotifyCombatZoneRemoved ( );
	void NotifyCombatZoneAdded ( );
	void eventDisableSquad ( );
	void eventEnableSquad ( );
	class ABioBaseSquad* MakeHackable ( );
	void eventMemberRemoved ( class APawn* oPawn );
	void RemoveDyingMember ( class APawn* oPawn );
	int eventAddMember ( class APawn* Pawn, unsigned long bCheckPlaypens );
	bool Died ( class APawn* member, class AController* Killer );
	void NotifyPlaypenChanged ( );
	void eventNotifyNoEnemiesPerceived ( );
	void eventNotifyEnemyPerceived ( );
	bool GetClosestCombatZoneOrigin ( struct FVector Position, struct FVector* Origin );
	bool IsPositionInCombatZone ( struct FVector Position );
	bool IsCoverInCombatZone ( class ACoverSlotMarker* SlotMarker );
	bool HasCombatZone ( class ASFXCombatZone* CombatZone );
	void RemoveCombatZone ( class ASFXCombatZone* CombatZone );
	void AddCombatZone ( class ASFXCombatZone* CombatZone );
	class AActor* GetPlaypenReturnPoint ( class APawn* oPawn );
	class AActor* GetPlaypenNavOrigin ( class APawn* oPawn );
	void UpdatePlaypen ( );
	bool IsVolumeInPlaypen ( class ABioPlaypenVolume* Volume );
	void RemoveVolumeFromPlaypen ( class ABioPlaypenVolume* Volume );
	void AddVolumeToPlaypen ( class ABioPlaypenVolume* Volume );
	bool HasPlaypen ( );
	bool IsActorInSubtractivePlaypen ( class AActor* oActor );
	bool IsActorInPlaypen ( class AActor* oActor );
	bool IsPositionInSubtractivePlaypen ( struct FVector* vLocation );
	bool IsPositionInPlaypen ( struct FVector* vLocation );
	void SquadMembers ( class ABioAiController** oController );
	void SetMemberMoveIndicator ( int nIndex, class ABioTacticalMoveToIndicator* oIndicator );
	class ABioTacticalMoveToIndicator* GetMemberMoveIndicator ( int nIndex );
	bool RemoveMember ( class APawn* pPawn );
};

UClass* ASFXSquadCombatMP::pClassPointer = NULL;

// Class sfxgamempcontent.SFXPlayerSquadMP
// 0x0008 (0x0230 - 0x0228)
class ASFXPlayerSquadMP : public ABioBaseSquad
{
public:
	class Asfxpawn_playermp*                           LeaderPawn;                                       		// 0x0228 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	class Asfxpawn_playermp*                           LocalPawn;                                        		// 0x022C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108039 ];

		return pClassPointer;
	};

	int eventAddMember ( class APawn* Pawn, unsigned long bCheckPlaypens );
	void RemoveDyingMember ( class APawn* oPawn );
	void eventPostBeginPlay ( );
};

UClass* ASFXPlayerSquadMP::pClassPointer = NULL;

// Class sfxgamempcontent.sfxplayercontrollermp
// 0x0080 (0x0C1C - 0x0B9C)
class Asfxplayercontrollermp : public Asfxplayercontroller
{
public:
	TArray< struct FName >                             MPMapNames;                                       		// 0x0B9C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWeaponSelectFinishedDelegate__Delegate;       		// 0x0BA8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FViewTargetTransitionParams                 VTTransParms;                                     		// 0x0BB4 (0x0010) [0x0000000000000000]              
	struct FVector                                     AFKLastMoveStick;                                 		// 0x0BC4 (0x000C) [0x0000000000000000]              
	class Usfxgui_mpstore*                             StoreGUI;                                         		// 0x0BD0 (0x0004) [0x0000000000000000]              
	class USFXGUI_SquadRecord*                         LevelUpGUI;                                       		// 0x0BD4 (0x0004) [0x0000000000000000]              
	class Asfxlobbyflow*                               LobbyFlow;                                        		// 0x0BD8 (0x0004) [0x0000000000000000]              
	class ABioStartLocationMP*                         BioStartSpot;                                     		// 0x0BDC (0x0004) [0x0000000000000000]              
	float                                              CountdownTimerEndTime;                            		// 0x0BE0 (0x0004) [0x0000000000000000]              
	float                                              CountdownTimerLeeway;                             		// 0x0BE4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              TickSaveGameInterval;                             		// 0x0BE8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srWaitMessageMatchStarted;                        		// 0x0BEC (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srWaitMessageMatchEnded;                          		// 0x0BF0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srWaitMessageGeneric;                             		// 0x0BF4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srExitMessage;                                    		// 0x0BF8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srExitMessageLobby;                               		// 0x0BFC (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srConfirm;                                        		// 0x0C00 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srCancel;                                         		// 0x0C04 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AFKTimeLimitSeconds;                              		// 0x0C08 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                AFKTickTime;                                      		// 0x0C0C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AFKPostponementStartTime;                         		// 0x0C10 (0x0004) [0x0000000000000000]              
	float                                              AFKLastActionTime;                                		// 0x0C14 (0x0004) [0x0000000000000000]              
	unsigned long                                      bReceivedPlayer : 1;                              		// 0x0C18 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFinishedTraveling : 1;                           		// 0x0C18 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsJoinInProgress : 1;                            		// 0x0C18 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRestarting : 1;                                  		// 0x0C18 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      AFKIgnoreMovementCheck : 1;                       		// 0x0C18 (0x0004) [0x0000000000004000] [0x00000010] ( CPF_Config )
	unsigned long                                      AFKIgnoreWeaponAndPowerCheck : 1;                 		// 0x0C18 (0x0004) [0x0000000000004000] [0x00000020] ( CPF_Config )
	unsigned long                                      IsAFKPostponementActive : 1;                      		// 0x0C18 (0x0004) [0x0000000000000000] [0x00000040] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108052 ];

		return pClassPointer;
	};

	void Internal_ResetPlayerController ( struct FVector NewLocation );
	void eventSwitchWeapon ( class ASFXWeapon_NativeBase* oWpn );
	void AFK ( );
	void SetAFKLastActionTime ( unsigned long isMovementCheck );
	void DoAFKTick ( );
	void BackToMainMenu ( unsigned long bAPressed, int Context );
	bool CheckIfConnectedFailsafe ( );
	void QuickLoad ( );
	void ClientShowExtractionCredits ( float Credits );
	void eventClientPlaySimpleDialogLine ( void* DialogLineSr, class AActor* DialogPlayerOwner );
	void InternalSawNewEnemy ( class ABioPawn** EnemyPawn );
	void ServerWaveCoordinatorJoinInProgress ( class Asfxwavecoordinator_hordeoperation* Coordinator );
	bool SetPause ( unsigned long bPause, struct FScriptDelegate CanUnpauseDelegate );
	void ClientKickPlayer ( struct FUniqueNetId kickedPlayer );
	void KickPlayer ( struct FUniqueNetId kickedPlayer );
	void MPBotsClearUsed ( );
	void OnControllerChanged ( int ControllerId, unsigned long bIsConnected );
	void eventTeamMessage ( class APlayerReplicationInfo* PRI, struct FString S, struct FName Type, float MsgLifeTime );
	void VoicePushToTalkEnd ( );
	void VoicePushToTalkStart ( );
	void BioTalk ( );
	void eventCheckThatGameCanContinue ( );
	void PulsePowerDisplay ( );
	float GetRemainingCountdownTime ( );
	void CancelCountdownTimer ( );
	void BeginCountdownTimer ( float CountdownTime, float CountdownWarningTime );
	void RefreshLobbyStatusBars ( );
	void HideLobbyStatusBars ( );
	void ShowLobbyStatusBars ( );
	void ShowStoreScreenFromPromotion ( int PromotionalStoreID );
	void ShowPromotionScreen ( );
	void DisplayDebugScore ( );
	void HideInGameConsumableUI ( );
	void UpdateInGameConsumableUI ( );
	class USFXGUI_MPHUD* GetMPHUD ( );
	void ShowEndOfMatchUI ( int WaveNumber );
	void SetObjectiveCircleText ( struct FString s1, struct FString s2, struct FString s3, struct FString s4 );
	void SetObjectiveCircleProgress ( int nNumComplete );
	void SetScoreHudObjectiveProgress ( float Progress, unsigned long bBoostAnim );
	void SetScoreHudObjectiveText ( void* ObjectiveText );
	void OnGameConnectionLost ( );
	void eventSetRichPresence ( );
	void ClientWriteOnlinePlayerScores ( int LeaderboardId );
	void ServerSuicide ( );
	void Spectate ( );
	void ViewPrevPlayer ( );
	void ViewNextPlayer ( );
	void eventUpdateMPMapsCompleted ( struct FName MapName, unsigned long bIsGoldMap );
	void ClientWriteLeaderboardStats ( class UClass* OnlineStatsWriteClass );
	bool PawnNeedsCleanup ( );
	void HideMatchResultsScreen ( );
	void ShowMatchResultsScreen ( );
	void ShowMPEndOfMatchScreen ( );
	void FinishedWeaponSelectionUI ( );
	void FinishedMPStoreUI ( );
	void FinishedLevelUpUI ( );
	void ShowWeaponSelectionUI ( struct FScriptDelegate OnFinishedDelegate );
	void ShowMPStoreUI ( int PromotionalStoreID, unsigned long bProcessPurchases );
	bool PlayerHasCreditsToSpend ( );
	void SpawnLevelUpScreen ( struct FScriptDelegate onClosedDelegate );
	void ShowLevelUpUI ( struct FScriptDelegate onClosedDelegate );
	bool PlayerHasTalentPointsToSpend ( );
	void ShowReinforcementsRevealScreeen ( struct FScriptDelegate onClosedDelegate );
	void ShowMatchConsumablesScreen ( );
	void ShowMPAppearanceScreen ( );
	void HideMPSelectKitScreen ( );
	void ShowMPSelectKitScreen ( );
	void HideMatchSettingsScreen ( );
	void ShowMatchSettingsScreen ( );
	void HideCustomMatchScreen ( );
	void ShowCustomMatchScreen ( );
	void RefreshLobbyScreen ( );
	void HideLobbyScreen ( );
	void ShowLobbyScreen ( );
	bool GamePlayEndedState ( );
	void eventPlayerTick ( float DeltaTime );
	void EnterStartState ( );
	void StopLoadingMovie ( );
	void eventPreClientTravel ( struct FString PendingURL, unsigned char TravelType, unsigned long bIsSeamlessTravel );
	void CleanupPawn ( );
	void Pause ( );
	void CreateLobbyFlow ( );
	void OnWaveFinished ( );
	void TickSaveGame ( );
	void ResetSaveTimer ( );
	void ExitConformation_Callback ( unsigned long bAPressed, int nContext );
	void ShowExitConfirmation ( );
	void PleaseWait_Callback ( unsigned long bAPressed, int nContext );
	void ShowLoadingWidget ( );
	void ShowPleaseWaitMessage ( unsigned char WaitMessage );
	bool LoadingScreenTimedOut ( unsigned char WaitMessage );
	void eventUpdateLocalProfileSettingsCache ( );
	void DeferredCheckLocalPlayer ( );
	void eventPostBeginPlay ( );
	bool eventCanSave ( struct FString* Reason );
	void CastPower ( int nIndex );
	void DebugSwapController ( );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
	void eventDestroyed ( );
	void eventReceivedPlayer ( );
	void OnWeaponSelectFinishedDelegate ( );
};

UClass* Asfxplayercontrollermp::pClassPointer = NULL;

// Class sfxgamempcontent.sfxpawn_playermp
// 0x009D (0x1288 - 0x11EB)
class Asfxpawn_playermp : public ASFXPawn_Player
{
public:
	struct FLinearColor                                RegularNametagColor;                              		// 0x11EC (0x0010) [0x0000000000000000]              
	struct FLinearColor                                PermaDeadNametagColor;                            		// 0x11FC (0x0010) [0x0000000000000000]              
	struct FLinearColor                                DownedNametagColor;                               		// 0x120C (0x0010) [0x0000000000000000]              
	struct FSyncMovementFailsafe                       SyncMovementFailsafeInfo;                         		// 0x121C (0x0010) [0x0000000000000000]              
	struct FName                                       Kit;                                              		// 0x122C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              fPermaDeathTimer;                                 		// 0x1234 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DeathFlourishDuration;                            		// 0x1238 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class UTexture2D*                                  KitPortrait;                                      		// 0x123C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	void*                                              srPlayerDownPopup;                                		// 0x1240 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPlayerJoined;                                   		// 0x1244 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPlayerLeft;                                     		// 0x1248 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPlayerKilled;                                   		// 0x124C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPlayerSuicide;                                  		// 0x1250 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPlayerExecuted;                                 		// 0x1254 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPlayerBledOut;                                  		// 0x1258 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPlayerRevived;                                  		// 0x125C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              JoinInProgressDelay;                              		// 0x1260 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class UWwiseEvent*                                 ReviveSound;                                      		// 0x1264 (0x0004) [0x0000000000000000]              
	class Asfxpawn*                                    Executioner;                                      		// 0x1268 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                InvalidRagdollStateCounterThreshold;              		// 0x126C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                SyncMovementFailsafeOscillationCountThreshold;    		// 0x1270 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SyncMovementFailsafeSampleTimePeriod;             		// 0x1274 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SyncMovementFailsafeOscillationDistanceThreshold; 		// 0x1278 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              HealthFailsafeCheckDelay;                         		// 0x127C (0x0004) [0x0000000000004000]              ( CPF_Config )
	class USFXCustomizationInstance_PlayerMP*          CustomizationMP;                                  		// 0x1280 (0x0004) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	unsigned long                                      bValidExecutionTarget : 1;                        		// 0x1284 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisplayedKilledMessage : 1;                      		// 0x1284 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsProcessingFellOutOfWorld : 1;                  		// 0x1284 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108053 ];

		return pClassPointer;
	};

	void HealthFailsafe ( );
	void RagdollFailsafe ( );
	void ResetSyncMovementFailsafeInfo ( );
	void ProcessSyncMovementFailsafe ( );
	void Tick ( float DeltaTime );
	bool eventCanDoCustomAction ( int CAction, class APawn* Sync, unsigned long bForced, int PowerCustomAction );
	bool ShouldShowHUDGrenadeCounter ( );
	void UpdateGameEffects ( );
	struct FName GetUIAppearanceTag ( );
	void Destroyed ( );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void SetExecutioner ( class APawn* Killer );
	void AttemptKillingBlow ( class APawn* Killer );
	void UpdateMappedPowerDisplay ( );
	bool CanPlayDeathEffect ( );
	void UseReviveConsumablePower ( );
	void AutoMapPC ( );
	void AutoMapXbox ( );
	bool ShouldTossWeapon ( class ASFXWeapon* ChkWeapon, class ASFXWeapon* NewWeapon );
	bool InCombat ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void LoadWeaponModData ( );
	void LoadPowerData ( );
	bool IsTestFrameworkSetupComplete ( );
	void LoadWeapons ( );
	void CreateWeapons ( class USFXLoadoutData* ChkLoadout, unsigned long bForceFromEngineLoadout );
	struct FString GetFullName ( );
	void DeferredSetRichPresence ( );
	void StopLoadingMovie ( );
	void DeferredPostBeginPlay ( );
	void PostBeginPlay ( );
	void ServerPermaDeath ( );
	void PermaDeath ( );
	void StartSpectatorCam ( );
	void PermaDeadChanged ( );
	bool eventResurrect ( float PercentOfHealthRegained, unsigned long bIsInstantaneous );
	void PreClientTravel ( );
	bool IsReadyForExecution ( class Asfxpawn* Killer );
	void IsDeadUpdated ( );
	void StartRevive ( class ASFXPawn_PlayerParty* TargetPawn );
	void FinalizeProcessFellOutOfWorld ( );
	void ServerFellOutOfWorldImpl ( );
	void eventFellOutOfWorldImpl ( );
	void BioBaseRemovedFromWorld ( );
	void OutsideWorldBounds ( );
	void FellOutOfWorld ( class UClass* dmgType );
	void ApplyCustomizationToActor ( class AActor* InTarget, class USFXCustomizationInstance* InSettings, int UIWorldConfigFlags );
	void GetMPAppearanceVariables ( int* Tint1, int* Tint2, int* Pattern, int* PatternColor, int* Phong, int* Emissive, int* SkinTone );
	void SetMPAppearanceVariables ( int Tint1, int Tint2, int Pattern, int PatternColor, int Phong, int Emissive, int SkinTone );
	void UpdateAppearance ( );
	void CopyPawnAppearance ( class ABioPawn* SourcePawn );
	void CheckEnterCombat ( );
	void PlayerRevivedMessage ( );
	void PlayerKilledMessage ( );
	void eventReplicatedEvent ( struct FName VarName );
	struct FString GetActorGameName ( );
};

UClass* Asfxpawn_playermp::pClassPointer = NULL;

// Class sfxgamempcontent.sfxwavecoordinator_hordeoperation
// 0x00A8 (0x02B4 - 0x020C)
class Asfxwavecoordinator_hordeoperation : public Asfxwavecoordinator
{
public:
	struct FWaveEventInfo                              ReplicatedWaveEventInfo;                          		// 0x020C (0x0020) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	TArray< struct FOperationWave >                    OperationWaves;                                   		// 0x022C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     BioSimpleDialogClassName;                         		// 0x0238 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< unsigned long >                            HasSeenEnemyType;                                 		// 0x0244 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UClass* >                            ForcedClasses;                                    		// 0x0250 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      HordeWaveType;                                    		// 0x025C (0x0004) [0x0000000000000000]              
	class UClass*                                      OperationWaveType;                                		// 0x0260 (0x0004) [0x0000000000000000]              
	int                                                NumWaves;                                         		// 0x0264 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              InitialStartDelay;                                		// 0x0268 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              InitialInstructionDelay;                          		// 0x026C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              BetweenWaveDelay;                                 		// 0x0270 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srWaveNumberPopup;                                		// 0x0274 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srWaveCompletePopup;                              		// 0x0278 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ManDownVOCooldown;                                		// 0x027C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              LastSawEnemyTypeShoutTime;                        		// 0x0280 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CurrentWaveNumber;                                		// 0x0284 (0x0004) [0x0000000000000000]              
	float                                              PercentageOfWavesComplete;                        		// 0x0288 (0x0004) [0x0000000000000000]              
	float                                              TimeUntilWaveStart;                               		// 0x028C (0x0004) [0x0000000000000000]              
	float                                              ManDownVOTimestamp;                               		// 0x0290 (0x0004) [0x0000000000000000]              
	class Asfxwavemanager_horde*                       HordeManager;                                     		// 0x0294 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ASFXWaveManager_Operation*                   OperationManager;                                 		// 0x0298 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                HordeWaveIndex;                                   		// 0x029C (0x0004) [0x0000000000000000]              
	int                                                OperationWaveIndex;                               		// 0x02A0 (0x0004) [0x0000000000000000]              
	class UBioSimpleDialog*                            SimpleDialogPlayer;                               		// 0x02A4 (0x0004) [0x0000000000000000]              
	class Usfxhostmigration*                           HostMigration;                                    		// 0x02A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              OperationEnemyBudgetMultiplier;                   		// 0x02AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bExtractionWaveEnabled : 1;                       		// 0x02B0 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      ShouldStartNewWaves : 1;                          		// 0x02B0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bForceOperationWave : 1;                          		// 0x02B0 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108080 ];

		return pClassPointer;
	};

	float GetObjectiveScoreBudget ( );
	float GetObjectiveCreditBudget ( );
	float GetEnemyScoreBudget ( );
	void PlayPlayerAcknowledgment ( float DelayTime, unsigned long PlayObjectiveBegin );
	float PlayAssassinationVOEvent ( struct FName EventName );
	void PlayHordeWaveDoneVO ( );
	void PlayHalfWavesDoneVO ( );
	void PlayEndWaveCongratulationsVO ( );
	void OnSingleEnemyRemaining ( );
	void PlayHordeGameStartedVO ( );
	void PlayInstructionVO ( );
	void PlayManDownVO ( );
	void PawnDowned ( class ABioPawn* Pawn );
	void ClientHandleJoinInProgress ( );
	void SyncClientMatchTimer ( float OperationTime );
	void RecoverFromWaveEventInfo ( unsigned long bStartNewWaveNow, struct FWaveEventInfo NewWaveEventInfo );
	void HandleHostMigration ( );
	void HandleJoinInProgress ( );
	void SyncWithServer ( );
	void ReplicateWaveEventInfo ( unsigned char NewEvent );
	void ReplicatedWaveEventUpdated ( );
	void DisplayDebugCountdown ( );
	float GetCreditScaling ( );
	bool IsSpecifiedWaveAnOperation ( int WaveNumber );
	bool IsCurrentWaveAnOperation ( );
	int GetFriendlyCurrentWaveNumber ( );
	void EndOfWave ( );
	void OnAllWavesFinished ( );
	void OnAllWavesFinishedLoading ( );
	void StartNewWave ( );
	void UpdateCurrentWaveNumber ( int NewWaveNumber );
	void AdvanceToNextWave ( );
	void OnWaveFinished ( class Usfxwave* Wave );
	void GenerateOperationWaveList ( class UClass* NewOperationWaveType );
	void GenerateHordeWaveList ( class UClass* NewHordeWaveType );
	void GoToWave ( int nWave );
	float GetPercentOfWavesCompleted ( );
	void EndWaves ( );
	void StartWaves ( );
	void PostBeginPlay ( );
	void PreBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* Asfxwavecoordinator_hordeoperation::pClassPointer = NULL;

// Class sfxgamempcontent.sfxwave_operation
// 0x00B0 (0x010C - 0x005C)
class Usfxwave_operation : public Usfxwave
{
public:
	TArray< struct FSFXOperation_ObjectiveRequirement > ObjectivesRequired;                               		// 0x005C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< class AActor* >                            ObjectiveActors;                                  		// 0x0068 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FSFXOperation_ObjectiveGroupToSpawn > ObjectiveGroupsToSpawn;                           		// 0x0074 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class ASFXOperation_ObjectiveSpawnPoint* > AvailableSpawnPoints;                             		// 0x0080 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FSFXOperation_ObjectiveSpawnPointData > ObjectiveSpawnPointData;                          		// 0x008C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FMapSpecificSpawnPointFix >         MapSpecificSpawnPointFixes;                       		// 0x0098 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FVector2D                                   CreditBonusTime;                                  		// 0x00A4 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FName                                       MusicEventName;                                   		// 0x00AC (0x0008) [0x0000000000004000]              ( CPF_Config )
	float                                              WeightedChanceOfSelection;                        		// 0x00B4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srBeginWaveMessage;                               		// 0x00B8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srEndWaveMessage;                                 		// 0x00BC (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srEndWaveFailure;                                 		// 0x00C0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srScoreHudObjectiveTitle;                         		// 0x00C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srEventTickerString;                              		// 0x00C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srWaveFailedHint;                                 		// 0x00CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              OperationTimeLimit;                               		// 0x00D0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              OperationTimeWarning;                             		// 0x00D4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              OperationFirstWarning;                            		// 0x00D8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              OperationSecondWarning;                           		// 0x00DC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              OperationTimeLimitBuffer;                         		// 0x00E0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CreditBonusTimePct;                               		// 0x00E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              OperationScoreReward;                             		// 0x00E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FinishWaveDelay;                                  		// 0x00EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpawnDistanceIdeal;                               		// 0x00F0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpawnPenaltyLongDistance;                         		// 0x00F4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpawnPenaltyShortDistance;                        		// 0x00F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              WaveInstructionDuration;                          		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              WaveStartedTimestamp;                             		// 0x0100 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ASFXWaveManager_Operation*                   WaveManager_Operation;                            		// 0x0104 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bUseObjectiveHud : 1;                             		// 0x0108 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      SuccessfullySpawnedObjectives : 1;                		// 0x0108 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bScoreDistributed : 1;                            		// 0x0108 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108099 ];

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

UClass* Usfxwave_operation::pClassPointer = NULL;

// Class sfxgamempcontent.sfxoperationobjective
// 0x003A (0x0230 - 0x01F6)
class Asfxoperationobjective : public AActor
{
public:
	struct FName                                       OwnerWaveClassName;                               		// 0x01F8 (0x0008) [0x0000000000000000]              
	struct FReplicatedMeshInfoStruct                   ReplicatedMeshInfo;                               		// 0x0200 (0x0008) [0x0000000000000020]              ( CPF_Net )
	struct FName                                       MeshSpecificVOEvent;                              		// 0x0208 (0x0008) [0x0000000000000000]              
	class UBioSimpleDialog*                            SimpleDialogPlayer;                               		// 0x0210 (0x0004) [0x0000000000000000]              
	class Usfxwave_operation*                          OwnerWave;                                        		// 0x0214 (0x0004) [0x0000000000000000]              
	class USFXOperation_ObjectiveData*                 ObjectiveData;                                    		// 0x0218 (0x0004) [0x0000000000000000]              
	float                                              WaveInstructionVODelay;                           		// 0x021C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              WaveInstructionVORepeatDelay;                     		// 0x0220 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class UStaticMeshComponent*                        Mesh;                                             		// 0x0224 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x0228 (0x0004) [0x00000000040A000A]              ( CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	unsigned long                                      ActivateObjectiveOnSpawn : 1;                     		// 0x022C (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bActivated : 1;                                   		// 0x022C (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bEnableCombatZone : 1;                            		// 0x022C (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108101 ];

		return pClassPointer;
	};

	void PlayPlayerAcknowledgment ( float DelayTime, unsigned long PlayObjectiveBegin );
	void FindOwningWave ( );
	void SetOwningWave ( class Usfxwave_operation* NewOwner );
	void PawnDestroyed ( class ABioPawn* Pawn );
	void PawnRevived ( class ABioPawn* Pawn );
	void PawnDowned ( class ABioPawn* Pawn );
	void Deactivate ( );
	void eventDestroyed ( );
	void ActivateCombatZone ( );
	void ActivateObjective ( );
	void SetObjectiveMesh ( struct FString MeshIdentifier, class UStaticMeshComponent* MeshComp );
	void PlayMeshSpecificVOLine ( );
	void ClientFindObjectiveData ( );
	void SetObjectiveData ( class USFXOperation_ObjectiveData* ObjData );
	void RepeatWaveInstructions ( );
	void PlayWaveInstructions ( );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* Asfxoperationobjective::pClassPointer = NULL;

// Class sfxgamempcontent.SFXCustomizationInstance_PlayerMP
// 0x001C (0x0058 - 0x003C)
class USFXCustomizationInstance_PlayerMP : public USFXCustomizationInstance
{
public:
	int                                                Tint1ID;                                          		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Tint2ID;                                          		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PatternID;                                        		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PatternColorID;                                   		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EmissiveID;                                       		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PhongID;                                          		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SkinToneID;                                       		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108155 ];

		return pClassPointer;
	};

	void CustomizeMaterialInstance ( class UMaterialInstanceConstant* MIC );
};

UClass* USFXCustomizationInstance_PlayerMP::pClassPointer = NULL;

// Class sfxgamempcontent.SFXPlayerCustomizationMP
// 0x0054 (0x0090 - 0x003C)
class USFXPlayerCustomizationMP : public UObject
{
public:
	TArray< struct FCustomizableElement >              Tint1Appearances;                                 		// 0x003C (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FCustomizableElement >              Tint2Appearances;                                 		// 0x0048 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FCustomizableElement >              PatternAppearances;                               		// 0x0054 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FCustomizableElement >              PatternColorAppearances;                          		// 0x0060 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FCustomizableElement >              PhongAppearances;                                 		// 0x006C (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FCustomizableElement >              EmissiveAppearances;                              		// 0x0078 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FCustomizableElement >              SkinToneAppearances;                              		// 0x0084 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108160 ];

		return pClassPointer;
	};

};

UClass* USFXPlayerCustomizationMP::pClassPointer = NULL;

// Class sfxgamempcontent.SFXDamageType_ConsumableRocket
// 0x0000 (0x00E2 - 0x00E2)
class USFXDamageType_ConsumableRocket : public USFXDamageType_HeavyWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108175 ];

		return pClassPointer;
	};

	float CalculateDamageMultiplier ( struct FDamageCalculationAlgorithm* DamageCalc );
	void ResetDamageCalc ( struct FDamageCalculationAlgorithm* DamageCalc );
	bool CanPlayDeathEffect ( class ABioPawn* Target, class AController* Killer );
};

UClass* USFXDamageType_ConsumableRocket::pClassPointer = NULL;

// Class sfxgamempcontent.SFXDamageType_ConsumableRocketGib
// 0x0000 (0x00E2 - 0x00E2)
class USFXDamageType_ConsumableRocketGib : public USFXDamageType_ConsumableRocket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108181 ];

		return pClassPointer;
	};

	float CalculateDamageMultiplier ( struct FDamageCalculationAlgorithm* DamageCalc );
	void ResetDamageCalc ( struct FDamageCalculationAlgorithm* DamageCalc );
	bool CanPlayDeathEffect ( class ABioPawn* Target, class AController* Killer );
};

UClass* USFXDamageType_ConsumableRocketGib::pClassPointer = NULL;

// Class sfxgamempcontent.SFXDifficultyHandlerMP
// 0x000A (0x00D4 - 0x00CA)
class USFXDifficultyHandlerMP : public USFXDifficultyHandler
{
public:
	int                                                CurrentWave;                                      		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                MaxWave;                                          		// 0x00D0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108185 ];

		return pClassPointer;
	};

	void UpdateDifficultyScore ( );
	void Update ( );
};

UClass* USFXDifficultyHandlerMP::pClassPointer = NULL;

// Class sfxgamempcontent.sfxgrimp
// 0x0088 (0x0339 - 0x02B1)
class Asfxgrimp : public ASFXGRI
{
public:
	int                                                SquadMedals[ 0xA ];                               		// 0x02B4 (0x0028) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	int                                                SquadMedalsCache[ 0xA ];                          		// 0x02DC (0x0028) [0x0000000000002000]              ( CPF_Transient )
	int                                                PrivacySetting;                                   		// 0x0304 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                MapSetting;                                       		// 0x0308 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                EnemySetting;                                     		// 0x030C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                DifficultySetting;                                		// 0x0310 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              fUpdateScoreInterval;                             		// 0x0314 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxPlayersAllowedMP;                              		// 0x0318 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                nNextPlayerIndex;                                 		// 0x031C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class Usfxscoremanager*                            ScoreManager;                                     		// 0x0320 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USFXMPEventTicker*                           EventTicker;                                      		// 0x0324 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                SkynetGameID;                                     		// 0x0328 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                TeamScoreOffset;                                  		// 0x032C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                MatchStartTime;                                   		// 0x0330 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bRandomMap : 1;                                   		// 0x0334 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bRandomEnemy : 1;                                 		// 0x0334 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bIsJoinInProgress : 1;                            		// 0x0334 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsMissionComplete : 1;                           		// 0x0334 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned char                                      GameStatus;                                       		// 0x0338 (0x0001) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108190 ];

		return pClassPointer;
	};

	void AddPRI ( class APlayerReplicationInfo* PRI );
	float GetTeamScore ( );
	bool RandomFactionChosen ( );
	bool RandomMapChosen ( );
	void OnMissionComplete ( );
	int GetChallengeTypeIndex ( );
	int GetMapID ( );
	int GetEnemyWaveTypeID ( );
	void CopyProperties ( class ASFXGRI* OldGRI );
	void OnSquadMedalsChanged ( );
	bool HasSquadMedal ( int Medal );
	void AddSquadMedal ( int Medal, int ReplaceMedal );
	bool IsGameOver ( );
	void DisplaySquadMedal ( int nMedal );
	void ClearMatchConsumableGameEffects ( );
	bool IsJoinInProgress ( );
	TArray< int > GetActivePlayerIDs ( );
	class USFXMPEventTicker* GetEventTicker ( );
	class Usfxscoremanager* GetScoreManager ( );
	int NumLivingPlayers ( );
	class APawn* NextLivingPlayer ( );
	void DeferredGrantAccomplishments ( );
	void DeferredSetRichPresence ( );
	void OnGameStatusChanged ( );
	void SetGameStatus ( unsigned char NewGameStatus );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* Asfxgrimp::pClassPointer = NULL;

// Class sfxgamempcontent.SFXWaveManager_Operation
// 0x0034 (0x0240 - 0x020C)
class ASFXWaveManager_Operation : public ASFXWaveManager
{
public:
	TArray< class USFXOperation_ObjectiveData* >       ObjectiveData;                                    		// 0x020C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class ASFXOperation_ObjectiveSpawnPoint* > ObjectiveSpawnPoints;                             		// 0x0218 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class Usfxwave_operation* >                PreviousWaves;                                    		// 0x0224 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              JoinInProgressTimeStamp;                          		// 0x0230 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              WaveTimerOverride;                                		// 0x0234 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MatchTimer;                                       		// 0x0238 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	unsigned long                                      bSuccessfullyGeneratedWaveList : 1;               		// 0x023C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108211 ];

		return pClassPointer;
	};

	void ForceMatchTimerSync ( int NewTime );
	void SyncClientMatchTimer ( float OverrideTime, class Usfxwave* CurrentWave );
	void MatchTimerSync ( );
	class UClass* GetWaveType ( struct FString WaveType );
	int GetWaveIndex ( int WaveIndex, struct FString WaveString );
	int SortObjectByName ( class UObject* A, class UObject* B );
	void GeneratePotentialWaveList ( class UClass* SpecifiedWaveType );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASFXWaveManager_Operation::pClassPointer = NULL;

// Class sfxgamempcontent.SFXEngagement_Annex
// 0x0014 (0x0120 - 0x010C)
class USFXEngagement_Annex : public Usfxwave_operation
{
public:
	TArray< class ASFXPawn_Player* >                   PlayersInAnnexZone;                               		// 0x010C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	void*                                              srAnnexProgressTicker;                            		// 0x0118 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srAnnexProgressTickerPlural;                      		// 0x011C (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108366 ];

		return pClassPointer;
	};

	struct FVector GetAnnexZoneLocation ( class Asfxoperationobjective* ObjectiveActor );
	void FinishWave ( );
	void SetTimeLimit ( float TimeLimit );
};

UClass* USFXEngagement_Annex::pClassPointer = NULL;

// Class sfxgamempcontent.SFXEngagement_Assassination
// 0x0004 (0x0110 - 0x010C)
class USFXEngagement_Assassination : public Usfxwave_operation
{
public:
	float                                              WaveInstructionVODelay;                           		// 0x010C (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108383 ];

		return pClassPointer;
	};

	void PlayWaveStartedInstructionsVO ( );
	void PawnDied ( class ABioPawn* Pawn, class ABioPawn* Killer );
	void PawnSpawned ( class ABioPawn* Pawn );
	void SetAssassinationTarget ( class ABioPawn* Pawn );
	class ASFXObjective_AssassinationBase* GetAssassinationObjective ( );
	void ChooseAssassinationTarget ( );
	void FinishWave ( );
	bool BeginWave ( );
};

UClass* USFXEngagement_Assassination::pClassPointer = NULL;

// Class sfxgamempcontent.SFXObjective_AssassinationBase
// 0x000C (0x023C - 0x0230)
class ASFXObjective_AssassinationBase : public Asfxoperationobjective
{
public:
	class ABioPawn*                                    CurrentTarget;                                    		// 0x0230 (0x0004) [0x0000000000000000]              
	int                                                NumTargetsKilled;                                 		// 0x0234 (0x0004) [0x0000000000000000]              
	int                                                NumTargetsToKill;                                 		// 0x0238 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108391 ];

		return pClassPointer;
	};

	void CurrentTargetDied ( );
	void SetCurrentTarget ( class ABioPawn* Pawn );
};

UClass* ASFXObjective_AssassinationBase::pClassPointer = NULL;

// Class sfxgamempcontent.SFXEngagement_Disarm
// 0x0034 (0x0140 - 0x010C)
class USFXEngagement_Disarm : public Usfxwave_operation
{
public:
	TArray< class Asfxoperationobjective* >            DisabledBombs;                                    		// 0x010C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NumDisarmsCompleted;                              		// 0x0118 (0x0004) [0x0000000000000000]              
	int                                                NumDisarmsRequired;                               		// 0x011C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srDisarmBombMessage;                              		// 0x0120 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srDisarmNextBombMessage;                          		// 0x0124 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srEndWaveSuccess;                                 		// 0x0128 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ActivateNextBombDelay;                            		// 0x012C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              WaveInstructionVODelay;                           		// 0x0130 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              InstructionReminderDelay;                         		// 0x0134 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srBombDisarmedTicker;                             		// 0x0138 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class Asfxoperationobjective*                      ActiveBomb;                                       		// 0x013C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108419 ];

		return pClassPointer;
	};

	void FinishWave ( );
	void ActivateRandomBomb ( );
	void ActivateNextBomb ( );
	void OnBombDisarmed ( class Asfxoperationobjective* Bomb, class ABioPawn* oPawn );
	void PlayTimeWarning ( );
	void PlayInstructionReminder ( );
	void PlayWaveInstructions ( );
	void PlayVOEvent ( struct FName EventName );
	void CancelCountdownTimer ( );
	void SetTimeLimit ( float TimeLimit );
	bool BeginWave ( );
};

UClass* USFXEngagement_Disarm::pClassPointer = NULL;

// Class sfxgamempcontent.SFXEngagement_Extraction
// 0x0000 (0x010C - 0x010C)
class USFXEngagement_Extraction : public Usfxwave_operation
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108459 ];

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

UClass* USFXEngagement_Extraction::pClassPointer = NULL;

// Class sfxgamempcontent.SFXEngagement_Retrieve
// 0x002C (0x0138 - 0x010C)
class USFXEngagement_Retrieve : public Usfxwave_operation
{
public:
	TArray< class ASFXPawn_Player* >                   PlayersCarryingObjects;                           		// 0x010C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class Asfxoperationobjective* >            DroppedOffPickups;                                		// 0x0118 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NumDropOffsRequired;                              		// 0x0124 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srRetrieveProgress;                               		// 0x0128 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPickupDroppedOff;                               		// 0x012C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srTeamScoreReward;                                		// 0x0130 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srObjectiveCompletedReward;                       		// 0x0134 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108464 ];

		return pClassPointer;
	};

	void PickupDroppedOff ( class ASFXPawn_Player* Player, class Asfxoperationobjective* Pickup );
	void PlayerDroppedObject ( class ASFXPawn_Player* Player );
	void PlayerPickedUpObject ( class ASFXPawn_Player* Player );
	bool IsCarryingPickup ( class ASFXPawn_Player* Player );
	void UpdateObjectiveStatus ( );
	void ActivateRandomPickup ( );
	bool BeginWave ( );
};

UClass* USFXEngagement_Retrieve::pClassPointer = NULL;

// Class sfxgamempcontent.SFXGameConfigMP
// 0x0014 (0x00B4 - 0x00A0)
class USFXGameConfigMP : public USFXGameConfig
{
public:
	TArray< class UObject* >                           ForceLoadedArchetypes;                            		// 0x00A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ScoreToXPMultiplier;                              		// 0x00AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      ShowMPProgressionScreens : 1;                     		// 0x00B0 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      DisableDroppedAmmo : 1;                           		// 0x00B0 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108493 ];

		return pClassPointer;
	};

};

UClass* USFXGameConfigMP::pClassPointer = NULL;

// Class sfxgamempcontent.sfxgameeffect_matchconsumablebase
// 0x0012 (0x0074 - 0x0062)
class Usfxgameeffect_matchconsumablebase : public USFXGameEffect
{
public:
	int                                                VersionCount;                                     		// 0x0064 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                VersionIdx;                                       		// 0x0068 (0x0004) [0x0000000000000000]              
	class Asfxpawn*                                    OwnerPawn;                                        		// 0x006C (0x0004) [0x0000000000000000]              
	unsigned long                                      ShouldDeactivateAfterMatch : 1;                   		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108500 ];

		return pClassPointer;
	};

	void Consume ( );
	void OnApplied ( );
};

UClass* Usfxgameeffect_matchconsumablebase::pClassPointer = NULL;

// Class sfxgamempcontent.SFXGameInfoMP
// 0x0064 (0x06B4 - 0x0650)
class ASFXGameInfoMP : public ASFXGame
{
public:
	TArray< class UClass* >                            LoadedPlayerClasses;                              		// 0x0650 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class Asfxplayercontrollermp* >            AsyncRestartPlayerList;                           		// 0x065C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      EndOfMatchScreenClass;                            		// 0x0668 (0x0004) [0x0000000000000000]              
	class UClass*                                      ScoreboardScreenClass;                            		// 0x066C (0x0004) [0x0000000000000000]              
	class UClass*                                      ScoretagsScreenClass;                             		// 0x0670 (0x0004) [0x0000000000000000]              
	class UClass*                                      PauseMenuScreenClass;                             		// 0x0674 (0x0004) [0x0000000000000000]              
	class UClass*                                      OptionsMenuScreenClass;                           		// 0x0678 (0x0004) [0x0000000000000000]              
	class UClass*                                      OptionsMenuScreenClassPC;                         		// 0x067C (0x0004) [0x0000000000000000]              
	class UClass*                                      MPReinforcementsRevealScreenClass;                		// 0x0680 (0x0004) [0x0000000000000000]              
	class UClass*                                      MPHUDScreenClass;                                 		// 0x0684 (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               EndOfMatchScreen;                                 		// 0x0688 (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               ScoreboardScreen;                                 		// 0x068C (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               ScoretagsScreen;                                  		// 0x0690 (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               PauseMenuScreen;                                  		// 0x0694 (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               MPReinforcementsRevealScreen;                     		// 0x0698 (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               MPHUDScreen;                                      		// 0x069C (0x0004) [0x0000000000000000]              
	class Usfxhostmigrationmp*                         HostMigration;                                    		// 0x06A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              WaitingForPlayersTimeout;                         		// 0x06A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              JoinInProgressReplicationDelay;                   		// 0x06A8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              BackToLobbyFailSafeDelay;                         		// 0x06AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bTriggeredLoad : 1;                               		// 0x06B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWaitingForPlayers : 1;                           		// 0x06B0 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108510 ];

		return pClassPointer;
	};

	void ClearCrossLevelReferences ( );
	void CallJoinInProgressDelegates ( );
	void UnRegisterJoinInProgressDelegate ( struct FScriptDelegate DelegateToRemove );
	void RegisterJoinInProgressDelegate ( struct FScriptDelegate NewDelegate );
	class ABioBaseSquad* SpawnEnemySquad ( );
	void GenericPlayerInitialization ( class AController* C );
	void Logout ( class AController* Exiting );
	bool FindInactivePRI ( class APlayerController* PC );
	bool PreventPermanentDeath ( class ABioPawn* KilledPawn );
	void OnPlayerSquadDeath ( );
	void eventGetSeamlessTravelActorList ( unsigned long bToEntry, TArray< class AActor* >* ActorList );
	void RegisterServer ( );
	void QuitToMainMenu ( );
	void QuitToLobby ( struct FString ExtraURLOption );
	void EndMatch ( );
	void RestartMatch ( );
	void StartMatch ( );
	bool AreAllPlayersDeath ( );
	bool IsRestarting ( class Asfxplayercontrollermp* PC );
	void TickRestartPlayerAsync ( );
	void RestartPlayerAsync ( class Asfxplayercontrollermp* PC );
	void RestartPlayer ( class AController* NewPlayer );
	float RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player );
	float RateBioPlayerStart ( class ABioStartLocationMP* P, unsigned char Team, class AController* Player );
	class APawn* SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot, unsigned long bNoCollisionFail );
	class ANavigationPoint* FindPlayerStart ( class AController* Player, unsigned char InTeam, struct FString IncomingName );
	void Tick ( float TimeDelta );
	void eventPostBeginPlay ( );
	void PreBeginPlay ( );
};

UClass* ASFXGameInfoMP::pClassPointer = NULL;

// Class sfxgamempcontent.sfxhostmigrationmp
// 0x0050 (0x0090 - 0x0040)
class Usfxhostmigrationmp : public Usfxhostmigration
{
public:
	struct FHMMatch                                    Match;                                            		// 0x0040 (0x0050) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108518 ];

		return pClassPointer;
	};

	bool IsReadyToStartMatch ( int ConnectedPlayerCount );
	void RestoreGRI ( class ASFXGRI* GRI );
	void RestorePRI ( class Asfxpri* PRI );
	bool FindPlayer ( struct FUniqueNetId NetId, struct FString PlayerName, struct FHMPlayer* OutPlayer );
	void SaveGRI ( class ASFXGRI* GRI );
	void ResetWaveToRestore ( );
	struct FWaveEventInfo GetWaveToRestore ( );
	void SetWaveToRestore ( struct FWaveEventInfo InWave );
	bool CanRestoreWave ( );
	void InvalidateAll ( );
	bool HasCompleteAndValidState ( class ASFXGRI* GRI );
};

UClass* Usfxhostmigrationmp::pClassPointer = NULL;

// Class sfxgamempcontent.sfxguimoviemp
// 0x0000 (0x0261 - 0x0261)
class Usfxguimoviemp : public USFXGUIMovie
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108693 ];

		return pClassPointer;
	};

	void SetBackgroundAlpha ( float F );
	void PreloadImages ( TArray< struct FString > Images );
	void StopHandlingKeyPresses ( );
	void StartHandlingKeyPresses ( );
	void GetProfileTimes ( float* fUpdate, float* fRender, float* fAdvance );
	void PauseMenuAdditionalProcessing ( );
	struct FString GetNuiPawnCommandString ( struct FString TargetPawn, struct FString Rule );
	bool IsNuiSpeechEnabled ( );
	struct FString GetBoundKeyString ( struct FString sAlias, unsigned long bWrapNonTokenInParentheses, unsigned char eGameMode );
	void eventOnControllerProfileSettingChange ( );
	void eventOnLanguageChanged ( );
	void AttachToASFunction ( struct FString sASObjectPath, struct FString sASFuncName, struct FName nmFuncToCall, unsigned long bCallOriginalAS, unsigned long bInsertBeforeAS, class UObject* oCallbackObj );
	bool IsOpen ( );
	void PostProjectionToScreen ( struct FVector4* vPostProjectPos, struct FVector2D* vScreenLocation );
	bool WorldToScreen ( struct FVector vWorld, unsigned long bEnforceScreenEdge, struct FVector2D* vScreenLocation, struct FVector4* vPostProject );
	bool WorldToScreenFast ( struct FVector vWorld, unsigned long bEnforceScreenEdge, struct FVector2D vAdditionalScreenEdgeBorderBL, struct FVector2D vAdditionalScreenEdgeBorderTR, struct FSFXGUISceneView* SceneView, struct FVector2D* vScreenLocation, struct FVector4* vPostProject );
	bool WorldToSafePostProjectionFast ( struct FVector vWorld, unsigned long bEnforceScreenEdge, struct FVector2D vAdditionalScreenEdgeBorderBL, struct FVector2D vAdditionalScreenEdgeBorderTR, struct FSFXGUISceneView* SceneView, struct FVector4* vSafePostProjectPos, struct FVector4* vUnsafePostProjectPos );
	struct FSFXGUISceneView GetGUISceneView ( );
	struct FString UIStrRef ( void* sr );
	struct FString GetTokenizedUIString ( void* sr, TArray< struct FSFXTokenMapping >* aTokens );
	struct FString GetUIString ( void* sr, unsigned long bParse );
	void SetVariableStringRef ( struct FString Path, void* sr );
	bool IsMPGame ( );
	bool IsMPClient ( );
	unsigned char GetScreenLayout ( );
	void HandleInputConfigurations ( unsigned long bMenuAdvanceSwapped, unsigned long bStickSouthpaw, unsigned long bTriggerSouthpaw, unsigned long bTriggersShouldersSwapped );
	void SetGameMode ( unsigned long bEnable, unsigned char eGameMode );
	void PlayGuiError ( );
	bool StopGuiSound ( struct FName nmSound );
	bool PlayGuiSound ( struct FName nmSound );
	void StopGuiVoice ( );
	void PlayGuiVoice ( struct FName nmVoice );
	void StopGuiMusic ( );
	void PlayGuiMusic ( struct FName nmMusic, unsigned long bRestart );
	void eventOnAspectRatioChanged ( float fNewAspectRatio );
	float UpdateAspectRatio ( unsigned long bForce, unsigned long bHorizontal );
	float GetMovieAspectRatio ( );
	float GetViewportAspectRatio ( );
	bool IsTriggerShoulderSwapped ( );
	bool IsTriggerSouthpaw ( );
	bool IsStickSouthpaw ( );
	bool IsEnterMenuButtonAssignmentSwapped ( );
	void SetMouseVisible ( unsigned long bVisible );
	void SendMouseEvent ( unsigned char nEventID );
	bool eventHandleInputEvent ( unsigned char nEventID, float fValue );
	class USFXGUIInteraction* GetSFXUIController ( );
	struct FASValue Invoke0 ( struct FString sFuncPath );
	void RemoveExtension ( class UClass* classObj );
	class USFXGUIMovieExtension* GetExtension ( class UClass* classObj );
	class USFXGUIMovieExtension* AddExtension ( class UClass* classObj );
	void GetRequiresUIWorld ( );
	void SetRequiresUIWorld ( unsigned long bUIWorldRequired );
	bool GetInputEnabled ( );
	void SetInputEnabled ( unsigned long bEnabled );
	bool GetEnabled ( );
	void SetEnabled ( unsigned long bEnabled );
	bool GetUpdate ( );
	void SetUpdate ( unsigned long bUpdate );
	bool GetVisible ( );
	void SetVisible ( unsigned long bVisible );
	bool HasFocus ( );
	void SetAllowFSCommands ( unsigned long bAllowFSCommands );
	void SetFocus ( unsigned long bCapture, unsigned long bFocus );
	void SetMovieFocus ( unsigned long Focus );
	void eventUpdate ( float fDeltaT );
	void eventPostAdvance ( float tDelta );
	void Advance ( float Time );
	void eventInvokeOnCloseDelegates ( );
	void eventOnClose ( );
	void Close ( unsigned long Unload );
	void eventOnStart ( );
	bool eventStart ( unsigned long StartPaused );
	void eventUpdateInputConfigurations ( );
	void ClearAllDelegates ( );
	void ClearOnMovieClosedDelegate ( struct FScriptDelegate i_OnMovieClosedDelegate );
	void AddOnMovieClosedDelegate ( struct FScriptDelegate i_OnMovieClosedDelegate );
	bool OnMovieClosedDelegate ( class USFXGUIMovie* i_ScreenToClose );
};

UClass* Usfxguimoviemp::pClassPointer = NULL;

// Class sfxgamempcontent.sfxgui_mpendofmatch
// 0x0007 (0x0268 - 0x0261)
class Usfxgui_mpendofmatch : public Usfxguimoviemp
{
public:
	class USFXMatchResultsData*                        OverallMatchResults;                              		// 0x0264 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108692 ];

		return pClassPointer;
	};

	void* GetHintText ( );
	class USFXMatchResultsData* GetOverallMatchResults ( );
	struct FMatchSettingsDisplayInfo GetMatchResults ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* Usfxgui_mpendofmatch::pClassPointer = NULL;

// Class sfxgamempcontent.sfxgui_mppausemenu
// 0x0023 (0x0284 - 0x0261)
class Usfxgui_mppausemenu : public USFXGUIMovie
{
public:
	void*                                              srConfirm;                                        		// 0x0264 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srCancel;                                         		// 0x0268 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srExitToLobbyConfirmMessage;                      		// 0x026C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srWaveNumber;                                     		// 0x0270 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srMapText;                                        		// 0x0274 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srFactionText;                                    		// 0x0278 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srChallengeText;                                  		// 0x027C (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      m_bShouldAnimate : 1;                             		// 0x0280 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108694 ];

		return pClassPointer;
	};

	void ShowGamercard ( int ListIndex );
	struct FString GetChallengeText ( );
	struct FString GetFactionText ( );
	struct FString GetMapText ( );
	struct FString GetWaveNumber ( );
	void OpenIngamePropertyEditor ( );
	bool ShouldAnimate ( );
	int SortScoreData ( struct FPauseMenuScoreData A, struct FPauseMenuScoreData B );
	TArray< struct FPauseMenuScoreData > GetScoreData ( );
	void ConfirmExitPopupCallback ( unsigned long bAPressed, int nContext );
	void ExitMatch ( );
	void OnMPOptionsClosed ( );
	void OpenOptions ( );
	void Exit ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* Usfxgui_mppausemenu::pClassPointer = NULL;

// Class sfxgamempcontent.SFXGUI_MPOptions
// 0x0000 (0x036E - 0x036E)
class USFXGUI_MPOptions : public UBioSFHandler_Options
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108695 ];

		return pClassPointer;
	};

	void SaveAndExit ( );
	void MovieLoaded ( );
	void OnPanelAdded ( );
	void CloseGui ( );
	void eventOnStart ( );
	void InitSystemSettingsCache ( );
	void SendTelemetryDump ( struct FName Hook );
	void SendTelemetryChanges ( );
	void eventAddTelemetryInfo ( unsigned char eOptionId, int Value, TArray< struct FTelemetryAttribute >* Attributes );
	void AddTelem_Language ( unsigned char eOptionId, int Value, TArray< struct FTelemetryAttribute >* Attributes, struct FString* TelemetryKey );
	void AddTelem_VCOutput ( unsigned char eOptionId, int Value, TArray< struct FTelemetryAttribute >* Attributes, struct FString* TelemetryKey );
	void AddTelem_VCInput ( unsigned char eOptionId, int Value, TArray< struct FTelemetryAttribute >* Attributes, struct FString* TelemetryKey );
	void AddTelem_Resolution ( unsigned char eOptionId, int Value, TArray< struct FTelemetryAttribute >* Attributes, struct FString* TelemetryKey );
	void AddTelem_Brightness ( unsigned char eOptionId, int Value, TArray< struct FTelemetryAttribute >* Attributes, struct FString* TelemetryKey );
	void AddTelem_InvBool ( unsigned char eOptionId, int Value, TArray< struct FTelemetryAttribute >* Attributes, struct FString* TelemetryKey );
	void AddTelem_Bool ( unsigned char eOptionId, int Value, TArray< struct FTelemetryAttribute >* Attributes, struct FString* TelemetryKey );
	void AddTelem_Int ( unsigned char eOptionId, int Value, TArray< struct FTelemetryAttribute >* Attributes, struct FString* TelemetryKey );
	void UpdateAudioVolumeSettings ( class USFXProfileSettings* ReadFrom );
	void UpdateDisplayGamma ( class USFXProfileSettings* ReadFrom );
	void GetProfileSettingsForOptions ( TArray< unsigned char >* lstProfSettings, TArray< int >* lstTypes );
	unsigned char GetProfileSettingForOption ( int Type );
	void SetOption ( int Type, int Value );
	void SetOptionsOnGUI ( class USFXProfileSettings* Settings );
	void UpdateSpeechLanguageOptions ( class USFXGUI_Option_TextLanguage* TextOption );
	void Callback_ResetToDefaults ( unsigned long bAPressed, int Context );
	void ResetToDefaults ( struct FString sPackedIDs );
	void Helper_ExtractPackedOptIDs ( struct FString sPackedIDs, TArray< int >* lstOptIDs );
	void Helper_CreateResetConfirmPopup ( class USFXGUIInteraction* GuiMan, struct FScriptDelegate pInputDelegate );
	void SetOnCloseCallback ( struct FScriptDelegate fn_OnCloseDelegate );
	void OnCloseCallback ( );
	void AddTelem ( unsigned char eOptionId, int Value, TArray< struct FTelemetryAttribute >* Attributes, struct FString* TelemetryKey );
};

UClass* USFXGUI_MPOptions::pClassPointer = NULL;

// Class sfxgamempcontent.SFXGUI_PCMPOptions
// 0x0000 (0x03C8 - 0x03C8)
class USFXGUI_PCMPOptions : public UBioSFHandler_PCOptions
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108696 ];

		return pClassPointer;
	};

	void RevertSettings ( );
	void ApplySettings ( );
	bool WillChangeDisplay ( );
	void ResetPCToDefaults ( TArray< int >* lstOptsToReset );
	void InitPCBindings ( unsigned long Defaults );
	void ApplyPCBindings ( );
	void RefreshGUIBindings ( );
	bool ProcessInput ( int ControllerId, struct FName Key, unsigned char EventType, float AmountDepressed, unsigned long bGamepad );
	void Callback_ConfirmDisplayChange ( unsigned long bAPressed, int Context );
	void Callback_DisplayChangeTimeout ( );
	void ConfirmDisplayChange ( );
	void SaveAndExit ( );
	void ResetPCBindings ( );
	void CaptureNewBinding ( int BindIndex, int BindNumber );
	void BuildControlBindingList ( class UGFxValue* optionData );
	void Callback_ResetPCToDefaults ( unsigned long bAPressed, int Context );
	void Helper_DoPCBindingReset ( );
	void Callback_ResetPCBindings ( unsigned long bAPressed, int Context );
	void ResetToDefaults ( struct FString sPackedIDs );
	void MovieLoaded ( );
	void OnPanelAdded ( );
};

UClass* USFXGUI_PCMPOptions::pClassPointer = NULL;

// Class sfxgamempcontent.sfxgui_mpreinforcementsreveal
// 0x0027 (0x0288 - 0x0261)
class Usfxgui_mpreinforcementsreveal : public Usfxguimoviemp
{
public:
	TArray< struct FCardTypeText >                     CardTypeTextData;                                 		// 0x0264 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCloseCallback__Delegate;                      		// 0x0270 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nPackIndex;                                       		// 0x027C (0x0004) [0x0000000000000000]              
	class Usfxgawreinforcementmanager*                 GAWManager;                                       		// 0x0280 (0x0004) [0x0000000000000000]              
	unsigned long                                      bManualReveal : 1;                                		// 0x0284 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108697 ];

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

UClass* Usfxgui_mpreinforcementsreveal::pClassPointer = NULL;

// Class sfxgamempcontent.SFXGUI_MPHUD
// 0x0137 (0x0398 - 0x0261)
class USFXGUI_MPHUD : public Usfxguimoviemp
{
public:
	struct FMPUIObjectiveCircle                        ObjectiveCircles[ 0x4 ];                          		// 0x0264 (0x0060) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     CurrentTimerText;                                 		// 0x02C4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FSFXMPHUD_TickerEntry >             TickerItems;                                      		// 0x02D0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< int >                                      AvailableTickerMovies;                            		// 0x02DC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FSFXMPHUD_TickerMovie                       TickerMovies[ 0x4 ];                              		// 0x02E8 (0x0030) [0x0000000000002000]              ( CPF_Transient )
	class UGFxValue*                                   CountdownText;                                    		// 0x0318 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentCountdownTime;                             		// 0x031C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CountdownWarningTime;                             		// 0x0320 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USFXGUIValue_HUDPowerIcon*                   DPadIconTop;                                      		// 0x0324 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USFXGUIValue_HUDPowerIcon*                   DPadIconLeft;                                     		// 0x0328 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USFXGUIValue_HUDPowerIcon*                   DPadIconBottom;                                   		// 0x032C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USFXGUIValue_HUDPowerIcon*                   DPadIconRight;                                    		// 0x0330 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DPadElapsedDisplayTime;                           		// 0x0334 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeToNextTickerUpdate;                           		// 0x0338 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxValue*                                   ObjectiveBar;                                     		// 0x033C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxValue*                                   ObjectiveText;                                    		// 0x0340 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CurrentObjectiveFrame;                            		// 0x0344 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxValue*                                   ObjectiveCircleText;                              		// 0x0348 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CurrentObjectiveCircle;                           		// 0x034C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                PlayersCurrentlyUsingObjective;                   		// 0x0350 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentObjectiveTime;                             		// 0x0354 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentObjectiveTimeRemaining;                    		// 0x0358 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	void*                                              CurrentObjectiveText;                             		// 0x035C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USFXGUIValue_HUDPowerIcon*                   CenterIconLeft;                                   		// 0x0360 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USFXGUIValue_HUDPowerIcon*                   CenterIconCenter;                                 		// 0x0364 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USFXGUIValue_HUDPowerIcon*                   CenterIconRight;                                  		// 0x0368 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxValue*                                   CenterProgressBar;                                		// 0x036C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CenterBarRemainingTime;                           		// 0x0370 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CenterBarTime;                                    		// 0x0374 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	void*                                              CurrentSubareaText;                               		// 0x0378 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DPadDisplayTime;                                  		// 0x037C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              TickerEntryDisplayTime;                           		// 0x0380 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              TickerUpdateTime;                                 		// 0x0384 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class UGFxValue*                                   SpectatorModeDescription;                         		// 0x0388 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	void*                                              srSpectatorHUDDescriptionPC;                      		// 0x038C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srSpectatorHUDDescriptionConsole;                 		// 0x0390 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      Initialized : 1;                                  		// 0x0394 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      CountdownVisible : 1;                             		// 0x0394 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      CountdownInWarning : 1;                           		// 0x0394 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      DPadVisible : 1;                                  		// 0x0394 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      ObjectiveBarVisible : 1;                          		// 0x0394 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      BoostAnimActive : 1;                              		// 0x0394 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      ObjectiveCirclesVisible : 1;                      		// 0x0394 (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      CenterPowersVisible : 1;                          		// 0x0394 (0x0004) [0x0000000000002000] [0x00000080] ( CPF_Transient )
	unsigned long                                      CenterBarVisible : 1;                             		// 0x0394 (0x0004) [0x0000000000002000] [0x00000100] ( CPF_Transient )
	unsigned long                                      DPadFadeOut : 1;                                  		// 0x0394 (0x0004) [0x0000000000004000] [0x00000200] ( CPF_Config )
	unsigned long                                      m_bSpectatorHUDVisible : 1;                       		// 0x0394 (0x0004) [0x0000000000002000] [0x00000400] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108698 ];

		return pClassPointer;
	};

	void AS_HideSpectatorHUD ( );
	void AS_ShowSpectatorHUD ( );
	void AS_DisplaySubareaText ( struct FString sSubareaText );
	void AS_SetProgressBarVisible ( unsigned long bVisible, unsigned long bSkipTransition );
	void AS_SetObjectiveVisible ( unsigned long bVisible, unsigned long bCircleObjectives );
	void AS_SetTimerPulse ( unsigned long bPulse );
	void AS_SetTimerVisible ( unsigned long bVisible );
	void AS_SetPowerMapVisible ( unsigned long bVisible, unsigned long bSkipTransition );
	void AS_SetTickerText ( class UGFxValue* barMC, struct FString sText );
	void AS_FadeTickerBar ( class UGFxValue* barMC );
	void AS_ResetTickerBar ( class UGFxValue* barMC );
	void AS_SetDPadVisible ( unsigned long bVisible, unsigned long bSkipTransition );
	void ShowSpectatorHUD ( );
	void DisplaySubareaText ( void* NewSubareaText );
	void UpdateCenterProgressBar ( float fDeltaT );
	void HideCenterProgressBar ( );
	void ShowCenterProgressBar ( float fCenterBarTime );
	void UpdateObjectiveCircles ( float fDeltaT );
	void PlayerIsFinishedWithObjective ( );
	void PlayerIsUsingObjectiveWithTime ( float fTime );
	void SetCurrentObjectiveCircleCompletion ( float fPercentComplete );
	void SetObjectiveCircleProgress ( int nNumComplete );
	void SetObjectiveCircleText ( struct FString s1, struct FString s2, struct FString s3, struct FString s4 );
	void SetObjectiveCirclesVisible ( unsigned long bVisible );
	void SetObjectiveBarProgress ( float fPct, unsigned long bBoostAnim );
	void SetBoostAnimOn ( unsigned long bTurnOn );
	void SetObjectiveBarVisible ( unsigned long bVisible );
	void SetObjectiveText ( void* srObjectiveText );
	void CancelCountdownTimer ( );
	void StartCountdownTimer ( float fTime, float fWarningTime );
	void SetTimerText ( struct FString* sText );
	void UpdateCountdownTimer ( float fDeltaT );
	void OnTickerFadeComplete ( int nTickerID );
	void ResetTickerMovie ( int nIndex );
	void ClearTickerEntries ( );
	void AddTickerEntry ( struct FString sText );
	void AcquireNewTickerEntries ( );
	void UpdateTickers ( float fDeltaT );
	void UpdateCenterPowerIcons ( float fDeltaT );
	void OnPawnPowerUsed ( class Usfxpowercustomaction* oPower );
	void SetPowersVisible ( unsigned long bVisible, unsigned long bSkipTransition );
	void eventOnControllerProfileSettingChange ( );
	void InitializeCenterPowerIcons ( );
	void UpdateDPadPowerIcons ( );
	void HideDPadPowerIcons ( unsigned long bSkipTransition );
	void ShowDPadPowerIcons ( unsigned long bSkipTransition );
	void InitializeDPadPowerIcons ( );
	void UpdateDPad ( float fDeltaT );
	void Initialize ( );
	void eventUpdate ( float fDeltaT );
	void eventOnClose ( );
	void InitTickerMovie ( int N );
	void eventOnStart ( );
};

UClass* USFXGUI_MPHUD::pClassPointer = NULL;

// Class sfxgamempcontent.SFXHUDMP
// 0x0000 (0x0544 - 0x0544)
class ASFXHUDMP : public ABioHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108708 ];

		return pClassPointer;
	};

	void RemoveTraceAtIndex ( int nTrace );
	void ClearTraceStrips ( );
	void AddAnimNodeTraceStrip ( class AActor* TargetActor, struct FName nmAnimnode, struct FLinearColor DrawColor );
	void AddPropertyTraceStrip ( class AActor* TargetActor, struct FName nmProperty, struct FLinearColor DrawColor );
	void AddAxisTraceStrip ( struct FName nmAxis, struct FLinearColor DrawColor );
	void AddButtonTraceStrip ( struct FName nmButton, struct FLinearColor DrawColor );
	void DebugDraw_TraceStrips ( class ABioHUD* HUD );
	void DrawTraceStripBacking ( struct FVector2D Origin, struct FVector2D Extent, float fTimeScale, float fMostRecentTime, struct FLinearColor LineColor );
	void DrawTraceStrip ( struct FTraceStripChannel Chan, struct FVector2D Origin, struct FVector2D Extent, float fTimeScale );
	void UpdateTraceStrips ( float fBufferTime );
	void HideTraceStrips ( );
	void StartTraceStrips ( );
	bool IsFinalReleaseBuild ( );
	void AddBar ( struct FName Id, float X, float Y, float Width, float Lifetime, int C, unsigned long Grows, unsigned long Shrinks );
	void RemoveBar ( struct FName Id );
	void AddDesignerText ( struct FName Id, struct FString S, float X, float Y, float TimeOut, float Scale, unsigned long Center );
	bool HasDesignerText ( struct FName Id, struct FString S );
	void RemoveDesignerText ( struct FName Id );
	void DrawDesignerHud ( );
	void DUI_SetTimerDetails ( unsigned long bModalTimer, unsigned long bVisible, float fStartTime, float fEndTime, float fInterval );
	void DUI_SetQuasarLayout ( unsigned long bShow );
	void DUI_SetBarFillDirection ( unsigned long bModalBar, unsigned long bLeftToRight );
	void DUI_SetBarFillPercent ( unsigned long bModalBar, int nPercent );
	void DUI_SetBarMarkerPoints ( unsigned long bModalBar, int nMarker1, int nMarker2 );
	void DUI_SetCounterValue ( unsigned long bModalCounter, int nValue );
	void DUI_SetElementText ( unsigned char nElement, struct FString sText );
	void DUI_SetTextStringRef ( unsigned char nElement, void* srText );
	void DUI_ClearElementPulse ( unsigned char nElement );
	void DUI_SetupElementPulse ( unsigned char nElement, float fMinAlpha, float fCycleTime );
	void DUI_SetElementAlpha ( unsigned char nElement, float fAlpha );
	void DUI_SetElementColor ( unsigned char nElement, struct FColor stColor );
	void DUI_SetElementVisible ( unsigned char nElement, unsigned long bVisible, float fFadeTime );
	void DUI_ClearAll ( unsigned long bModal );
	void ShowReachSpecs ( struct FName nmNavigationPoint );
	void DisplayRouteInfo ( class APawn* pPawn, struct FColor PathColor, unsigned long bDrawPathOnly );
	void DebugDraw_CoverNames ( class ABioHUD* HUD );
	void ToggleCoverNames ( unsigned long ClaimedCoverOnly );
	void UpdateCover ( unsigned long bShowRotation );
	void DebugDraw_UpdateCover ( class ABioHUD* HUD );
	void ShowCover ( unsigned long bShowRotation );
	void DebugDraw_ActorInfo ( class ABioHUD* HUD );
	void DebugDraw_PlayerLocation ( class ABioHUD* HUD );
	void HideLocation ( );
	void ShowLocation ( );
	void SetActorForActorInfo ( struct FName nmActor );
	void LockActorInfo ( );
	void DisplayActorInfo ( );
	void eventDrawTextWithColor ( struct FString valueName, struct FString Value, struct FColor LabelColor, struct FColor DataColor );
	void eventDrawText ( struct FString valueName, struct FString Value, struct FColor LabelColor, struct FColor DataColor );
	void DrawCircle ( float fX, float fY, float Radius );
	void CDrawSquare ( int nSize );
	struct FString LoadTestTextStringFromFile ( );
	void DrawFakeShadowText ( int X, int Y, struct FColor DrawColor, struct FString sText );
	void DrawEngineHUD ( );
	bool IsDrawing ( struct FScriptDelegate DebugDrawFunc );
	void ClearDebugDraw ( struct FScriptDelegate DebugDrawFunc );
	void AddDebugDraw ( struct FScriptDelegate DebugDrawFunc );
	void ToggleDebugDraw ( struct FScriptDelegate DebugDrawFunc );
	void DebugDraw ( class ABioHUD* H );
	void DrawHUD ( );
	void PostRender ( );
	void ToggleSafeArea ( );
	void DisplaySafeArea ( );
	void eventProfileConversationExtra ( class UBioConversationController* oCurConv );
	void ProfileAnimPreload ( class AActor* TargetActor );
	void ProfileKinect ( class AActor* TargetActor );
	void ProfileWwise ( class AActor* TargetActor );
	void ProfileLookAt ( class AActor* TargetActor );
	void ProfileCover ( class AActor* TargetActor );
	void ProfileAnim ( class AActor* TargetActor );
	void ProfileGestures ( class AActor* TargetActor );
	void ProfileConversation ( class AActor* TargetActor );
	void ProfileConversationBug ( class AActor* TargetActor );
	void ViewportDeProject ( class ULocalPlayer* LocalPlayerOwner, struct FVector ScreenLocation, struct FVector* OutLocation, struct FVector* OutDirection );
};

UClass* ASFXHUDMP::pClassPointer = NULL;

// Class sfxgamempcontent.sfxgameinfomp_lobby
// 0x00A1 (0x0755 - 0x06B4)
class Asfxgameinfomp_lobby : public ASFXGameInfoMP
{
public:
	class UClass*                                      MPLobbyScreenClass;                               		// 0x06B4 (0x0004) [0x0000000000000000]              
	class UClass*                                      MPLobbyStatusBarsScreenClass;                     		// 0x06B8 (0x0004) [0x0000000000000000]              
	class UClass*                                      CharacterSelectScreenClass;                       		// 0x06BC (0x0004) [0x0000000000000000]              
	class UClass*                                      CharacterCreateScreenClass;                       		// 0x06C0 (0x0004) [0x0000000000000000]              
	class UClass*                                      CharacterAppearanceScreenClass;                   		// 0x06C4 (0x0004) [0x0000000000000000]              
	class UClass*                                      CharacterKitScreenClass;                          		// 0x06C8 (0x0004) [0x0000000000000000]              
	class UClass*                                      MatchResultsScreenClass;                          		// 0x06CC (0x0004) [0x0000000000000000]              
	class UClass*                                      LeaderboardScreenClass;                           		// 0x06D0 (0x0004) [0x0000000000000000]              
	class UClass*                                      MPMatchConsumablesScreenClass;                    		// 0x06D4 (0x0004) [0x0000000000000000]              
	class UClass*                                      MPStoreScreenClass;                               		// 0x06D8 (0x0004) [0x0000000000000000]              
	class UClass*                                      MPPromotionScreenClass;                           		// 0x06DC (0x0004) [0x0000000000000000]              
	class UClass*                                      GalaxyAtWarScreenClass;                           		// 0x06E0 (0x0004) [0x0000000000000000]              
	class UClass*                                      WarAssetsScreenClass;                             		// 0x06E4 (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               MPNewLobbyScreen;                                 		// 0x06E8 (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               MPLobbyStatusBarsScreen;                          		// 0x06EC (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               CharacterSelectScreen;                            		// 0x06F0 (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               CharacterCreateScreen;                            		// 0x06F4 (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               CharacterAppearanceScreen;                        		// 0x06F8 (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               CharacterKitScreen;                               		// 0x06FC (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               MatchResultsScreen;                               		// 0x0700 (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               LeaderboardScreen;                                		// 0x0704 (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               MPMatchConsumablesScreen;                         		// 0x0708 (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               MPStoreScreen;                                    		// 0x070C (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               MPPromotionScreen;                                		// 0x0710 (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               GalaxyAtWarScreen;                                		// 0x0714 (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               WarAssetsScreen;                                  		// 0x0718 (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               WeaponSelectScreen;                               		// 0x071C (0x0004) [0x0000000000000000]              
	void*                                              srOK;                                             		// 0x0720 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srCancel;                                         		// 0x0724 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srSearchingForGames;                              		// 0x0728 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srCreatingGame;                                   		// 0x072C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srMatchMakingError;                               		// 0x0730 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srOnlinePrivilegeError;                           		// 0x0734 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srStrictNatError;                                 		// 0x0738 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              NatWarningShowDelay;                              		// 0x073C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              NatWarningShowDuration;                           		// 0x0740 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class USFXOnlineGameSettings*                      MatchMakingGameSettings;                          		// 0x0744 (0x0004) [0x0000000000000000]              
	float                                              MatchStartTimerDuration;                          		// 0x0748 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MatchStartLastManTimerDuration;                   		// 0x074C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MatchStartTimer;                                  		// 0x0750 (0x0004) [0x0000000000000000]              
	unsigned char                                      MatchTimerState;                                  		// 0x0754 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108709 ];

		return pClassPointer;
	};

	bool IsMatchTimerRunning ( );
	void UpdateKickVotes ( );
	void OnMPNetworkError ( struct FString additionalInfo );
	void OnMPFatalError ( struct FString additionalInfo );
	void ShowNetworkErrorPrompt ( void* Caption );
	void ShowPrompt ( void* Caption, unsigned long withOkButton );
	void CancelSearch ( );
	void CancelSearchInput ( unsigned long bAPressed, int nContext );
	void OnMPGameStarted ( unsigned long bWasSuccessful );
	void OnQuickMatchJoined ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnMultiplayerGameDestroyed ( struct FName SessionName, unsigned long bWasSuccessful );
	void ShowStrictNatWarning ( );
	void CheckNatRestriction ( );
	void OnCreateGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnQuickMatchComplete ( unsigned char Result );
	bool QuickMatch ( class USFXOnlineGameSettings* GameSettings );
	bool CreateOnlineGame ( class USFXOnlineGameSettings* GameSettings );
	void StartMPMatch ( class USFXOnlineGameSettings* GameSettings );
	struct FMPEnemyInfo ChooseRandomEnemy ( );
	struct FMPMapInfo ChooseRandomMap ( );
	bool ChangeMatchSettings ( int privacy, int MapId, unsigned long bRandomMap, int EnemyType, unsigned long bRandomEnemy, int NewDifficulty, unsigned long bAllowMatchmaking, unsigned long updateOnline );
	void UnCommitSettings ( );
	void CommitSettings ( );
	void TravelToNextMap ( );
	void SetMatchTimerState ( unsigned char NewMatchTimerState );
	void CheckAllPlayersReady ( );
	void RestartPlayer ( class AController* NewPlayer );
	void Tick ( float DeltaTime );
	void DeferredPostBeginPlay ( );
	void ClearCrossLevelReferences ( );
	void eventPostBeginPlay ( );
	class USFXOnlineGameSettings* GetOnlineGameSettings ( );
	class Asfxplayercontrollermp* GetPC ( );
};

UClass* Asfxgameinfomp_lobby::pClassPointer = NULL;

// Class sfxgamempcontent.sfxgrimp_lobby
// 0x0073 (0x0324 - 0x02B1)
class Asfxgrimp_lobby : public ASFXGRI
{
public:
	struct FString                                     LobbyStatusString;                                		// 0x02B4 (0x000C) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	TArray< struct FName >                             aTimerSounds;                                     		// 0x02C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLobbyMatchTimerInfo                        MatchTimerInfo;                                   		// 0x02CC (0x000C) [0x0000000000000020]              ( CPF_Net )
	struct FName                                       LobbyState;                                       		// 0x02D8 (0x0008) [0x0000000000000020]              ( CPF_Net )
	struct FName                                       nmCurrentTimerSound;                              		// 0x02E0 (0x0008) [0x0000000000000000]              
	int                                                NumPlayerSlots;                                   		// 0x02E8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                NumReadyPlayers;                                  		// 0x02EC (0x0004) [0x0000000000000020]              ( CPF_Net )
	class Asfxprimp*                                   LeaderPRI;                                        		// 0x02F0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                PrivacySetting;                                   		// 0x02F4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                MapSetting;                                       		// 0x02F8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                EnemySetting;                                     		// 0x02FC (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                DifficultySetting;                                		// 0x0300 (0x0004) [0x0000000000000020]              ( CPF_Net )
	void*                                              srLoading;                                        		// 0x0304 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srWaitingForPlayers;                              		// 0x0308 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srStartingMatch;                                  		// 0x030C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srExiting;                                        		// 0x0310 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srMatchStartCountdown;                            		// 0x0314 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srMapChangedDueToDLCMismatch;                     		// 0x0318 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srOK;                                             		// 0x031C (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bRandomMap : 1;                                   		// 0x0320 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bRandomEnemy : 1;                                 		// 0x0320 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108718 ];

		return pClassPointer;
	};

	bool CanForceLastManReady ( );
	void CopyProperties ( class ASFXGRI* OldGRI );
	void SaveDataForHostMigration ( );
	TArray< struct FMPChallengeInfo > GetChallengeTypes ( );
	TArray< struct FMPEnemyInfo > GetEnemyTypes ( );
	struct FMPMapInfo GetMapInfo ( int MapId );
	bool IsMultiplayerGame ( );
	int GetPrivacy ( );
	bool IsPrivateMatch ( );
	void ReturnToMainMenu ( );
	void UnreadyAllPlayers ( );
	int GetNumReadyPlayers ( );
	int GetNumPlayers ( );
	struct FString GetLobbyStatusString ( );
	bool CanInteract ( );
	void BuildCombinedMapArray ( );
	void ShowMapChangedDueToDLCMismatchPopup ( );
	void UpdateMapArrays ( );
	void UpdatePlayerListOrder ( );
	void Tick ( float DeltaTime );
	void UpdateLobbyTimerSound ( );
	void SetMatchStartTimer ( unsigned long bTimerRunning, float fTimerValue, float fAllPlayersReadyTimerDuration );
	void eventReplicatedEvent ( struct FName VarName );
	class UOnlineGameInterface* GetOnlineGameInterface ( );
	class Asfxplayercontrollermp* GetPC ( );
	void PostBeginPlay ( );
};

UClass* Asfxgrimp_lobby::pClassPointer = NULL;

// Class sfxgamempcontent.sfxlobbyflow
// 0x006C (0x0262 - 0x01F6)
class Asfxlobbyflow : public AInfo
{
public:
	TArray< int >                                      PreviouslySelectedItems;                          		// 0x01F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMPMapInfo >                        MapList;                                          		// 0x0204 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           MPGUIPackages;                                    		// 0x0210 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< class UTexture2D* >                        LoadedGUITextures;                                		// 0x021C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortMapInfoData__Delegate;                      		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       LobbyScreenTag;                                   		// 0x0234 (0x0008) [0x0000000000004000]              ( CPF_Config )
	class Asfxpawn_playermp*                           DummyPawn;                                        		// 0x023C (0x0004) [0x0000000000000000]              
	class Asfxpawn_playermp*                           OriginalPawn;                                     		// 0x0240 (0x0004) [0x0000000000000000]              
	class USFXWeaponUIDataManager*                     DataManager;                                      		// 0x0244 (0x0004) [0x0000000000000000]              
	int                                                nLastOffer;                                       		// 0x0248 (0x0004) [0x0000000000000000]              
	int                                                FramesToWaitBeforeFadingFromBlack;                		// 0x024C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                FramesToWaitBeforeFadingFromBlackCounter;         		// 0x0250 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                LastMapPlayed;                                    		// 0x0254 (0x0004) [0x0000000000000000]              
	int                                                LastEnemyPlayed;                                  		// 0x0258 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDirty : 1;                                       		// 0x025C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlayerDataSent : 1;                              		// 0x025C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bMPFlowStarted : 1;                               		// 0x025C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCreateCharacterFlowStarted : 1;                  		// 0x025C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDeployFlowStarted : 1;                           		// 0x025C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bReadyToEnterLobby : 1;                           		// 0x025C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bAlwaysAllowGoBackFromKitSelect : 1;              		// 0x025C (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bCameFromSelectFirstCharacter : 1;                		// 0x025C (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bShowRevealReinforcementsOnUnexpectedAwarding : 1;		// 0x025C (0x0004) [0x0000000000004000] [0x00000100] ( CPF_Config )
	unsigned long                                      bManuallyRevealingReinforcements : 1;             		// 0x025C (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bHostingNewMission : 1;                           		// 0x025C (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned char                                      CurrentLobbyTab;                                  		// 0x0260 (0x0001) [0x0000000000000000]              
	unsigned char                                      PreviousSubScreen;                                		// 0x0261 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108780 ];

		return pClassPointer;
	};

	bool OnMPChallengesScreenClosed ( class USFXGUIMovie* oMovie );
	bool ShowMPChallengeScreen_Helper ( TArray< unsigned long > AccomplishmentDataRepeatability );
	bool ShowMPChallengeScreen ( );
	void FadeInFromBlack ( );
	void ChangeMapMusic ( int MapId );
	bool IsInDeployFlow ( );
	void LoadPersonalMatchSettings ( unsigned char eType );
	void SavePersonalMatchSettings ( unsigned char eType );
	void StartNewMatch ( );
	void StartCustomMatch ( );
	void StartQuickMatch ( );
	void RefreshMapList ( );
	bool CanSetReady ( );
	bool StartConnectToMapFlow ( );
	bool IsInConnectToMapFlow ( );
	bool DoesEveryoneHaveMap ( int MapId );
	int SortMapInfoData ( struct FMPMapInfo A, struct FMPMapInfo B );
	TArray< struct FMPMapInfo > GetAvailableMapList ( );
	void PlayGuiSound ( struct FName SoundName );
	void OnSearchGameCancelled ( );
	void OnCharacterChanged ( class APlayerReplicationInfo* PRI );
	void OnPlayerLeave ( class APlayerReplicationInfo* PRI );
	void OnPlayerEnter ( class APlayerReplicationInfo* PRI );
	bool ChangeMatchSettings ( int privacy, int MapId, int EnemyType, int NewDifficulty );
	void FinishChangingMatchSettings ( unsigned long bSuccess );
	void FinishSelectCharacterFlow ( unsigned long bSuccess );
	void FinishModifyCharacterFlow ( );
	void OnMatchSettingsChanged ( );
	void OnWeaponUIDataLoaded ( );
	void InitializeWeaponUIManager ( );
	void RestoreOriginalPawn ( );
	void SpawnDummyPawn ( struct FString KitArchetype );
	void SetupLocalCharacterData ( );
	void StartDeployFlow ( );
	void FinishMPAppearanceScreen ( unsigned long bSuccess, class Usfxmpcharacterrecord* ModifiedCharacter );
	void eventTick ( float DeltaTime );
	void SendPlayerDataToServer ( );
	bool IsReadyToEnterLobby ( );
	bool IsReadyToStartMPFlow ( );
	bool IsReadyToSendPlayerDataToServer ( );
	void OnOptionsScreenClosed ( );
	void ShowOptionsScreen ( );
	void OnCloseRevealScreen ( );
	void ShowReinforcementsRevealScreeen ( unsigned long bManualReveal );
	void ShowMatchConsumablesScreen ( );
	void ShowMPAppearanceScreen ( );
	void ShowMPSelectKitScreen ( );
	void ExitMultiplayer ( );
	void GoBackToSelectFirstCharacter ( );
	void ReturnToMainMenu ( );
	void ShowStoreScreenFromPromotion ( int PromotionalStoreID );
	void ShowPromotionScreen ( );
	void RefreshLobbyStatusBars ( );
	void HideLobbyStatusBars ( );
	void ShowLobbyStatusBars ( );
	void RefreshLobbyScreen ( );
	bool FinishLeaderboardScreen ( class USFXGUIMovie* i_ScreenToClose );
	void ShowLeaderboardScreen ( );
	void SetLastSelectedOffer ( int nOfferID );
	void FinishStoreScreen ( );
	void ShowStoreScreen ( unsigned long bProcessPurchases, unsigned long bSendTelemetry );
	void FinishWeaponsScreen ( );
	void ShowWeaponsScreen ( );
	void FinishTalentsLevelUpScreen ( );
	void ShowTalentsLevelUpScreen ( );
	void ShowMatchSettingsScreen ( );
	void HideCustomMatchScreen ( );
	void ShowCustomMatchScreen ( );
	void ShowHostNewMissionScreen ( );
	void HideSelectKitScreen ( );
	void HideMatchResultsScreen ( );
	void ShowMatchResultsScreen ( );
	void HideLobbyScreen ( );
	void ShowLobbyScreen ( );
	void HideMultiplayerMenu ( );
	void ShowMultiplayerMenu ( );
	void FinishMatchResults ( );
	void ServerRestartPlayer ( );
	void EnterLobby ( );
	void StartMPFlow ( );
	void RestoreLocalPRIMatchConsumablesFromOfflineTransfer ( class Asfxpri* PRI );
	void ClearCrossLevelReferences ( );
	void eventDestroyed ( );
	class Asfxgrimp_lobby* GetLobbyGRI ( );
	class Asfxprimp* GetPRI ( );
	class Asfxplayercontrollermp* GetPC ( );
};

UClass* Asfxlobbyflow::pClassPointer = NULL;

// Class sfxgamempcontent.sfxwavemanager_horde
// 0x003C (0x0248 - 0x020C)
class Asfxwavemanager_horde : public ASFXWaveManager
{
public:
	TArray< struct FWaveType >                         WaveTypes;                                        		// 0x020C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FWavePointRange >                   WavePointsRanges;                                 		// 0x0218 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< class ASFXEnemySpawnPoint* >               EnemySpawnPoints;                                 		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __HordeWaveSort__Delegate;                        		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector2D                                   WaveProgressionRange;                             		// 0x023C (0x0008) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxWaves;                                         		// 0x0244 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108795 ];

		return pClassPointer;
	};

	void GenerateEnemySpawnPointList ( );
	int WavePointsForRound ( int Round );
	int HordeWaveSort ( class UObject* A, class UObject* B );
	int GetWaveIndex ( int WaveIndex, struct FString WaveString );
	class UClass* SelectWaveType ( );
	void GeneratePotentialWaveList ( class UClass* SpecifiedWaveType );
};

UClass* Asfxwavemanager_horde::pClassPointer = NULL;

// Class sfxgamempcontent.sfxgui_mplobby
// 0x008B (0x02EC - 0x0261)
class Usfxgui_mplobby : public Usfxguimoviemp
{
public:
	TArray< unsigned char >                            ValidNewWeaponCategories;                         		// 0x0264 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FGAWZoneGUIData >                   GAWRatings;                                       		// 0x0270 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLobbyOnlineImageRequest >          OnlineImages;                                     		// 0x027C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	void*                                              srExitMultiplayer;                                		// 0x0288 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srExitMultiplayerConfirmation;                    		// 0x028C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srExitLobby;                                      		// 0x0290 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srExitLobbyConfirmation;                          		// 0x0294 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srCancel;                                         		// 0x0298 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srCharacterClassAndLevel;                         		// 0x029C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srLeaderboardNotificationText;                    		// 0x02A0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srFormattedXPShort;                               		// 0x02A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srFormattedXPLong;                                		// 0x02A8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srMatchSettingBonusXP;                            		// 0x02AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srMatchSettingXPModifier;                         		// 0x02B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srMatchSettingCreditModifier;                     		// 0x02B4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srOriginIgoDisabled;                              		// 0x02B8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srCredits;                                        		// 0x02BC (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srFormattedReadiness;                             		// 0x02C0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srGAWGlobalBonus;                                 		// 0x02C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srGAWZoneBonus;                                   		// 0x02C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srChallengeTracking;                              		// 0x02CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	class Usfxgawreinforcementmatchconsumable*         AllConsumables;                                   		// 0x02D0 (0x0004) [0x0000000000000000]              
	float                                              ElapsedTime;                                      		// 0x02D4 (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    UIWorldPawnOriginal;                              		// 0x02D8 (0x0004) [0x0000000000000000]              
	float                                              m_fPreviousMipLevelFadingValue;                   		// 0x02DC (0x0004) [0x0000000000000000]              
	class USFXGAWAssetsHandler*                        GAWAssetHandler;                                  		// 0x02E0 (0x0004) [0x0000000000000000]              
	int                                                MaxOnlineImages;                                  		// 0x02E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bPreviouslyInParty : 1;                           		// 0x02E8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPreviouslyCouldInteract : 1;                     		// 0x02E8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bGAWRatingsError : 1;                           		// 0x02E8 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108904 ];

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

UClass* Usfxgui_mplobby::pClassPointer = NULL;

// Class sfxgamempcontent.sfxgui_mplobbystatusbars
// 0x0027 (0x0288 - 0x0261)
class Usfxgui_mplobbystatusbars : public Usfxguimoviemp
{
public:
	void*                                              srWaitingForMatchToStart;                         		// 0x0264 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srWaitingForSingleOther;                          		// 0x0268 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srWaitingForOthers;                               		// 0x026C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srWaitingForYou;                                  		// 0x0270 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srWaitingForYouAndSingleOther;                    		// 0x0274 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srWaitingForYouAndOthers;                         		// 0x0278 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPressButtonToReady;                             		// 0x027C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPCReadyButton;                                  		// 0x0280 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      m_bShouldShowStatusBar : 1;                       		// 0x0284 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bShouldShowMatchInfo : 1;                       		// 0x0284 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bCanSetReady : 1;                               		// 0x0284 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108905 ];

		return pClassPointer;
	};

	void AS_Refresh ( );
	bool ShouldShowMatchInfo ( );
	int GetNumReadyPlayers ( );
	bool ShouldShowStatusBar ( );
	bool IsReady ( );
	struct FString GetReadyButtonString ( );
	struct FString GetPlayerStatus ( );
	void eventUpdate ( float fDeltaT );
	void Refresh ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* Usfxgui_mplobbystatusbars::pClassPointer = NULL;

// Class sfxgamempcontent.sfxgui_mpappearance
// 0x00EF (0x0350 - 0x0261)
class Usfxgui_mpappearance : public Usfxguimoviemp
{
public:
	struct FString                                     SelectedCharacterName;                            		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTintSwatchData >                   Tint1SwatchMappings;                              		// 0x0270 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FTintSwatchData >                   Tint2SwatchMappings;                              		// 0x027C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPatternData >                      PatternMappings;                                  		// 0x0288 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FTintSwatchData >                   PatternColorSwatchMappings;                       		// 0x0294 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FTintSwatchData >                   PhongSwatchMappings;                              		// 0x02A0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FTintSwatchData >                   EmissiveSwatchMappings;                           		// 0x02AC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FTintSwatchData >                   SkinToneSwatchMappings;                           		// 0x02B8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class ABioWorldInfo*                               WorldInfo;                                        		// 0x02C4 (0x0004) [0x0000000000000000]              
	void*                                              srNameTitle;                                      		// 0x02C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srNameNotUniqueErrorMessage;                      		// 0x02CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srNameTooLongErrorMessage;                        		// 0x02D0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srNameEmpty;                                      		// 0x02D4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srOK;                                             		// 0x02D8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srCharacterClassAndLevel;                         		// 0x02DC (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srDefaultPlaceholderName;                         		// 0x02E0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srYes;                                            		// 0x02E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srNo;                                             		// 0x02E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srCancelConfirmationMessage;                      		// 0x02EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                nMaxNameLength;                                   		// 0x02F0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                SelectedPawnTint1ID;                              		// 0x02F4 (0x0004) [0x0000000000000000]              
	int                                                SelectedPawnTint2ID;                              		// 0x02F8 (0x0004) [0x0000000000000000]              
	int                                                SelectedPawnPatternID;                            		// 0x02FC (0x0004) [0x0000000000000000]              
	int                                                SelectedPawnPatternColorID;                       		// 0x0300 (0x0004) [0x0000000000000000]              
	int                                                SelectedPawnPhongID;                              		// 0x0304 (0x0004) [0x0000000000000000]              
	int                                                SelectedPawnEmissiveID;                           		// 0x0308 (0x0004) [0x0000000000000000]              
	int                                                SelectedPawnSkinToneID;                           		// 0x030C (0x0004) [0x0000000000000000]              
	class USFXGUIHelper_ConsoleKeyboard*               Keyboard;                                         		// 0x0310 (0x0004) [0x0000000000000000]              
	class Usfxmpcharacterrecord*                       CurrModifiableCharacter;                          		// 0x0314 (0x0004) [0x0000000000000000]              
	class USFXSaveManagerMP*                           MPSaveManager;                                    		// 0x0318 (0x0004) [0x0000000000000000]              
	class USFXCustomizationInstance_PlayerMP*          CurrentSettings;                                  		// 0x031C (0x0004) [0x0000000000000000]              
	int                                                m_nRotating;                                      		// 0x0320 (0x0004) [0x0000000000000000]              
	float                                              RotationDegreesPerSecond;                         		// 0x0324 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class ASFXPawn_Player*                             SourcePlayer;                                     		// 0x0328 (0x0004) [0x0000000000000000]              
	int                                                RequiredTint1Level;                               		// 0x032C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                RequiredTint2Level;                               		// 0x0330 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                RequiredPatternLevel;                             		// 0x0334 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                RequiredPatternColorLevel;                        		// 0x0338 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                RequiredPhongLevel;                               		// 0x033C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                RequiredEmissiveLevel;                            		// 0x0340 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                RequiredSkinToneLevel;                            		// 0x0344 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              m_fPreviousMipLevelFadingValue;                   		// 0x0348 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bUpdatedInitialPawnTint : 1;                    		// 0x034C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bPCRotationEnabled : 1;                         		// 0x034C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108906 ];

		return pClassPointer;
	};

	void AS_SetFocusToNameField ( );
	void AS_RefreshCurrentMenuItem ( );
	void AS_InitializeScreen ( );
	void AS_RefreshCharacterName ( struct FString NewName );
	void AS_AddTintSwatch ( int nID, float fR, float fX, float fB );
	void eventUpdate ( float fDeltaT );
	bool eventHandleInputEvent ( unsigned char Event, float fValue );
	bool CanShowSkinTone ( );
	bool CanShowEmissive ( );
	bool CanShowPhong ( );
	bool CanShowPatternColor ( );
	bool CanShowPattern ( );
	bool CanShowSecondaryColor ( );
	bool CanShowPrimaryColor ( );
	unsigned char GetMenuItemState ( int RequiredLevel );
	unsigned char GetSkinToneState ( );
	unsigned char GetEmissiveState ( );
	unsigned char GetPhongState ( );
	unsigned char GetPatternColorState ( );
	unsigned char GetPatternState ( );
	unsigned char GetTint2State ( );
	unsigned char GetTint1State ( );
	bool IsInDeployFlow ( );
	void NameErrorCallback ( unsigned long bAPressed, int nContext );
	void DisplayCharacterNameErrorBox ( unsigned char eResult );
	int GetMaxCharacterNameLength ( );
	struct FString GetSelectedKitName ( );
	struct FString GetSelectedCharacterClassAndLevel ( );
	struct FString GetSelectedCharacterName ( );
	void ResetPawnToLastSelection ( );
	void ResetPawn ( );
	void ResetScreenInfo ( );
	void SetCharacterName ( struct FString CharacterName );
	void KeyboardNameEntryComplete ( unsigned long bOK, struct FString sName );
	void ShowKeyboard ( );
	int GetSelectedSkinToneID ( );
	void ChangeSkinToneSelection ( int nID );
	void ChangePawnSkinTone ( int nID );
	int GetSelectedEmissiveID ( );
	void ChangeEmissiveSelection ( int nID );
	void ChangePawnEmissive ( int nID );
	int GetSelectedPhongID ( );
	void ChangePhongSelection ( int nID );
	void ChangePawnPhong ( int nID );
	int GetSelectedPatternID ( );
	void ChangePatternSelection ( int nID );
	void ChangePawnPattern ( int nID );
	int GetSelectedPatternColorID ( );
	void ChangePatternColorSelection ( int nID );
	void ChangePawnPatternColor ( int nID );
	int GetSelectedTint2ID ( );
	void ChangeTint2Selection ( int nID );
	void ChangePawnTint2 ( int nID );
	int GetSelectedTint1ID ( );
	void ChangeTint1Selection ( int nID );
	void ChangePawnTint1 ( int nID );
	void ApplyTinting ( class UObject* InSettings );
	void SetInitialPawnPosition ( class UObject* Data );
	void ConfirmButtonPressed ( );
	void CancelConfirmCallback ( unsigned long bAPressed, int nContext );
	void CancelScreen ( );
	void BackButtonPressed ( );
	int GetIdxByAppearanceID ( int Id, TArray< struct FCustomizableElement >* AppearanceData );
	TArray< struct FTintSwatchData > GetSkinToneSwatchData ( );
	TArray< struct FTintSwatchData > GetEmissiveSwatchData ( );
	TArray< struct FTintSwatchData > GetPhongSwatchData ( );
	TArray< struct FTintSwatchData > GetPatternColorSwatchData ( );
	TArray< struct FPatternData > GetPatternData ( );
	TArray< struct FTintSwatchData > GetTint2SwatchData ( );
	TArray< struct FTintSwatchData > GetTint1SwatchData ( );
	struct FString GetOriginalCharacterName ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* Usfxgui_mpappearance::pClassPointer = NULL;

// Class sfxgamempcontent.sfxgui_mpselectkit
// 0x004F (0x02B0 - 0x0261)
class Usfxgui_mpselectkit : public Usfxguimoviemp
{
public:
	struct FName                                       ClassNameToPromote;                               		// 0x0264 (0x0008) [0x0000000000000000]              
	void*                                              srPromote;                                        		// 0x026C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srCancel;                                         		// 0x0270 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srLoadingCharacter;                               		// 0x0274 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srClassLevel;                                     		// 0x0278 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPromoteConfirm;                                 		// 0x027C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPromoteClassWarning;                            		// 0x0280 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srLoadingCharacters;                              		// 0x0284 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srSwitchingCharacter;                             		// 0x0288 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srXPTextFormat;                                   		// 0x028C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srFormattedXP;                                    		// 0x0290 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srFormattedPlus;                                  		// 0x0294 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srFormattedClassPromotion;                        		// 0x0298 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class USFXSaveManagerMP*                           MPSaveManager;                                    		// 0x029C (0x0004) [0x0000000000000000]              
	class UBioSFHandler_MessageBox*                    LoadingCharacterMsgBox;                           		// 0x02A0 (0x0004) [0x0000000000000000]              
	class UBioSFHandler_MessageBox*                    WaitMessageBox;                                   		// 0x02A4 (0x0004) [0x0000000000000000]              
	int                                                m_nPromoteEventPauseTime;                         		// 0x02A8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bAdvanceToNextScreen : 1;                         		// 0x02AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWaitingForCharacters : 1;                        		// 0x02AC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bStartDeploy : 1;                                 		// 0x02AC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bForceOnlineConnection : 1;                       		// 0x02AC (0x0004) [0x0000000000004000] [0x00000008] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108907 ];

		return pClassPointer;
	};

	void AS_StartPromotionEvent ( );
	void AS_SetInputDisabled ( unsigned long B );
	void AS_RefreshScreen ( );
	void AS_InitializeScreen ( );
	bool BackWillExitMultiplayer ( );
	struct FString GetClassPromotionString ( );
	struct FString GetPromotionN7RatingsBoost ( );
	int GetPromoteEventPauseTime ( );
	class Usfxmpcharacterrecord* GetLastHighlightedCharacter ( );
	void SetLastHighlightedCharacter ( struct FName KitName );
	bool HasValidLastHighlightedCharacter ( );
	bool IsSignedIn ( );
	struct FString GetSelectedCharacterKit ( );
	struct FString GetSelectedCharacterClass ( );
	void PromoteConfirmCallback ( unsigned long bAPressed, int nContext );
	void PromoteClassWarningCallback ( unsigned long bAPressed, int nContext );
	void PromoteClass ( struct FString className );
	void HideWaitMessageBox ( );
	void ShowWaitMessageBox ( void* srMessage );
	void HideLoadingCharacterMessageBox ( );
	void ShowLoadingCharacterMessageBox ( );
	bool CanGoBack ( );
	void GoBack ( );
	void eventOnClose ( );
	void SelectKitAndProceed ( struct FString KitName );
	void DeployKit ( struct FString KitName );
	void eventUpdate ( float fDeltaT );
	TArray< struct FKitDisplayData > GetKitData ( struct FString className );
	TArray< struct FClassDisplayData > GetClassData ( );
	void eventOnStart ( );
};

UClass* Usfxgui_mpselectkit::pClassPointer = NULL;

// Class sfxgamempcontent.sfxgui_mpmatchresults
// 0x003F (0x02A0 - 0x0261)
class Usfxgui_mpmatchresults : public Usfxguimoviemp
{
public:
	struct FScriptDelegate                             __ResultDataSort__Delegate;                       		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	void*                                              srFormattedXP;                                    		// 0x0270 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srFormattedXPPlus;                                		// 0x0274 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srClassDataFormat;                                		// 0x0278 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srNextLevel;                                      		// 0x027C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPlus;                                           		// 0x0280 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srLevelUp;                                        		// 0x0284 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srGAWString;                                      		// 0x0288 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srRandomBonusString;                              		// 0x028C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srBonusXPString;                                  		// 0x0290 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srBonusXPReadinessString;                         		// 0x0294 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fIntroEventPauseTime;                             		// 0x0298 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class USFXMatchResultsData*                        OverallMatchResults;                              		// 0x029C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108908 ];

		return pClassPointer;
	};

	class USFXMatchResultsData* GetOverallMatchResults ( );
	void AS_InitializeScreen ( );
	void StopXPProgressSound ( );
	void StartXPProgressSound ( );
	struct FString GetLocalPlayerClassData ( int nLevel );
	struct FString GetOverallRatingsString ( );
	struct FString GetMaxReadinessString ( );
	bool HasOverallRatingsIncrease ( );
	struct FString GetGAWMapString ( );
	int GetGAWMapRatingIncrease ( );
	int GetGAWMapRating ( );
	unsigned char GetGAWMapID ( );
	struct FString GetLeveledUpString ( );
	bool LeveledUp ( );
	float GetIntroEventPauseTime ( );
	void ShowGamercard ( int nPlayerIndex );
	void OnContinue ( );
	struct FString GetPlusFormattedValue ( int nValue );
	struct FString GetCurrentPlayerClassDataString ( int nLevel );
	struct FString GetClassDataString ( int nLevel, struct FName className );
	struct FString GetFormattedXPStringPlus ( int nXP );
	struct FString GetFormattedXPString ( int nXP );
	struct FString GetNextLevelString ( int nLevel );
	bool GetMissionResult ( );
	int GetLevelFromXP ( int nXP );
	int GetXPRequredForLevel ( int nLevel );
	int GetSquadBonusXP ( );
	int GetSquadTotalCredits ( );
	int GetSquadTotalXP ( );
	int GetFinalExperience ( );
	int GetOriginalExperience ( );
	int GetMatchTime ( );
	struct FString GetMatchWave ( );
	struct FString GetMatchChallenge ( );
	struct FString GetMatchEnemy ( );
	struct FString GetMatchMap ( );
	TArray< struct FRewardMedalData > GetSquadMedals ( );
	int ResultDataSort ( struct FPlayerMatchResultData A, struct FPlayerMatchResultData B );
	bool GetMedalDefinition ( int MedalID, struct FRewardMedalData* MedalData, TArray< struct FMedalDefinition >* MedalDefinitions );
	bool GetSquadMedalDefinition ( int MedalID, struct FRewardMedalData* MedalData );
	bool GetPlayerMedalDefinition ( int MedalID, struct FRewardMedalData* MedalData );
	TArray< struct FPlayerMatchResultData > GetPlayerData ( );
	void eventOnClose ( );
	void eventOnStart ( );
};

UClass* Usfxgui_mpmatchresults::pClassPointer = NULL;

// Class sfxgamempcontent.sfxgui_mpmatchconsumables
// 0x0033 (0x0294 - 0x0261)
class Usfxgui_mpmatchconsumables : public Usfxguimoviemp
{
public:
	TArray< struct FConsumableDisplayInfo >            ActiveConsumables;                                		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           InGameConsumableGUIOrder;                         		// 0x0270 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FCardInfoDataSupplemental >         CardListSupplemental;                             		// 0x027C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class Usfxgawreinforcementmanager*                 GAWManager;                                       		// 0x0288 (0x0004) [0x0000000000000000]              
	class Usfxgawreinforcementmatchconsumable*         Consumables;                                      		// 0x028C (0x0004) [0x0000000000000000]              
	unsigned long                                      bLiveIniForPatch4AreLive : 1;                     		// 0x0290 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108909 ];

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

UClass* Usfxgui_mpmatchconsumables::pClassPointer = NULL;

// Class sfxgamempcontent.sfxgui_mpstore
// 0x00B7 (0x0318 - 0x0261)
class Usfxgui_mpstore : public Usfxguimoviemp
{
public:
	TArray< struct FString >                           IgnoredImageReferences;                           		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ExternalTextureIdentifier;                        		// 0x0270 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CurrRequestedRemoteImage;                         		// 0x027C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreImage >                       StoreImages;                                      		// 0x0288 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStoreGUIData >                     StoreItems;                                       		// 0x0294 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class Usfxgawreinforcementmanager*                 GAWManager;                                       		// 0x02A0 (0x0004) [0x0000000000000000]              
	class USFXSaveManagerMP*                           MPSaveManager;                                    		// 0x02A4 (0x0004) [0x0000000000000000]              
	void*                                              srPlatformText;                                   		// 0x02A8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srCreditsText;                                    		// 0x02AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srExpiresText;                                    		// 0x02B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srExpiresInDaysText;                              		// 0x02B4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPurchase;                                       		// 0x02B8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srCancel;                                         		// 0x02BC (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srBack;                                           		// 0x02C0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPurchaseConfirmation;                           		// 0x02C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPCPlatformConfirmation;                         		// 0x02C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srRedeemConfirmation;                             		// 0x02CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srOK;                                             		// 0x02D0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPurchaseError;                                  		// 0x02D4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPleaseWait;                                     		// 0x02D8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srRefreshing;                                     		// 0x02DC (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srPurchaseChoiceMessage;                          		// 0x02E0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srNotEnoughCredits;                               		// 0x02E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srFree;                                           		// 0x02E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srRedeem;                                         		// 0x02EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srOriginIgoDisabled;                              		// 0x02F0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              srShowReinforcements;                             		// 0x02F4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              fDelayPostPurchase;                               		// 0x02F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class UBioSFHandler_MessageBox*                    oMsgBox_Notification;                             		// 0x02FC (0x0004) [0x0000000000000000]              
	class UBioSFHandler_MessageBox*                    PurchaseChoiceMessageBox;                         		// 0x0300 (0x0004) [0x0000000000000000]              
	int                                                SelectedID;                                       		// 0x0304 (0x0004) [0x0000000000000000]              
	int                                                nMaxNumRemoteImages;                              		// 0x0308 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                nNumRequestedRemoteImages;                        		// 0x030C (0x0004) [0x0000000000000000]              
	int                                                nAvailablePCPoints;                               		// 0x0310 (0x0004) [0x0000000000000000]              
	unsigned long                                      bProcessPurchases : 1;                            		// 0x0314 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bPurchaseCompleted : 1;                         		// 0x0314 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108910 ];

		return pClassPointer;
	};

	void AS_RefreshPCPoints ( );
	void AS_ScrollDetails ( float fValue );
	void AS_ShowRemoteStoreImage ( );
	void AS_ShowDefaultStoreImage ( );
	void AS_SetImageLoadingClipVisible ( unsigned long bVisible );
	void AS_SetInputEnabled ( unsigned long bEnabled );
	void AS_SetListLoadingClipVisible ( unsigned long bVisible );
	void AS_ClearScreen ( );
	void AS_RefreshCredits ( );
	void AS_InitializeScreen ( );
	void ShowReinforcementsRevealScreen ( unsigned long bManualReveal );
	bool CanManuallyShowReinforcementsRevealScreen ( );
	bool CheckIfSignedInFailSafe ( );
	bool IsReady ( );
	bool CanSetReady ( );
	bool eventHandleInputEvent ( unsigned char Event, float fValue );
	struct FString GetAvailablePCPoints ( );
	void ErrorDialogCallback ( unsigned long bAPressed, int nContext );
	void ShowFatalErrorDialog ( struct FString ErrorMessage );
	void FinishPurchase ( );
	void OnPurchaseItemCallback ( int nResult );
	bool PurchaseItemFromPlatform ( int ItemId );
	void OnPurchaseCreditsErrorDialogFinished ( unsigned long bAPressed, int nContext );
	void OnPurchaseCreditsCallback ( int nResult );
	void DoCreditPurchase ( int ItemId );
	void PurchaseCreditsCallback ( unsigned long bAPressed, int nContext );
	void PurchaseItemWithCredits ( int ItemId );
	void OnPurchaseChoiceCallback ( class UBioSFHandler_MessageBox* oMsgBox, int nChoiceID, unsigned long bCancelled );
	void PCPurchaseConfirmationCallback ( unsigned long bAPressed, int nContext );
	void ConfirmPCPlatformPurchase ( int ItemId );
	void PurchaseItem ( int ItemId );
	bool CanPurchaseItem ( int ItemId );
	bool CanPurchaseItemWithCredits ( int ItemId );
	struct FString GetPlatformCostString ( int ItemId );
	bool IsItemFree ( int ItemId );
	struct FString GetCreditCostString ( int ItemId );
	struct FString GetExpirationTimeString ( int ItemId );
	void SetRemoteImage ( struct FString ImagePath );
	void OnImageRequestComplete ( struct FSFXOnlineImageRequest request );
	TArray< struct FStoreGUIData > GetStoreItems ( );
	struct FString GetTotalCreditString ( );
	int GetInitialSelectedID ( );
	void SetInitialSelectedStoreID ( int StoreID );
	void Exit ( );
	void eventOnClose ( );
	void PurchaseErrorCallback ( unsigned long bAPressed, int nIndex );
	void FinishInitialization ( int nResult );
	void RetryFinishInitialization ( );
	void OnWalletBalanceRequestFinished ( unsigned long Success, int walletBalance );
	void eventOnStart ( );
	void ClearQueuedNotification ( struct FName MessageBoxName );
	void QueuedNotificationCallback ( unsigned long bAPressed, int nIndex );
	void ShowQueuedNotification ( struct FName MessageBoxName, void* srText );
	void ShowNotification ( void* srText );
};

UClass* Usfxgui_mpstore::pClassPointer = NULL;

// Class sfxgamempcontent.sfxgui_mppromotion
// 0x0017 (0x0278 - 0x0261)
class Usfxgui_mppromotion : public Usfxguimoviemp
{
public:
	struct FString                                     TextureSymbolPath;                                		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PromotionalOfferID;                               		// 0x0270 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  PromoTexture;                                     		// 0x0274 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108911 ];

		return pClassPointer;
	};

	void AS_SetImageVisible ( unsigned long bVisible );
	void AS_SetLoadingClipVisible ( unsigned long bVisible );
	void AS_SetPromotionalText ( struct FString PromotTitle, struct FString PromoText );
	void OnReinforcements ( );
	void OnContinue ( );
	void eventOnClose ( );
	void OnRequestComplete ( struct FSFXOnlineImageRequest Image );
	void RequestImage ( struct FString ImageURL );
	void eventOnStart ( );
};

UClass* Usfxgui_mppromotion::pClassPointer = NULL;

// Class sfxgamempcontent.sfxpowercustomactionmp_consumable
// 0x0013 (0x06A8 - 0x0695)
class Usfxpowercustomactionmp_consumable : public Usfxpowercustomaction
{
public:
	struct FName                                       CapacityPlayerVariable;                           		// 0x0698 (0x0008) [0x0000000000000000]              
	int                                                UsedCount;                                        		// 0x06A0 (0x0004) [0x0000000000000000]              
	int                                                CapacityBonus;                                    		// 0x06A4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108952 ];

		return pClassPointer;
	};

	bool eventShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	struct FString eventGetHUDWheelIconInfo ( );
	bool CanUsePower ( class AActor* oTarget );
	void AddAvailableCharges ( int Quantity );
	void UseConsumable ( );
	int GetChargeCount ( );
	bool HasCharges ( );
	void OnPowersLoaded ( );
};

UClass* Usfxpowercustomactionmp_consumable::pClassPointer = NULL;

// Class sfxgamempcontent.SFXVocalizationManagerMP
// 0x0000 (0x0234 - 0x0234)
class ASFXVocalizationManagerMP : public ASFXVocalizationManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 109200 ];

		return pClassPointer;
	};

	void DrawActorLog ( class AActor* oActor, class ABioHUD* H );
	void DebugDraw ( class ABioHUD* H );
	void eventTickEvents ( float DeltaTime );
	bool eventPlaySFXVocalizationSLineInternal ( class ABioPawn* Speaker, float DelaySec, struct FSFXVocalizationEvent* E, struct FSFXVocalizationLine* LineToPlay );
	void TriggerVocalizationEvent ( unsigned char Id, class ABioPawn* inInstigator, class ABioPawn* Recipient, class ABioPawn* ReferringTo, float DelaySec, float fChanceToPlayModifier, unsigned long bReplicated );
	void eventPostBeginPlay ( );
};

UClass* ASFXVocalizationManagerMP::pClassPointer = NULL;

// Class sfxgamempcontent.sfxpowercustomactionmp_consumable_rocket
// 0x0004 (0x06AC - 0x06A8)
class Usfxpowercustomactionmp_consumable_rocket : public Usfxpowercustomactionmp_consumable
{
public:
	int                                                ServerConfirmedRocketCount;                       		// 0x06A8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 109710 ];

		return pClassPointer;
	};

	bool CanUsePower ( class AActor* oTarget );
	void SetWeaponAmmoFromPower ( );
	void AddAvailableCharges ( int Quantity );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void RocketConfirmationFromServer ( );
	void OnPawnLoadedWeapons ( );
	class ASFXHeavyWeapon* GetWeapon ( );
};

UClass* Usfxpowercustomactionmp_consumable_rocket::pClassPointer = NULL;

// Class sfxgamempcontent.sfxpowercustomactionmp_consumable_shield
// 0x0020 (0x06C8 - 0x06A8)
class Usfxpowercustomactionmp_consumable_shield : public Usfxpowercustomactionmp_consumable
{
public:
	struct FGuid                                       GUID_ShieldCrustTemplate;                         		// 0x06A8 (0x0010) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ShieldCrustTemplate;                           		// 0x06B8 (0x0004) [0x0000000000000000]              
	float                                              ShieldDuration;                                   		// 0x06BC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ShieldStrength;                                   		// 0x06C0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DamageImmunityLength;                             		// 0x06C4 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 109711 ];

		return pClassPointer;
	};

	void RemoveImmunity ( );
	void StopShieldVFX ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* Usfxpowercustomactionmp_consumable_shield::pClassPointer = NULL;

// Class sfxgamempcontent.sfxpowercustomactionmp_consumable_ammo
// 0x0010 (0x06B8 - 0x06A8)
class Usfxpowercustomactionmp_consumable_ammo : public Usfxpowercustomactionmp_consumable
{
public:
	int                                                NumGrenadesRestored;                              		// 0x06A8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AverageAmmoMissingThreshold;                      		// 0x06AC (0x0004) [0x0000000000000000]              
	float                                              WeaponDamageBoost;                                		// 0x06B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              WeaponDamageBoostDuration;                        		// 0x06B4 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 109712 ];

		return pClassPointer;
	};

	bool CanUsePower ( class AActor* oTarget );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* Usfxpowercustomactionmp_consumable_ammo::pClassPointer = NULL;

// Class sfxgamempcontent.sfxpowercustomactionmp_consumable_revive
// 0x0004 (0x06AC - 0x06A8)
class Usfxpowercustomactionmp_consumable_revive : public Usfxpowercustomactionmp_consumable
{
public:
	float                                              ImmunityDuration;                                 		// 0x06A8 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 109713 ];

		return pClassPointer;
	};

	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void StartPower ( );
	bool CanUsePower ( class AActor* oTarget );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

UClass* Usfxpowercustomactionmp_consumable_revive::pClassPointer = NULL;

// Class sfxgamempcontent.SFXHintSystemMP
// 0x0007 (0x0134 - 0x012D)
class USFXHintSystemMP : public UBioHintSystem
{
public:
	unsigned long                                      bDying : 1;                                       		// 0x0130 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanUseRevive : 1;                                		// 0x0130 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanUseAmmoKit : 1;                               		// 0x0130 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bObjectiveActive : 1;                             		// 0x0130 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bObjectiveNear : 1;                               		// 0x0130 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bReviveObjectiveActive : 1;                       		// 0x0130 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bReviveObjectiveActiveNear : 1;                   		// 0x0130 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bDoingCustomAction : 1;                           		// 0x0130 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bBeingRevived : 1;                                		// 0x0130 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bAnyWeaponHasAmmo : 1;                            		// 0x0130 (0x0004) [0x0000000000000000] [0x00000200] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111210 ];

		return pClassPointer;
	};

	bool Objective30sHint ( );
	bool ReviveSystemHint ( );
	bool DyingHint ( );
	bool ObjectiveHint ( );
	bool SwapWeapons ( );
	bool ReviveOtherHint ( );
	bool UseObjectiveHint ( );
	bool UseAmmoHint ( );
	bool UseReviveHint ( );
	void CacheCurrentState ( );
	void AddNotification_SupplyDrop ( struct FCardInfoData CardData );
};

UClass* USFXHintSystemMP::pClassPointer = NULL;

// Class sfxgamempcontent.SFXMessageMP
// 0x0000 (0x0050 - 0x0050)
class USFXMessageMP : public ULocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111398 ];

		return pClassPointer;
	};

	bool PartiallyDuplicates ( int Switch1, int Switch2, class UObject* OptionalObject1, class UObject* OptionalObject2 );
	bool IsKeyObjectiveMessage ( int Switch );
	bool IsConsoleMessage ( int Switch );
	float GetLifeTime ( int Switch );
	int GetFontSize ( int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer );
	float GetPos ( int Switch, class AHUD* myHUD );
	struct FColor GetColor ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FColor GetConsoleColor ( class APlayerReplicationInfo* RelatedPRI );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USFXMessageMP::pClassPointer = NULL;

// Class sfxgamempcontent.sfxweapon_heavy_consumablerocketlauncher
// 0x003C (0x0E14 - 0x0DD8)
class Asfxweapon_heavy_consumablerocketlauncher : public ASFXHeavyWeapon
{
public:
	struct FGuid                                       ChargeEffectGuid;                                 		// 0x0DD8 (0x0010) [0x0000000000000000]              
	struct FGuid                                       ShotEffectGuid;                                   		// 0x0DE8 (0x0010) [0x0000000000000000]              
	class Usfxpowercustomactionmp_consumable*          Power;                                            		// 0x0DF8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UForceFeedbackWaveform*                      NukeRumble;                                       		// 0x0DFC (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ChargeUp;                                      		// 0x0E00 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_Shot;                                          		// 0x0E04 (0x0004) [0x0000000000000000]              
	float                                              DamageRadius;                                     		// 0x0E08 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CappedDamageRadius;                               		// 0x0E0C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FarDamage;                                        		// 0x0E10 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112567 ];

		return pClassPointer;
	};

	void DropGun ( );
	void InitializeWeapon ( );
	void PutDownWeapon ( );
	void ConsumeAmmo ( unsigned char FireModeNum );
	void ShutOffAllEmitters ( );
	void FireAmmunition ( );
	void StopChargeEffects ( );
	void StartChargeEffects ( );
	void ServerCurrentWeapon ( class AWeapon* ClientCurrentWeapon );
	void ClientRocketFired ( );
	void ServerPlayNoAmmoEffects ( );
	void StartFire ( unsigned char FireModeNum );
	bool HasAmmo ( unsigned char FireModeNum, int Amount );
	int GetAmmoCountInMagazine ( );
};

UClass* Asfxweapon_heavy_consumablerocketlauncher::pClassPointer = NULL;

// Class sfxgamempcontent.SFXProjectile_ConsumableRocket
// 0x000F (0x03A0 - 0x0391)
class ASFXProjectile_ConsumableRocket : public ASFXProjectile_Explosive
{
public:
	class UClass*                                      RumbleClass;                                      		// 0x0394 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UClass*                                      ScreenShakeClass;                                 		// 0x0398 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              GibRange;                                         		// 0x039C (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112970 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( float InDamageAmount, float InDamageRadius, float Momentum, struct FVector HurtOrigin, struct FVector HitNormal );
	float GetFarDamage ( );
	float GetCappedDamageRadius ( );
	float GetDamageRadius ( );
	void DoImpact ( class AActor* InImpactedActor, class AController* InInstigatorController, float BaseDamage, float InDamageRadius, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, struct FTraceHitInfo* HitInfo );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ASFXProjectile_ConsumableRocket::pClassPointer = NULL;

// Class sfxgamempcontent.SFXRumble_ConsumableRocket
// 0x0000 (0x0048 - 0x0048)
class USFXRumble_ConsumableRocket : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113021 ];

		return pClassPointer;
	};

};

UClass* USFXRumble_ConsumableRocket::pClassPointer = NULL;

// Class sfxgamempcontent.SFXShake_ConsumableRocket
// 0x0000 (0x00BC - 0x00BC)
class USFXShake_ConsumableRocket : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113022 ];

		return pClassPointer;
	};

};

UClass* USFXShake_ConsumableRocket::pClassPointer = NULL;

// Class sfxgamempcontent.SFXWave_Horde_Cerberus
// 0x0000 (0x0148 - 0x0148)
class USFXWave_Horde_Cerberus : public USFXWave_Horde
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113323 ];

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

UClass* USFXWave_Horde_Cerberus::pClassPointer = NULL;

// Class sfxgamempcontent.SFXWave_Horde_Geth
// 0x0000 (0x0148 - 0x0148)
class USFXWave_Horde_Geth : public USFXWave_Horde
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113325 ];

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

UClass* USFXWave_Horde_Geth::pClassPointer = NULL;

// Class sfxgamempcontent.SFXWave_Horde_Reaper
// 0x0000 (0x0148 - 0x0148)
class USFXWave_Horde_Reaper : public USFXWave_Horde
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113327 ];

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

UClass* USFXWave_Horde_Reaper::pClassPointer = NULL;

// Class sfxgamempcontent.SFXSeqAct_CloseMPWeaponSelect
// 0x0000 (0x00B0 - 0x00B0)
class USFXSeqAct_CloseMPWeaponSelect : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124889 ];

		return pClassPointer;
	};

};

UClass* USFXSeqAct_CloseMPWeaponSelect::pClassPointer = NULL;

// Class sfxgamempcontent.SFXCharacterClass_ContentMP
// 0x0000 (0x01CD - 0x01CD)
class USFXCharacterClass_ContentMP : public USFXCharacterClass_Content
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129152 ];

		return pClassPointer;
	};

};

UClass* USFXCharacterClass_ContentMP::pClassPointer = NULL;

// Class sfxgamempcontent.SFXCustomAction_PickupRetrieveObject
// 0x0032 (0x0120 - 0x00EE)
class USFXCustomAction_PickupRetrieveObject : public USFXCustomAction_SingleAnim
{
public:
	struct FName                                       BarName;                                          		// 0x00F0 (0x0008) [0x0000000000000000]              
	struct FName                                       BackgroundName;                                   		// 0x00F8 (0x0008) [0x0000000000000000]              
	float                                              MinimumTimeToPickup;                              		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              TimeStarted;                                      		// 0x0104 (0x0004) [0x0000000000000000]              
	class Asfxobjective_retrieve_pickupobject*         PickUpObject;                                     		// 0x0108 (0x0004) [0x0000000000000000]              
	int                                                BarScreenPosX;                                    		// 0x010C (0x0004) [0x0000000000000000]              
	int                                                BarScreenPosY;                                    		// 0x0110 (0x0004) [0x0000000000000000]              
	int                                                BarScreenWidth;                                   		// 0x0114 (0x0004) [0x0000000000000000]              
	int                                                BarColor;                                         		// 0x0118 (0x0004) [0x0000000000000000]              
	int                                                BackgroundColor;                                  		// 0x011C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129154 ];

		return pClassPointer;
	};

	void StopCustomAction ( );
	void CheckFiring ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_PickupRetrieveObject::pClassPointer = NULL;

// Class sfxgamempcontent.SFXCustomAction_DisarmObject
// 0x0012 (0x0100 - 0x00EE)
class USFXCustomAction_DisarmObject : public USFXCustomAction_SingleAnim
{
public:
	float                                              MinimumTimeToDisarm;                              		// 0x00F0 (0x0004) [0x0000000000000000]              
	class Asfxobjective_disarm_base*                   DisarmObject;                                     		// 0x00F4 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 DisarmStart;                                      		// 0x00F8 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 DisarmStop;                                       		// 0x00FC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129155 ];

		return pClassPointer;
	};

	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void DisarmSuccess ( );
	void CheckFiring ( );
	void StartCustomAction ( );
};

UClass* USFXCustomAction_DisarmObject::pClassPointer = NULL;

// Class sfxgamempcontent.SFXCustomAction_PlayerStaggerMP
// 0x0000 (0x0101 - 0x0101)
class USFXCustomAction_PlayerStaggerMP : public USFXCustomAction_PlayerStaggerImpact
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129156 ];

		return pClassPointer;
	};

	void ActivateImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, class UClass* DamageType );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CheckForRagdollRecovery ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void OnCustomActionTimeUp ( );
	void StartCustomAction ( );
	void Init ( struct FVector HitLocation, struct FVector HitNormal, int BoneIndex, unsigned long bPlayImpact, class UClass* DamageType );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXCustomAction_PlayerStaggerMP::pClassPointer = NULL;

// Class sfxgamempcontent.SFXPowerCustomActionMP_ConsumableAmmoPower
// 0x0000 (0x0695 - 0x0695)
class USFXPowerCustomActionMP_ConsumableAmmoPower : public Usfxpowercustomaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129157 ];

		return pClassPointer;
	};

	int GetSaveGamePowerState ( );
	void SetSaveGamePowerState ( int nState );
	struct FName GetUniquePowerPlayerVariable ( );
	void RestoreSaveState ( );
	void ReplicationDecodeDelayAndResistance ( int EncodedData, float* fDelay, unsigned char* Resistance );
	int ReplicationEncodeDelayAndResistance ( float fDelay, unsigned char Resistance );
	void OnSourcePowerBioticDetonation ( );
	struct FString GetPowerComboClassFromUniqueID ( int PowerComboTypeUniqueID );
	int GetPowerComboTypeUniqueIDFromClass ( struct FString className );
	void ClientDoPowerComboImpactFromEffect ( class AActor* oTarget, int CustomActionReactionType, struct FString EffectClassName, float DetonatorPowerRank, int MiscFlags );
	void ClientDoPowerCombo ( class UClass* EffectClass, int SourcePowerID, class ABioPawn* SourcePowerInstigator, class ABioPawn* TargetPawn, struct FVector HitLocation, struct FVector HitNormal );
	void ReplicatePowerCombo ( class Usfxgameeffect_powercombo* ComboEffect, class ABioPawn* TargetPawn, struct FVector HitLocation, struct FVector HitNormal );
	void DelayedDoPowerCombo ( );
	void DoPowerCombo ( class Usfxgameeffect_powercombo* ComboEffect, class ABioPawn* TargetPawn, struct FVector HitLocation, struct FVector HitNormal, unsigned long bDelayed );
	void CheckForPowerCombo ( class AActor* Target, unsigned char Resistance, struct FVector HitLocation, struct FVector HitNormal );
	class Usfxgameeffect_powercombo* AddComboEffect ( class AActor* Target, class UClass* ComboClass, float Duration );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void CombatEnded ( );
	void ReplaceAnimSetWithDynamic ( class UAnimSet* DynAnimSet );
	void GetPowerAnimInfo ( class UAnimSet** AnimSet, TArray< struct FName >* AnimNames );
	void CleanUpProjectile ( class ASFXProjectile_PowerCustomAction* oProjectile );
	void ReplicatePowerComboImpact ( class ABioPawn* Target, int CustomActionReactionType, float PowerRank, int PowerComboTypeUniqueID, int MiscFlags );
	void ReplicatePowerSubsequentImpact ( class ABioPawn* Target, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void ClientDoCustomAction ( unsigned long bForced );
	void Replicate ( );
	void PlayPowerScreenShake ( class UClass* ScreenShakeClass, struct FVector HitLocation );
	void PlayPowerControllerRumble ( class UClass* RumbleClass, struct FVector HitLocation );
	struct FVector GetDefaultClientEffectParams ( );
	void AddEvolvedRankBonus ( float Bonus, struct FPowerData* Data );
	void ApplyForceToActor ( class AActor* oActor, struct FVector vForce );
	void ApplyShieldBonus ( class ABioPawn* oPawn, float fShieldValue, unsigned long bShieldValueIsPercent, float fDuration, struct FName Category, unsigned long bRemoveEffectWhenShieldsDown );
	void ApplyHealthBonus ( class ABioPawn* oPawn, float fHealthValue, unsigned long bHealthValueIsPercent, float fDuration, struct FName Category );
	void PlayParticleSystemOnSocket ( class UParticleSystem* PS_Template, class ABioPawn* TargetPawn, struct FName SocketName, struct FRotator Rotation );
	bool HasRemainingShieldOfType ( class ABioPawn* oPawn, class UClass* ShieldClass );
	bool IsPlaceable ( class AActor* oImpacted );
	bool ApplyPermanentGameEffect ( class AActor* oTarget, class UClass* className, float fEffectValue, struct FName nmCategory, class AController* Instigator );
	bool ApplyTemporaryGameEffect ( class AActor* oTarget, class UClass* className, float fDuration, float fEffectValue, struct FName nmCategory, class AController* Instigator );
	bool IsOfRace ( class AActor* oImpacted, unsigned char eRace );
	bool CanBeRagdolledByPowers ( class ABioPawn* oPawn );
	bool ImpactPlaceable ( class AActor* oCaster, class AActor* oImpacted, struct FVector Momentum, float PlotPlaceableDamage, unsigned long bForceDamage );
	float GetPhysicsLevelResistance ( class AActor* oTarget );
	int GetPhysicsLevel ( class AActor* oImpacted, unsigned long bIgnoreResistance );
	bool IsMachineRace ( class AActor* oImpacted );
	bool ShouldUsePowerOnShields ( class ABioPawn* Target, class UClass* DamageType, struct FString* sOptionalInfo );
	void RagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	bool CanImpactActor ( class AActor* oActor );
	bool AddActorToImpactedList ( class AActor* oActor, struct FVector vImpactLocation, TArray< class AActor* >* ImpactedActors );
	bool DetonationHitsTarget ( struct FVector HitLocation, float MaxRange, class AActor* HitActor, struct FAreaEffectParameters DetonationParams );
	bool GetNearbyActors ( struct FVector HitLocation, float Radius, float MaxRange, struct FAreaEffectParameters Param, TArray< class AActor* >* ImpactedActors );
	void ApplyBonusToParameter ( class USFXGameEffect* Bonus, unsigned long bRemove, struct FPowerData* Parameter );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void PlayImpactEffects ( class AActor* oImpacted, struct FVector ImpactLocation, struct FVector ImpactNormal );
	void PlayImpactSounds ( struct FVector ImpactLocation, class UWwiseEvent* BaseSound, TArray< struct FEvolvedSoundStruct >* EvolvedSounds );
	void PlayCasterSounds ( class UWwiseEvent* BaseSound, TArray< struct FEvolvedSoundStruct >* EvolvedSounds );
	void PlayDetonationEffects ( struct FVector ImpactLocation, struct FVector ImpactNormal, class ASFXProjectile_PowerCustomAction* oProjectile );
	void PlayReleaseEffects ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	float GetImpactForce ( class AActor* oImpacted );
	class UClass* GetNonRagdollDamageType ( );
	float GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType );
	bool DoAreaExplosionForActor ( class AActor* oActor, struct FVector location, int ImpactCount, float fDamage, class UClass* DamageType, float fForce, struct FAreaEffectParameters Param, int MaxRagdollOverride, struct FScriptDelegate ImpactCallback, class UClass* MaxRagdollDmgTypeOverride );
	void AreaExplosion ( struct FVector location, float fRadius, float fDamage, class UClass* DamageType, float fForce, struct FAreaEffectParameters Param, int MaxImpactCount, struct FScriptDelegate ImpactCallback, int MaxRagdollOverride, class UClass* MaxRagdollDmgTypeOverride );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ClientDoPowerComboImpact ( class AActor* oActor, int CustomActionReactionType, float PowerRank, int PowerComboTypeUniqueID, int MiscFlags );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	bool DoPowerDetonatedForActor ( class AActor* oActor, struct FVector HitLocation, struct FVector HitNormal, int nImpactCount, unsigned long bFirstTarget, class ASFXProjectile_PowerCustomAction* oProjectile );
	void OnPowerDetonated ( struct FVector HitLocation, struct FVector HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	void ReleaseBuffPower ( );
	void ReleaseMeleePower ( );
	void ReleaseInstantPower ( );
	void OnClientPowerProjectileSpawned ( class ASFXProjectile_PowerCustomAction* NewProjectile );
	class ASFXProjectile_PowerCustomAction* ReleaseProjectilePower ( );
	bool GetProjectileAttachPoint ( struct FVector* AttachPoint );
	void ReleasePower ( );
	void ResetPowerCooldown ( );
	void StartPowerCooldown ( );
	float GetPowerCooldown ( );
	void eventTickCustomAction ( float fDeltaTime );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void EndThisCustomAction ( );
	bool PlayBodyStance ( struct FBodyStance BodyStance, float fStanceBlendInTime, float fStanceBlendOutTime );
	void StartCastAnimations ( );
	void StartPower ( );
	void StartCustomAction ( );
	bool ChangeCoverAction ( );
	struct FBodyStance GetCurrentBodyStance ( );
	bool LoadAnimSet ( );
	bool CanUsePower ( class AActor* oTarget );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void eventGetUsedAnimNames ( TArray< struct FName >* UsedAnims );
};

UClass* USFXPowerCustomActionMP_ConsumableAmmoPower::pClassPointer = NULL;

// Class sfxgamempcontent.SFXCharacterClassMP_Adept
// 0x0000 (0x01CD - 0x01CD)
class USFXCharacterClassMP_Adept : public USFXCharacterClass_ContentMP
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129158 ];

		return pClassPointer;
	};

};

UClass* USFXCharacterClassMP_Adept::pClassPointer = NULL;

// Class sfxgamempcontent.sfxpowercustomactionmp_singularity
// 0x0000 (0x08A0 - 0x08A0)
class Usfxpowercustomactionmp_singularity : public Usfxpowercustomaction_singularity
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129160 ];

		return pClassPointer;
	};

	void CombatEnded ( );
	void PopulatePowerStatBarEvolves ( );
	void OnOwnerDestroyed ( );
	void DoJoinInProgress ( );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	void OnPowerRankIncreased ( );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	void SpawnSingularityVFX ( );
	void SpawnSingularity ( );
	bool OnExplosionImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void SingularityExplosion ( );
	void Internal_TurnOffSingularity ( );
	void TurnOffSingularity ( unsigned long bDoReplication );
	bool CanPutInSingularity ( class AActor* oActor );
	void OnGameEffectEnded ( class AActor* oActor );
	bool ImpactNewTarget ( class AActor* oImpacted );
	bool ApplyBioticComboEffect ( class AActor* oTarget );
	void eventTickCustomAction ( float fDeltaTime );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void OnPowerDetonated ( struct FVector HitLocation, struct FVector HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	void ReleasePower ( );
	float GetImpactForce ( class AActor* oImpacted );
	void StartCustomAction ( );
	void OnPowersLoaded ( );
};

UClass* Usfxpowercustomactionmp_singularity::pClassPointer = NULL;

// Class sfxgamempcontent.SFXPowerCustomActionMP_Warp
// 0x0000 (0x074C - 0x074C)
class USFXPowerCustomActionMP_Warp : public USFXPowerCustomAction_Warp
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129161 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	void PlayImpactEffects ( class AActor* oImpacted, struct FVector ImpactLocation, struct FVector ImpactNormal );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	float GetTotalDamage ( class AActor* oImpacted, class UClass** DamageType );
	float GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType );
};

UClass* USFXPowerCustomActionMP_Warp::pClassPointer = NULL;

// Class sfxgamempcontent.SFXPowerCustomActionMP_Shockwave
// 0x0000 (0x07F0 - 0x07F0)
class USFXPowerCustomActionMP_Shockwave : public USFXPowerCustomAction_Shockwave
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129162 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void DoSubsequentImpact ( class AActor* HitActor, struct FVector ImpactLocation, int nImpactCount );
	void DoImpact ( struct FVector location, struct FRotator ProjectileRotation );
	void OnPowerDetonated ( struct FVector HitLocation, struct FVector HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	class ASFXProjectile_PowerCustomAction* ReleaseProjectilePower ( );
};

UClass* USFXPowerCustomActionMP_Shockwave::pClassPointer = NULL;

// Class sfxgamempcontent.sfxpowercustomactionmp_passivebase
// 0x00BB (0x0750 - 0x0695)
class Usfxpowercustomactionmp_passivebase : public USFXPowerCustomAction_PassivePower
{
public:
	struct FPowerData                                  PowerDamageBonus;                                 		// 0x0698 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  WeaponDamageBonus;                                		// 0x06C8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  WeightCapacityBonus;                              		// 0x06F8 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< unsigned char >                            WeaponWeightClasses;                              		// 0x0728 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              Evolve_WeaponDamageBonus1;                        		// 0x0734 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_PowerDamageBonus1;                         		// 0x0738 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_WeightCapacityBonus;                       		// 0x073C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_PowerDamageBonus2;                         		// 0x0740 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_HeadShotBonus;                             		// 0x0744 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_WeaponEncumbranceBonus;                    		// 0x0748 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_WeaponDamageBonus2;                        		// 0x074C (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129164 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	void ApplyGlobalBonus ( );
};

UClass* Usfxpowercustomactionmp_passivebase::pClassPointer = NULL;

// Class sfxgamempcontent.sfxpowercustomactionmp_humanpassive
// 0x0000 (0x0750 - 0x0750)
class Usfxpowercustomactionmp_humanpassive : public Usfxpowercustomactionmp_passivebase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129163 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	void ApplyGlobalBonus ( );
};

UClass* Usfxpowercustomactionmp_humanpassive::pClassPointer = NULL;

// Class sfxgamempcontent.SFXPowerCustomActionMP_MeleePassiveBase
// 0x0084 (0x08D4 - 0x0850)
class USFXPowerCustomActionMP_MeleePassiveBase : public USFXPowerCustomAction_MeleePassivePower
{
public:
	struct FPowerData                                  HealthShieldBonus;                                		// 0x0850 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  MeleeDamageBonus;                                 		// 0x0880 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              Evolve_MeleeDamageBonus1;                         		// 0x08B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_MeleeDamageBonus2;                         		// 0x08B4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_HealthShieldBonus1;                        		// 0x08B8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_HealthShieldBonus2;                        		// 0x08BC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_MeleeSpreeBonus;                           		// 0x08C0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldRegenBonus;                          		// 0x08C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_MeleeSpreeDuration;                        		// 0x08C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_CustomSpreeBonus;                          		// 0x08CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_CustomSpreeDuration;                       		// 0x08D0 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129167 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	void ApplyGlobalBonus ( );
};

UClass* USFXPowerCustomActionMP_MeleePassiveBase::pClassPointer = NULL;

// Class sfxgamempcontent.SFXPowerCustomActionMP_HumanMeleePassiveBase
// 0x0000 (0x08D4 - 0x08D4)
class USFXPowerCustomActionMP_HumanMeleePassiveBase : public USFXPowerCustomActionMP_MeleePassiveBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129166 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	void ApplyGlobalBonus ( );
};

UClass* USFXPowerCustomActionMP_HumanMeleePassiveBase::pClassPointer = NULL;

// Class sfxgamempcontent.SFXPowerCustomActionMP_HumanMeleePassive_Adept
// 0x0000 (0x08D4 - 0x08D4)
class USFXPowerCustomActionMP_HumanMeleePassive_Adept : public USFXPowerCustomActionMP_HumanMeleePassiveBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129165 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	void ApplyGlobalBonus ( );
};

UClass* USFXPowerCustomActionMP_HumanMeleePassive_Adept::pClassPointer = NULL;

// Class sfxgamempcontent.sfxobjective_disarm_base
// 0x0008 (0x0238 - 0x0230)
class Asfxobjective_disarm_base : public Asfxoperationobjective
{
public:
	class ABioPawn*                                    DisarmedBy;                                       		// 0x0230 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class USFXEngagement_Disarm*                       DisarmWave;                                       		// 0x0234 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129186 ];

		return pClassPointer;
	};

	void SetOwningWave ( class Usfxwave_operation* NewOwner );
	void DisarmBomb ( class ABioPawn* oPawn );
	void Used ( class AActor* User );
	void Deactivate ( );
	void ActivateObjective ( );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* Asfxobjective_disarm_base::pClassPointer = NULL;

// Class sfxgamempcontent.sfxobjective_retrieve_pickupobject
// 0x0028 (0x0258 - 0x0230)
class Asfxobjective_retrieve_pickupobject : public Asfxoperationobjective
{
public:
	struct FName                                       AttachSocketName;                                 		// 0x0230 (0x0008) [0x0000000000000000]              
	struct FReplicatedPickupObject                     ReplicatedPickupObjectInfo;                       		// 0x0238 (0x0008) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	class ASFXPawn_Player*                             PickedUpBy;                                       		// 0x0240 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        PickupMeshComp;                                   		// 0x0244 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	void*                                              srPickedUpObject;                                 		// 0x0248 (0x0004) [0x0000000000000000]              
	float                                              MovementSpeedDecrease;                            		// 0x024C (0x0004) [0x0000000000004000]              ( CPF_Config )
	void*                                              SrPlayerCarryingObjectiveMarker;                  		// 0x0250 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class USFXEngagement_Retrieve*                     RetrieveWave;                                     		// 0x0254 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129208 ];

		return pClassPointer;
	};

	void SetOwningWave ( class Usfxwave_operation* NewOwner );
	void eventDestroyed ( );
	void RemovePickupObject ( );
	void ObjectDroppedOff ( );
	void DropObject ( );
	void PickUpObject ( class ASFXPawn_Player* Player );
	void PawnDowned ( class ABioPawn* Pawn );
	void OnPickedUp ( class ASFXPawn_Player* Player );
	void Used ( class AActor* User );
	void Deactivate ( );
	void ActivateObjective ( );
	void SetObjectiveData ( class USFXOperation_ObjectiveData* ObjData );
	void PostBeginPlay ( );
	void ClientPickupObjectEvent ( );
	void ReplicatePickupObjectEvent ( unsigned char EPOEvent, class ASFXPawn_Player* PickupPawn );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* Asfxobjective_retrieve_pickupobject::pClassPointer = NULL;

// Class sfxgamempcontent.SFXGameEffect_MatchConsumable_AmmoPower
// 0x001C (0x0090 - 0x0074)
class USFXGameEffect_MatchConsumable_AmmoPower : public Usfxgameeffect_matchconsumablebase
{
public:
	class UParticleSystem*                             HologramTemplate;                                 		// 0x0074 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             IconTemplate;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              BulletsPerSecond;                                 		// 0x007C (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x0080 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 WeaponFireSound;                                  		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              DamageFloatProbabilityModifier;                   		// 0x0088 (0x0004) [0x0000000000000000]              
	class USFXPowerCustomActionMP_ConsumableAmmoPower* Power;                                            		// 0x008C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129213 ];

		return pClassPointer;
	};

	void eventOnUpdate ( float DeltaSeconds );
	float GetDamageVocProbabilityMod ( );
	void OnWeaponUnequip ( class ASFXWeapon* Weapon );
	void OnWeaponEquip ( class ASFXWeapon* Weapon );
	void OnWeaponReload ( class ASFXWeapon* Weapon );
	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
	class AActor* GetHitTarget ( struct FImpactInfo Impact );
	float GetBulletsPerSecond ( class ASFXWeapon* Weapon );
	float GetWeaponDamage ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
	void RemoveFromWeapon ( class ASFXWeapon* Weapon );
	void ApplyToWeapon ( class ASFXWeapon* Weapon );
	void OnRemoved ( );
	void SetupFromWeapon ( );
	void OnApplied ( );
};

UClass* USFXGameEffect_MatchConsumable_AmmoPower::pClassPointer = NULL;

// Class sfxgamempcontent.SFXGameEffect_MatchConsumable_AmmoPower_Cryo
// 0x0040 (0x00D0 - 0x0090)
class USFXGameEffect_MatchConsumable_AmmoPower_Cryo : public USFXGameEffect_MatchConsumable_AmmoPower
{
public:
	TArray< float >                                    SpeedReduction;                                   		// 0x0090 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< float >                                    FrostDuration;                                    		// 0x009C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< float >                                    FreezeChance;                                     		// 0x00A8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< float >                                    ArmorWeakness;                                    		// 0x00B4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UClass*                                      DamageType;                                       		// 0x00C0 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_HalfFrozenTemplate;                            		// 0x00C4 (0x0004) [0x0000000000000000]              
	float                                              DelayedFreezeRandDuration;                        		// 0x00C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DelayedFreezeStaticDuration;                      		// 0x00CC (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129264 ];

		return pClassPointer;
	};

	void DoFreezeEffect ( class ABioPawn* oHitPawn, float fDelay, struct FVector HitLocation, struct FVector HitNormal, unsigned long bForced, unsigned char ForcedResistance );
	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
};

UClass* USFXGameEffect_MatchConsumable_AmmoPower_Cryo::pClassPointer = NULL;

// Class sfxgamempcontent.sfxgameeffect_matchconsumable_ammopower_disruptor
// 0x0038 (0x00C8 - 0x0090)
class Usfxgameeffect_matchconsumable_ammopower_disruptor : public USFXGameEffect_MatchConsumable_AmmoPower
{
public:
	TArray< float >                                    Damage;                                           		// 0x0090 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< float >                                    StunChance;                                       		// 0x009C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< float >                                    ElectricComboDuration;                            		// 0x00A8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UClass*                                      DamageType;                                       		// 0x00B4 (0x0004) [0x0000000000000000]              
	float                                              ShieldRegenPenalty;                               		// 0x00B8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ShieldRegenPenaltyDuration;                       		// 0x00BC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ShieldDamageMultiplier;                           		// 0x00C0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              LastStunTime;                                     		// 0x00C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129299 ];

		return pClassPointer;
	};

	void StunEnemy ( class ABioPawn* oPawn );
	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
};

UClass* Usfxgameeffect_matchconsumable_ammopower_disruptor::pClassPointer = NULL;

// Class sfxgamempcontent.sfxobjective_retrieve_dropofflocation
// 0x0020 (0x0250 - 0x0230)
class Asfxobjective_retrieve_dropofflocation : public Asfxoperationobjective
{
public:
	struct FVector                                     DropZoneEmitterTranslation;                       		// 0x0230 (0x000C) [0x0000000000000000]              
	class UParticleSystem*                             PS_DropZoneTemplate;                              		// 0x023C (0x0004) [0x0000000000000000]              
	class ASFXEmitter*                                 DropZoneEmitter;                                  		// 0x0240 (0x0004) [0x0000000000000000]              
	float                                              DropZoneTemplateScale;                            		// 0x0244 (0x0004) [0x0000000000000000]              
	void*                                              SrDropOffObjectiveMarker;                         		// 0x0248 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class USFXEngagement_Retrieve*                     RetrieveWave;                                     		// 0x024C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129356 ];

		return pClassPointer;
	};

	void SetOwningWave ( class Usfxwave_operation* NewOwner );
	void ObjectDroppedOff ( class Asfxobjective_retrieve_pickupobject* PickUpObject );
	void ObjectPickedUp ( class ASFXPawn_Player* Player );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void eventDestroyed ( );
	void PostBeginPlay ( );
};

UClass* Asfxobjective_retrieve_dropofflocation::pClassPointer = NULL;

// Class sfxgamempcontent.SFXPawn_PlayerMP_Adept
// 0x0000 (0x1288 - 0x1288)
class ASFXPawn_PlayerMP_Adept : public Asfxpawn_playermp
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129452 ];

		return pClassPointer;
	};

	void HealthFailsafe ( );
	void RagdollFailsafe ( );
	void ResetSyncMovementFailsafeInfo ( );
	void ProcessSyncMovementFailsafe ( );
	void Tick ( float DeltaTime );
	bool eventCanDoCustomAction ( int CAction, class APawn* Sync, unsigned long bForced, int PowerCustomAction );
	bool ShouldShowHUDGrenadeCounter ( );
	void UpdateGameEffects ( );
	struct FName GetUIAppearanceTag ( );
	void Destroyed ( );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void SetExecutioner ( class APawn* Killer );
	void AttemptKillingBlow ( class APawn* Killer );
	void UpdateMappedPowerDisplay ( );
	bool CanPlayDeathEffect ( );
	void UseReviveConsumablePower ( );
	void AutoMapPC ( );
	void AutoMapXbox ( );
	bool ShouldTossWeapon ( class ASFXWeapon* ChkWeapon, class ASFXWeapon* NewWeapon );
	bool InCombat ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void LoadWeaponModData ( );
	void LoadPowerData ( );
	bool IsTestFrameworkSetupComplete ( );
	void LoadWeapons ( );
	void CreateWeapons ( class USFXLoadoutData* ChkLoadout, unsigned long bForceFromEngineLoadout );
	struct FString GetFullName ( );
	void DeferredSetRichPresence ( );
	void StopLoadingMovie ( );
	void DeferredPostBeginPlay ( );
	void PostBeginPlay ( );
	void ServerPermaDeath ( );
	void PermaDeath ( );
	void StartSpectatorCam ( );
	void PermaDeadChanged ( );
	bool eventResurrect ( float PercentOfHealthRegained, unsigned long bIsInstantaneous );
	void PreClientTravel ( );
	bool IsReadyForExecution ( class Asfxpawn* Killer );
	void IsDeadUpdated ( );
	void StartRevive ( class ASFXPawn_PlayerParty* TargetPawn );
	void FinalizeProcessFellOutOfWorld ( );
	void ServerFellOutOfWorldImpl ( );
	void eventFellOutOfWorldImpl ( );
	void BioBaseRemovedFromWorld ( );
	void OutsideWorldBounds ( );
	void FellOutOfWorld ( class UClass* dmgType );
	void ApplyCustomizationToActor ( class AActor* InTarget, class USFXCustomizationInstance* InSettings, int UIWorldConfigFlags );
	void GetMPAppearanceVariables ( int* Tint1, int* Tint2, int* Pattern, int* PatternColor, int* Phong, int* Emissive, int* SkinTone );
	void SetMPAppearanceVariables ( int Tint1, int Tint2, int Pattern, int PatternColor, int Phong, int Emissive, int SkinTone );
	void UpdateAppearance ( );
	void CopyPawnAppearance ( class ABioPawn* SourcePawn );
	void CheckEnterCombat ( );
	void PlayerRevivedMessage ( );
	void PlayerKilledMessage ( );
	void eventReplicatedEvent ( struct FName VarName );
	struct FString GetActorGameName ( );
};

UClass* ASFXPawn_PlayerMP_Adept::pClassPointer = NULL;

// Class sfxgamempcontent.SFXPowerCustomActionMP_CryoBlast
// 0x0000 (0x078C - 0x078C)
class USFXPowerCustomActionMP_CryoBlast : public USFXPowerCustomAction_CryoBlast
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135757 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void EvolvePower ( unsigned char choice );
	void RecalculateAllPowerData ( unsigned long bReset );
	struct FVector GetDefaultClientEffectParams ( );
	bool ShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void OnFrozenPawnDied ( class ABioPawn* oPawn );
	void ApplySlowdownEffect ( class ABioPawn* oPawn, float Duration );
	void ApplyFreezeEffect ( class ABioPawn* oPawn, float Duration, float fDelay, unsigned long bCallbackOnDeath );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* USFXPowerCustomActionMP_CryoBlast::pClassPointer = NULL;

// Class sfxgamempcontent.sfxpowercustomactionmp_turianpassive
// 0x0038 (0x0788 - 0x0750)
class Usfxpowercustomactionmp_turianpassive : public Usfxpowercustomactionmp_passivebase
{
public:
	struct FPowerData                                  WeaponStability;                                  		// 0x0750 (0x0030) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              Evolve_WeaponStabilityBonus1;                     		// 0x0780 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_WeaponStabilityBonus2;                     		// 0x0784 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135759 ];

		return pClassPointer;
	};

	void PopulatePowerStatBarEvolves ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	void ApplyGlobalBonus ( );
};

UClass* Usfxpowercustomactionmp_turianpassive::pClassPointer = NULL;

// Class sfxgamempcontent.SFXPawn_PlayerMP_Soldier
// 0x0000 (0x1288 - 0x1288)
class ASFXPawn_PlayerMP_Soldier : public Asfxpawn_playermp
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 135983 ];

		return pClassPointer;
	};

	void HealthFailsafe ( );
	void RagdollFailsafe ( );
	void ResetSyncMovementFailsafeInfo ( );
	void ProcessSyncMovementFailsafe ( );
	void Tick ( float DeltaTime );
	bool eventCanDoCustomAction ( int CAction, class APawn* Sync, unsigned long bForced, int PowerCustomAction );
	bool ShouldShowHUDGrenadeCounter ( );
	void UpdateGameEffects ( );
	struct FName GetUIAppearanceTag ( );
	void Destroyed ( );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void SetExecutioner ( class APawn* Killer );
	void AttemptKillingBlow ( class APawn* Killer );
	void UpdateMappedPowerDisplay ( );
	bool CanPlayDeathEffect ( );
	void UseReviveConsumablePower ( );
	void AutoMapPC ( );
	void AutoMapXbox ( );
	bool ShouldTossWeapon ( class ASFXWeapon* ChkWeapon, class ASFXWeapon* NewWeapon );
	bool InCombat ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void LoadWeaponModData ( );
	void LoadPowerData ( );
	bool IsTestFrameworkSetupComplete ( );
	void LoadWeapons ( );
	void CreateWeapons ( class USFXLoadoutData* ChkLoadout, unsigned long bForceFromEngineLoadout );
	struct FString GetFullName ( );
	void DeferredSetRichPresence ( );
	void StopLoadingMovie ( );
	void DeferredPostBeginPlay ( );
	void PostBeginPlay ( );
	void ServerPermaDeath ( );
	void PermaDeath ( );
	void StartSpectatorCam ( );
	void PermaDeadChanged ( );
	bool eventResurrect ( float PercentOfHealthRegained, unsigned long bIsInstantaneous );
	void PreClientTravel ( );
	bool IsReadyForExecution ( class Asfxpawn* Killer );
	void IsDeadUpdated ( );
	void StartRevive ( class ASFXPawn_PlayerParty* TargetPawn );
	void FinalizeProcessFellOutOfWorld ( );
	void ServerFellOutOfWorldImpl ( );
	void eventFellOutOfWorldImpl ( );
	void BioBaseRemovedFromWorld ( );
	void OutsideWorldBounds ( );
	void FellOutOfWorld ( class UClass* dmgType );
	void ApplyCustomizationToActor ( class AActor* InTarget, class USFXCustomizationInstance* InSettings, int UIWorldConfigFlags );
	void GetMPAppearanceVariables ( int* Tint1, int* Tint2, int* Pattern, int* PatternColor, int* Phong, int* Emissive, int* SkinTone );
	void SetMPAppearanceVariables ( int Tint1, int Tint2, int Pattern, int PatternColor, int Phong, int Emissive, int SkinTone );
	void UpdateAppearance ( );
	void CopyPawnAppearance ( class ABioPawn* SourcePawn );
	void CheckEnterCombat ( );
	void PlayerRevivedMessage ( );
	void PlayerKilledMessage ( );
	void eventReplicatedEvent ( struct FName VarName );
	struct FString GetActorGameName ( );
};

UClass* ASFXPawn_PlayerMP_Soldier::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif