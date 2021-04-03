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

// AnimBlueprintGeneratedClass AB_UK_Hair_ACC01.AB_UK_Hair_ACC01_C
// 0x59B8 (FullSize[0x5C28] - InheritedSize[0x0270])
class UAB_UK_Hair_ACC01_C : public UanimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x02B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x02D8(0x0028)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_18;                     // 0x0300(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_17;                     // 0x0430(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_16;                     // 0x0560(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_15;                     // 0x0690(0x0130)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_14;                             // 0x07C0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_13;                             // 0x0C20(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_12;                             // 0x1080(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_11;                             // 0x14E0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_10;                             // 0x1940(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9;                              // 0x1DA0(0x0460)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x2200(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x2230(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8;                              // 0x2250(0x0460)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x26B0(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x26D0(0x0038)
	unsigned char                                      UnknownData_YIWG[0x8];                                     // 0x2708(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                   // 0x2710(0x0210)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_14;                     // 0x2920(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_13;                     // 0x2A50(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_12;                     // 0x2B80(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_11;                     // 0x2CB0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_10;                     // 0x2DE0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_9;                      // 0x2F10(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_8;                      // 0x3040(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_7;                      // 0x3170(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_6;                      // 0x32A0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_5;                      // 0x33D0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_4;                      // 0x3500(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_3;                      // 0x3630(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_2;                      // 0x3760(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController;                        // 0x3890(0x0130)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7;                              // 0x39C0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6;                              // 0x3E20(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                              // 0x4280(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                              // 0x46E0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                              // 0x4B40(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x4FA0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x5400(0x0460)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x5860(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x5880(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x58B0(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x58D0(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x5908(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x5938(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x5970(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                            // 0x5A20(0x0140) (ContainsInstancedReference)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x5B60(0x00B8)
	bool                                               InMenu;                                                    // 0x5C18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Initialized;                                               // 0x5C19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9K4T[0x6];                                     // 0x5C1A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UskeletalMeshComponent*                      OwningCharacterSkeletalMesh;                               // 0x5C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_UK_Hair_ACC01.AB_UK_Hair_ACC01_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_UK_Hair_ACC01_AnimGraphNode_TransitionResult_254B62DC4A6B99C9453FC5A3ACF768B5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_UK_Hair_ACC01_AnimGraphNode_TransitionResult_14051A19468B4C60854ECAA74CD095C3();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AB_UK_Hair_ACC01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
