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

// BlueprintGeneratedClass BP_Menu_Slasher22.BP_Menu_Slasher22_C
// 0x0020 (FullSize[0x068C] - InheritedSize[0x066C])
class UBP_Menu_Slasher22_C : public UBP_Menu_BaseSlasher_C
{
public:
	unsigned char                                      UnknownData_O2ZA[0x4];                                     // 0x066C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0670(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UskeletalMeshComponent*                      _littlebrother;                                            // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Audio_KLR_22_C*                          BP_Audio_KLR_23;                                           // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                _bp_anim_switch;                                           // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Menu_Slasher22.BP_Menu_Slasher22_C");
		return ptr;
	}



	void _get_ab_menu_slasher22();
	void ReceiveBeginPlay();
	void ReceiveTick(float deltaSeconds);
	void ExecuteUbergraph_BP_Menu_Slasher22(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
