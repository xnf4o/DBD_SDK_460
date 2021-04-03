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

// Enum DBDUIViewInterfaces.ESingleHookState
enum class DBDUIViewInterfaces_ESingleHookState : uint8_t
{
	ESingleHookState__EMPTY        = 0,
	ESingleHookState__UNHOOKED     = 1,
	ESingleHookState__HOOKED       = 2,
	ESingleHookState__DISCONNECTED = 3,
	ESingleHookState__ESingleHookState_MAX = 4,

};

// Enum DBDUIViewInterfaces.EHudStatusEffectAlertViewType
enum class DBDUIViewInterfaces_EHudStatusEffectAlertViewType : uint8_t
{
	EHudStatusEffectAlertViewType__Unhandled = 0,
	EHudStatusEffectAlertViewType__Perk = 1,
	EHudStatusEffectAlertViewType__Item = 2,
	EHudStatusEffectAlertViewType__Addon = 3,
	EHudStatusEffectAlertViewType__EHudStatusEffectAlertViewType_MAX = 4,

};

// Enum DBDUIViewInterfaces.EInteractionPromptType
enum class DBDUIViewInterfaces_EInteractionPromptType : uint8_t
{
	EInteractionPromptType__PressButton = 0,
	EInteractionPromptType__MashButton = 1,
	EInteractionPromptType__HoldButton = 2,
	EInteractionPromptType__AlternateTwoButtons = 3,
	EInteractionPromptType__WiggleThumbstick = 4,
	EInteractionPromptType__EInteractionPromptType_MAX = 5,

};

