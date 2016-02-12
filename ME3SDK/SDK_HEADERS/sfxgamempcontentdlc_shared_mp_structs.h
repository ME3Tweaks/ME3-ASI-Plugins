/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamempcontentdlc_shared_mp_structs.h
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

// ScriptStruct sfxgamempcontentdlc_shared_mp.SFXGAWReinforcementMatchConsumable_Gear.GearDescriptionTokens
// 0x0048
struct FGearDescriptionTokens
{
	struct FString                                     UniqueName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    Custom0Tokens;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    Custom1Tokens;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    Custom2Tokens;                                    		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Custom3Tokens;                                    		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Custom4Tokens;                                    		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ChallengeUIData
// 0x003E
struct FChallengeUIData
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayTitle;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayBody;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Image;                                            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentValue;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                GoalValue;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                NumCompletions;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned char                                      Icon;                                             		// 0x003C (0x0001) [0x0000000000000000]              
	unsigned char                                      Rank;                                             		// 0x003D (0x0001) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ChallengeDisplayItem
// 0x006C
struct FChallengeDisplayItem
{
	struct FChallengeUIData                            UIData;                                           		// 0x0000 (0x0040) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     ImageOverride;                                    		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AccomplishmentIndex;                              		// 0x004C (0x0004) [0x0000000000000000]              
	void*                                              TitleOverride;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	void*                                              BodyOverride;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                Parent;                                           		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                VisibilityStartTime;                              		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                VisibilityEndTime;                                		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                VisibilityEntitlement;                            		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                ParentItemIndex;                                  		// 0x0068 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct sfxgamempcontentdlc_shared_mp.SFXGUI_MPChallenges.ChallengeListItem
// 0x0015
struct FChallengeListItem
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nIndex;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nID;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      eIcon;                                            		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct sfxgamempcontentdlc_shared_mp.SFXGUI_MPSelectKit_DLC.KitDescriptionData
// 0x0030
struct FKitDescriptionData
{
	struct FString                                     KitName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	void*                                              ClassString;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	void*                                              IPNameString;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	void*                                              IPEntryString;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	void*                                              GameplayEntryString;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	void*                                              StatsString1;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	void*                                              StatsString2;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	void*                                              StatsString3;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	void*                                              StatsString4;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	void*                                              StatsString5;                                     		// 0x002C (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif