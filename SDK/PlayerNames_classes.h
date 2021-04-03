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

// Class PlayerNames.PlayerNameFacade
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UPlayerNameFacade : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_KZLO[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class PlayerNames.PlayerNameFacade");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
