#pragma once

// Name: DBD, Version: 4.6.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum DBDInput.EInputMode
enum class DBDInput_EInputMode : uint8_t
{
	EInputMode__None               = 0,
	EInputMode__Scaleform          = 1,
	EInputMode__UMG                = 2,
	EInputMode__Game               = 3,
	EInputMode__EInputMode_MAX     = 4,

};

// Enum DBDInput.EUIActionType
enum class DBDInput_EUIActionType : uint8_t
{
	EUIActionType__Accept          = 0,
	EUIActionType__Cancel          = 1,
	EUIActionType__Previous        = 2,
	EUIActionType__Next            = 3,
	EUIActionType__EUIActionType_MAX = 4,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
