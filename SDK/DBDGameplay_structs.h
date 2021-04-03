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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDGameplay.AimDirection
// 0x0024
struct FAimDirection
{
	unsigned char                                      UnknownData_ZWDU[0x24];                                    // 0x0000(0x0024) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDGameplay.BlindTargetViewData
// 0x0040
struct FBlindTargetViewData
{
	unsigned char                                      UnknownData_T009[0x40];                                    // 0x0000(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDGameplay.TestableStat
// 0x0008 (0x0048 - 0x0040)
struct FTestableStat : public FTunableStat
{
	unsigned char                                      UnknownData_WPAT[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
