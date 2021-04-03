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

// BlueprintGeneratedClass SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class USkillCheckProbabilityProficiency_C : public UInteractionProficiency
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C");
		return ptr;
	}



	bool GetIsActive(class UChargeableInteractionDefinition* chargeableInteraction, class UdbdPlayer* player);
	DBDSharedTypes_EStatusEffectType GetType(float Value);
	float GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class UdbdPlayer* player);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
