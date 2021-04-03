﻿#pragma once

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

// Enum GameplayTags.EGameplayTagQueryExprType
enum class GameplayTags_EGameplayTagQueryExprType : uint8_t
{
	EGameplayTagQueryExprType__Undefined = 0,
	EGameplayTagQueryExprType__AnyTagsMatch = 1,
	EGameplayTagQueryExprType__AllTagsMatch = 2,
	EGameplayTagQueryExprType__NoTagsMatch = 3,
	EGameplayTagQueryExprType__AnyExprMatch = 4,
	EGameplayTagQueryExprType__AllExprMatch = 5,
	EGameplayTagQueryExprType__NoExprMatch = 6,
	EGameplayTagQueryExprType__EGameplayTagQueryExprType_MAX = 7,

};

// Enum GameplayTags.EGameplayContainerMatchType
enum class GameplayTags_EGameplayContainerMatchType : uint8_t
{
	EGameplayContainerMatchType__Any = 0,
	EGameplayContainerMatchType__All = 1,
	EGameplayContainerMatchType__EGameplayContainerMatchType_MAX = 2,

};

// Enum GameplayTags.EGameplayTagMatchType
enum class GameplayTags_EGameplayTagMatchType : uint8_t
{
	EGameplayTagMatchType__Explicit = 0,
	EGameplayTagMatchType__IncludeParentTags = 1,
	EGameplayTagMatchType__EGameplayTagMatchType_MAX = 2,

};

// Enum GameplayTags.EGameplayTagSelectionType
enum class GameplayTags_EGameplayTagSelectionType : uint8_t
{
	EGameplayTagSelectionType__None = 0,
	EGameplayTagSelectionType__NonRestrictedOnly = 1,
	EGameplayTagSelectionType__RestrictedOnly = 2,
	EGameplayTagSelectionType__All = 3,
	EGameplayTagSelectionType__EGameplayTagSelectionType_MAX = 4,

};

// Enum GameplayTags.EGameplayTagSourceType
enum class GameplayTags_EGameplayTagSourceType : uint8_t
{
	EGameplayTagSourceType__Native = 0,
	EGameplayTagSourceType__DefaultTagList = 1,
	EGameplayTagSourceType__TagList = 2,
	EGameplayTagSourceType__RestrictedTagList = 3,
	EGameplayTagSourceType__DataTable = 4,
	EGameplayTagSourceType__Invalid = 5,
	EGameplayTagSourceType__EGameplayTagSourceType_MAX = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTags.GameplayTagCategoryRemap
// 0x0020
struct FGameplayTagCategoryRemap
{
	struct FString                                     BaseCategory;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RemapCategories;                                           // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayTags.GameplayTagRedirect
// 0x0018
struct FGameplayTagRedirect
{
	struct FName                                       OldTagName;                                                // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewTagName;                                                // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayTags.RestrictedConfigInfo
// 0x0020
struct FRestrictedConfigInfo
{
	struct FString                                     RestrictedConfigName;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Owners;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayTags.gameplayTag
// 0x000C
struct FgameplayTag
{
	struct FName                                       tagName;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct GameplayTags.GameplayTagContainer
// 0x0020
struct FGameplayTagContainer
{
	TArray<struct FgameplayTag>                        GameplayTags;                                              // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, SaveGame, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FgameplayTag>                        ParentTags;                                                // 0x0010(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// 0x0001
struct FGameplayTagCreationWidgetHelper
{
	unsigned char                                      UnknownData_7JFL[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// 0x0010
struct FGameplayTagReferenceHelper
{
	unsigned char                                      UnknownData_NP9A[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayTags.GameplayTagNode
// 0x0058
struct FGameplayTagNode
{
	unsigned char                                      UnknownData_FAHF[0x58];                                    // 0x0000(0x0058) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayTags.GameplayTagTableRow
// 0x0020 (0x0028 - 0x0008)
struct FGameplayTagTableRow : public FTableRowBase
{
	struct FName                                       tag;                                                       // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MZ43[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DevComment;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
// 0x0008 (0x0030 - 0x0028)
struct FRestrictedGameplayTagTableRow : public FGameplayTagTableRow
{
	bool                                               bAllowNonRestrictedChildren;                               // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QKX3[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayTags.GameplayTagQuery
// 0x0048
struct FGameplayTagQuery
{
	int                                                TokenStreamVersion;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TJMT[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FgameplayTag>                        TagDictionary;                                             // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<unsigned char>                              QueryTokenStream;                                          // 0x0018(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     UserDescription;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     AutoDescription;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct GameplayTags.GameplayTagSource
// 0x0020
struct FGameplayTagSource
{
	struct FName                                       SourceName;                                                // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GameplayTags_EGameplayTagSourceType                SourceType;                                                // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MKEC[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameplayTagsList*                           SourceTagList;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URestrictedGameplayTagsList*                 SourceRestrictedTagList;                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
