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

// Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void UBP_Menu_Slasher10_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.ReceiveBeginPlay");

	UBP_Menu_Slasher10_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.ExecuteUbergraph_BP_Menu_Slasher10
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Menu_Slasher10_C::ExecuteUbergraph_BP_Menu_Slasher10(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.ExecuteUbergraph_BP_Menu_Slasher10");

	UBP_Menu_Slasher10_C_ExecuteUbergraph_BP_Menu_Slasher10_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