// Enum DBDUIViewInterfaces.EKillerResult
enum class DBDUIViewInterfaces_EKillerResult : uint8_t
{
	EKillerResult__DisgracefulDefeat = 0,
	EKillerResult__EntityDispleased = 1,
	EKillerResult__BrutalKiller    = 2,
	EKillerResult__RuthlessKiller  = 3,
	EKillerResult__MercilessKiller = 4,
	EKillerResult__EKillerResult_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDUIViewInterfaces.GhostStatusData
// 0x0008
struct FGhostStatusData
{
	bool                                               IsExposed;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WSSC[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StalkingProgress;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.ExecutionerStatusData
// 0x0004
struct FExecutionerStatusData
{
	float                                              AgonyProgress;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.DoctorStatusData
// 0x0001
struct FDoctorStatusData
{
	DBDSharedTypes_EAfflictionLevel                    AfflictionLevel;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.baseLoadoutPartViewData
// 0x0030
struct FbaseLoadoutPartViewData
{
	struct FName                                       itemId;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HFDD[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  IconTexture;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6O1E[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.powerViewData
// 0x0030 (0x0060 - 0x0030)
struct FpowerViewData : public FbaseLoadoutPartViewData
{
	struct Fkey                                        inputKey;                                                  // 0x0030(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsRechargeable;                                            // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isActivated;                                               // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OBYX[0x2];                                     // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Count;                                                     // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProgressValue;                                             // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowKeyPrompt;                                             // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCountDisplayForced;                                      // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B5AG[0x2];                                     // 0x005E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.addonViewData
// 0x0008 (0x0038 - 0x0030)
struct FaddonViewData : public FbaseLoadoutPartViewData
{
	float                                              Cooldown;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EStatusEffectType                   StatusEffectType;                                          // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UNX4[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.powerBundleViewData
// 0x00D0
struct FpowerBundleViewData
{
	struct FpowerViewData                              Power;                                                     // 0x0000(0x0060) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FaddonViewData                              addon1;                                                    // 0x0060(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FaddonViewData                              addon2;                                                    // 0x0098(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.ScreenIndicatorViewData
// 0x0028
struct FScreenIndicatorViewData
{
	struct FString                                     Id;                                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInFront;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DV4J[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   ScreenPosition;                                            // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              distance;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EHudOffscreenIndicatorType          IndicatorType;                                             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2ZAA[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.SkillCheckViewData
// 0x0030
struct FSkillCheckViewData
{
	struct Fkey                                        inputKey;                                                  // 0x0000(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitAreaStart;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitAreaLength;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BonusAreaLength;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsHexed;                                                   // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsSpectating;                                              // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1E33[0x2];                                     // 0x002E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.StartSequenceViewData
// 0x0028
struct FStartSequenceViewData
{
	struct FString                                     themeName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     mapName;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EThemeColorId                       ThemeColorId;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_USLO[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.TallyTutorialPopupViewData
// 0x0008
struct FTallyTutorialPopupViewData
{
	bool                                               isKiller;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FirstTimeCompleted;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MODI[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BloodpointsScore;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.TemplateViewData
// 0x0001
struct FTemplateViewData
{
	unsigned char                                      UnknownData_NBZE[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.perkViewData
// 0x0010 (0x0040 - 0x0030)
struct FperkViewData : public FbaseLoadoutPartViewData
{
	int                                                level;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Cooldown;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EStatusEffectType                   StatusEffectType;                                          // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O99N[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                stackCount;                                                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.itemViewData
// 0x0038 (0x0068 - 0x0030)
struct FitemViewData : public FbaseLoadoutPartViewData
{
	bool                                               IsEnergyTypeValid;                                         // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J1Q8[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              energyLevel;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IE2M[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fkey                                        inputKey;                                                  // 0x0040(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowKeyPrompt;                                             // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VQ23[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.StatusEffectAlertViewData
// 0x0100
struct FStatusEffectAlertViewData
{
	struct FString                                     StatusEffectName;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  StatusEffectIcon;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EStatusEffectType                   StatusEffectType;                                          // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDUIViewInterfaces_EHudStatusEffectAlertViewType  SourceViewType;                                            // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XYWL[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FperkViewData                               perkViewData;                                              // 0x0020(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FitemViewData                               itemViewData;                                              // 0x0060(0x0068) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FaddonViewData                              addonViewData;                                             // 0x00C8(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.ScoreAlertViewData
// 0x0020
struct FScoreAlertViewData
{
	DBDSharedTypes_EDBDScoreCategory                   ScoreType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GN57[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     title;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                scoreValue;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              progress;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.hudObjectiveViewData
// 0x0008
struct FhudObjectiveViewData
{
	DBDSharedTypes_EPlayerTeam                         playerTeam;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isHatchOpen;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OJVM[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                nbGeneratorsLeft;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.StatusEffectViewData
// 0x0028
struct FStatusEffectViewData
{
	struct FName                                       Id;                                                        // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E5AX[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  IconTexture;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EStatusEffectType                   StatusEffectType;                                          // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6XPN[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                level;                                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              percentage;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MBXD[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.InteractionProgressViewData
// 0x0040
struct FInteractionProgressViewData
{
	struct FString                                     message;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SecondaryMessage;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EBarColor                           barColor;                                                  // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EBarColor                           ChargeBarColor;                                            // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowIcon;                                                  // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowIconCharge;                                            // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RSJ5[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  ItemIcon;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStatusEffectViewData>               Proficiencies;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.InteractionPromptViewData
// 0x0070
struct FInteractionPromptViewData
{
	struct FName                                       Id;                                                        // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YUB4[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     message;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDUIViewInterfaces_EInteractionPromptType         type;                                                      // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YI25[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fkey                                        InputKey1;                                                 // 0x0028(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fkey                                        inputKey2;                                                 // 0x0048(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PlaceInCenter;                                             // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J5JN[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.itemBundleViewData
// 0x00D8
struct FitemBundleViewData
{
	struct FitemViewData                               Item;                                                      // 0x0000(0x0068) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FaddonViewData                              addon1;                                                    // 0x0068(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FaddonViewData                              addon2;                                                    // 0x00A0(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.MatchResultViewData
// 0x0008
struct FMatchResultViewData
{
	bool                                               isSlasher;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EGameState                          SurvivorResult;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDUIViewInterfaces_EKillerResult                  KillerResult;                                              // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LUN9[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              duration;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.NotifTutorialPopupViewData
// 0x0028
struct FNotifTutorialPopupViewData
{
	struct FString                                     title;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     description;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  IconTexture;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.offeringViewData
// 0x0008 (0x0038 - 0x0030)
struct FofferingViewData : public FbaseLoadoutPartViewData
{
	int                                                stackCount;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemAvailability                   Availability;                                              // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CL68[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.NightmareStatusData
// 0x0008
struct FNightmareStatusData
{
	DBDSharedTypes_ESleepingUIState                    SleepingState;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A6WY[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SleepingProgress;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.PigStatusData
// 0x0008
struct FPigStatusData
{
	DBDSharedTypes_EReverseBearTrapUIState             ReverseBearTrapState;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W82B[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimerProgress;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.PlagueStatusData
// 0x0008
struct FPlagueStatusData
{
	DBDSharedTypes_ESicknessLevel                      SicknessLevel;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EXTB[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SicknessProgress;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.TwinsStatusData
// 0x0001
struct FTwinsStatusData
{
	bool                                               TwinsActive;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.TricksterStatusData
// 0x000C
struct FTricksterStatusData
{
	float                                              CurrentLacerationLevel;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumLacerationLevel;                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDangerousLacerationLevel;                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WasRecentlyDamagedByLaceration;                            // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HQAE[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.PlayerStatusViewData
// 0x0060
struct FPlayerStatusViewData
{
	struct FString                                     playerName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  PlayerPortraitIcon;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerStatus                       PlayerStatusState;                                         // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4T57[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimerProgress;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isDeepWound;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isBroken;                                                  // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsLocalPlayerAKiller;                                      // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EObsessionUIState                   ObsessionState;                                            // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                drainStage;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDoctorStatusData                           DoctorStatusData;                                          // 0x0028(0x0001) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OUG1[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExecutionerStatusData                      ExecutionerStatusData;                                     // 0x002C(0x0004) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGhostStatusData                            GhostStatusData;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FNightmareStatusData                        NightmareStatusData;                                       // 0x0038(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPigStatusData                              PigStatusData;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPlagueStatusData                           PlagueStatusData;                                          // 0x0048(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTwinsStatusData                            TwinsStatusData;                                           // 0x0050(0x0001) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PU7Y[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTricksterStatusData                        TricksterStatusData;                                       // 0x0054(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
