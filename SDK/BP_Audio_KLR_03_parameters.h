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
// Parameters
//---------------------------------------------------------------------------

// Function BP_Audio_KLR_03.BP_Audio_KLR_03_C.ReceiveBeginPlay
struct UBP_Audio_KLR_03_C_ReceiveBeginPlay_Params
{
};

// Function BP_Audio_KLR_03.BP_Audio_KLR_03_C.ReceiveEndPlay
struct UBP_Audio_KLR_03_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 endPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_03.BP_Audio_KLR_03_C.ExecuteUbergraph_BP_Audio_KLR_03
struct UBP_Audio_KLR_03_C_ExecuteUbergraph_BP_Audio_KLR_03_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
