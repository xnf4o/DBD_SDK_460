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

// Function SharedAuthenticationUtilities.UMGAutheticationProviderSelection.SetSelectedAuthenticationProvider
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// SharedAuthenticationUtilities_ESharedAuthenticationProvider provider                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUMGAutheticationProviderSelection::SetSelectedAuthenticationProvider(SharedAuthenticationUtilities_ESharedAuthenticationProvider provider)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SharedAuthenticationUtilities.UMGAutheticationProviderSelection.SetSelectedAuthenticationProvider");

	UUMGAutheticationProviderSelection_SetSelectedAuthenticationProvider_Params params;
	params.provider = provider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
