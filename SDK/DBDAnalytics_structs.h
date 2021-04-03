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
// Enums
//---------------------------------------------------------------------------

// Enum DBDAnalytics.ECharacterStatus
enum class DBDAnalytics_ECharacterStatus : uint8_t
{
	ECharacterStatus__Crawling     = 0,
	ECharacterStatus__BeingPickedUp = 1,
	ECharacterStatus__BeingCarried = 2,
	ECharacterStatus__BeingHealed  = 3,
	ECharacterStatus__BeingMended  = 4,
	ECharacterStatus__BeingPutDown = 5,
	ECharacterStatus__BeingPutOnHook = 6,
	ECharacterStatus__BeingPulledFromCloset = 7,
	ECharacterStatus__BeingKilled  = 8,
	ECharacterStatus__OnHook       = 9,
	ECharacterStatus__ECharacterStatus_MAX = 10,

};

// Enum DBDAnalytics.EHealthStatus
enum class DBDAnalytics_EHealthStatus : uint8_t
{
	EHealthStatus__Healthy         = 0,
	EHealthStatus__Wounded         = 1,
	EHealthStatus__DeepWounded     = 2,
	EHealthStatus__Dying           = 3,
	EHealthStatus__EHealthStatus_MAX = 4,

};

// Enum DBDAnalytics.EDoorStatus
enum class DBDAnalytics_EDoorStatus : uint8_t
{
	EDoorStatus__Closed            = 0,
	EDoorStatus__Powered           = 1,
	EDoorStatus__Open              = 2,
	EDoorStatus__EDoorStatus_MAX   = 3,

};

// Enum DBDAnalytics.EHatchStatus
enum class DBDAnalytics_EHatchStatus : uint8_t
{
	EHatchStatus__Hidden           = 0,
	EHatchStatus__Visible          = 1,
	EHatchStatus__Open             = 2,
	EHatchStatus__Closed           = 3,
	EHatchStatus__ClosedOrHidden   = 4,
	EHatchStatus__EHatchStatus_MAX = 5,

};

// Enum DBDAnalytics.ESurvivorTutorialSections
enum class DBDAnalytics_ESurvivorTutorialSections : uint8_t
{
	ESurvivorTutorialSections__Intro = 0,
	ESurvivorTutorialSections__Skillchecks = 1,
	ESurvivorTutorialSections__Killer = 2,
	ESurvivorTutorialSections__Stealth = 3,
	ESurvivorTutorialSections__Hook = 4,
	ESurvivorTutorialSections__Health = 5,
	ESurvivorTutorialSections__Rescue = 6,
	ESurvivorTutorialSections__Escape = 7,
	ESurvivorTutorialSections__ESurvivorTutorialSections_MAX = 8,

};

