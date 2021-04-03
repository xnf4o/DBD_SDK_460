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

// Class WwiseUtilities.WwiseUtilities
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UWwiseUtilities : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_AAMC[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class WwiseUtilities.WwiseUtilities");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
