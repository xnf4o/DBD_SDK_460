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

// Function AB_K22_backpack_ACC01_REF.AB_K22_backpack_ACC01_REF_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UAB_K22_backpack_ACC01_REF_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_K22_backpack_ACC01_REF.AB_K22_backpack_ACC01_REF_C.AnimGraph");

	UAB_K22_backpack_ACC01_REF_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function AB_K22_backpack_ACC01_REF.AB_K22_backpack_ACC01_REF_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K22_backpack_ACC01_REF_AnimGraphNode_TransitionResult_5313CF904AED718645974FB3FB6F53AD
// (BlueprintEvent)
void UAB_K22_backpack_ACC01_REF_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K22_backpack_ACC01_REF_AnimGraphNode_TransitionResult_5313CF904AED718645974FB3FB6F53AD()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_K22_backpack_ACC01_REF.AB_K22_backpack_ACC01_REF_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K22_backpack_ACC01_REF_AnimGraphNode_TransitionResult_5313CF904AED718645974FB3FB6F53AD");

	UAB_K22_backpack_ACC01_REF_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K22_backpack_ACC01_REF_AnimGraphNode_TransitionResult_5313CF904AED718645974FB3FB6F53AD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_K22_backpack_ACC01_REF.AB_K22_backpack_ACC01_REF_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_K22_backpack_ACC01_REF_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_K22_backpack_ACC01_REF.AB_K22_backpack_ACC01_REF_C.BlueprintUpdateAnimation");

	UAB_K22_backpack_ACC01_REF_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_K22_backpack_ACC01_REF.AB_K22_backpack_ACC01_REF_C.ExecuteUbergraph_AB_K22_backpack_ACC01_REF
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_K22_backpack_ACC01_REF_C::ExecuteUbergraph_AB_K22_backpack_ACC01_REF(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_K22_backpack_ACC01_REF.AB_K22_backpack_ACC01_REF_C.ExecuteUbergraph_AB_K22_backpack_ACC01_REF");

	UAB_K22_backpack_ACC01_REF_C_ExecuteUbergraph_AB_K22_backpack_ACC01_REF_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
