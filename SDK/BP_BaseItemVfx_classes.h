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

// BlueprintGeneratedClass BP_BaseItemVfx.BP_BaseItemVfx_C
// 0x0021 (FullSize[0x0259] - InheritedSize[0x0238])
class UBP_BaseItemVfx_C : public UItemVfx
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>            ParticleSystems;                                           // 0x0248(0x0010) (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               AbsoluteRotation;                                          // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_BaseItemVfx.BP_BaseItemVfx_C");
		return ptr;
	}



	void ClearParticleSystems();
	void SpawnEmitter(class UparticleSystem* EmitterTemplate, class UskeletalMeshComponent* AttachToComponent, const struct FName& AttachPointName, const struct Fvector& location, const struct FRotator& rotation, const struct Fvector& scale, bool Absolute_Rotation, class UParticleSystemComponent** Particle_System);
	void ReceiveBeginPlay();
	void OnDestroyed_Event(class Uactor* destroyedActor);
	void SetEmittersVisibility(bool Visible);
	void ReceiveDestroyed();
	void SetEmittersActive(bool active);
	void ExecuteUbergraph_BP_BaseItemVfx(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
