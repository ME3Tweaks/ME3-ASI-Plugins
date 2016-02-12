/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WinDrv_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function Engine.ForceFeedbackManager.PauseWaveform
// [0x00024102] 
struct UXnaForceFeedbackManager_execPauseWaveform_Parms
{
	unsigned long                                      bPause : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.ForceFeedbackManager.StopForceFeedbackWaveform
// [0x00024102] 
struct UXnaForceFeedbackManager_execStopForceFeedbackWaveform_Parms
{
	class UForceFeedbackWaveform*                      WaveForm;                                         		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.ForceFeedbackManager.PlayForceFeedbackWaveform
// [0x00020102] 
struct UXnaForceFeedbackManager_execPlayForceFeedbackWaveform_Parms
{
	class UForceFeedbackWaveform*                      WaveForm;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif