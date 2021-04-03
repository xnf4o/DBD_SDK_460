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

// Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class ULightPropagationVolumeBlendable : public UObject
{
public:
	unsigned char                                      UnknownData_MOUN[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLightPropagationVolumeSettings             settings;                                                  // 0x0038(0x0040) (Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	float                                              BlendWeight;                                               // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AV71[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
