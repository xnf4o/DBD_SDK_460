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

// Class QueryService.ActorPairQueryEvaluatorComponent
// 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
class UActorPairQueryEvaluatorComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_RJ0E[0x58];                                    // 0x00B8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class QueryService.ActorPairQueryEvaluatorComponent");
		return ptr;
	}



};

// Class QueryService.ActorPairQueryEvaluatorSubscriberTest
// 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
class UActorPairQueryEvaluatorSubscriberTest : public Uactor
{
public:
	unsigned char                                      UnknownData_L0N2[0x28];                                    // 0x0230(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class QueryService.ActorPairQueryEvaluatorSubscriberTest");
		return ptr;
	}



	void OnRangeChanged(bool inRange);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
