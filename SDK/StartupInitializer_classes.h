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
// Classes
//---------------------------------------------------------------------------

// Class StartupInitializer.StartupInitializer
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UStartupInitializer : public UObject
{
public:
	unsigned char                                      UnknownData_RPA7[0x38];                                    // 0x0030(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class StartupInitializer.StartupInitializer");
		return ptr;
	}



};

// Class StartupInitializer.ClientStartupInitializer
// 0x00F8 (FullSize[0x0160] - InheritedSize[0x0068])
class UClientStartupInitializer : public UStartupInitializer
{
public:
	unsigned char                                      UnknownData_G56H[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USharedAuthenticationComponent*              _sharedAuthenticationComponent;                            // 0x0070(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NY5S[0xE8];                                    // 0x0078(0x00E8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class StartupInitializer.ClientStartupInitializer");
		return ptr;
	}



};

// Class StartupInitializer.DedicatedServerStartupInitializer
// 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
class UDedicatedServerStartupInitializer : public UStartupInitializer
{
public:
	unsigned char                                      UnknownData_VU9Z[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDTimeUtilities*                           _dbdTimeUtilities;                                         // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_98LA[0x28];                                    // 0x0078(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class StartupInitializer.DedicatedServerStartupInitializer");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
