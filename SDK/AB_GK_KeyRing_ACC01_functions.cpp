// Name: DBD, Version: 4.6.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AB_GK_KeyRing_ACC01.AB_GK_KeyRing_ACC01_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UAB_GK_KeyRing_ACC01_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_GK_KeyRing_ACC01.AB_GK_KeyRing_ACC01_C.AnimGraph");

	UAB_GK_KeyRing_ACC01_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function AB_GK_KeyRing_ACC01.AB_GK_KeyRing_ACC01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_KeyRing_ACC01_AnimGraphNode_TransitionResult_542ECAE74D0D8B76C7FE828E18E5BC7E
// (BlueprintEvent)
void UAB_GK_KeyRing_ACC01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_KeyRing_ACC01_AnimGraphNode_TransitionResult_542ECAE74D0D8B76C7FE828E18E5BC7E()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_GK_KeyRing_ACC01.AB_GK_KeyRing_ACC01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_KeyRing_ACC01_AnimGraphNode_TransitionResult_542ECAE74D0D8B76C7FE828E18E5BC7E");

	UAB_GK_KeyRing_ACC01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_KeyRing_ACC01_AnimGraphNode_TransitionResult_542ECAE74D0D8B76C7FE828E18E5BC7E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_GK_KeyRing_ACC01.AB_GK_KeyRing_ACC01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_KeyRing_ACC01_AnimGraphNode_TransitionResult_B7EEB9C24F7F2036418E928AE5283F04
// (BlueprintEvent)
void UAB_GK_KeyRing_ACC01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_KeyRing_ACC01_AnimGraphNode_TransitionResult_B7EEB9C24F7F2036418E928AE5283F04()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_GK_KeyRing_ACC01.AB_GK_KeyRing_ACC01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_KeyRing_ACC01_AnimGraphNode_TransitionResult_B7EEB9C24F7F2036418E928AE5283F04");

	UAB_GK_KeyRing_ACC01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_KeyRing_ACC01_AnimGraphNode_TransitionResult_B7EEB9C24F7F2036418E928AE5283F04_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_GK_KeyRing_ACC01.AB_GK_KeyRing_ACC01_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_GK_KeyRing_ACC01_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_GK_KeyRing_ACC01.AB_GK_KeyRing_ACC01_C.BlueprintUpdateAnimation");

	UAB_GK_KeyRing_ACC01_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_GK_KeyRing_ACC01.AB_GK_KeyRing_ACC01_C.ExecuteUbergraph_AB_GK_KeyRing_ACC01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_GK_KeyRing_ACC01_C::ExecuteUbergraph_AB_GK_KeyRing_ACC01(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_GK_KeyRing_ACC01.AB_GK_KeyRing_ACC01_C.ExecuteUbergraph_AB_GK_KeyRing_ACC01");

	UAB_GK_KeyRing_ACC01_C_ExecuteUbergraph_AB_GK_KeyRing_ACC01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
