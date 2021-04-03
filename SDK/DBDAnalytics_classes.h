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

// Class DBDAnalytics.AnalyticsDelegates
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAnalyticsDelegates : public UGameInstanceSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnalytics.AnalyticsDelegates");
		return ptr;
	}



};

// Class DBDAnalytics.AnalyticsFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAnalyticsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnalytics.AnalyticsFunctionLibrary");
		return ptr;
	}



	void STATIC_StartSurvivorTutorialSectionAnalytics(class UObject* worldContextObject, DBDAnalytics_ESurvivorTutorialSections tutorialSection);
	void STATIC_StartKillerTutorialSectionAnalytics(class UObject* worldContextObject, DBDAnalytics_EKillerTutorialSections tutorialSection);
	void STATIC_EndSurvivorTutorialSectionAnalytics(class UObject* worldContextObject, DBDAnalytics_ESurvivorTutorialSections tutorialSection);
	void STATIC_EndKillerTutorialSectionAnalytics(class UObject* worldContextObject, DBDAnalytics_EKillerTutorialSections tutorialSection);
};

// Class DBDAnalytics.AnalyticsManager
// 0x2538 (FullSize[0x2570] - InheritedSize[0x0038])
class UAnalyticsManager : public UAbstractAnalyticsManager
{
public:
	unsigned char                                      UnknownData_A0UJ[0x2538];                                  // 0x0038(0x2538) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnalytics.AnalyticsManager");
		return ptr;
	}



};

// Class DBDAnalytics.ClosetAnalytics
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UClosetAnalytics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnalytics.ClosetAnalytics");
		return ptr;
	}



	void STATIC_RecordClosetSearchSuccess(class UslasherPlayer* Killer);
	void STATIC_RecordClosetSearchFail(class UslasherPlayer* Killer);
	void STATIC_IncrementClosetEnter(class UcamperPlayer* Survivor);
};

// Class DBDAnalytics.EmblemAnalyticsComponent
// 0x00B8 (FullSize[0x0170] - InheritedSize[0x00B8])
class UEmblemAnalyticsComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_YM6E[0xB8];                                    // 0x00B8(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnalytics.EmblemAnalyticsComponent");
		return ptr;
	}



};

// Class DBDAnalytics.InteractionAnalyticsComponent
// 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
class UInteractionAnalyticsComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_LX5O[0x88];                                    // 0x00B8(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnalytics.InteractionAnalyticsComponent");
		return ptr;
	}



};

// Class DBDAnalytics.PigAnalytics
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPigAnalytics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnalytics.PigAnalytics");
		return ptr;
	}



	void STATIC_RecordRBTSearch(class UcamperPlayer* searchingPlayer, bool Success);
	void STATIC_OnRBTAttached_Analytics(class UslasherPlayer* attacher, class UcamperPlayer* attachee);
	void STATIC_IncrementRBTTimerActived(class UcamperPlayer* attachedPlayer);
	void STATIC_IncrementRBTKilledCount(class UcamperPlayer* playerKilled, bool killedByExecutionZone);
};

// Class DBDAnalytics.PulldownAnalytics
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPulldownAnalytics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnalytics.PulldownAnalytics");
		return ptr;
	}



	void STATIC_IncrementPalletStun(class UcamperPlayer* Survivor);
	void STATIC_IncrementPalletSpawned(class Uactor* actor);
	void STATIC_IncrementPalletDrop(class UcamperPlayer* Survivor);
	void STATIC_IncrementPalletDestroy(class UslasherPlayer* Killer);
};

// Class DBDAnalytics.SurvivorInteractionAnalytics
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USurvivorInteractionAnalytics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnalytics.SurvivorInteractionAnalytics");
		return ptr;
	}



	void STATIC_RecordHealSuccess(class UcamperPlayer* Survivor);
	void STATIC_RecordHatchEscape(class UcamperPlayer* Survivor);
	void STATIC_IncrementUnhookCount(class UcamperPlayer* Survivor);
	void STATIC_IncrementHealCount(class UcamperPlayer* Survivor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
