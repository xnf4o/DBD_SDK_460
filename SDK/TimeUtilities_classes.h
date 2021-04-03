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

// Class TimeUtilities.DBDTimeUtilities
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UDBDTimeUtilities : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_RLEQ[0x28];                                    // 0x0038(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TimeUtilities.DBDTimeUtilities");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
