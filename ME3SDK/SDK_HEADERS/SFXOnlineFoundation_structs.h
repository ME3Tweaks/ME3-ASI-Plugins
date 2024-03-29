/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXOnlineFoundation_structs.h
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

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentCommerce.BWOfferId
// 0x0004
struct FBWOfferId
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentCommerce.BWOfferInfo
// 0x0038
struct FBWOfferInfo
{
	struct FString                                     sTitle;                                           		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sShortDescription;                                		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sLongDescription;                                 		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sPrice;                                           		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FBWOfferId                                  Id;                                               		// 0x0030 (0x0004) [0x0000000000100000]              
	int                                                nPrice;                                           		// 0x0034 (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentCommerce.BWEntitlementId
// 0x0004
struct FBWEntitlementId
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentCommerce.BWEntitlementToken
// 0x0024
struct FBWEntitlementToken
{
	struct FString                                     sKey;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sValue;                                           		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentCommerce.BWEntitlementInfo
// 0x0010
struct FBWEntitlementInfo
{
	TArray< struct FBWEntitlementToken >               sTokens;                                          		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FBWEntitlementId                            Id;                                               		// 0x000C (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentCommerce.BWConsumableId
// 0x0004
struct FBWConsumableId
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentCommerce.BWConsumableInfo
// 0x0008
struct FBWConsumableInfo
{
	struct FBWConsumableId                             Id;                                               		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                nCopies;                                          		// 0x0004 (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.MessageEntry
// 0x0034
struct FMessageEntry
{
	struct FString                                     SourceName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     param1;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     param2;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     param3;                                           		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                messageId;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.AttributeMapEntry
// 0x0010
struct FAttributeMapEntry
{
	struct FString                                     Value;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                EntryId;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.MapEntry
// 0x0008
struct FMapEntry
{
	int                                                EntryId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                IncreaseValue;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.MPDLCInfo
// 0x0014
struct FMPDLCInfo
{
	TArray< struct FString >                           MapPackageNames;                                  		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ModuleID;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	void* PrettyName;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineRankNotification
// 0x0014
struct FSFXOnlineRankNotification
{
	struct FString                                     FriendPersonaName;                                		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MapId;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bBeaten : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.LeaderboardColumn
// 0x0034
struct FLeaderboardColumn
{
	struct FString                                     Heading;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sMetaData;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     HeaderMovieClip;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RowEntryMovieClip;                                		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Width_Px;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.LeaderboardRecord
// 0x0018
struct FLeaderboardRecord
{
	struct FUniqueNetId                                uidEntity;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FString >                           sRecordData;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nRank;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.LeaderboardStatScopeValuePair
// 0x0010
struct FLeaderboardStatScopeValuePair
{
	struct FString                                     KeyScope;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Value;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.LeaderboardStatScope
// 0x000C
struct FLeaderboardStatScope
{
	TArray< struct FLeaderboardStatScopeValuePair >    KeyScopePairs;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineErrorMappingEntry
// 0x000E
struct FSFXOnlineErrorMappingEntry
{
	struct FString                                     LocalizationKey;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ErrorContext;                                     		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      errorCode;                                        		// 0x000D (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.SFXOnline_OfferID
// 0x0008
struct FSFXOnline_OfferID
{
	int                                                nHigh;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nLow;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineDefine.SFXOfferDescriptor
// 0x0050
struct FSFXOfferDescriptor
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Image;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     grantEntitlementName;                             		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     grantEntitlementGroup;                            		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFXOnline_OfferID                          externalId;                                       		// 0x003C (0x0008) [0x0000000000000000]              
	int                                                Price;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                internalId;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      UserHasIt : 1;                                    		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.LeaderboardDefinition
// 0x0014
struct FLeaderboardDefinition
{
	struct FString                                     sPrettyName;                                      		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nID;                                              		// 0x000C (0x0004) [0x0000000000100000]              
	unsigned long                                      bFriends : 1;                                     		// 0x0010 (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.LeaderboardMapGroup
// 0x0018
struct FLeaderboardMapGroup
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FLeaderboardDefinition >            Entries;                                          		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.PatchLeaderboardDefinitionExtra
// 0x000C
struct FPatchLeaderboardDefinitionExtra
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000100000]              
	void* srTitleStrRef;                                    		// 0x0004 (0x0004) [0x0000000000100000]              
	unsigned long                                      bUsesLocalString : 1;                             		// 0x0008 (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.RankBypassNotification
// 0x0010
struct FRankBypassNotification
{
	struct FString                                     sEntityName;                                      		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	void* srMessage;                                        		// 0x000C (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentLogin.SFXOnlineAccountCountryListItem
// 0x0018
struct FSFXOnlineAccountCountryListItem
{
	struct FString                                     ISOCode;                                          		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineDLCInfo
// 0x0074
struct FSFXOnlineDLCInfo
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     entitlementGroup;                                 		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     entitlementName;                                  		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     grantEntitlementGroup;                            		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     grantEntitlementName;                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Image;                                            		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     offerKey;                                         		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFXOnline_OfferID                          externalId;                                       		// 0x0060 (0x0008) [0x0000000000000000]              
	int                                                internalId;                                       		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                Price;                                            		// 0x006C (0x0004) [0x0000000000000000]              
	unsigned long                                      isEntitled : 1;                                   		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineEntitlementLookupInfo
// 0x0034
struct FSFXOnlineEntitlementLookupInfo
{
	struct FBWEntitlementInfo                          BWEntitlement;                                    		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sGroupName;                                       		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sEntitlementName;                                 		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sProductId;                                       		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineMOTDInfo
// 0x0035
struct FSFXOnlineMOTDInfo
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Image;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TrackingID;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                BWEntId;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                offerId;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0034 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.ISFXOnlineComponentTelemetry.TelemetryAttribute
// 0x001D
struct FTelemetryAttribute
{
	struct FString                                     sData;                                            		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Key;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nData;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fData;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bData : 1;                                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      Type;                                             		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineBlazeJobUtilities.SettingsPair
// 0x0018
struct FSettingsPair
{
	struct FString                                     Key;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponent.SFXOnlineSubscriberEventType
// 0x0009
struct FSFXOnlineSubscriberEventType
{
	struct FName                                       EventCallback;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      EventType;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeGame.InviteData
// 0x000C
struct FInviteData
{
	TArray< struct FScriptDelegate >                   InviteDelegates;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.LeaderboardId
// 0x0018
struct FLeaderboardId
{
	struct FString                                     sLbName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLeaderboardStatScope                       Scope;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.BlazeRequest
// 0x0028
struct FBlazeRequest
{
	struct FUniqueNetId                                pUniquePlayerId;                                  		// 0x0000 (0x0008) [0x0000000000100000]              
	struct FLeaderboardStatScope                       Scope;                                            		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FPointer                                    pJobId;                                           		// 0x0014 (0x0004) [0x0000000000101000]              ( CPF_Native )
	struct FPointer                                    pExternalData;                                    		// 0x0018 (0x0004) [0x0000000000101000]              ( CPF_Native )
	int                                                nRequestedRecordsStartRank;                       		// 0x001C (0x0004) [0x0000000000100000]              
	int                                                nRequestedRecordsRange;                           		// 0x0020 (0x0004) [0x0000000000100000]              
	unsigned long                                      bRequestedCenteredData : 1;                       		// 0x0024 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned long                                      bRequestedFriendData : 1;                         		// 0x0024 (0x0004) [0x0000000000100000] [0x00000002] 
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.LeaderboardNameFormula
// 0x0010
struct FLeaderboardNameFormula
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      AppendLocaleCode : 1;                             		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.LeaderboardScopeDefinition
// 0x0024
struct FLeaderboardScopeDefinition
{
	struct FString                                     KeyScope;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQWord >                            StartKeyScopeValue;                               		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQWord >                            EndKeyScopeValue;                                 		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.RankChangeNotificationRawData
// 0x0024
struct FRankChangeNotificationRawData
{
	struct FString                                     sPreviousFriendRankBlob;                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLeaderboardRecord >                aRankResults;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nPreviousLocalUserRank;                           		// 0x0018 (0x0004) [0x0000000000000000]              
	void* srFriendBeatMe;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	void* srFriendBeatByMe;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.AutoConnectAccount
// 0x0018
struct FAutoConnectAccount
{
	struct FString                                     email;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeMessaging.BlazeMsgRequest
// 0x0011
struct FBlazeMsgRequest
{
	TArray< struct FString >                           Params;                                           		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FPointer                                    pJobId;                                           		// 0x000C (0x0004) [0x0000000000101000]              ( CPF_Native )
	unsigned char                                      MessageType;                                      		// 0x0010 (0x0001) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentBlazeStats.BlazeStatsRequest
// 0x0020
struct FBlazeStatsRequest
{
	struct FUniqueNetId                                pUniquePlayerId;                                  		// 0x0000 (0x0008) [0x0000000000100000]              
	struct FLeaderboardStatScope                       Scope;                                            		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FPointer                                    pJobId;                                           		// 0x0014 (0x0004) [0x0000000000101000]              ( CPF_Native )
	struct FPointer                                    pExternalData;                                    		// 0x0018 (0x0004) [0x0000000000101000]              ( CPF_Native )
	int                                                nRequestedRecordsRange;                           		// 0x001C (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentImageManager.SFXOnlineImageRequest
// 0x0018
struct FSFXOnlineImageRequest
{
	struct FString                                     mImageName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USFXOnlineJobHTTPRequest* mJob;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	class UTexture2D* mDynamicImage;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      mCompleted : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentOrigin.PCFriend
// 0x0054
struct FPCFriend
{
	struct FQWord                                      FriendID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FQWord                                      PersonaId;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FString                                     FriendName;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AvatarID;                                         		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TitleId;                                          		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Group;                                            		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PresenceState;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                FriendState;                                      		// 0x0050 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.SFXPS3_MinimumAgeData
// 0x0010
struct FSFXPS3_MinimumAgeData
{
	struct FString                                     Country;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MinimumAge;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.SFXPS3_BootCheckData
// 0x0024
struct FSFXPS3_BootCheckData
{
	struct FString                                     DirName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Type;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Attributes;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                hddFreeSizeKB;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                sizeKB;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                sysSizeKB;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Commerce2Userdata;                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.SFXOnlineXenonCustomPlayerListButton
// 0x000D
struct FSFXOnlineXenonCustomPlayerListButton
{
	struct FString                                     CustomText;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Type;                                             		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CachedLoginState
// 0x0011
struct FCachedLoginState
{
	struct FUniqueNetId                                OnlineXuid;                                       		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FUniqueNetId                                OfflineXuid;                                      		// 0x0008 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      LoginStatus;                                      		// 0x0010 (0x0001) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.SFXCachedAchievements
// 0x0019
struct FSFXCachedAchievements
{
	TArray< struct FAchievementDetails >               Achievements;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlayerNum;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TitleId;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	class USurface* TempImage;                                        		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      ReadState;                                        		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.SFXProfileSettingsCache
// 0x0028
struct FSFXProfileSettingsCache
{
	TArray< struct FScriptDelegate >                   ReadDelegates;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteDelegates;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ProfileDataChangedDelegates;                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineProfileSettings* Profile;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.BioPerUserDelegateLists
// 0x0018
struct FBioPerUserDelegateLists
{
	TArray< struct FScriptDelegate >                   AchievementDelegates;                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AchievementReadDelegates;                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.LoginStatusDelegates
// 0x000C
struct FLoginStatusDelegates
{
	TArray< struct FScriptDelegate >                   Delegates;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.SFXDeviceIdCache
// 0x001C
struct FSFXDeviceIdCache
{
	struct FScriptDelegate                             DeviceSelectionMulticast;                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DeviceSelectionDelegates;                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DeviceID;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.TalkerPriority
// 0x0008
struct FTalkerPriority
{
	int                                                CurrentPriority;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LastPriority;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.SFXOnlineRemoteTalker
// 0x0020(0x002C - 0x000C)
struct FSFXOnlineRemoteTalker : FRemoteTalker
{
	struct FTalkerPriority                             LocalPriorities[0x4];                           		// 0x000C (0x0020) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty.PartyGameInviteDelegates
// 0x000C
struct FPartyGameInviteDelegates
{
	TArray< struct FScriptDelegate >                   Delegates;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineEventNotifier.SFXOnlineNotifyQueueInfo
// 0x000D
struct FSFXOnlineNotifyQueueInfo
{
	struct FScriptDelegate                             EventCallback;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      EventType;                                        		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineEventNotifier.SFXOnlineEventNotify
// 0x0018
struct FSFXOnlineEventNotify
{
	TArray< struct FScriptDelegate >                   Subscribers;                                      		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   Waiters;                                          		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineGameSettings.MPMapInfo
// 0x0040
struct FMPMapInfo
{
	struct FString                                     PackageName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Image;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     GalaxyAtWarMapPosition;                           		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FName                                       MusicEventName;                                   		// 0x0024 (0x0008) [0x0000000000000000]              
	int                                                Id;                                               		// 0x002C (0x0004) [0x0000000000000000]              
	int PrettyName;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	int Description;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	int GalaxyAtWarMapSubtitle;                           		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      EveryoneHasThisMap : 1;                           		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineGameSettings.MPPrivacyInfo
// 0x0018
struct FMPPrivacyInfo
{
	struct FString                                     Image;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	void* Name;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	void* AllCapsName;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineGameSettings.MPEnemyInfo
// 0x0024
struct FMPEnemyInfo
{
	struct FString                                     Image;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WaveClass;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	int Name;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	int AllCapsName;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineGameSettings.MPChallengeInfo
// 0x0018
struct FMPChallengeInfo
{
	struct FString                                     Image;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Name;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                AllCapsName;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineHTTPRequest.HTTPParameter
// 0x0018
struct FHTTPParameter
{
	struct FString                                     mName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mValue;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXOnlineFoundation.SFXOnlineSubsystem.SFXOnlineComponentDescription
// 0x000D
struct FSFXOnlineComponentDescription
{
	class UClass* className;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       PlatformName;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      ComponentType;                                    		// 0x000C (0x0001) [0x0000000000000000]              
};


#ifdef _MSC_VER
#pragma pack ( pop )
#endif