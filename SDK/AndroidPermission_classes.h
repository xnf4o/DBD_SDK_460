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

// Class AndroidPermission.AndroidPermissionCallbackProxy
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UAndroidPermissionCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPermissionsGrantedDynamicDelegate;                       // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BFRU[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AndroidPermission.AndroidPermissionCallbackProxy");
		return ptr;
	}



};

// Class AndroidPermission.AndroidPermissionFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AndroidPermission.AndroidPermissionFunctionLibrary");
		return ptr;
	}



	bool STATIC_CheckPermission(const struct FString& permission);
	class UAndroidPermissionCallbackProxy* STATIC_AcquirePermissions(TArray<struct FString> permissions);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
