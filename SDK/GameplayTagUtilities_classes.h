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
// Classes
//---------------------------------------------------------------------------

// Class GameplayTagUtilities.GameplayTagContainerComponent
// 0x0070 (FullSize[0x0128] - InheritedSize[0x00B8])
class UGameplayTagContainerComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_SXQC[0x70];                                    // 0x00B8(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayTagUtilities.GameplayTagContainerComponent");
		return ptr;
	}



	void Remove(const struct FgameplayTag& state);
	void Add(const struct FgameplayTag& state);
};

// Class GameplayTagUtilities.ObjectStateProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UObjectStateProvider : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayTagUtilities.ObjectStateProvider");
		return ptr;
	}



};

// Class GameplayTagUtilities.DBDGameplayTagUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDBDGameplayTagUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayTagUtilities.DBDGameplayTagUtilities");
		return ptr;
	}



	struct FName STATIC_GetScoreModifierName(const struct FName& scoreEventID);
	bool STATIC_GameplayTagExists(const struct FName& tagName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
