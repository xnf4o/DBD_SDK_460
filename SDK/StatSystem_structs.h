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

// Enum StatSystem.EModifierOperationStrategy
enum class StatSystem_EModifierOperationStrategy : uint8_t
{
	EModifierOperationStrategy__Add = 0,
	EModifierOperationStrategy__Subs = 1,
	EModifierOperationStrategy__Mult = 2,
	EModifierOperationStrategy__Div = 3,
	EModifierOperationStrategy__EModifierOperationStrategy_MAX = 4,

};

// Enum StatSystem.EModifierCompoundStrategy
enum class StatSystem_EModifierCompoundStrategy : uint8_t
{
	EModifierCompoundStrategy__Add = 0,
	EModifierCompoundStrategy__AddPlusOne = 1,
	EModifierCompoundStrategy__Min = 2,
	EModifierCompoundStrategy__MAX = 3,
	EModifierCompoundStrategy__Mult = 4,
	EModifierCompoundStrategy__MultWithCompoundNegative = 5,
	EModifierCompoundStrategy__EModifierCompoundStrategy_MAX = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct StatSystem.StatModifier
// 0x0028
struct FStatModifier
{
	StatSystem_EModifierOperationStrategy              OperationStrategy;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A3CS[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FgameplayTag                                ModifierTag;                                               // 0x0004(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	StatSystem_EModifierCompoundStrategy               CompoundStrategy;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XZ0V[0x17];                                    // 0x0011(0x0017) MISSED OFFSET (PADDING)

};

// ScriptStruct StatSystem.BaseStat
// 0x0018
struct FBaseStat
{
	unsigned char                                      UnknownData_R5XB[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FStatModifier>                       _statModifiers;                                            // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct StatSystem.TunableStat
// 0x0028 (0x0040 - 0x0018)
struct FTunableStat : public FBaseStat
{
	struct FDBDTunableRowHandle                        _baseValue;                                                // 0x0018(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct StatSystem.NonTunableStat
// 0x0008 (0x0020 - 0x0018)
struct FNonTunableStat : public FBaseStat
{
	float                                              _baseValue;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8JH4[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct StatSystem.StatProperty
// 0x0030 (0x0048 - 0x0018)
struct FStatProperty : public FBaseStat
{
	bool                                               _useTunable;                                               // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S6Z9[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _nonTunableValue;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _tunableValue;                                             // 0x0020(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
