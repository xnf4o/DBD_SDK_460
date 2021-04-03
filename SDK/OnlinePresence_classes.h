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

// Class OnlinePresence.SteamConfig
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USteamConfig : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlinePresence.SteamConfig");
		return ptr;
	}



};

// Class OnlinePresence.MirrorsConfig
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMirrorsConfig : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlinePresence.MirrorsConfig");
		return ptr;
	}



};

// Class OnlinePresence.OnlinePresenceExternalCommands
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UOnlinePresenceExternalCommands : public UObject
{
public:
	unsigned char                                      UnknownData_RX6Q[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlinePresence.OnlinePresenceExternalCommands");
		return ptr;
	}



	void DBD_MirrorsWalletWithdraw(const struct FString& currencyName, int Value);
	void DBD_MirrorsWalletGetCurrency(const struct FString& currencyName);
	void DBD_MirrorsSaveTestValue(const struct FString& stateName, int version);
	void DBD_MirrorsGetValue(const struct FString& stateName);
	bool DBD_IsDlcInstalled(const struct FString& InString);
	bool DBD_GrantPromoItems();
	bool DBD_GenerateTestItems();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
