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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Effect_Killer07Body01.BP_Effect_Killer07Body01_C
// 0x0013 (FullSize[0x026C] - InheritedSize[0x0259])
class UBP_Effect_Killer07Body01_C : public UBP_BaseItemVfx_C
{
public:
	unsigned char                                      UnknownData_NJEN[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TotalTime;                                                 // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Effect_Killer07Body01.BP_Effect_Killer07Body01_C");
		return ptr;
	}



	void AttachToSkeletalMesh(class UskeletalMeshComponent* SkeletonPart);
	void OnAttackBegin();
	void OnAttackEnd();
	void ExecuteUbergraph_BP_Effect_Killer07Body01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
