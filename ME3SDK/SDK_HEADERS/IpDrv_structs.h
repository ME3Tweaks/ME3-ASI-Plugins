/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: IpDrv_structs.h
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

// ScriptStruct IpDrv.InternetLink.IpAddr
// 0x0008
struct FIpAddr
{
	int                                                Addr;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Port;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeacon.ConnectionBandwidthStats
// 0x000C
struct FConnectionBandwidthStats
{
	int                                                UpstreamRate;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DownstreamRate;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RoundtripLatency;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeacon.PlayerMember
// 0x0010
struct FPlayerMember
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                TeamNum;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Skill;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeaconClient.ClientConnectionRequest
// 0x0021
struct FClientConnectionRequest
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FConnectionBandwidthStats >         BandwidthHistory;                                 		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              GoodHostRatio;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                MinutesSinceLastTest;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanHostVs : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      NatType;                                          		// 0x0020 (0x0001) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeaconClient.ClientBandwidthTestData
// 0x0012
struct FClientBandwidthTestData
{
	int                                                NumBytesToSendTotal;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NumBytesSentTotal;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                NumBytesSentLast;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              ElapsedTestTime;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      testType;                                         		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentState;                                     		// 0x0011 (0x0001) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeaconHost.ClientConnectionBandwidthTestData
// 0x0026
struct FClientConnectionBandwidthTestData
{
	struct FDouble                                     RequestTestStartTime;                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FDouble                                     TestStartTime;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FConnectionBandwidthStats                   BandwidthStats;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
	int                                                BytesTotalNeeded;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                BytesReceived;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrentState;                                     		// 0x0024 (0x0001) [0x0000000000000000]              
	unsigned char                                      testType;                                         		// 0x0025 (0x0001) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeaconHost.ClientMeshBeaconConnection
// 0x0051
struct FClientMeshBeaconConnection
{
	struct FClientConnectionBandwidthTestData          BandwidthTest;                                    		// 0x0000 (0x0028) [0x0000000000000000]              
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0028 (0x0008) [0x0000000000000000]              
	TArray< struct FConnectionBandwidthStats >         BandwidthHistory;                                 		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    Socket;                                           		// 0x003C (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	float                                              ElapsedHeartbeatTime;                             		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              GoodHostRatio;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                MinutesSinceLastTest;                             		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      bConnectionAccepted : 1;                          		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanHostVs : 1;                                   		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      NatType;                                          		// 0x0050 (0x0001) [0x0000000000000000]              
};

// ScriptStruct IpDrv.OnlineEventsInterfaceMcp.EventUploadConfig
// 0x0015
struct FEventUploadConfig
{
	struct FString                                     UploadUrl;                                        		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	float                                              TimeOut;                                          		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bUseCompression : 1;                              		// 0x0010 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned char                                      UploadType;                                       		// 0x0014 (0x0001) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct IpDrv.OnlineNewsInterfaceMcp.NewsCacheEntry
// 0x0026
struct FNewsCacheEntry
{
	struct FString                                     NewsUrl;                                          		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     NewsItem;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    HttpDownloader;                                   		// 0x0018 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	float                                              TimeOut;                                          		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsUnicode : 1;                                   		// 0x0020 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned char                                      ReadState;                                        		// 0x0024 (0x0001) [0x0000000000000000]              
	unsigned char                                      NewsType;                                         		// 0x0025 (0x0001) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct IpDrv.PartyBeacon.PlayerReservation
// 0x0024
struct FPlayerReservation
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FDouble                                     Mu;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FDouble                                     Sigma;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                Skill;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                XPLevel;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              ElapsedSessionTime;                               		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.PartyBeacon.PartyReservation
// 0x0018
struct FPartyReservation
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FPlayerReservation >                PartyMembers;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TeamNum;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.PartyBeaconHost.ClientBeaconConnection
// 0x0010
struct FClientBeaconConnection
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    Socket;                                           		// 0x0008 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	float                                              ElapsedHeartbeatTime;                             		// 0x000C (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif