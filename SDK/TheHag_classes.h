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

// Class TheHag.PhantomTrapBurnable
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UPhantomTrapBurnable : public ULightBurnable
{
public:
	float                                              _traceZOffset;                                             // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WWVR[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheHag.PhantomTrapBurnable");
		return ptr;
	}



};

// Class TheHag.HagAnimInstance
// 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
class UHagAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_K4TF[0x8];                                     // 0x05A8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheHag.HagAnimInstance");
		return ptr;
	}



};

// Class TheHag.HagSlowdownAfterTeleportEffect
// 0x0030 (FullSize[0x02D8] - InheritedSize[0x02A8])
class UHagSlowdownAfterTeleportEffect : public UstatusEffect
{
public:
	class UCurveFloat*                                 _postTeleportSlowdownCurve;                                // 0x02A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _slowdownTimeAfterTeleport;                                // 0x02B0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheHag.HagSlowdownAfterTeleportEffect");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
