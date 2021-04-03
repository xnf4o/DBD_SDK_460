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

// BlueprintGeneratedClass BP_Menu_Slasher03.BP_Menu_Slasher03_C
// 0x001C (FullSize[0x0688] - InheritedSize[0x066C])
class UBP_Menu_Slasher03_C : public UBP_Menu_BaseSlasher_C
{
public:
	unsigned char                                      UnknownData_FQUL[0x4];                                     // 0x066C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0670(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Audio_KLR_03_C*                          BP_Audio_KLR_03;                                           // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UskeletalMeshComponent*                      ChainSaw01_REF;                                            // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Menu_Slasher03.BP_Menu_Slasher03_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Menu_Slasher03(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
