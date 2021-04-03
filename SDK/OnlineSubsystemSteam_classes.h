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

// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface");
		return ptr;
	}



};

// Class OnlineSubsystemSteam.SteamNetDriver
// 0x0008 (FullSize[0x07D8] - InheritedSize[0x07D0])
class USteamNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData_424Q[0x8];                                     // 0x07D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemSteam.SteamNetDriver");
		return ptr;
	}



};

// Class OnlineSubsystemSteam.SteamNetConnection
// 0x0008 (FullSize[0x1AF0] - InheritedSize[0x1AE8])
class USteamNetConnection : public UIpConnection
{
public:
	bool                                               bIsPassthrough;                                            // 0x1AE8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PFJX[0x7];                                     // 0x1AE9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemSteam.SteamNetConnection");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
