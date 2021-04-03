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

// Class OnlineMessagesUtilities.OnlineMessagesContainerComponent
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UOnlineMessagesContainerComponent : public UactorComponent
{
public:
	TArray<struct FInboxMessageData>                   _messages;                                                 // 0x00B8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_62AV[0x20];                                    // 0x00C8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineMessagesUtilities.OnlineMessagesContainerComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
