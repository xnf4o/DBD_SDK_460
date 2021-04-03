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

// Function BP_Audio_KLR_11.BP_Audio_KLR_10_C.OnKillerSoundbankLoaded
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// AkAudio_EAkResult              result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_10_C::OnKillerSoundbankLoaded(AkAudio_EAkResult result)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_11.BP_Audio_KLR_10_C.OnKillerSoundbankLoaded");

	UBP_Audio_KLR_10_C_OnKillerSoundbankLoaded_Params params;
	params.result = result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_11.BP_Audio_KLR_10_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_Audio_KLR_10_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_11.BP_Audio_KLR_10_C.ReceiveBeginPlay");

	UBP_Audio_KLR_10_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_11.BP_Audio_KLR_10_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> endPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_10_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> endPlayReason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_11.BP_Audio_KLR_10_C.ReceiveEndPlay");

	UBP_Audio_KLR_10_C_ReceiveEndPlay_Params params;
	params.endPlayReason = endPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_11.BP_Audio_KLR_10_C.ExecuteUbergraph_BP_Audio_KLR_11
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_10_C::ExecuteUbergraph_BP_Audio_KLR_11(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_11.BP_Audio_KLR_10_C.ExecuteUbergraph_BP_Audio_KLR_11");

	UBP_Audio_KLR_10_C_ExecuteUbergraph_BP_Audio_KLR_11_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
