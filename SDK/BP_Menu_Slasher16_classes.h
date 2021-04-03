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

// BlueprintGeneratedClass BP_Menu_Slasher16.BP_Menu_Slasher16_C
// 0x0014 (FullSize[0x0680] - InheritedSize[0x066C])
class UBP_Menu_Slasher16_C : public UBP_Menu_BaseSlasher_C
{
public:
	unsigned char                                      UnknownData_B55U[0x4];                                     // 0x066C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0670(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Audio_KLR_16_C*                          BP_Audio_KLR_17;                                           // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Menu_Slasher16.BP_Menu_Slasher16_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Menu_Slasher16(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
