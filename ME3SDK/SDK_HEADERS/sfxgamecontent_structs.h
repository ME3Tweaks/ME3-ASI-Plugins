/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontent_structs.h
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

// ScriptStruct sfxgamecontent.sfxpawn_sentryturret.ReplicatedTurretCreator
// 0x0008
struct FReplicatedTurretCreator
{
	class ABioPawn*                                    Creator;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CreatorPowerCustomActionIndex;                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamecontent.sfxpawn_decoy.ReplicatedDecoyCreator
// 0x0008
struct FReplicatedDecoyCreator
{
	class ABioPawn*                                    Creator;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CreatorPowerCustomActionIndex;                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct sfxgamecontent.SFXPawn_CombatDroneBase.ReplicatedDroneCreator
// 0x0008
struct FReplicatedDroneCreator
{
	class ABioPawn*                                    Creator;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CreatorPowerCustomActionIndex;                    		// 0x0004 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif