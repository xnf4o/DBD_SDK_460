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

// Class LocationServicesBPLibrary.LocationServices
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class ULocationServices : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LocationServicesBPLibrary.LocationServices");
		return ptr;
	}



	bool STATIC_StopLocationServices();
	bool STATIC_StartLocationServices();
	bool STATIC_IsLocationAccuracyAvailable(LocationServicesBPLibrary_ELocationAccuracy Accuracy);
	bool STATIC_InitLocationServices(LocationServicesBPLibrary_ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);
	class ULocationServicesImpl* STATIC_GetLocationServicesImpl();
	struct FLocationServicesData STATIC_GetLastKnownLocation();
	bool STATIC_AreLocationServicesEnabled();
};

// Class LocationServicesBPLibrary.LocationServicesImpl
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class ULocationServicesImpl : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnLocationChanged;                                         // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LocationServicesBPLibrary.LocationServicesImpl");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
