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

// Enum DBDUIViewsCore.EBackgroundProgressBarState
enum class DBDUIViewsCore_EBackgroundProgressBarState : uint8_t
{
	EBackgroundProgressBarState__Empty = 0,
	EBackgroundProgressBarState__Quarter = 1,
	EBackgroundProgressBarState__Half = 2,
	EBackgroundProgressBarState__ThreeQuarters = 3,
	EBackgroundProgressBarState__Full = 4,
	EBackgroundProgressBarState__EBackgroundProgressBarState_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDUIViewsCore.DBDTextDockingProperties
// 0x0040
struct FDBDTextDockingProperties
{
	bool                                               UseColor;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VDJF[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 color;                                                     // 0x0008(0x0028) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	bool                                               UseOpacity;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MNT3[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              opacity;                                                   // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseSize;                                                   // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LQ6T[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Size;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewsCore.InputPromptDataRow
// 0x0070 (0x0078 - 0x0008)
struct FInputPromptDataRow : public FTableRowBase
{
	struct FText                                       InputLabel;                                                // 0x0008(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct Fkey                                        inputKey;                                                  // 0x0020(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PromptTexture[0x30];                                       // 0x0040(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               ShowLabel;                                                 // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XCRU[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
