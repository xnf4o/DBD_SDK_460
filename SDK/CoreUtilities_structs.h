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

// Enum CoreUtilities.GapEnum
enum class CoreUtilities_EGapEnum : uint8_t
{
	GapEnum__Value1                = 0,
	GapEnum__Value2                = 1,
	GapEnum__Value3                = 2,
	GapEnum__GapEnum_MAX           = 3,

};

// Enum CoreUtilities.SimpleEnum
enum class CoreUtilities_ESimpleEnum : uint8_t
{
	SimpleEnum__Value1             = 0,
	SimpleEnum__Value2             = 1,
	SimpleEnum__Value3             = 2,
	SimpleEnum__SimpleEnum_MAX     = 3,

};

// Enum CoreUtilities.RealCaseGapEnum
enum class CoreUtilities_ERealCaseGapEnum : uint8_t
{
	RealCaseGapEnum__None          = 0,
	RealCaseGapEnum__SavefileDeserializationFailure = 1,
	RealCaseGapEnum__EarnPlayerXpParamError = 2,
	RealCaseGapEnum__RealCaseGapEnum_MAX = 3,

};

// Enum CoreUtilities.OutOfOrderEnum
enum class CoreUtilities_EOutOfOrderEnum : uint8_t
{
	OutOfOrderEnum__Value1         = 0,
	OutOfOrderEnum__Value2         = 1,
	OutOfOrderEnum__Value3         = 2,
	OutOfOrderEnum__OutOfOrderEnum_MAX = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
