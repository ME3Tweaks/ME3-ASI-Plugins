/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamempcontent_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct sfxgamempcontent.SFXGAWReinforcementBase.CardInfoData
// 0x0066
struct FCardInfoData
{
	struct FString                                     UniqueName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GUIType;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GUITextureRef;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PoolName;                                         		// 0x0024 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                UniqueId;                                         		// 0x0030 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MaxCount;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	void*                                              GUIName;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
	void*                                              GUIDescription;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                GUIIconIndex;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                PVIncrementBonus;                                 		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                VersionIdx;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                Category;                                         		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                LevelAwarded;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                StringToken;                                      		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USFXGAWReinforcementBase*                    CardOwner;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                Entitlement;                                      		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseVersionIdx : 1;                               		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      Rarity;                                           		// 0x0064 (0x0001) [0x0000000000000000]              
	unsigned char                                      GUICategory;                                      		// 0x0065 (0x0001) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxgawreinforcementmanager.ConsumableToPackEntry
// 0x0010
struct FConsumableToPackEntry
{
	struct FString                                     PackName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxgawreinforcementmanager.CardPoolEntry
// 0x0010
struct FCardPoolEntry
{
	struct FString                                     PoolName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Weight;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxgawreinforcementmanager.CardPackEntry
// 0x0028
struct FCardPackEntry
{
	struct FString                                     PackName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCardPoolEntry >                    Pools;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BackupPool;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Quantity;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxgawreinforcementmanager.StoreImageData
// 0x000D
struct FStoreImageData
{
	struct FString                                     ImageReference;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ImageLocation;                                    		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxgawreinforcementmanager.VisibleCondition
// 0x000C
struct FVisibleCondition
{
	TArray< int >                                      and;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct sfxgamempcontent.sfxgawreinforcementmanager.StoreInfoEntry
// 0x0080
struct FStoreInfoEntry
{
	struct FStoreImageData                             ImageData;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PackName;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVisibleCondition >                 visible;                                          		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      RequiredDLCModuleIDs;                             		// 0x0028 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     RevealIntroTextureRef;                            		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RevealIntroHoloTextureRef;                        		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       RevealIntroSound;                                 		// 0x004C (0x0008) [0x0000000000000000]              
	int                                                nID;                                              		// 0x0054 (0x0004) [0x0000000000000000]              
	void*                                              Title;                                            		// 0x0058 (0x0004) [0x0000000000000000]              
	void*                                              SubTitle;                                         		// 0x005C (0x0004) [0x0000000000000000]              
	void*                                              Description;                                      		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                CreditCost;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              ExpirationTime;                                   		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              RevealTime;                                       		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                offerId;                                          		// 0x0070 (0x0004) [0x0000000000000000]              
	void*                                              srPromoString;                                    		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                PerPlayerMax;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDisabled : 1;                                    		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct sfxgamempcontent.sfxgawreinforcementmanager.StoreGUIData
// 0x0055
struct FStoreGUIData
{
	struct FStoreImageData                             ImageData;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayTitle;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplaySubtitle;                                  		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DescriptionTitle;                                 		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PromoText;                                        		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nID;                                              		// 0x004C (0x0004) [0x0000000000000000]              
	unsigned long                                      bExpires : 1;                                     		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      EPurchaseType;                                    		// 0x0054 (0x0001) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.SFXWave_Horde.SpawnedEnemy
// 0x0008
struct FSpawnedEnemy
{
	class APawn*                                       Enemy;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                IndexInEnemyList;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxwave_operation.SFXOperation_ObjectiveRequirement
// 0x0014
struct FSFXOperation_ObjectiveRequirement
{
	struct FString                                     ObjectiveType;                                    		// 0x0000 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                MinimumObjectivesRequired;                        		// 0x000C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaximumObjectivesAllowed;                         		// 0x0010 (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct sfxgamempcontent.sfxwave_operation.SFXOperation_ObjectiveToSpawn
// 0x0008
struct FSFXOperation_ObjectiveToSpawn
{
	class USFXOperation_ObjectiveData*                 ObjectiveData;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsObjectiveAllocatedForSpawn : 1;                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct sfxgamempcontent.sfxwave_operation.SFXOperation_ObjectiveGroupToSpawn
// 0x0014
struct FSFXOperation_ObjectiveGroupToSpawn
{
	TArray< struct FSFXOperation_ObjectiveToSpawn >    ObjectivesToSpawn;                                		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MinimumObjectivesToSpawn;                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                MaximumObjectivesToSpawn;                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxwave_operation.SFXOperation_ObjectiveSpawnPointData
// 0x000C
struct FSFXOperation_ObjectiveSpawnPointData
{
	class AActor*                                      ObjectiveActor;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	class ASFXCombatZone*                              CombatZone;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class AActor*                                      AnnexZoneLocation;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxwave_operation.MapSpecificSpawnPointFix
// 0x0028
struct FMapSpecificSpawnPointFix
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     SpawnOffset;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	struct FName                                       ObjectiveSpawnPointName;                          		// 0x0018 (0x0008) [0x0000000000000000]              
	float                                              CollisionCylinderHeightAdd;                       		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              CollisionCylinderRadiusAdd;                       		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.SFXWave_Horde.EnemySpawnInfo
// 0x001C
struct FEnemySpawnInfo
{
	struct FString                                     EnemyArchetypeName;                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       EnemyType;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	class APawn*                                       EnemyArchetype;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                WaveCost;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxwavemanager_horde.WaveType
// 0x0010
struct FWaveType
{
	struct FString                                     WaveClassName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectionWeight;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxgawreinforcementmatchconsumable.DescriptionTokens
// 0x0034
struct FDescriptionTokens
{
	struct FString                                     UniqueName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Custom0Token;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Custom1Token;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Custom2Token;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              Custom3Token;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Custom4Token;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              Custom5Token;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Custom6Token;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              Custom7Token;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              Custom8Token;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                Custom9Token;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxgrimp_lobby.LobbyMatchTimerInfo
// 0x000C
struct FLobbyMatchTimerInfo
{
	float                                              fMatchStartTimerValue;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fAllPlayersReadyTimerDuration;                    		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMatchStartTimerRunning : 1;                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct sfxgamempcontent.sfxguimoviemp.MatchSettingsDisplayInfo
// 0x0048
struct FMatchSettingsDisplayInfo
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     EnemyName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ChallengeName;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Wave;                                             		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                privacy;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                MapId;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                Enemy;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                Challenge;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                Time;                                             		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      isPrivate : 1;                                    		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRandomMap : 1;                                   		// 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRandomEnemy : 1;                                 		// 0x0044 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bMissionSuccessful : 1;                           		// 0x0044 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct sfxgamempcontent.sfxgui_mpappearance.PatternData
// 0x0008
struct FPatternData
{
	int                                                PatternID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	void*                                              PatternName;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.SFXGUI_MPHUD.SFXMPHUD_TickerEntry
// 0x0018
struct FSFXMPHUD_TickerEntry
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TimeToLive;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                MovieIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      Fading : 1;                                       		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct sfxgamempcontent.SFXGUI_MPHUD.SFXMPHUD_TickerMovie
// 0x000C
struct FSFXMPHUD_TickerMovie
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxValue*                                   TickerMovie;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CurrentSlot;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.SFXGUI_MPHUD.MPUIObjectiveCircle
// 0x0018
struct FMPUIObjectiveCircle
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxValue*                                   MovieClip;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              PercentComplete;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      Complete : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct sfxgamempcontent.sfxgui_mplobby.MatchConsumableDisplayInfo
// 0x001C
struct FMatchConsumableDisplayInfo
{
	struct FString                                     MatchConsumableIconRef;                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MatchConsumableName;                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Category;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxgui_mplobby.WeaponDisplayInfo
// 0x0040
struct FWeaponDisplayInfo
{
	struct FString                                     WeaponIconResource;                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WeaponImage;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WeaponName;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WeaponMod1Reference;                              		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WeaponMod2Reference;                              		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                WeaponIconIndex;                                  		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxgui_mplobby.PowerDisplayInfo
// 0x001C
struct FPowerDisplayInfo
{
	struct FString                                     PowerIconResource;                                		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PowerName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PowerIconIndex;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxgui_mplobby.PlayerDisplayInfo
// 0x00B8
struct FPlayerDisplayInfo
{
	struct FString                                     Gamertag;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClassData;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CurrentXPString;                                  		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NextLevelXPString;                                		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CombinedXPString;                                 		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Credits;                                          		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     KitTextureRef;                                    		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SmallKitTextureRef;                               		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClassIconTextureRef;                              		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     KitPrettyName;                                    		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPowerDisplayInfo >                 PowerData;                                        		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FWeaponDisplayInfo >                WeaponData;                                       		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMatchConsumableDisplayInfo >       MatchConsumableData;                              		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                XPPercentage;                                     		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                Rating;                                           		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                NumKickVotesReceived;                             		// 0x00B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      Ready : 1;                                        		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsLocalPlayer : 1;                                		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsLeader : 1;                                     		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct sfxgamempcontent.sfxgui_mplobby.LobbyOnlineImageRequest
// 0x001C
struct FLobbyOnlineImageRequest
{
	struct FSFXOnlineImageRequest                      request;                                          		// 0x0000 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      RecentlyRequested : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct sfxgamempcontent.sfxgui_mplobby.InGameConsumableInfo
// 0x0028
struct FInGameConsumableInfo
{
	struct FString                                     ConsumableName;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ConsumableIconResource;                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ConsumableIconIndex;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                ConsumableCount;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                ConsumableCap;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                UniqueId;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxgui_mplobby.PlayerDisplayInfo_Patch
// 0x000C
struct FPlayerDisplayInfo_Patch
{
	int                                                NumClassPromotions;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                EmblemID;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                NumChallengesComplete;                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxprimp.MapConfigData
// 0x0019
struct FMapConfigData
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              XPMultiplier;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              CreditsMultiplier;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ZoneIncrease;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      ZoneID;                                           		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxprimp.EmblemDisplayInfo
// 0x0014
struct FEmblemDisplayInfo
{
	struct FString                                     BackgroundResource;                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	void*                                              srTitle;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxgui_mpmatchconsumables.ConsumableDisplayInfo
// 0x003C
struct FConsumableDisplayInfo
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Image;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USFXGAWReinforcementBase*                    CardOwner;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                ConsumableID;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                Version;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                Category;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      Disabled : 1;                                     		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Active : 1;                                       		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      New : 1;                                          		// 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct sfxgamempcontent.sfxgui_mpmatchconsumables.CardInfoDataSupplemental
// 0x0008
struct FCardInfoDataSupplemental
{
	void*                                              GUIDescription;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	void*                                              GUIDescription_GoBig;                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxgui_mpmatchresults.RewardMedalData
// 0x0018
struct FRewardMedalData
{
	struct FString                                     MedalIconRef;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MedalDescription;                                 		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct sfxgamempcontent.sfxgui_mpmatchresults.PlayerMatchResultData
// 0x0040
struct FPlayerMatchResultData
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClassData;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClassIconRef;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FRewardMedalData >                  Medals;                                           		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlayerDataIdx;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                TotalMatchXP;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                MatchXPPercentage;                                		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      bExtracted : 1;                                   		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsLocal : 1;                                     		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct sfxgamempcontent.sfxgui_mppausemenu.PauseMenuScoreData
// 0x0014
struct FPauseMenuScoreData
{
	struct FString                                     DisplayName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PRIIndex;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxgui_mpreinforcementsreveal.CardTypeText
// 0x001C
struct FCardTypeText
{
	struct FString                                     CardType;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	void*                                              GUIDescription;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	void*                                              GUIDupeDescription;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	void*                                              GUIType;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	void*                                              GUIDupeType;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxgui_mpreinforcementsreveal.CardDisplayData
// 0x0038
struct FCardDisplayData
{
	struct FString                                     DisplayName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayDescription;                               		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TextureReference;                                 		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CardTypeText;                                     		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CardType;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsNew : 1;                                        		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct sfxgamempcontent.sfxgui_mpselectkit.ClassDisplayData
// 0x004C
struct FClassDisplayData
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayName;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CurrentLevelText;                                 		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CurrentXPString;                                  		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NextLevelXPString;                                		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentLevel;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                XPPercentage;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                NumPromotions;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanPromote : 1;                                  		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanLevelKit : 1;                                 		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHasNewKit : 1;                                   		// 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct sfxgamempcontent.sfxgui_mpselectkit.KitDisplayData
// 0x007C
struct FKitDisplayData
{
	struct FString                                     KitName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     KitDisplayName;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CharacterName;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TextureReference;                                 		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LockedTextureReference;                           		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PowerIconResource;                                		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PowerDescription1;                                		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PowerDescription2;                                		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PowerDescription3;                                		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PowerIcon1;                                       		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                PowerIcon2;                                       		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                PowerIcon3;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLocked : 1;                                      		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDeployed : 1;                                    		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNeedsLevelUp : 1;                                		// 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct sfxgamempcontent.sfxgui_mpstore.StoreImage
// 0x0014
struct FStoreImage
{
	struct FString                                     ImagePath;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture2D*                                  ImageTexture;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bValid : 1;                                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct sfxgamempcontent.sfxhostmigrationmp.HMPlayer
// 0x0038
struct FHMPlayer
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PlayerMedals;                                     		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FActiveMatchConsumable >            ActiveMatchConsumables;                           		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScoreInfo                                  Score;                                            		// 0x002C (0x000C) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxhostmigrationmp.HMGame
// 0x0020
struct FHMGame
{
	TArray< int >                                      SquadMedals;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PrivacySetting;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                MapSetting;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                EnemySetting;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                DifficultySetting;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRandomMap : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRandomEnemy : 1;                                 		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct sfxgamempcontent.sfxhostmigrationmp.HMMatch
// 0x0050
struct FHMMatch
{
	struct FWaveEventInfo                              Wave;                                             		// 0x0000 (0x0020) [0x0000000000000000]              
	struct FHMGame                                     Game;                                             		// 0x0020 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FHMPlayer >                         Players;                                          		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bValidGame : 1;                                   		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bValidPlayers : 1;                                		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bValidWave : 1;                                   		// 0x004C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsMissionComplete : 1;                           		// 0x004C (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct sfxgamempcontent.sfxoperationobjective.ReplicatedMeshInfoStruct
// 0x0008
struct FReplicatedMeshInfoStruct
{
	int                                                MeshUniqueID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ObjectiveTypeID;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxpawn_playermp.SyncMovementFailsafe
// 0x0010
struct FSyncMovementFailsafe
{
	float                                              LastZLocation;                                    		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ActiveStartTime;                                  		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                OscillationCount;                                 		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      ZDeltaPositive : 1;                               		// 0x000C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      IsActive : 1;                                     		// 0x000C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
};

// ScriptStruct sfxgamempcontent.sfxprimp.MPPowerData
// 0x0024
struct FMPPowerData
{
	int                                                EvolvedChoices[ 0x6 ];                            		// 0x0000 (0x0018) [0x0000000000000000]              
	float                                              CurrentRank;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                PowerClassPathID;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      IsValid : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct sfxgamempcontent.sfxprimp.MPWeaponModData
// 0x0008
struct FMPWeaponModData
{
	int                                                WeaponModClassPathID;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                WeaponModLevel;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxprimp.MPWeaponData
// 0x001C
struct FMPWeaponData
{
	struct FMPWeaponModData                            WeaponMods[ 0x2 ];                                		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                WeaponClassPathID;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                WeaponLevel;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsValid : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct sfxgamempcontent.sfxprimp.MPCharacterData
// 0x0048
struct FMPCharacterData
{
	struct FString                                     CharacterName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CharacterKitID;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	void*                                              ClassPrettyName;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              XP;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                n7Rating;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                NumClassPromotions;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Tint1ID;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Tint2ID;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                PatternID;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                PatternColorID;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                PhongID;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                EmissiveID;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                SkinToneID;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                EmblemID;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                ChallengePoints;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.SFXWave_Horde.PetData
// 0x000C
struct FPetData
{
	struct FName                                       className;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                WaveCost;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.SFXWave_Horde.EnemySquadInfo
// 0x0010
struct FEnemySquadInfo
{
	TArray< struct FName >                             EnemyTypes;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                WaveCost;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.SFXWave_Horde.BerserkStartCount
// 0x0005
struct FBerserkStartCount
{
	int                                                EnemiesLeft;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Difficulty;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.SFXWave_Horde.DifficultyLevelEnemies
// 0x000D
struct FDifficultyLevelEnemies
{
	TArray< struct FEnemyWaveInfo >                    Enemies;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Difficulty;                                       		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxwavecoordinator_hordeoperation.OperationWave
// 0x0008
struct FOperationWave
{
	int                                                WaveNumber;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              CreditScale;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxwavemanager_horde.WavePointRange
// 0x0009
struct FWavePointRange
{
	struct FVector2D                                   PointRange;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      Difficulty;                                       		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontent.sfxobjective_retrieve_pickupobject.ReplicatedPickupObject
// 0x0006
struct FReplicatedPickupObject
{
	class ASFXPawn_Player*                             PickedUpBy;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      EPOEvent;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      Trigger;                                          		// 0x0005 (0x0001) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif