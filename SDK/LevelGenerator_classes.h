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

// BlueprintGeneratedClass LevelGenerator.LevelGenerator_C
// 0x0014 (FullSize[0x0E64] - InheritedSize[0x0E50])
class ULevelGenerator_C : public UProceduralLevelBuilder
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0E50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              initialMistDensity;                                        // 0x0E60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass LevelGenerator.LevelGenerator_C");
		return ptr;
	}



	void RemoveMist();
	void ApplyMist(float modifier);
	void ExecuteUbergraph_LevelGenerator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
