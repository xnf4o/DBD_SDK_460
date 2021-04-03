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

// Class DBDUIPresenters.PawnObserver
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UPawnObserver : public UactorComponent
{
public:
	unsigned char                                      UnknownData_FJD1[0x20];                                    // 0x00B8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Upawn*                                       _pawn;                                                     // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIPresenters.PawnObserver");
		return ptr;
	}



};

// Class DBDUIPresenters.RootContainer
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class URootContainer : public UactorComponent
{
public:
	class UClass*                                      RootWidgetClass;                                           // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              UnfocusedOpacity;                                          // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_72BM[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCoreHudRootWidget*                          _rootWidget;                                               // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIPresenters.RootContainer");
		return ptr;
	}



};

// Class DBDUIPresenters.BaseHudPresenter
// 0x0040 (FullSize[0x00F8] - InheritedSize[0x00B8])
class UBaseHudPresenter : public UactorComponent
{
public:
	class UUserWidget*                                 _widget;                                                   // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UdbdPlayer*                                  _presentedCharacter;                                       // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UdbdPlayer*                                  _pendingCharacter;                                         // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDSpectator*                               _spectatorPawn;                                            // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               RequestPresentationAtBeginPlay;                            // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	UMG_ESlateVisibility                               InitialVisibility;                                         // 0x00D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZKSN[0x1E];                                    // 0x00DA(0x001E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIPresenters.BaseHudPresenter");
		return ptr;
	}



	void OnPawnUnpossessed(class Upawn* pawn);
	void OnPawnPossessed(class Upawn* pawn);
};

// Class DBDUIPresenters.SkillCheckPresenter
// 0x0038 (FullSize[0x0130] - InheritedSize[0x00F8])
class USkillCheckPresenter : public UBaseHudPresenter
{
public:
	class UClass*                                      SkillCheckWidgetClass;                                     // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V85I[0x30];                                    // 0x0100(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIPresenters.SkillCheckPresenter");
		return ptr;
	}



};

// Class DBDUIPresenters.TemplatePresenter
// 0x0020 (FullSize[0x0118] - InheritedSize[0x00F8])
class UTemplatePresenter : public UBaseHudPresenter
{
public:
	class UClass*                                      TemplateWidgetClass;                                       // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V1TD[0x18];                                    // 0x0100(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIPresenters.TemplatePresenter");
		return ptr;
	}



};

// Class DBDUIPresenters.TestPresenter
// 0x0010 (FullSize[0x0108] - InheritedSize[0x00F8])
class UTestPresenter : public UBaseHudPresenter
{
public:
	class UClass*                                      TestWidgetClass;                                           // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6916[0x8];                                     // 0x0100(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIPresenters.TestPresenter");
		return ptr;
	}



};

// Class DBDUIPresenters.TweenHandler
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UTweenHandler : public UactorComponent
{
public:
	bool                                               DoUpdate;                                                  // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1R6L[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIPresenters.TweenHandler");
		return ptr;
	}



};

// Class DBDUIPresenters.UIConsoleCommands
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UUIConsoleCommands : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIPresenters.UIConsoleCommands");
		return ptr;
	}



	void DBD_ToggleTestWidget();
	void DBD_ToggleDPICurve();
	void DBD_SetHudVisible(bool isVisible);
	void DBD_SetHudScaleFactor(float scaleFactor);
	void DBD_SetApplicationScale(float applicationScale);
};

// Class DBDUIPresenters.ContextObserver
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UContextObserver : public UactorComponent
{
public:
	DBDUIPresenters_EContextSection                    ObservedContextSection;                                    // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_B5YT[0x27];                                    // 0x00B9(0x0027) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIPresenters.ContextObserver");
		return ptr;
	}



};

// Class DBDUIPresenters.ExamplePresenter
// 0x0040 (FullSize[0x0138] - InheritedSize[0x00F8])
class UExamplePresenter : public UBaseHudPresenter
{
public:
	class UClass*                                      ExampleWidgetClass;                                        // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4WGN[0x38];                                    // 0x0100(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIPresenters.ExamplePresenter");
		return ptr;
	}



	void OnButtonClick();
};

// Class DBDUIPresenters.FocusHandler
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UFocusHandler : public UactorComponent
{
public:
	unsigned char                                      UnknownData_0AZX[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIPresenters.FocusHandler");
		return ptr;
	}



};

// Class DBDUIPresenters.HookCountPresenter
// 0x0048 (FullSize[0x0140] - InheritedSize[0x00F8])
class UHookCountPresenter : public UBaseHudPresenter
{
public:
	class UClass*                                      HookCountWidgetClass;                                      // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZTQK[0x40];                                    // 0x0100(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIPresenters.HookCountPresenter");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
