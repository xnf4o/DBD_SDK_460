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

// Enum Archives.EventCountComparisonOperator
enum class Archives_EventCountComparisonOperator : uint8_t
{
	EventCountComparisonOperator__EqualTo = 0,
	EventCountComparisonOperator__GreaterThan = 1,
	EventCountComparisonOperator__GreaterThanEqualTo = 2,
	EventCountComparisonOperator__LessThan = 3,
	EventCountComparisonOperator__LessThanEqualTo = 4,
	EventCountComparisonOperator__EventCountComparisonOperator_MAX = 5,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
