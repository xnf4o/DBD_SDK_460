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

// Function BP_Audio_KLR_06.BP_Audio_KLR_06_C.OnKillerSoundbankLoaded
struct UBP_Audio_KLR_06_C_OnKillerSoundbankLoaded_Params
{
	AkAudio_EAkResult                                  result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_06.BP_Audio_KLR_06_C.ReceiveBeginPlay
struct UBP_Audio_KLR_06_C_ReceiveBeginPlay_Params
{
};

// Function BP_Audio_KLR_06.BP_Audio_KLR_06_C.ReceiveEndPlay
struct UBP_Audio_KLR_06_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 endPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_06.BP_Audio_KLR_06_C.ExecuteUbergraph_BP_Audio_KLR_06
struct UBP_Audio_KLR_06_C_ExecuteUbergraph_BP_Audio_KLR_06_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
