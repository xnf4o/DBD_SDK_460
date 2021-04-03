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

// BlueprintGeneratedClass ItemEfficiencyProficiency.ItemEfficiencyProficiency_C
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UItemEfficiencyProficiency_C : public UInteractionProficiency
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ItemEfficiencyProficiency.ItemEfficiencyProficiency_C");
		return ptr;
	}



	float GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class UdbdPlayer* player);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
