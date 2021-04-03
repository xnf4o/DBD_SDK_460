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

// BlueprintGeneratedClass BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C
// 0x006C (FullSize[0x066C] - InheritedSize[0x0600])
class UBP_Menu_BaseSlasher_C : public UDBDMenuPlayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0600(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_KillerRightFootGroundDetector_C*         RightFootGroundDetector;                                   // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_KillerLeftFootGroundDetector_C*          LeftFootGroundDetector;                                    // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCustomizedAudioComponent*                   CustomizedAudio;                                           // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCustomizedSkeletalMesh*                     CustomizedSkeletalMesh;                                    // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                                Ak_Audio_Menu_Base_Slasher;                                // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              TML_DissolveSlasher_Dissolve_6A8353EF46DC9749463CE0935534B1A4; // 0x0630(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             TML_DissolveSlasher__Direction_6A8353EF46DC9749463CE0935534B1A4; // 0x0634(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W5VC[0x3];                                     // 0x0635(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TML_DissolveSlasher;                                       // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInMenu;                                                  // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0C90[0x7];                                     // 0x0641(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      RequiredSoundBanks[0x10];                                  // 0x0641(0x0010) UNKNOWN PROPERTY: ArrayProperty
	TArray<class UObject*>                             AssignedSoundBanks;                                        // 0x0658(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              SlasherHeight;                                             // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C");
		return ptr;
	}



	void UpdateHeight();
	class UCustomizedAudioComponent* GetCustomizedAudio();
	void TML_DissolveSlasher__FinishedFunc();
	void TML_DissolveSlasher__UpdateFunc();
	void ReceiveBeginPlay();
	void BeginDestroySequence_Internal();
	void BeginSmokeIn();
	void RestartInSequence_Internal();
	void BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(DeadByDaylight_EAudioCustomizationCategory category, const struct FString& SwitchState);
	void ExecuteUbergraph_BP_Menu_BaseSlasher(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