// Enum DBDAnalytics.EKillerTutorialSections
enum class DBDAnalytics_EKillerTutorialSections : uint8_t
{
	EKillerTutorialSections__Intro = 0,
	EKillerTutorialSections__Chase = 1,
	EKillerTutorialSections__Escape = 2,
	EKillerTutorialSections__EKillerTutorialSections_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDAnalytics.SaveGameSummaryPlayerStatsAnalytics
// 0x0030 (0x0098 - 0x0068)
struct FSaveGameSummaryPlayerStatsAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     OwnedPerks;                                                // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerStatsProgression;                                    // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BloodwebPoints;                                            // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GQVI[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            CumulativePlaytime;                                        // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.StatsProgressionData
// 0x0010
struct FStatsProgressionData
{
	struct FName                                       name;                                                      // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.SerializablePlayerStatsProgression
// 0x0010
struct FSerializablePlayerStatsProgression
{
	TArray<struct FStatsProgressionData>               StatsProgression;                                          // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.SerializablePlayerPerks
// 0x0050
struct FSerializablePlayerPerks
{
	TMap<struct FName, int>                            perks;                                                     // 0x0000(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.DetailedScoreAnalytics
// 0x0060 (0x00C8 - 0x0068)
struct FDetailedScoreAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     ScorerMirrorsId;                                           // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TargetMirrorsId;                                           // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ScoreTypeId;                                               // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ScoreExperience;                                           // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ElapsedMatchTime;                                          // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InstigatorCoordinateX;                                     // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InstigatorCoordinateY;                                     // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InstigatorCoordinateZ;                                     // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetCoordinateX;                                         // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetCoordinateY;                                         // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetCoordinateZ;                                         // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QPZA[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.ScoreAnalytics
// 0x0028 (0x0090 - 0x0068)
struct FScoreAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchId;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ScoreTypeId;                                               // 0x0078(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ScoreCount;                                                // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScoreBloodwebPoints;                                       // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D7QY[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.SpecialEventAnalytics
// 0x0038 (0x00A0 - 0x0068)
struct FSpecialEventAnalytics : public FUniquelyIdentifiedAnalytic
{
	DBDSharedTypes_EPlayerRole                         role;                                                      // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H0FQ[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MatchId;                                                   // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EventName;                                                 // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Challenge;                                                 // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CummulativeAmount;                                         // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.StadiaLivestreamAnalytics
// 0x0028 (0x0090 - 0x0068)
struct FStadiaLivestreamAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     StreamStartTime;                                           // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userId;                                                    // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CrowdPlayEnabled;                                          // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CrowdChoiceEnabled;                                        // 0x0089(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6ND7[0x6];                                     // 0x008A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.FrameTravelTimeAnalytics
// 0x0058 (0x00C0 - 0x0068)
struct FFrameTravelTimeAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchId;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DynamicRange;                                              // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PixelDensity;                                              // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RenderResolution;                                          // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrameIssuedToClientArrivalTotalTime;                       // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrameIssuedToBeginRenderingTime;                           // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrameRenderingTime;                                        // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrameEncodingTime;                                         // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrameFinishedEncodingToClientArrivalTime;                  // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2PVZ[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.StadiaStreamAnalytics
// 0x0060 (0x00C8 - 0x0068)
struct FStadiaStreamAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchId;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DynamicRange;                                              // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PixelDensity;                                              // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RenderResolution;                                          // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NetworkDelayForInputTime;                                  // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NetworkDelayForVideoTime;                                  // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentFramesAbove60FPS;                                   // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentFramesBelow60FPS;                                   // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentFramesBelow45FPS;                                   // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentFramesBelow30FPS;                                   // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentFramesBelow20FPS;                                   // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FAOL[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.SurvivorTutorialAnalytics
// 0x0030 (0x0098 - 0x0068)
struct FSurvivorTutorialAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                SecondsSpentInTutorial;                                    // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecondsSpentInIntroSection;                                // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecondsSpentInSkillchecksSection;                          // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecondsSpentInKillerSection;                               // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecondsSpentInStealthSection;                              // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecondsSpentInHookSection;                                 // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecondsSpentInHealthSection;                               // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecondsSpentInRescueSection;                               // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecondsSpentInEscapeSection;                               // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WasScratchMarksAndWildlifeEventTriggered;                  // 0x008C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WasRushedActionEventTriggered;                             // 0x008D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WasSuccessfulStealthEventTriggered;                        // 0x008E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WasStealthObjectiveCompleted;                              // 0x008F(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WasHatchEscapeObjectiveCompleted;                          // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0TYT[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.GameConsoleLogAnalytics
// 0x0010 (0x0078 - 0x0068)
struct FGameConsoleLogAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     GameConsoleLog;                                            // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.GameInitAnalytics
// 0x0050 (0x00B8 - 0x0068)
struct FGameInitAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     InitGuid;                                                  // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProgressionName;                                           // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YCZE[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LoadCompleteState;                                         // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ElapsedTime;                                               // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           FailureCount;                                              // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     additionalInfo;                                            // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.Gameplay_PigKillerAnalytics
// 0x0038 (0x00A0 - 0x0068)
struct FGameplay_PigKillerAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchId;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmbushHitCount;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RbtKilledCount;                                            // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rbt1GeneratorCount;                                        // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rbt2GeneratorCount;                                        // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rbt3GeneratorCount;                                        // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rbt4GeneratorCount;                                        // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rbt5GeneratorCount;                                        // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CrouchDuration;                                            // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RbtExitKill;                                               // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RbtHookKill;                                               // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.Gameplay_KillerAnalytics
// 0x00B8 (0x0120 - 0x0068)
struct FGameplay_KillerAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchId;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              speed;                                                     // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BloodlustTier1Count;                                       // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BloodlustTier2Count;                                       // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BloodlustTier3Count;                                       // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloodlustTier1Duration;                                    // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloodlustTier2Duration;                                    // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloodlustTier3Duration;                                    // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloodlustSpeed;                                            // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChaseCount;                                                // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChaseCountFail;                                            // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChaseCountSuccess;                                         // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChaseCountTier1Fail;                                       // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChaseCountTier1Success;                                    // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChaseCountTier2Fail;                                       // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChaseCountTier2Success;                                    // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChaseCountTier3Fail;                                       // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChaseCountTier3Success;                                    // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HookCount;                                                 // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MurderCount;                                               // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletSpawned;                                             // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletProcedural;                                          // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletProceduralSetCount;                                  // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           PalletGenerationId;                                        // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletGeneric;                                             // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletDestroyed;                                           // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BreakableWallSpawned;                                      // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BreakableWallDestroyed;                                    // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                dropCount;                                                 // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HitCloseCount;                                             // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HitCloseCountSuccess;                                      // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HitFarCount;                                               // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HitFarCountSuccess;                                        // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HitSpecialCount;                                           // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HitSpecialCountSuccess;                                    // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClosetOpen;                                                // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClosetOpenSuccess;                                         // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EscapeesHatchCount;                                        // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SecondesAtLeastOneSurvivorHooked;                          // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           AmountTilesVisited;                                        // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartX;                                                    // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartY;                                                    // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartZ;                                                    // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.Gameplay_PigSurvivorAnalytics
// 0x0038 (0x00A0 - 0x0068)
struct FGameplay_PigSurvivorAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchId;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RbtAttachedCount;                                          // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ActivatedRbtTimerCount;                                    // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RbtSuccessSearchCount;                                     // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RbtFailedSearchCount;                                      // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RbtDisabledPreActivation;                                  // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RbtDisabledPostActivation;                                 // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RbtChaseDuration;                                          // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RbtAverageTimeLeftBeforeDisable;                           // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RbtDuration;                                               // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6ZUC[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.Gameplay_SurvivorAnalytics
// 0x0090 (0x00F8 - 0x0068)
struct FGameplay_SurvivorAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchId;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              speed;                                                     // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InjuredSpeed;                                              // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InjuredDuration;                                           // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HealthyDuration;                                           // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KODuration;                                                // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletSpawned;                                             // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletProcedural;                                          // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletProceduralSetCount;                                  // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           PalletGenerationId;                                        // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletGeneric;                                             // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletDrop;                                                // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletStun;                                                // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UnhookCount;                                               // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HealCount;                                                 // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HealCountSuccess;                                          // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClosetEnter;                                               // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Hatch;                                                     // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillCheckCount;                                           // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillCheckCountGood;                                       // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillCheckCountGreat;                                      // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChaseDuration;                                             // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumChases;                                                 // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HitBySlasherCount;                                         // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           AmountTilesVisited;                                        // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartX;                                                    // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartY;                                                    // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartZ;                                                    // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EmotePoint;                                                // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EmoteCome;                                                 // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CrouchingDuration;                                         // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CrouchingCount;                                            // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CW4M[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.HeartbeatAnalytics
// 0x0010 (0x0078 - 0x0068)
struct FHeartbeatAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     BeatTime;                                                  // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.InteractionAnalytics
// 0x0020 (0x0088 - 0x0068)
struct FInteractionAnalytics : public FUniquelyIdentifiedAnalytic
{
	DBDSharedTypes_EPlayerRole                         role;                                                      // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KMZ7[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                InterruptionSuccessCount;                                  // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InterruptionFailureCount;                                  // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InteractionPredictedCount;                                 // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InteractionAuthorizedCount;                                // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InteractionDeniedByRaceConditionCount;                     // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InteractionDeniedByTimeoutCount;                           // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InteractionDeniedByErrorCount;                             // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.KillerTutorialAnalytics
// 0x0018 (0x0080 - 0x0068)
struct FKillerTutorialAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                SecondsSpentInTutorial;                                    // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecondsSpentInIntroSection;                                // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecondsSpentInChaseSection;                                // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecondsSpentInEscapeSection;                               // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WasLungeAttackObjectiveCompleted;                          // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JSR0[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.KrakenRequestAnalytics
// 0x0070 (0x00D8 - 0x0068)
struct FKrakenRequestAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     KrakenUrl;                                                 // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Method;                                                    // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Route;                                                     // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Status;                                                    // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ResponseCode;                                              // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProviderError;                                             // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           AttemptCount;                                              // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x00B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanRetry;                                                  // 0x00B5(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WillRetry;                                                 // 0x00B6(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y521[0x1];                                     // 0x00B7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Country;                                                   // 0x00B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttemptElapsedTime;                                        // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalElapsedTime;                                          // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalElapsedTimeCapped;                                    // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QED7[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.LoadoutBaseAnalytics
// 0x0088 (0x00F0 - 0x0068)
struct FLoadoutBaseAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     LoadoutItem;                                               // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoadoutItemAddOn1;                                         // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoadoutItemAddOn2;                                         // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoadoutPerk1;                                              // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoadoutPerk2;                                              // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoadoutPerk3;                                              // 0x00B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoadoutPerk4;                                              // 0x00C8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoadoutOffering;                                           // 0x00D8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         role;                                                      // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AQDP[0x3];                                     // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                rank;                                                      // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.LoadOutLobbyAnalytics
// 0x0028 (0x0118 - 0x00F0)
struct FLoadOutLobbyAnalytics : public FLoadoutBaseAnalytics
{
	int                                                level;                                                     // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                prestige;                                                  // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterName;                                             // 0x00F8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LobbyId;                                                   // 0x0108(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.LoadOutAnalytics
// 0x0010 (0x0100 - 0x00F0)
struct FLoadOutAnalytics : public FLoadoutBaseAnalytics
{
	struct FString                                     MatchId;                                                   // 0x00F0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.LogMirrorsAnalytics
// 0x0010 (0x0078 - 0x0068)
struct FLogMirrorsAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     LogMirrors;                                                // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.LogPresencePluginAnalytics
// 0x0020 (0x0088 - 0x0068)
struct FLogPresencePluginAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     Context;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     message;                                                   // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.MapCoordData
// 0x0030
struct FMapCoordData
{
	struct FString                                     type;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     actor;                                                     // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                x;                                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                y;                                                         // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                z;                                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H5BV[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.MapCoordAnalytics
// 0x0020 (0x0088 - 0x0068)
struct FMapCoordAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchId;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMapCoordData>                       MapItem;                                                   // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.MatchInfoAnalytics
// 0x00D8 (0x0140 - 0x0068)
struct FMatchInfoAnalytics : public FUniquelyIdentifiedAnalytic
{
	DeadByDaylight_EGameType                           GameMode;                                                  // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         role;                                                      // 0x0069(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsABot;                                                    // 0x006A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EAIDifficultyLevel                  BotDifficultyLevel;                                        // 0x006B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PartySize;                                                 // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterName;                                             // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                rank;                                                      // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                level;                                                     // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                prestige;                                                  // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Pips;                                                      // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PipsTotal;                                                 // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapSeed;                                                   // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     mapName;                                                   // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PartyHostMirrorsId;                                        // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LobbyId;                                                   // 0x00B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x00C8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KrakenMatchId;                                             // 0x00D8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerName;                                                // 0x00E8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SelectedCountry;                                           // 0x00F8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FirstTimePlaying;                                          // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O8KY[0x3];                                     // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CumulativeMatches;                                         // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeMatchesAsSurvivor;                               // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeMatchesAsKiller;                                 // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastMatchTimestamp;                                        // 0x0118(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExactPing;                                                 // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               hasAnActiveArchiveQuest;                                   // 0x012C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               archiveQuestCanProgress;                                   // 0x012D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsUsingKeyboard;                                           // 0x012E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I0BD[0x1];                                     // 0x012F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ControllerType;                                            // 0x0130(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.MatchmakingAnalytics
// 0x0018 (0x0080 - 0x0068)
struct FMatchmakingAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchmakingSessionGuid;                                    // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         playerRole;                                                // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EGameType                           GameType;                                                  // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_41AT[0x2];                                     // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PartySize;                                                 // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.MatchmakingLobbyAnalytics
// 0x0048 (0x00C8 - 0x0080)
struct FMatchmakingLobbyAnalytics : public FMatchmakingAnalytics
{
	struct FString                                     LobbyStartTime;                                            // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LobbyEndTime;                                              // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LobbyResult;                                               // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KrakenMatchId;                                             // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                rank;                                                      // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X4YE[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.MatchmakingQueueAnalytics
// 0x0038 (0x00B8 - 0x0080)
struct FMatchmakingQueueAnalytics : public FMatchmakingAnalytics
{
	struct FString                                     QueueStartTime;                                            // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     QueueEndTime;                                              // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     QueueResult;                                               // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                rank;                                                      // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CrossPlayEnabled;                                          // 0x00B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AX38[0x3];                                     // 0x00B5(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.MatchmakingSearchCompleteAnalytics
// 0x00E0 (0x0148 - 0x0068)
struct FMatchmakingSearchCompleteAnalytics : public FUniquelyIdentifiedAnalytic
{
	bool                                               Success;                                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S705[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumMatches;                                                // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UsedFallback;                                              // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NJQZ[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ConnectingToUser;                                          // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SearchParams;                                              // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SearchResultSettings;                                      // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D8K2[0xA0];                                    // 0x00A8(0x00A0) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.MatchmakingHostCreatedAnalytics
// 0x0070 (0x00D8 - 0x0068)
struct FMatchmakingHostCreatedAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                NumPublicConnections;                                      // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumPrivateConnections;                                     // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldAdvertise;                                           // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsLANMatch;                                                // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowInvites;                                              // 0x0072(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UsesPresence;                                              // 0x0073(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowJoinViaPresenceFriendsOnly;                           // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowJoinInProgress;                                       // 0x0075(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowJoinViaPresence;                                      // 0x0076(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0077(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HostSettings;                                              // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MS7R[0x50];                                    // 0x0088(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.MatchmakingJoinCompleteAnalytics
// 0x0018 (0x0080 - 0x0068)
struct FMatchmakingJoinCompleteAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     SessionName;                                               // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                result;                                                    // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HN21[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.MatchmakingJoinSessionAnalytics
// 0x0010 (0x0078 - 0x0068)
struct FMatchmakingJoinSessionAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     log;                                                       // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.MatchmakingApproveLoginAnalytics
// 0x0028 (0x0090 - 0x0068)
struct FMatchmakingApproveLoginAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                CurrentPlayers;                                            // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LBH4[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Error;                                                     // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     JoiningUserID;                                             // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.WaitTimeAnalytics
// 0x0080 (0x00E8 - 0x0068)
struct FWaitTimeAnalytics : public FUniquelyIdentifiedAnalytic
{
	float                                              EnterLobbyWaitTime;                                        // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnterMatchWaitTime;                                        // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchWaitStartUtc;                                         // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchWaitStopUtc;                                          // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LobbyWaitStartUtc;                                         // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LobbyWaitStopUtc;                                          // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LobbyWaitStopReason;                                       // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x00C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EGameType                           GameMode;                                                  // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         role;                                                      // 0x00D1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O6D4[0x2];                                     // 0x00D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PartySize;                                                 // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                rank;                                                      // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RankDifference;                                            // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DaysSinceReset;                                            // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N0DJ[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.QueueAnalytics
// 0x00B8 (0x0120 - 0x0068)
struct FQueueAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                TimesQueuedSurvivor;                                       // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimesQueuedKiller;                                         // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MatchesAsSurvivor;                                         // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MatchesAsKiller;                                           // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SelectedCountry;                                           // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerName;                                                // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FirstTimePlaying;                                          // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OPNX[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CumulativeMatches;                                         // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeMatchesAsSurvivor;                               // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeMatchesAsKiller;                                 // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastMatchTimestamp;                                        // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionStartTimestamp;                                     // 0x00B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionEndTimestamp;                                       // 0x00C8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastSessionTimestamp;                                      // 0x00D8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeSessions;                                        // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CumulativePlaytime;                                        // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeInCharacterMenu;                                       // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeInBloodwebMenu;                                        // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeInLoadoutMenu;                                         // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeInCustomizationMenu;                                   // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeInFearMarket;                                          // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeInTallyScreen;                                         // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeInGameMatch;                                           // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeInHelpMenu;                                            // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeInOfflineLobby;                                        // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeInOfflineLobbySurvivorGroup;                           // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeInOnlineLobby;                                         // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeInOnlineLobbySurvivorGroup;                            // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.MenuFlowAnalytics
// 0x0058 (0x00C0 - 0x0068)
struct FMenuFlowAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     CurrentContext;                                            // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PreviousContext;                                           // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeOnPreviousContext;                                     // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NQMK[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ContextChangeTimetamp;                                     // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LobbyId;                                                   // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.StoreMenuFlowAnalytics
// 0x0030 (0x0098 - 0x0068)
struct FStoreMenuFlowAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     EventTimestamp;                                            // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     data;                                                      // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.PlayerStatusEffectUpdateAnalytics
// 0x0028 (0x0090 - 0x0068)
struct FPlayerStatusEffectUpdateAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchId;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ElapsedMatchTime;                                          // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NbOfConcurrentStatusEffects;                               // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             StatusEffects;                                             // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.PostGameAnalyticsBase
// 0x0040 (0x00A8 - 0x0068)
struct FPostGameAnalyticsBase : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchId;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BloodwebPoints;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GameDuration;                                              // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterName;                                             // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                rank;                                                      // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PipsGainedOrLost;                                          // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchEndReason;                                            // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.PostGame_KillerAnalytics
// 0x0060 (0x0108 - 0x00A8)
struct FPostGame_KillerAnalytics : public FPostGameAnalyticsBase
{
	int                                                Brutality;                                                 // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Deviousness;                                               // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                hunter;                                                    // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Sacrifice;                                                 // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EscapeesCount;                                             // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SacrificedCount;                                           // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KilledCount;                                               // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DisconnectCount;                                           // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BotCount;                                                  // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeOpenGate;                                              // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SurvivorSpawningPosition;                                  // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GeneratorsDone;                                            // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LUV3[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EGS_starter;                                               // 0x00E8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EGS_time;                                                  // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EGS_duration;                                              // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EGS_sacrifice;                                             // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EGS_reachEnd;                                              // 0x0104(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UsedController;                                            // 0x0105(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UsedKeyboard;                                              // 0x0106(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NDI9[0x1];                                     // 0x0107(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.PostGame_SurvivorAnalytics
// 0x0030 (0x00D8 - 0x00A8)
struct FPostGame_SurvivorAnalytics : public FPostGameAnalyticsBase
{
	int                                                Objectives;                                                // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Survival;                                                  // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Altruism;                                                  // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Boldness;                                                  // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Outcome;                                                   // 0x00B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperDamageState                  DamageState;                                               // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BXTF[0x3];                                     // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HookedCount;                                               // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UsedController;                                            // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UsedKeyboard;                                              // 0x00D1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C8MJ[0x6];                                     // 0x00D2(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.ProceduralGenerationAnalytics
// 0x0118 (0x0180 - 0x0068)
struct FProceduralGenerationAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                GenerationSeed;                                            // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapSeed;                                                   // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     mapName;                                                   // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Procedural_MeatLocker_Small;                               // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Procedural_MeatLocker_Big;                                 // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Procedural_Searchable;                                     // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Procedural_EdgeObjects;                                    // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Procedural_LivingWorldObjects;                             // 0x00C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Procedural_Hatch;                                          // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Procedural_BookShelves;                                    // 0x00E0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Procedural_BreakableWalls;                                 // 0x00F0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Procedural_Totems;                                         // 0x0100(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Procedural_QuadrantSpawn;                                  // 0x0110(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletSpawned;                                             // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletProceduralMin;                                       // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletProceduralMax;                                       // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletProcedural;                                          // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletProceduralSetCount;                                  // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           PalletGenerationId;                                        // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletGeneric;                                             // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PL2P[0x4];                                     // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     KillerSpawn;                                               // 0x0140(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SurvivorSpawn;                                             // 0x0150(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0160(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HookSpawned;                                               // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseFixedMaps;                                              // 0x0174(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K3KC[0x3];                                     // 0x0175(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NavmeshGenerationTime;                                     // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JHIX[0x4];                                     // 0x017C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.ReportAnalytics
// 0x0098 (0x0100 - 0x0068)
struct FReportAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     ClientIdTransmitter;                                       // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientIdReceiver;                                          // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MirrorsIdTransmitter;                                      // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MirrorsIdReceiver;                                         // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         RoleTransmitter;                                           // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         RoleReceiver;                                              // 0x00A9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7MA1[0x6];                                     // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MatchId;                                                   // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x00C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReportType;                                                // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReportCategory;                                            // 0x00E0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Comments;                                                  // 0x00F0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.RTMAnalytics
// 0x0028 (0x0090 - 0x0068)
struct FRTMAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     RTMType;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           RTMSize;                                                   // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9M86[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CurrentGameFlowStep;                                       // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.SaveGameSummaryCharacterStatsAnalytics
// 0x0010 (0x0078 - 0x0068)
struct FSaveGameSummaryCharacterStatsAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     SavedCharacterStats;                                       // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.CharacterSpecificData
// 0x0014
struct FCharacterSpecificData
{
	struct FName                                       name;                                                      // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                level;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                prestigeLevel;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.SerializableSaveGameSummaryCharacterData
// 0x0010
struct FSerializableSaveGameSummaryCharacterData
{
	TArray<struct FCharacterSpecificData>              CharacterStats;                                            // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.ChatAnalytics
// 0x0070 (0x00D8 - 0x0068)
struct FChatAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     SenderMirrorsId;                                           // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SenderPlayerName;                                          // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ChatContent;                                               // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OriginalChatContent;                                       // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ChatContext;                                               // 0x00B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InGameTimestamp;                                           // 0x00C8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.CrossfriendsAnalytics
// 0x0020 (0x0088 - 0x0068)
struct FCrossfriendsAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     Action;                                                    // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TargetKrakenUserId;                                        // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.CrowdChoiceVoteResultAnalytics
// 0x0028 (0x0090 - 0x0068)
struct FCrowdChoiceVoteResultAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     PollId;                                                    // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VoteOption;                                                // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VoteCount;                                                 // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5067[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.CrowdChoiceSummaryResultAnalytics
// 0x0058 (0x00C0 - 0x0068)
struct FCrowdChoiceSummaryResultAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     PollId;                                                    // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PollType;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Status;                                                    // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PollDuration;                                              // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V45A[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      VoteTimestamps;                                            // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        NewVotesPerTimestampInterval;                              // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.CrowdChoiceOnGameRoundStartedAnalytics
// 0x0020 (0x0088 - 0x0068)
struct FCrowdChoiceOnGameRoundStartedAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     PollId;                                                    // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.CrowdPlayLobbyEventsAnalytics
// 0x0040 (0x00A8 - 0x0068)
struct FCrowdPlayLobbyEventsAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     CrowdPlayId;                                               // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LobbyEventName;                                            // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InviteId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerId;                                                  // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.CrowdPlayLobbyResultsAnalytics
// 0x0030 (0x0098 - 0x0068)
struct FCrowdPlayLobbyResultsAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     CrowdPlayId;                                               // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PartySize;                                                 // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NbrQueueToPlayMembers;                                     // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NbrGamesInSameSession;                                     // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q10C[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.CurrencyBalanceAnalytics
// 0x0018 (0x0080 - 0x0068)
struct FCurrencyBalanceAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     currencyName;                                              // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrencyBalance;                                           // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SSYD[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.CustomizationBaseAnalytics
// 0x0068 (0x00D0 - 0x0068)
struct FCustomizationBaseAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     CustomizationSlot1;                                        // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CustomizationSlot2;                                        // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CustomizationSlot3;                                        // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Charm1;                                                    // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Charm2;                                                    // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Charm3;                                                    // 0x00B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         role;                                                      // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_54U2[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.CustomizationLobbyAnalytics
// 0x0010 (0x00E0 - 0x00D0)
struct FCustomizationLobbyAnalytics : public FCustomizationBaseAnalytics
{
	struct FString                                     LobbyId;                                                   // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.CustomizationAnalytics
// 0x0010 (0x00E0 - 0x00D0)
struct FCustomizationAnalytics : public FCustomizationBaseAnalytics
{
	struct FString                                     MatchId;                                                   // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.DDoSDetectionAnalytics
// 0x0038 (0x00A0 - 0x0068)
struct FDDoSDetectionAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     severity;                                                  // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NonConnPacketCounter;                                      // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NetConnPacketCounter;                                      // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DisconnPacketCounter;                                      // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BadPacketCounter;                                          // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ErrorPacketCounter;                                        // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DroppedPacketCounter;                                      // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.DisconnectionAnalytics
// 0x0078 (0x00E0 - 0x0068)
struct FDisconnectionAnalytics : public FUniquelyIdentifiedAnalytic
{
	float                                              TimeSinceLastPacket;                                       // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DPKL[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameFlowStep;                                              // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UnrealMapName;                                             // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     mapName;                                                   // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     themeName;                                                 // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FailureType;                                               // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorString;                                               // 0x00C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.DisconnectionDetailsAnalytics
// 0x0058 (0x00C0 - 0x0068)
struct FDisconnectionDetailsAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     PlayerPlatform;                                            // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InGameTime;                                                // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         role;                                                      // 0x008C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WEIY[0x3];                                     // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Reason;                                                    // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDAnalytics_EHealthStatus                         Health;                                                    // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YJWL[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<DBDAnalytics_ECharacterStatus>              CharacterStatus;                                           // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GeneratorActivated;                                        // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDAnalytics_EHatchStatus                          HatchStatus;                                               // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDAnalytics_EDoorStatus                           DoorStatus;                                                // 0x00BD(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EGameState                          DisconnectionType;                                         // 0x00BE(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O27I[0x1];                                     // 0x00BF(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.EmblemProgressionDetailsAnalytics
// 0x0018
struct FEmblemProgressionDetailsAnalytics
{
	struct FString                                     ProgressionType;                                           // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProgressionPoint;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4JB1[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.EmblemProgressionAnalytics
// 0x0048 (0x00B0 - 0x0068)
struct FEmblemProgressionAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchId;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     emblemId;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EmblemValue;                                               // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UD66[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EmblemQuality;                                             // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEmblemProgressionDetailsAnalytics>  ProgressionDetails;                                        // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.EndpointLatencyData
// 0x0018
struct FEndpointLatencyData
{
	struct FString                                     Id;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Latency;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CYW8[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.EndpointLatencyAnalytics
// 0x0010 (0x0078 - 0x0068)
struct FEndpointLatencyAnalytics : public FUniquelyIdentifiedAnalytic
{
	TArray<struct FEndpointLatencyData>                Endpoints;                                                 // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.FallOutOfWorldAnalytics
// 0x0048 (0x00B0 - 0x0068)
struct FFallOutOfWorldAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchId;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FallOutMirrorsId;                                          // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              x;                                                         // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              y;                                                         // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              z;                                                         // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6537[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TileName;                                                  // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ElapsedMatchTime;                                          // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E0UK[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.FrameHikeAnalytics
// 0x00A0 (0x0108 - 0x0068)
struct FFrameHikeAnalytics : public FUniquelyIdentifiedAnalytic
{
	float                                              FrameDeltaTime;                                            // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeSinceApplicationStarted;                               // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentTimeoutThreshold;                                   // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOverConnectionTimeLimit;                                 // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LO3Q[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CurrentMap;                                                // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameFlowStep;                                              // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CurrentGameFlowContext;                                    // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PreviousGameFlowContext;                                   // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NavigationContext;                                         // 0x00B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PreviousNavigationContext;                                 // 0x00C8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RecentLogs;                                                // 0x00D8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KrakenMatchId;                                             // 0x00E8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FlushAsyncLoadingTime;                                     // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlushAsyncLoadingCount;                                    // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SyncLoadCount;                                             // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_547K[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.ArchiveVignetteVideoAnalytics
// 0x0050 (0x00B8 - 0x0068)
struct FArchiveVignetteVideoAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     archiveId;                                                 // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     vignetteId;                                                // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     videoID;                                                   // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StartVideoTimestamp;                                       // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             VideoTimeSpent;                                            // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WasVideoWatchUntilEnd;                                     // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4OEI[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.ArchiveVignetteEntryAnalytics
// 0x0060 (0x00C8 - 0x0068)
struct FArchiveVignetteEntryAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     archiveId;                                                 // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     vignetteId;                                                // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EntryId;                                                   // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NLJA[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SelectEntryTimestamp;                                      // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             EntryTimeSpent;                                            // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsTaggedAsNew;                                             // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasVoiceOver;                                              // 0x00A9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StartWithAutoplayEnable;                                   // 0x00AA(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAutoplayEnableWhenDeselectingEntry;                      // 0x00AB(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FP62[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StartVoiceoverTimestamp;                                   // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             VoiceoverLongestTimeSpent;                                 // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDAnalytics.BotReplacementAnalytics
// 0x0050 (0x00B8 - 0x0068)
struct FBotReplacementAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchId;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KrakenMatchId;                                             // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         role;                                                      // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4N9C[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              matchTime;                                                 // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterName;                                             // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReplacedCharacterMirrorsId;                                // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EAIDifficultyLevel                  BotDifficultyLevel;                                        // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XCLY[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnalytics.Gameplay_ChaseAnalytics
// 0x00E0 (0x0148 - 0x0068)
struct FGameplay_ChaseAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchId;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsABot;                                                    // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3XTL[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MirrorsIdSurvivor;                                         // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CoordXStartKiller;                                         // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CoordYStartKiller;                                         // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CoordZStartKiller;                                         // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CoordXEndKiller;                                           // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CoordYEndKiller;                                           // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CoordZEndKiller;                                           // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletsDestroyedByKiller;                                  // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WindowsVaultedByKiller;                                    // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletsVaultedByKiller;                                    // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BasicAttackSwingsByKiller;                                 // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BasicAttackHitsByKiller;                                   // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpecialAttackAttemptsByKiller;                             // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpecialAttackHitsByKiller;                                 // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceCoveredKiller;                                     // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CoordXStartSurvivor;                                       // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CoordYStartSurvivor;                                       // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CoordZStartSurvivor;                                       // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CoordXEndSurvivor;                                         // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CoordYEndSurvivor;                                         // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CoordZEndSurvivor;                                         // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletsDroppedBySurvivor;                                  // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletsStunnedBySurvivor;                                  // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WindowsVaultedBySurvivor;                                  // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PalletsVaultedBySurvivor;                                  // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartingHealthOfSurvivor;                                  // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndingHealthOfSurvivor;                                    // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmountHealedOfSurvivor;                                    // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YX0Q[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StartingTileSurvivor;                                      // 0x0100(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EndingTileSurvivor;                                        // 0x0110(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmountOfTilesVisitedSurvivor;                              // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z0WE[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             TilesVisitedSurvivor;                                      // 0x0128(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceCoveredSurvivor;                                   // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisplacementSurvivor;                                      // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChaseStartTimeInSecond;                                    // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChaseEndTimeInSecond;                                      // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
