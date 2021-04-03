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

// Class SentryIo.SentryIoSubsystem
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class USentryIoSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_D9SH[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SentryIo.SentryIoSubsystem");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
