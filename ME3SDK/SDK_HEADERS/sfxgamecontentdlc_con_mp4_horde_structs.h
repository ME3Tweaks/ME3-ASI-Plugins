/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontentdlc_con_mp4_horde_structs.h
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

// ScriptStruct sfxgamecontentdlc_con_mp4_horde.SFXGUI_CollectorHUDOverlay.CollectorSwarmOverlay
// 0x001C
struct FCollectorSwarmOverlay
{
	struct FString                                     Id;                                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector2D                                   Offset;                                           		// 0x000C (0x0008) [0x0000000000000000]              
	class UGFxValue*                                   Overlay;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	class USFXGUIValue_PowerIcon*                      PowerIcon;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif