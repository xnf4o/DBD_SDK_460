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

// Class SignificanceUtilities.DistanceBasedTickDisabler
// 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
class UDistanceBasedTickDisabler : public UactorComponent
{
public:
	bool                                               _autoRegisterOwner;                                        // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _autoRegisterTimelines;                                    // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SFFN[0x6];                                     // 0x00BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBHVRPerDetailModeFloat                     _tickDisableDistance;                                      // 0x00C0(0x00A0) (Edit, NativeAccessSpecifierPrivate)
	bool                                               _insignificantWhenBehindTheCamera;                         // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CGSU[0x7];                                     // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UactorComponent*>                     _components;                                               // 0x0168(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_B6WK[0x8];                                     // 0x0178(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SignificanceUtilities.DistanceBasedTickDisabler");
		return ptr;
	}



	void UnregisterComponent(class UactorComponent* component);
	void RegisterComponent(class UactorComponent* component);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
