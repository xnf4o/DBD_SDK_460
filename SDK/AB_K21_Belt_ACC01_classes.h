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

// AnimBlueprintGeneratedClass AB_K21_Belt_ACC01.AB_K21_Belt_ACC01_C
// 0x1291 (FullSize[0x1501] - InheritedSize[0x0270])
class UAB_K21_Belt_ACC01_C : public UanimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0038)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                            // 0x02B0(0x0140) (ContainsInstancedReference)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x03F0(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x04A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x04D0(0x0028)
	unsigned char                                      UnknownData_S8E6[0x8];                                     // 0x04F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x0500(0x0460)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_4;                      // 0x0960(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_3;                      // 0x0A90(0x0130)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x0BC0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x0BE0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x0C00(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x0C30(0x0038)
	unsigned char                                      UnknownData_CM23[0x8];                                     // 0x0C68(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x0C70(0x0460)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_2;                      // 0x10D0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController;                        // 0x1200(0x0130)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x1330(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x1350(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x1370(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x13A0(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x13D8(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x1408(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x1440(0x00B0)
	bool                                               Initialized;                                               // 0x14F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8A37[0x7];                                     // 0x14F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UskeletalMeshComponent*                      OwningCharacterSkeletalMesh;                               // 0x14F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InMenu;                                                    // 0x1500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_K21_Belt_ACC01.AB_K21_Belt_ACC01_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K21_Belt_ACC01_AnimGraphNode_TransitionResult_E322EA57491B453204431CB57FCEE6EF();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AB_K21_Belt_ACC01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
