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

// BlueprintGeneratedClass BP_Effect_DO_Head01.BP_Effect_DO_Head01_C
// 0x0037 (FullSize[0x0290] - InheritedSize[0x0259])
class UBP_Effect_DO_Head01_C : public UBP_BaseItemVfx_C
{
public:
	unsigned char                                      UnknownData_TWAS[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TotalTime;                                                 // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9UP2[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    Sparks1;                                                   // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    Sparks_2;                                                  // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    Sparks_3;                                                  // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    Sparks4;                                                   // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Effect_DO_Head01.BP_Effect_DO_Head01_C");
		return ptr;
	}



	void AttachToSkeletalMesh(class UskeletalMeshComponent* SkeletonPart);
	void ExecuteUbergraph_BP_Effect_DO_Head01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
