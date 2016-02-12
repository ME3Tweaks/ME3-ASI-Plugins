#include <windows.h>
#include <wchar.h>

/*
#############################################################################################
# Mass Effect 3 (1.5) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SdkHeaders.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

/*
# ========================================================================================= #
# Defines
# ========================================================================================= #
*/

#define GObjects			0x01AB5634

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

template< class T > struct TArray 
{ 
public: 
	T* Data; 
	int Count; 
	int Max; 

public: 
	TArray() 
	{ 
		Data = NULL; 
		Count = Max = 0; 
	}; 

public: 
	int Num() 
	{ 
		return this->Count; 
	}; 

	T& operator() ( int i ) 
	{ 
		return this->Data[ i ]; 
	}; 

	const T& operator() ( int i ) const 
	{ 
		return this->Data[ i ]; 
	}; 

	void Add ( T InputData ) 
	{ 
		Data = (T*) realloc ( Data, sizeof ( T ) * ( Count + 1 ) ); 
		Data[ Count++ ] = InputData; 
		Max = Count; 
	}; 

	void Clear() 
	{ 
		free ( Data ); 
		Count = Max = 0; 
	}; 
}; 

struct FNameEntry 
{ 
	unsigned char	UnknownData00[ 0x8 ]; 
	char			Name[ 0x10 ]; 
}; 

struct FName 
{ 
	FNameEntry*		NameEntry; 
	unsigned char	unknownData00[ 0x4 ]; 

	char* GetName() 
	{ 
		return this->NameEntry->Name; 
	}; 

	bool operator == ( const FName& A ) const 
	{ 
		return ( NameEntry == A.NameEntry ); 
	}; 
}; 

struct FString : public TArray< wchar_t > 
{ 
	FString() {}; 

	FString ( wchar_t* Other ) 
	{ 
		this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; 

		if ( this->Count ) 
			this->Data = Other; 
	}; 

	~FString() {}; 

	FString operator = ( wchar_t* Other ) 
	{ 
		if ( this->Data != Other ) 
		{ 
			this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; 

			if ( this->Count ) 
				this->Data = Other; 
		} 

		return *this; 
	}; 
}; 

struct FScriptDelegate 
{ 
	unsigned char UnknownData00[ 0xC ]; 
}; 

/*
# ========================================================================================= #
# Includes
# ========================================================================================= #
*/

#include "SDK_HEADERS\Core_structs.h"
#include "SDK_HEADERS\Core_classes.h"
#include "SDK_HEADERS\Core_f_structs.h"
#include "SDK_HEADERS\Core_functions.h"
#include "SDK_HEADERS\Engine_structs.h"
#include "SDK_HEADERS\Engine_classes.h"
#include "SDK_HEADERS\Engine_f_structs.h"
#include "SDK_HEADERS\Engine_functions.h"
#include "SDK_HEADERS\GameFramework_structs.h"
#include "SDK_HEADERS\GameFramework_classes.h"
#include "SDK_HEADERS\GameFramework_f_structs.h"
#include "SDK_HEADERS\GameFramework_functions.h"
#include "SDK_HEADERS\IpDrv_structs.h"
#include "SDK_HEADERS\IpDrv_classes.h"
#include "SDK_HEADERS\IpDrv_f_structs.h"
#include "SDK_HEADERS\IpDrv_functions.h"
#include "SDK_HEADERS\GFxUI_structs.h"
#include "SDK_HEADERS\GFxUI_classes.h"
#include "SDK_HEADERS\GFxUI_f_structs.h"
#include "SDK_HEADERS\GFxUI_functions.h"
#include "SDK_HEADERS\WwiseAudio_structs.h"
#include "SDK_HEADERS\WwiseAudio_classes.h"
#include "SDK_HEADERS\WwiseAudio_f_structs.h"
#include "SDK_HEADERS\WwiseAudio_functions.h"
#include "SDK_HEADERS\WinDrv_structs.h"
#include "SDK_HEADERS\WinDrv_classes.h"
#include "SDK_HEADERS\WinDrv_f_structs.h"
#include "SDK_HEADERS\WinDrv_functions.h"
#include "SDK_HEADERS\SFXOnlineFoundation_structs.h"
#include "SDK_HEADERS\SFXOnlineFoundation_classes.h"
#include "SDK_HEADERS\SFXOnlineFoundation_f_structs.h"
#include "SDK_HEADERS\SFXOnlineFoundation_functions.h"
#include "SDK_HEADERS\SFXGame_structs.h"
#include "SDK_HEADERS\SFXGame_classes.h"
#include "SDK_HEADERS\SFXGame_f_structs.h"
#include "SDK_HEADERS\SFXGame_functions.h"
#include "SDK_HEADERS\sfxgamecontent_structs.h"
#include "SDK_HEADERS\sfxgamecontent_classes.h"
#include "SDK_HEADERS\sfxgamecontent_f_structs.h"
#include "SDK_HEADERS\sfxgamecontent_functions.h"
#include "SDK_HEADERS\sfxgamempcontent_structs.h"
#include "SDK_HEADERS\sfxgamempcontent_classes.h"
#include "SDK_HEADERS\sfxgamempcontent_f_structs.h"
#include "SDK_HEADERS\sfxgamempcontent_functions.h"
#include "SDK_HEADERS\sfxgamempcontentdlc_shared_mp_structs.h"
#include "SDK_HEADERS\sfxgamempcontentdlc_shared_mp_classes.h"
#include "SDK_HEADERS\sfxgamempcontentdlc_shared_mp_f_structs.h"
#include "SDK_HEADERS\sfxgamempcontentdlc_shared_mp_functions.h"
#include "SDK_HEADERS\sfxgamecontentdlc_con_mp2_retrieve_structs.h"
#include "SDK_HEADERS\sfxgamecontentdlc_con_mp2_retrieve_classes.h"
#include "SDK_HEADERS\sfxgamecontentdlc_con_mp2_retrieve_f_structs.h"
#include "SDK_HEADERS\sfxgamecontentdlc_con_mp2_retrieve_functions.h"
#include "SDK_HEADERS\SFXGameContentDLC_CON_MP3_MobileAnnex_structs.h"
#include "SDK_HEADERS\SFXGameContentDLC_CON_MP3_MobileAnnex_classes.h"
#include "SDK_HEADERS\SFXGameContentDLC_CON_MP3_MobileAnnex_f_structs.h"
#include "SDK_HEADERS\SFXGameContentDLC_CON_MP3_MobileAnnex_functions.h"
#include "SDK_HEADERS\sfxgamecontentdlc_con_mp4_horde_structs.h"
#include "SDK_HEADERS\sfxgamecontentdlc_con_mp4_horde_classes.h"
#include "SDK_HEADERS\sfxgamecontentdlc_con_mp4_horde_f_structs.h"
#include "SDK_HEADERS\sfxgamecontentdlc_con_mp4_horde_functions.h"
#include "SDK_HEADERS\sfxgamecontentdlc_con_mp4_structs.h"
#include "SDK_HEADERS\sfxgamecontentdlc_con_mp4_classes.h"
#include "SDK_HEADERS\sfxgamecontentdlc_con_mp4_f_structs.h"
#include "SDK_HEADERS\sfxgamecontentdlc_con_mp4_functions.h"
#include "SDK_HEADERS\sfxgamecontentdlc_con_mp5_structs.h"
#include "SDK_HEADERS\sfxgamecontentdlc_con_mp5_classes.h"
#include "SDK_HEADERS\sfxgamecontentdlc_con_mp5_f_structs.h"
#include "SDK_HEADERS\sfxgamecontentdlc_con_mp5_functions.h"
