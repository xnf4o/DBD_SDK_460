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

// Function AB_K21_Jaw01.AB_K21_Jaw01_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UAB_K21_Jaw01_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_K21_Jaw01.AB_K21_Jaw01_C.AnimGraph");

	UAB_K21_Jaw01_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function AB_K21_Jaw01.AB_K21_Jaw01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K21_Jaw01_AnimGraphNode_TransitionResult_5FB5C9E64903B5216A296FB2C4589527
// (BlueprintEvent)
void UAB_K21_Jaw01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K21_Jaw01_AnimGraphNode_TransitionResult_5FB5C9E64903B5216A296FB2C4589527()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_K21_Jaw01.AB_K21_Jaw01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K21_Jaw01_AnimGraphNode_TransitionResult_5FB5C9E64903B5216A296FB2C4589527");

	UAB_K21_Jaw01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K21_Jaw01_AnimGraphNode_TransitionResult_5FB5C9E64903B5216A296FB2C4589527_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_K21_Jaw01.AB_K21_Jaw01_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_K21_Jaw01_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_K21_Jaw01.AB_K21_Jaw01_C.BlueprintUpdateAnimation");

	UAB_K21_Jaw01_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_K21_Jaw01.AB_K21_Jaw01_C.ExecuteUbergraph_AB_K21_Jaw01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_K21_Jaw01_C::ExecuteUbergraph_AB_K21_Jaw01(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_K21_Jaw01.AB_K21_Jaw01_C.ExecuteUbergraph_AB_K21_Jaw01");

	UAB_K21_Jaw01_C_ExecuteUbergraph_AB_K21_Jaw01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
