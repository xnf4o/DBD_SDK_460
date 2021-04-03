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

// AnimBlueprintGeneratedClass AB_GK_KeyRing_ACC01.AB_GK_KeyRing_ACC01_C
// 0x0DC2 (FullSize[0x1032] - InheritedSize[0x0270])
class UAB_GK_KeyRing_ACC01_C : public UanimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x02B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x02D8(0x0028)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x0300(0x0460)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x0760(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x0780(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x07B0(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x07D0(0x0038)
	unsigned char                                      UnknownData_A6A9[0x8];                                     // 0x0808(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x0810(0x0460)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0C70(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x0C90(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x0CB0(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x0CE0(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x0D18(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0D48(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x0D80(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                            // 0x0E30(0x0140) (ContainsInstancedReference)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x0F70(0x00B8)
	class UskeletalMeshComponent*                      OwningCharacterSkeletalMesh;                               // 0x1028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Initialized;                                               // 0x1030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               InMenu;                                                    // 0x1031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_GK_KeyRing_ACC01.AB_GK_KeyRing_ACC01_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_KeyRing_ACC01_AnimGraphNode_TransitionResult_542ECAE74D0D8B76C7FE828E18E5BC7E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_KeyRing_ACC01_AnimGraphNode_TransitionResult_B7EEB9C24F7F2036418E928AE5283F04();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AB_GK_KeyRing_ACC01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
