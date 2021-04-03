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

// Class Party.SocialChatChannel
// 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
class USocialChatChannel : public UObject
{
public:
	unsigned char                                      UnknownData_KHCQ[0xC0];                                    // 0x0030(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Party.SocialChatChannel");
		return ptr;
	}



};

// Class Party.SocialChatRoom
// 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
class USocialChatRoom : public USocialChatChannel
{
public:
	unsigned char                                      UnknownData_NQMF[0x10];                                    // 0x00F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Party.SocialChatRoom");
		return ptr;
	}



};

// Class Party.SocialDebugTools
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class USocialDebugTools : public UObject
{
public:
	unsigned char                                      UnknownData_RNPI[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Party.SocialDebugTools");
		return ptr;
	}



};

// Class Party.SocialGroupChannel
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class USocialGroupChannel : public UObject
{
public:
	class USocialUser*                                 SocialUser;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                            GroupId;                                                   // 0x0038(0x0028) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FText                                       DisplayName;                                               // 0x0060(0x0018) (NativeAccessSpecifierPrivate)
	TArray<class USocialUser*>                         Members;                                                   // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y29I[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Party.SocialGroupChannel");
		return ptr;
	}



};

// Class Party.SocialPartyChatRoom
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class USocialPartyChatRoom : public USocialChatRoom
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Party.SocialPartyChatRoom");
		return ptr;
	}



};

// Class Party.SocialPrivateMessageChannel
// 0x0008 (FullSize[0x00F8] - InheritedSize[0x00F0])
class USocialPrivateMessageChannel : public USocialChatChannel
{
public:
	class USocialUser*                                 TargetUser;                                                // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Party.SocialPrivateMessageChannel");
		return ptr;
	}



};

// Class Party.SocialReadOnlyChatChannel
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class USocialReadOnlyChatChannel : public USocialChatChannel
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Party.SocialReadOnlyChatChannel");
		return ptr;
	}



};

// Class Party.SocialSettings
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class USocialSettings : public UObject
{
public:
	TArray<struct FName>                               OssNamesWithEnvironmentIdPrefix;                           // 0x0030(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                DefaultMaxPartySize;                                       // 0x0040(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bPreferPlatformInvites;                                    // 0x0044(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bMustSendPrimaryInvites;                                   // 0x0045(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bLeavePartyOnDisconnect;                                   // 0x0046(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VISK[0x1];                                     // 0x0047(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UserListAutoUpdateRate;                                    // 0x0048(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MinNicknameLength;                                         // 0x004C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MaxNicknameLength;                                         // 0x0050(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AKRI[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Party.SocialSettings");
		return ptr;
	}



};

// Class Party.SocialUser
// 0x0140 (FullSize[0x0170] - InheritedSize[0x0030])
class USocialUser : public UObject
{
public:
	unsigned char                                      UnknownData_8XPU[0x140];                                   // 0x0030(0x0140) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Party.SocialUser");
		return ptr;
	}



};

// Class Party.Chatroom
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UChatroom : public UObject
{
public:
	struct FString                                     CurrentChatRoomId;                                         // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MaxChatRoomRetries;                                        // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                NumChatRoomRetries;                                        // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GR3E[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Party.Chatroom");
		return ptr;
	}



};

// Class Party.SocialManager
// 0x0178 (FullSize[0x01A8] - InheritedSize[0x0030])
class USocialManager : public UObject
{
public:
	unsigned char                                      UnknownData_YJP2[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USocialToolkit*>                      SocialToolkits;                                            // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USocialDebugTools*                           SocialDebugTools;                                          // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_31BZ[0x140];                                   // 0x0068(0x0140) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Party.SocialManager");
		return ptr;
	}



};

// Class Party.SocialParty
// 0x0290 (FullSize[0x02C0] - InheritedSize[0x0030])
class USocialParty : public UObject
{
public:
	unsigned char                                      UnknownData_SD3S[0x30];                                    // 0x0030(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ReservationBeaconClientClass;                              // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      SpectatorBeaconClientClass;                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K7T5[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUniqueNetIdRepl                            OwningLocalUserId;                                         // 0x0080(0x0028) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                            CurrentLeaderId;                                           // 0x00A8(0x0028) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FUniqueNetIdRepl, class UPartyMember*> PartyMembersById;                                          // 0x00D0(0x0050) (NativeAccessSpecifierPrivate)
	bool                                               bEnableAutomaticPartyRejoin;                               // 0x0120(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UQ5K[0x7F];                                    // 0x0121(0x007F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPartyBeaconClient*                          ReservationBeaconClient;                                   // 0x01A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3OQS[0x10];                                    // 0x01A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpectatorBeaconClient*                      SpectatorBeaconClient;                                     // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ON90[0x100];                                   // 0x01C0(0x0100) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Party.SocialParty");
		return ptr;
	}



};

// Class Party.PartyMember
// 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
class UPartyMember : public UObject
{
public:
	unsigned char                                      UnknownData_UVUV[0x40];                                    // 0x0030(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USocialUser*                                 SocialUser;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P6R5[0x80];                                    // 0x0078(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Party.PartyMember");
		return ptr;
	}



};

// Class Party.SocialToolkit
// 0x01C8 (FullSize[0x01F8] - InheritedSize[0x0030])
class USocialToolkit : public UObject
{
public:
	unsigned char                                      UnknownData_IGE3[0x38];                                    // 0x0030(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USocialUser*                                 LocalUser;                                                 // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USocialUser*>                         AllUsers;                                                  // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NMOO[0x50];                                    // 0x0080(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULocalPlayer*                                LocalPlayerOwner;                                          // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USocialChatManager*                          SocialChatManager;                                         // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_L1KF[0x118];                                   // 0x00E0(0x0118) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Party.SocialToolkit");
		return ptr;
	}



};

// Class Party.SocialChatManager
// 0x01F8 (FullSize[0x0228] - InheritedSize[0x0030])
class USocialChatManager : public UObject
{
public:
	unsigned char                                      UnknownData_18KB[0x50];                                    // 0x0030(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;                                // 0x0080(0x0050) (NativeAccessSpecifierPrivate)
	TMap<struct FString, class USocialChatRoom*>       ChatRoomsById;                                             // 0x00D0(0x0050) (NativeAccessSpecifierPrivate)
	TMap<struct FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;                             // 0x0120(0x0050) (NativeAccessSpecifierPrivate)
	bool                                               bEnableChatSlashCommands;                                  // 0x0170(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HSZ6[0x7];                                     // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FUniqueNetIdRepl, class USocialGroupChannel*> GroupChannels;                                             // 0x0178(0x0050) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QAQH[0x60];                                    // 0x01C8(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Party.SocialChatManager");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
