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

// Class CoreUtilities.CoreUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCoreUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class CoreUtilities.CoreUtilities");
		return ptr;
	}



	TArray<int> STATIC_GetRandomValuesFromArray(TArray<int> values, int numberOfDesiredValues);
	class UgameInstance* STATIC_GetGameInstance(class UObject* worldContextObject);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
