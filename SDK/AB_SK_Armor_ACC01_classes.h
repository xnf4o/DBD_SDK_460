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

// AnimBlueprintGeneratedClass AB_SK_Armor_ACC01.AB_SK_Armor_ACC01_C
// 0x2F51 (FullSize[0x31C1] - InheritedSize[0x0270])
class UAB_SK_Armor_ACC01_C : public UanimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0038)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                            // 0x02B0(0x0140) (ContainsInstancedReference)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x03F0(0x00B8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_11;                     // 0x04A8(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_10;                     // 0x05D8(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_9;                      // 0x0708(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_8;                      // 0x0838(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_7;                      // 0x0968(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_6;                      // 0x0A98(0x0130)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_8;                                // 0x0BC8(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_5;                      // 0x0CE0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_4;                      // 0x0E10(0x0130)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                              // 0x0F40(0x0460)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_3;                      // 0x13A0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_2;                      // 0x14D0(0x0130)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_7;                                // 0x1600(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController;                        // 0x1718(0x0130)
	unsigned char                                      UnknownData_SPNJ[0x8];                                     // 0x1848(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                              // 0x1850(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                              // 0x1CB0(0x0460)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x2110(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x2130(0x0030)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x2160(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x25C0(0x0460)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_6;                                // 0x2A20(0x0118)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_5;                                // 0x2B38(0x0118)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_4;                                // 0x2C50(0x0118)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_3;                                // 0x2D68(0x0118)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_2;                                // 0x2E80(0x0118)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint;                                  // 0x2F98(0x0118)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x30B0(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x30D0(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x3108(0x00B0)
	class UskeletalMeshComponent*                      OwningCharacterSkeletalMesh;                               // 0x31B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Initialized;                                               // 0x31C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_SK_Armor_ACC01.AB_SK_Armor_ACC01_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AB_SK_Armor_ACC01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
