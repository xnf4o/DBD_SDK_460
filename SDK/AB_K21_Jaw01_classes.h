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

// AnimBlueprintGeneratedClass AB_K21_Jaw01.AB_K21_Jaw01_C
// 0x1B51 (FullSize[0x1DC1] - InheritedSize[0x0270])
class UAB_K21_Jaw01_C : public UanimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0038)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                            // 0x02B0(0x0140) (ContainsInstancedReference)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x03F0(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x04A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x04D0(0x0028)
	unsigned char                                      UnknownData_XEPG[0x8];                                     // 0x04F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                              // 0x0500(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                              // 0x0960(0x0460)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_4;                      // 0x0DC0(0x0130)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x0EF0(0x0020)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_3;                      // 0x0F10(0x0130)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x1040(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x1060(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x1090(0x0038)
	unsigned char                                      UnknownData_TW3G[0x8];                                     // 0x10C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x10D0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x1530(0x0460)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_2;                      // 0x1990(0x0130)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x1AC0(0x0020)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController;                        // 0x1AE0(0x0130)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x1C10(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x1C30(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x1C60(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x1C98(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x1CC8(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x1D00(0x00B0)
	bool                                               Initialized;                                               // 0x1DB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2BV6[0x7];                                     // 0x1DB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UskeletalMeshComponent*                      OwningCharacterSkeletalMesh;                               // 0x1DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InMenu;                                                    // 0x1DC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_K21_Jaw01.AB_K21_Jaw01_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K21_Jaw01_AnimGraphNode_TransitionResult_5FB5C9E64903B5216A296FB2C4589527();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AB_K21_Jaw01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
