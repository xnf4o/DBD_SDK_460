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

// Function AB_GK_Flower_ACC01.AB_GK_Flower_ACC01_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UAB_GK_Flower_ACC01_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_GK_Flower_ACC01.AB_GK_Flower_ACC01_C.AnimGraph");

	UAB_GK_Flower_ACC01_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function AB_GK_Flower_ACC01.AB_GK_Flower_ACC01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_Flower_ACC01_AnimGraphNode_TransitionResult_C2E80C46482F408CBAD3C5BD40BEBC80
// (BlueprintEvent)
void UAB_GK_Flower_ACC01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_Flower_ACC01_AnimGraphNode_TransitionResult_C2E80C46482F408CBAD3C5BD40BEBC80()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_GK_Flower_ACC01.AB_GK_Flower_ACC01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_Flower_ACC01_AnimGraphNode_TransitionResult_C2E80C46482F408CBAD3C5BD40BEBC80");

	UAB_GK_Flower_ACC01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_Flower_ACC01_AnimGraphNode_TransitionResult_C2E80C46482F408CBAD3C5BD40BEBC80_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_GK_Flower_ACC01.AB_GK_Flower_ACC01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_Flower_ACC01_AnimGraphNode_TransitionResult_206A3E52421A9197FF71B2A70140C705
// (BlueprintEvent)
void UAB_GK_Flower_ACC01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_Flower_ACC01_AnimGraphNode_TransitionResult_206A3E52421A9197FF71B2A70140C705()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_GK_Flower_ACC01.AB_GK_Flower_ACC01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_Flower_ACC01_AnimGraphNode_TransitionResult_206A3E52421A9197FF71B2A70140C705");

	UAB_GK_Flower_ACC01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_Flower_ACC01_AnimGraphNode_TransitionResult_206A3E52421A9197FF71B2A70140C705_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_GK_Flower_ACC01.AB_GK_Flower_ACC01_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_GK_Flower_ACC01_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_GK_Flower_ACC01.AB_GK_Flower_ACC01_C.BlueprintUpdateAnimation");

	UAB_GK_Flower_ACC01_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_GK_Flower_ACC01.AB_GK_Flower_ACC01_C.ExecuteUbergraph_AB_GK_Flower_ACC01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_GK_Flower_ACC01_C::ExecuteUbergraph_AB_GK_Flower_ACC01(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_GK_Flower_ACC01.AB_GK_Flower_ACC01_C.ExecuteUbergraph_AB_GK_Flower_ACC01");

	UAB_GK_Flower_ACC01_C_ExecuteUbergraph_AB_GK_Flower_ACC01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
