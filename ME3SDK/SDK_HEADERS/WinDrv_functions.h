/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WinDrv_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function Engine.ForceFeedbackManager.PauseWaveform
// [0x00024102] 
// Parameters infos:
// unsigned long                  bPause                         ( CPF_OptionalParm | CPF_Parm )

void UXnaForceFeedbackManager::PauseWaveform ( unsigned long bPause )
{
	static UFunction* pFnPauseWaveform = NULL;

	if ( ! pFnPauseWaveform )
		pFnPauseWaveform = (UFunction*) UObject::GObjObjects()->Data[ 16595 ];

	UXnaForceFeedbackManager_execPauseWaveform_Parms PauseWaveform_Parms;
	PauseWaveform_Parms.bPause = bPause;

	this->ProcessEvent ( pFnPauseWaveform, &PauseWaveform_Parms, NULL );
};

// Function Engine.ForceFeedbackManager.StopForceFeedbackWaveform
// [0x00024102] 
// Parameters infos:
// class UForceFeedbackWaveform*  WaveForm                       ( CPF_OptionalParm | CPF_Parm )

void UXnaForceFeedbackManager::StopForceFeedbackWaveform ( class UForceFeedbackWaveform* WaveForm )
{
	static UFunction* pFnStopForceFeedbackWaveform = NULL;

	if ( ! pFnStopForceFeedbackWaveform )
		pFnStopForceFeedbackWaveform = (UFunction*) UObject::GObjObjects()->Data[ 16593 ];

	UXnaForceFeedbackManager_execStopForceFeedbackWaveform_Parms StopForceFeedbackWaveform_Parms;
	StopForceFeedbackWaveform_Parms.WaveForm = WaveForm;

	this->ProcessEvent ( pFnStopForceFeedbackWaveform, &StopForceFeedbackWaveform_Parms, NULL );
};

// Function Engine.ForceFeedbackManager.PlayForceFeedbackWaveform
// [0x00020102] 
// Parameters infos:
// class UForceFeedbackWaveform*  WaveForm                       ( CPF_Parm )

void UXnaForceFeedbackManager::PlayForceFeedbackWaveform ( class UForceFeedbackWaveform* WaveForm )
{
	static UFunction* pFnPlayForceFeedbackWaveform = NULL;

	if ( ! pFnPlayForceFeedbackWaveform )
		pFnPlayForceFeedbackWaveform = (UFunction*) UObject::GObjObjects()->Data[ 16584 ];

	UXnaForceFeedbackManager_execPlayForceFeedbackWaveform_Parms PlayForceFeedbackWaveform_Parms;
	PlayForceFeedbackWaveform_Parms.WaveForm = WaveForm;

	this->ProcessEvent ( pFnPlayForceFeedbackWaveform, &PlayForceFeedbackWaveform_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif