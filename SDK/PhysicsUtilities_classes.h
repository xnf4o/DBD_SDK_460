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

// Class PhysicsUtilities.PrimitiveCollection
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UPrimitiveCollection : public UObject
{
public:
	unsigned char                                      _primitives[0x50];                                         // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class PhysicsUtilities.PrimitiveCollection");
		return ptr;
	}



	void Remove(class UprimitiveComponent* primitive);
	void Add(class UprimitiveComponent* primitive);
};

// Class PhysicsUtilities.PrimitivesRegistererComponent
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UPrimitivesRegistererComponent : public UactorComponent
{
public:
	TArray<class UprimitiveComponent*>                 _primitives;                                               // 0x00B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UPrimitiveCollection>         _primitiveCollection;                                      // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class PhysicsUtilities.PrimitivesRegistererComponent");
		return ptr;
	}



	void SetPrimitives(TArray<class UprimitiveComponent*> primitives);
};

// Class PhysicsUtilities.DynamicCapsuleResizerComponent
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UDynamicCapsuleResizerComponent : public UactorComponent
{
public:
	class UCapsuleComponent*                           _capsule;                                                  // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0QJ1[0x14];                                    // 0x00C0(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _shrinkPercent;                                            // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _shrinkDuration;                                           // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _expandDuration;                                           // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _stayShrunkenDuration;                                     // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isShrinkingEnabled;                                       // 0x00E4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K2YB[0x3];                                     // 0x00E5(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class PhysicsUtilities.DynamicCapsuleResizerComponent");
		return ptr;
	}



	void SetShrinkingEnabled(bool enabled);
	void OnHit(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, const struct Fvector& normalImpulse, const struct FhitResult& hit);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
