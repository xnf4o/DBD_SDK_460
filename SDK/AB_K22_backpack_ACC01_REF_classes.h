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

// AnimBlueprintGeneratedClass AB_K22_backpack_ACC01_REF.AB_K22_backpack_ACC01_REF_C
// 0x8851 (FullSize[0x8AC1] - InheritedSize[0x0270])
class UAB_K22_backpack_ACC01_REF_C : public UanimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0038)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                            // 0x02B0(0x0140) (ContainsInstancedReference)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x03F0(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x04A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x04D0(0x0028)
	unsigned char                                      UnknownData_469T[0x8];                                     // 0x04F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_30;                             // 0x0500(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_29;                             // 0x0960(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_28;                             // 0x0DC0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_27;                             // 0x1220(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_26;                             // 0x1680(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_25;                             // 0x1AE0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_24;                             // 0x1F40(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_23;                             // 0x23A0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_22;                             // 0x2800(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_21;                             // 0x2C60(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_20;                             // 0x30C0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_19;                             // 0x3520(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_18;                             // 0x3980(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_17;                             // 0x3DE0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_16;                             // 0x4240(0x0460)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x46A0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x46C0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x46E0(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x4710(0x0038)
	unsigned char                                      UnknownData_6U4Y[0x8];                                     // 0x4748(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_15;                             // 0x4750(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_14;                             // 0x4BB0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_13;                             // 0x5010(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_12;                             // 0x5470(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_11;                             // 0x58D0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_10;                             // 0x5D30(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9;                              // 0x6190(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8;                              // 0x65F0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7;                              // 0x6A50(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6;                              // 0x6EB0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                              // 0x7310(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                              // 0x7770(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                              // 0x7BD0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x8030(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x8490(0x0460)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x88F0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x8910(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x8930(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x8960(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x8998(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x89C8(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x8A00(0x00B0)
	bool                                               Initialized;                                               // 0x8AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NPD9[0x7];                                     // 0x8AB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UskeletalMeshComponent*                      OwningCharacterSkeletalMesh;                               // 0x8AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InMenu;                                                    // 0x8AC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_K22_backpack_ACC01_REF.AB_K22_backpack_ACC01_REF_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K22_backpack_ACC01_REF_AnimGraphNode_TransitionResult_5313CF904AED718645974FB3FB6F53AD();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AB_K22_backpack_ACC01_REF(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
