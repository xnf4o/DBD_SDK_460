﻿// Name: DBD, Version: 4.6.0

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

// Function BP_Effect_DO_Head01.BP_Effect_DO_Head01_C.AttachToSkeletalMesh
// (Event, Public, BlueprintEvent)
// Parameters:
// class UskeletalMeshComponent*  SkeletonPart                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Effect_DO_Head01_C::AttachToSkeletalMesh(class UskeletalMeshComponent* SkeletonPart)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Effect_DO_Head01.BP_Effect_DO_Head01_C.AttachToSkeletalMesh");

	UBP_Effect_DO_Head01_C_AttachToSkeletalMesh_Params params;
	params.SkeletonPart = SkeletonPart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Effect_DO_Head01.BP_Effect_DO_Head01_C.ExecuteUbergraph_BP_Effect_DO_Head01
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Effect_DO_Head01_C::ExecuteUbergraph_BP_Effect_DO_Head01(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Effect_DO_Head01.BP_Effect_DO_Head01_C.ExecuteUbergraph_BP_Effect_DO_Head01");

	UBP_Effect_DO_Head01_C_ExecuteUbergraph_BP_Effect_DO_Head01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
