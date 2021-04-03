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

// Class TheDoctor.DoctorAnimInstance
// 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
class UDoctorAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_QSXB[0x8];                                     // 0x05A8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDoctor.DoctorAnimInstance");
		return ptr;
	}



};

// Class TheDoctor.MadnessSurvivorSubAnimInstance
// 0x0010 (FullSize[0x0500] - InheritedSize[0x04F0])
class UMadnessSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _isTotallyInsane;                                          // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TZYF[0xF];                                     // 0x04F1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDoctor.MadnessSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class TheDoctor.SurvivorMadnessEffect
// 0x00E0 (FullSize[0x0388] - InheritedSize[0x02A8])
class USurvivorMadnessEffect : public UstatusEffect
{
public:
	unsigned char                                      UnknownData_7326[0x8];                                     // 0x02A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _madness;                                                  // 0x02B0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WE3X[0xD4];                                    // 0x02B4(0x00D4) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDoctor.SurvivorMadnessEffect");
		return ptr;
	}



	void Server_AddMadness(float madnessToAdd);
	void OnStaticBlastReceived_BP();
	void OnStaticBlastReceived();
	void OnSnapOutOfIt_BP();
	void OnSnapOutOfIt();
	void OnShockTherapyReceived_BP();
	void OnShockTherapyReceived();
	void OnMadnessTierUp_BP();
	void OnMadnessTierDown_BP();
	void Multicast_UpdateMadnessPlayerTags(int newMadness);
	void Multicast_OnMadnessTierUp();
	void Multicast_OnMadnessTierDown();
	float GetMadnessValue();
	int GetMadnessTier();
	void ChangeMadnessAudio_Cosmetic(int madnessTier);
	void Authority_OnMadnessScreamTimerEnd_BP();
};

// Class TheDoctor.TheDoctorUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTheDoctorUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDoctor.TheDoctorUtilities");
		return ptr;
	}



	bool STATIC_IsTotallyInsane(class UdbdPlayer* player);
	class USurvivorMadnessEffect* STATIC_GetSurvivorMadnessEffect(class UdbdPlayer* player);
	int STATIC_GetMadnessTier(class UdbdPlayer* player);
	bool STATIC_CanGainInsanity(class UdbdPlayer* player);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
