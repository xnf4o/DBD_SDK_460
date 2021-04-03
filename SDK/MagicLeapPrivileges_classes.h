﻿#pragma once

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
// Classes
//---------------------------------------------------------------------------

// Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMagicLeapPrivilegesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary");
		return ptr;
	}



	bool STATIC_RequestPrivilegeAsync(MagicLeapPrivileges_EMagicLeapPrivilege Privilege, const struct FScriptDelegate& ResultDelegate);
	bool STATIC_RequestPrivilege(MagicLeapPrivileges_EMagicLeapPrivilege Privilege);
	bool STATIC_CheckPrivilege(MagicLeapPrivileges_EMagicLeapPrivilege Privilege);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
