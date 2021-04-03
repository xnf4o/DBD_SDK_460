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

// Enum DeadByDaylight.EAuthoritativeMovementFlag
enum class DeadByDaylight_EAuthoritativeMovementFlag : uint8_t
{
	EAuthoritativeMovementFlag__INTERACTION = 0,
	EAuthoritativeMovementFlag__SLASHED = 1,
	EAuthoritativeMovementFlag__CHEAT = 2,
	EAuthoritativeMovementFlag__DROPPED = 3,
	EAuthoritativeMovementFlag__NOPUSH = 4,
	EAuthoritativeMovementFlag__INTERACTIONNOPUSH = 5,
	EAuthoritativeMovementFlag__DREAMWORLD_NOSLASHERCOLLISION = 6,
	EAuthoritativeMovementFlag__COUNT = 7,
	EAuthoritativeMovementFlag__EAuthoritativeMovementFlag_MAX = 8,

};

// Enum DeadByDaylight.ECustomizationCategory
enum class DeadByDaylight_ECustomizationCategory : uint8_t
{
	ECustomizationCategory__None   = 0,
	ECustomizationCategory__SurvivorHead = 1,
	ECustomizationCategory__SurvivorTorso = 2,
	ECustomizationCategory__SurvivorLegs = 3,
	ECustomizationCategory__KillerHead = 4,
	ECustomizationCategory__KillerBody = 5,
	ECustomizationCategory__KillerWeapon = 6,
	ECustomizationCategory__Outfits = 7,
	ECustomizationCategory__Charm  = 8,
	ECustomizationCategory__ECustomizationCategory_MAX = 9,

};

// Enum DeadByDaylight.EEndGameReason
enum class DeadByDaylight_EEndGameReason : uint8_t
{
	EEndGameReason__None           = 0,
	EEndGameReason__Normal         = 1,
	EEndGameReason__KillerLeft     = 2,
	EEndGameReason__PlayerLeftDuringLoading = 3,
	EEndGameReason__KillerLeftEarly = 4,
	EEndGameReason__InvalidPlayerRoles = 5,
	EEndGameReason__EEndGameReason_MAX = 6,

};

// Enum DeadByDaylight.ETileSpawnPointType
enum class DeadByDaylight_ETileSpawnPointType : uint8_t
{
	ETileSpawnPointType__Unspecified = 0,
	ETileSpawnPointType__Survivor  = 1,
	ETileSpawnPointType__SurvivorItem = 2,
	ETileSpawnPointType__Killer    = 3,
	ETileSpawnPointType__KillerItem = 4,
	ETileSpawnPointType__InteractableObject = 5,
	ETileSpawnPointType__Count     = 6,
	ETileSpawnPointType__ETileSpawnPointType_MAX = 7,

};

// Enum DeadByDaylight.ECamperDamageState
enum class DeadByDaylight_ECamperDamageState : uint8_t
{
	ECamperDamageState__VE_Healthy = 0,
	ECamperDamageState__VE_Injured = 1,
	ECamperDamageState__VE_KO      = 2,
	ECamperDamageState__VE_Dead    = 3,
	ECamperDamageState__VE_MAX     = 4,

};

// Enum DeadByDaylight.ECamperImmobilizeState
enum class DeadByDaylight_ECamperImmobilizeState : uint8_t
{
	ECamperImmobilizeState__VE_None = 0,
	ECamperImmobilizeState__VE_Hooked = 1,
	ECamperImmobilizeState__VE_Trapped = 2,
	ECamperImmobilizeState__VE_Hiding = 3,
	ECamperImmobilizeState__VE_Dead = 4,
	ECamperImmobilizeState__VE_InDeathBed = 5,
	ECamperImmobilizeState__VE_MAX = 6,

};

// Enum DeadByDaylight.EAttackZoneSet
enum class DeadByDaylight_EAttackZoneSet : uint8_t
{
	EAttackZoneSet__VE_OriginalZones = 0,
	EAttackZoneSet__VE_WedgeZones  = 1,
	EAttackZoneSet__VE_MAX         = 2,

};

// Enum DeadByDaylight.ESlasherGuidedAction
enum class DeadByDaylight_ESlasherGuidedAction : uint8_t
{
	ESlasherGuidedAction__VE_None  = 0,
	ESlasherGuidedAction__VE_Hooking = 1,
	ESlasherGuidedAction__VE_PickingUp = 2,
	ESlasherGuidedAction__VE_PuttingDown = 3,
	ESlasherGuidedAction__VE_MAX   = 4,

};

// Enum DeadByDaylight.ETutorialStep
enum class DeadByDaylight_ETutorialStep : uint8_t
{
	ETutorialStep__Survivor_NotStarted = 0,
	ETutorialStep__Survivor_CompleteGenerator = 1,
	ETutorialStep__Survivor_EvadeKiller = 2,
	ETutorialStep__Survivor_OnHook = 3,
	ETutorialStep__Done            = 4,
	ETutorialStep__Invalid         = 5,
	ETutorialStep__ETutorialStep_MAX = 6,

};

// Enum DeadByDaylight.EInventoryItemType
enum class DeadByDaylight_EInventoryItemType : uint8_t
{
	EInventoryItemType__None       = 0,
	EInventoryItemType__Item       = 1,
	EInventoryItemType__ItemAddOn  = 2,
	EInventoryItemType__CamperPerk = 3,
	EInventoryItemType__Power      = 4,
	EInventoryItemType__PowerAddOn = 5,
	EInventoryItemType__SlasherPerk = 6,
	EInventoryItemType__Favor      = 7,
	EInventoryItemType__Customization = 8,
	EInventoryItemType__Count      = 9,
	EInventoryItemType__EInventoryItemType_MAX = 10,

};

// Enum DeadByDaylight.EPerkCategory
enum class DeadByDaylight_EPerkCategory : uint8_t
{
	EPerkCategory__None            = 0,
	EPerkCategory__Navigation      = 1,
	EPerkCategory__Perception      = 2,
	EPerkCategory__Safeguard       = 3,
	EPerkCategory__Concealment     = 4,
	EPerkCategory__Strategy        = 5,
	EPerkCategory__Support         = 6,
	EPerkCategory__Adaptation      = 7,
	EPerkCategory__Chasing         = 8,
	EPerkCategory__Tracking        = 9,
	EPerkCategory__Cruelty         = 10,
	EPerkCategory__Trickery        = 11,
	EPerkCategory__Obstruction     = 12,
	EPerkCategory__Hinderance      = 13,
	EPerkCategory__Enhancement     = 14,
	EPerkCategory__EPerkCategory_MAX = 15,

};

// Enum DeadByDaylight.ECurrencyType
enum class DeadByDaylight_ECurrencyType : uint8_t
{
	ECurrencyType__None            = 0,
	ECurrencyType__BloodPoints     = 1,
	ECurrencyType__FearTokens      = 2,
	ECurrencyType__Cells           = 3,
	ECurrencyType__HalloweenCoins  = 4,
	ECurrencyType__LunarNewYearCoins = 5,
	ECurrencyType__HalloweenEventCurrency = 6,
	ECurrencyType__ECurrencyType_MAX = 7,

};

// Enum DeadByDaylight.ELanternState
enum class DeadByDaylight_ELanternState : uint8_t
{
	ELanternState__Collectable     = 0,
	ELanternState__Collected       = 1,
	ELanternState__Destroyed       = 2,
	ELanternState__Destroyable     = 3,
	ELanternState__ELanternState_MAX = 4,

};

// Enum DeadByDaylight.EGhostStealthState
enum class DeadByDaylight_EGhostStealthState : uint8_t
{
	EGhostStealthState__AWAITING_ACTIVATION = 0,
	EGhostStealthState__ACTIVATED  = 1,
	EGhostStealthState__COOLDOWN   = 2,
	EGhostStealthState__EGhostStealthState_MAX = 3,

};

// Enum DeadByDaylight.EAudioCustomizationCategory
enum class DeadByDaylight_EAudioCustomizationCategory : uint8_t
{
	EAudioCustomizationCategory__AudioCharacterName = 0,
	EAudioCustomizationCategory__AudioCharacterSubName = 1,
	EAudioCustomizationCategory__AudioCharacterHead = 2,
	EAudioCustomizationCategory__AudioCharacterClothes = 3,
	EAudioCustomizationCategory__AudioCharacterShoes = 4,
	EAudioCustomizationCategory__AudioCharacterWeapon = 5,
	EAudioCustomizationCategory__AudioCharacterAmbiance = 6,
	EAudioCustomizationCategory__AudioCharacterState = 7,
	EAudioCustomizationCategory__EAudioCustomizationCategory_MAX = 8,

};

// Enum DeadByDaylight.EActionButtonState
enum class DeadByDaylight_EActionButtonState : uint8_t
{
	EActionButtonState__Normal     = 0,
	EActionButtonState__Toggled    = 1,
	EActionButtonState__Disabled   = 2,
	EActionButtonState__Hidden     = 3,
	EActionButtonState__EActionButtonState_MAX = 4,

};

// Enum DeadByDaylight.EKnowledgeSharingType
enum class DeadByDaylight_EKnowledgeSharingType : uint8_t
{
	EKnowledgeSharingType__Possessor = 0,
	EKnowledgeSharingType__Survivors = 1,
	EKnowledgeSharingType__Killers = 2,
	EKnowledgeSharingType__All     = 3,
	EKnowledgeSharingType__EKnowledgeSharingType_MAX = 4,

};

// Enum DeadByDaylight.EGameplayElementType
enum class DeadByDaylight_EGameplayElementType : uint8_t
{
	EGameplayElementType__Generic  = 0,
	EGameplayElementType__MeatLocker_Small = 1,
	EGameplayElementType__TileLights = 2,
	EGameplayElementType__MeatLocker_Big = 3,
	EGameplayElementType__Searchable = 4,
	EGameplayElementType__EdgeObjects = 5,
	EGameplayElementType__LivingWorldObjects = 6,
	EGameplayElementType__Hatch    = 7,
	EGameplayElementType__Bookshelves = 8,
	EGameplayElementType__Totems   = 9,
	EGameplayElementType__QuadrantSpawn = 10,
	EGameplayElementType__EdgeObjectsBlocker = 11,
	EGameplayElementType__BreakableWalls = 12,
	EGameplayElementType__Escape   = 13,
	EGameplayElementType__Count    = 14,
	EGameplayElementType__EGameplayElementType_MAX = 15,

};

// Enum DeadByDaylight.EArchivesTab
enum class DeadByDaylight_EArchivesTab : uint8_t
{
	EArchivesTab__CurrentStory     = 0,
	EArchivesTab__Rewards          = 1,
	EArchivesTab__PastStories      = 2,
	EArchivesTab__TabCount         = 3,
	EArchivesTab__EArchivesTab_MAX = 4,

};

// Enum DeadByDaylight.EArchiveNodeType
enum class DeadByDaylight_EArchiveNodeType : uint8_t
{
	EArchiveNodeType__Narrative    = 0,
	EArchiveNodeType__Task         = 1,
	EArchiveNodeType__Challenge    = 2,
	EArchiveNodeType__Contextual   = 3,
	EArchiveNodeType__None         = 4,
	EArchiveNodeType__EArchiveNodeType_MAX = 5,

};

// Enum DeadByDaylight.EArchiveNodeStatus
enum class DeadByDaylight_EArchiveNodeStatus : uint8_t
{
	EArchiveNodeStatus__Closed     = 0,
	EArchiveNodeStatus__Completed  = 1,
	EArchiveNodeStatus__Open       = 2,
	EArchiveNodeStatus__Paused     = 3,
	EArchiveNodeStatus__Waiting    = 4,
	EArchiveNodeStatus__Error      = 5,
	EArchiveNodeStatus__EArchiveNodeStatus_MAX = 6,

};

// Enum DeadByDaylight.EOwnershipBehaviour
enum class DeadByDaylight_EOwnershipBehaviour : uint8_t
{
	EOwnershipBehaviour__Personal  = 0,
	EOwnershipBehaviour__Shared    = 1,
	EOwnershipBehaviour__EOwnershipBehaviour_MAX = 2,

};

// Enum DeadByDaylight.EStackingBehaviours
enum class DeadByDaylight_EStackingBehaviours : uint8_t
{
	EStackingBehaviours__Stackable = 0,
	EStackingBehaviours__Override  = 1,
	EStackingBehaviours__EStackingBehaviours_MAX = 2,

};

// Enum DeadByDaylight.EAdditiveBehaviour
enum class DeadByDaylight_EAdditiveBehaviour : uint8_t
{
	EAdditiveBehaviour__AddValues  = 0,
	EAdditiveBehaviour__MaxValue   = 1,
	EAdditiveBehaviour__EAdditiveBehaviour_MAX = 2,

};

// Enum DeadByDaylight.EContextualType
enum class DeadByDaylight_EContextualType : uint8_t
{
	EContextualType__None          = 0,
	EContextualType__RedGlyph      = 1,
	EContextualType__ToxinPlantHalloween2020 = 2,
	EContextualType__EContextualType_MAX = 3,

};

// Enum DeadByDaylight.EArm
enum class DeadByDaylight_EArm : uint8_t
{
	EArm__Left                     = 0,
	EArm__Right                    = 1,
	EArm__EArm_MAX                 = 2,

};

// Enum DeadByDaylight.EAtlantaRitualRewardUIType
enum class DeadByDaylight_EAtlantaRitualRewardUIType : uint8_t
{
	EAtlantaRitualRewardUIType__Item = 0,
	EAtlantaRitualRewardUIType__AddOn = 1,
	EAtlantaRitualRewardUIType__Offering = 2,
	EAtlantaRitualRewardUIType__BloodPoints = 3,
	EAtlantaRitualRewardUIType__IridescentShards = 4,
	EAtlantaRitualRewardUIType__AuricCells = 5,
	EAtlantaRitualRewardUIType__Customization = 6,
	EAtlantaRitualRewardUIType__CustoTicket = 7,
	EAtlantaRitualRewardUIType__MysteryBox = 8,
	EAtlantaRitualRewardUIType__EAtlantaRitualRewardUIType_MAX = 9,

};

// Enum DeadByDaylight.EAltantaRitualUIType
enum class DeadByDaylight_EAltantaRitualUIType : uint8_t
{
	EAltantaRitualUIType__Single   = 0,
	EAltantaRitualUIType__Master   = 1,
	EAltantaRitualUIType__Special  = 2,
	EAltantaRitualUIType__EAltantaRitualUIType_MAX = 3,

};

// Enum DeadByDaylight.EAttackEventType
enum class DeadByDaylight_EAttackEventType : uint8_t
{
	EAttackEventType__VE_None      = 0,
	EAttackEventType__VE_BasicAttackAttempt = 1,
	EAttackEventType__VE_BasicAttackHit = 2,
	EAttackEventType__VE_SpecialAttackAttempt = 3,
	EAttackEventType__VE_SpecialAttackHit = 4,
	EAttackEventType__VE_MAX       = 5,

};

// Enum DeadByDaylight.EBlinkerState
enum class DeadByDaylight_EBlinkerState : uint8_t
{
	EBlinkerState__VE_Ready        = 0,
	EBlinkerState__VE_ChainBlink   = 1,
	EBlinkerState__VE_AttackBlink  = 2,
	EBlinkerState__VE_CooldownRequested = 3,
	EBlinkerState__VE_Cooldown     = 4,
	EBlinkerState__VE_MAX          = 5,

};

// Enum DeadByDaylight.EBloodwebFillingMethod
enum class DeadByDaylight_EBloodwebFillingMethod : uint8_t
{
	EBloodwebFillingMethod__RestrictionsBasedOnData = 0,
	EBloodwebFillingMethod__FillAll = 1,
	EBloodwebFillingMethod__EBloodwebFillingMethod_MAX = 2,

};

// Enum DeadByDaylight.EBloodwebDefinitionContentType
enum class DeadByDaylight_EBloodwebDefinitionContentType : uint8_t
{
	EBloodwebDefinitionContentType__Empty = 0,
	EBloodwebDefinitionContentType__Nodes = 1,
	EBloodwebDefinitionContentType__Paths = 2,
	EBloodwebDefinitionContentType__NodesAndPaths = 3,
	EBloodwebDefinitionContentType__NodesNoPath = 4,
	EBloodwebDefinitionContentType__EBloodwebDefinitionContentType_MAX = 5,

};

// Enum DeadByDaylight.EBloodwebDistributionType
enum class DeadByDaylight_EBloodwebDistributionType : uint8_t
{
	EBloodwebDistributionType__PerWeb = 0,
	EBloodwebDistributionType__PerRing = 1,
	EBloodwebDistributionType__EBloodwebDistributionType_MAX = 2,

};

// Enum DeadByDaylight.EBloodwebDataSource
enum class DeadByDaylight_EBloodwebDataSource : uint8_t
{
	EBloodwebDataSource__ByLevel   = 0,
	EBloodwebDataSource__ByRing    = 1,
	EBloodwebDataSource__EBloodwebDataSource_MAX = 2,

};

// Enum DeadByDaylight.EBloodwebNodeGateTypes
enum class DeadByDaylight_EBloodwebNodeGateTypes : uint8_t
{
	EBloodwebNodeGateTypes__RequiredRank = 0,
	EBloodwebNodeGateTypes__RequiredItem = 1,
	EBloodwebNodeGateTypes__Count  = 2,
	EBloodwebNodeGateTypes__EBloodwebNodeGateTypes_MAX = 3,

};

// Enum DeadByDaylight.EBloodwebNodeContentType
enum class DeadByDaylight_EBloodwebNodeContentType : uint8_t
{
	EBloodwebNodeContentType__Empty = 0,
	EBloodwebNodeContentType__Perks = 1,
	EBloodwebNodeContentType__PerkBuffs_Do_Not_Use_Deprecated = 2,
	EBloodwebNodeContentType__Offerings = 3,
	EBloodwebNodeContentType__Items = 4,
	EBloodwebNodeContentType__AddOn = 5,
	EBloodwebNodeContentType__Chests = 6,
	EBloodwebNodeContentType__PerksPacks = 7,
	EBloodwebNodeContentType__IridiscentShards = 8,
	EBloodwebNodeContentType__EBloodwebNodeContentType_MAX = 9,

};

// Enum DeadByDaylight.EBloodwebNodeState
enum class DeadByDaylight_EBloodwebNodeState : uint8_t
{
	EBloodwebNodeState__Inactive   = 0,
	EBloodwebNodeState__Available  = 1,
	EBloodwebNodeState__Locked_Do_Not_Use_Deprecated = 2,
	EBloodwebNodeState__Collected  = 3,
	EBloodwebNodeState__Consumed   = 4,
	EBloodwebNodeState__EBloodwebNodeState_MAX = 5,

};

// Enum DeadByDaylight.EBloodwebRing
enum class DeadByDaylight_EBloodwebRing : uint8_t
{
	EBloodwebRing__CenterRing      = 0,
	EBloodwebRing__InnerRing       = 1,
	EBloodwebRing__MiddleRing      = 2,
	EBloodwebRing__OuterRing       = 3,
	EBloodwebRing__EntityRing      = 4,
	EBloodwebRing__RingCount       = 5,
	EBloodwebRing__EBloodwebRing_MAX = 6,

};

// Enum DeadByDaylight.EBreakableState
enum class DeadByDaylight_EBreakableState : uint8_t
{
	EBreakableState__Unbroken      = 0,
	EBreakableState__Broken        = 1,
	EBreakableState__EBreakableState_MAX = 2,

};

// Enum DeadByDaylight.ECameraOffsetState
enum class DeadByDaylight_ECameraOffsetState : uint8_t
{
	ECameraOffsetState__None       = 0,
	ECameraOffsetState__Default    = 1,
	ECameraOffsetState__Crouching  = 2,
	ECameraOffsetState__Crawling   = 3,
	ECameraOffsetState__Carried    = 4,
	ECameraOffsetState__ECameraOffsetState_MAX = 5,

};

// Enum DeadByDaylight.EEscapeType
enum class DeadByDaylight_EEscapeType : uint8_t
{
	EEscapeType__Escape_ExitGate   = 0,
	EEscapeType__Escape_Hatch      = 1,
	EEscapeType__Escape_KillerDisconnect = 2,
	EEscapeType__Escape_MAX        = 3,

};

// Enum DeadByDaylight.EChargeableInteractionBarType
enum class DeadByDaylight_EChargeableInteractionBarType : uint8_t
{
	EChargeableInteractionBarType__VE_Normal = 0,
	EChargeableInteractionBarType__VE_ProgressPips = 1,
	EChargeableInteractionBarType__VE_MAX = 2,

};

// Enum DeadByDaylight.ECharmCategory
enum class DeadByDaylight_ECharmCategory : uint8_t
{
	ECharmCategory__None           = 0,
	ECharmCategory__Small          = 1,
	ECharmCategory__Medium         = 2,
	ECharmCategory__Big            = 3,
	ECharmCategory__ECharmCategory_MAX = 4,

};

// Enum DeadByDaylight.EItemDomain
enum class DeadByDaylight_EItemDomain : uint8_t
{
	EItemDomain__Store             = 0,
	EItemDomain__Local             = 1,
	EItemDomain__Any               = 2,
	EItemDomain__EItemDomain_MAX   = 3,

};

// Enum DeadByDaylight.EOwnership
enum class DeadByDaylight_EOwnership : uint8_t
{
	EOwnership__Owned              = 0,
	EOwnership__NotOwned           = 1,
	EOwnership__Any                = 2,
	EOwnership__EOwnership_MAX     = 3,

};

// Enum DeadByDaylight.EUMGDailyRewardWidgetState
enum class DeadByDaylight_EUMGDailyRewardWidgetState : uint8_t
{
	EUMGDailyRewardWidgetState__Unknown = 0,
	EUMGDailyRewardWidgetState__Locked = 1,
	EUMGDailyRewardWidgetState__ReadyToCollect = 2,
	EUMGDailyRewardWidgetState__NewlyCollected = 3,
	EUMGDailyRewardWidgetState__Collected = 4,
	EUMGDailyRewardWidgetState__MysteryLocked = 5,
	EUMGDailyRewardWidgetState__MysteryReadyToDiscover = 6,
	EUMGDailyRewardWidgetState__MysteryNewlyDiscovered = 7,
	EUMGDailyRewardWidgetState__EUMGDailyRewardWidgetState_MAX = 8,

};

// Enum DeadByDaylight.DBDScalabilityLevel
enum class DeadByDaylight_EDBDScalabilityLevel : uint8_t
{
	DBDScalabilityLevel__LOW       = 0,
	DBDScalabilityLevel__MEDIUM    = 1,
	DBDScalabilityLevel__HIGH      = 2,
	DBDScalabilityLevel__EPIC      = 3,
	DBDScalabilityLevel__ULTRA     = 4,
	DBDScalabilityLevel__DBDScalabilityLevel_MAX = 5,

};

// Enum DeadByDaylight.EPawnInputPressTypes
enum class DeadByDaylight_EPawnInputPressTypes : uint8_t
{
	EPawnInputPressTypes__None     = 0,
	EPawnInputPressTypes__FastInteract = 1,
	EPawnInputPressTypes__Interact = 2,
	EPawnInputPressTypes__Wiggle   = 3,
	EPawnInputPressTypes__Struggle = 4,
	EPawnInputPressTypes__Slash    = 5,
	EPawnInputPressTypes__Attack   = 6,
	EPawnInputPressTypes__Action   = 7,
	EPawnInputPressTypes__SecondaryAction = 8,
	EPawnInputPressTypes__UseItem  = 9,
	EPawnInputPressTypes__DropItem = 10,
	EPawnInputPressTypes__Gesture01 = 11,
	EPawnInputPressTypes__Gesture02 = 12,
	EPawnInputPressTypes__Gesture03 = 13,
	EPawnInputPressTypes__Gesture04 = 14,
	EPawnInputPressTypes__EPawnInputPressTypes_MAX = 15,

};

// Enum DeadByDaylight.EAIDifficultyLevel
enum class DeadByDaylight_EAIDifficultyLevel : uint8_t
{
	EAIDifficultyLevel__Easy       = 0,
	EAIDifficultyLevel__Medium     = 1,
	EAIDifficultyLevel__Hard       = 2,
	EAIDifficultyLevel__None       = 3,
	EAIDifficultyLevel__MAX        = 4,
	EAIDifficultyLevel__EAIDifficultyLevel_MAX = 5,

};

// Enum DeadByDaylight.ECharacterMovementTypes
enum class DeadByDaylight_ECharacterMovementTypes : uint8_t
{
	ECharacterMovementTypes__Normal = 0,
	ECharacterMovementTypes__Run   = 1,
	ECharacterMovementTypes__Crouch = 2,
	ECharacterMovementTypes__ECharacterMovementTypes_MAX = 3,

};

// Enum DeadByDaylight.EAITerrorLevel
enum class DeadByDaylight_EAITerrorLevel : uint8_t
{
	EAITerrorLevel__None           = 0,
	EAITerrorLevel__Low            = 1,
	EAITerrorLevel__Min            = 2,
	EAITerrorLevel__Medium         = 3,
	EAITerrorLevel__High           = 4,
	EAITerrorLevel__VeryHigh       = 5,
	EAITerrorLevel__MAX            = 6,
	EAITerrorLevel__EAITerrorLevel_MAX = 7,

};

// Enum DeadByDaylight.EDBDAnalyticsGameMode
enum class DeadByDaylight_EDBDAnalyticsGameMode : uint8_t
{
	EDBDAnalyticsGameMode__AnalyticsServer = 0,
	EDBDAnalyticsGameMode__AnalyticsClient = 1,
	EDBDAnalyticsGameMode__AnalyticsLoading = 2,
	EDBDAnalyticsGameMode__AnalyticsLobby = 3,
	EDBDAnalyticsGameMode__AnalyticsMenu = 4,
	EDBDAnalyticsGameMode__AnalyticsPostGame = 5,
	EDBDAnalyticsGameMode__AnalyticsPerfTests = 6,
	EDBDAnalyticsGameMode__AnalyticsSplashScreen = 7,
	EDBDAnalyticsGameMode__EDBDAnalyticsGameMode_MAX = 8,

};

// Enum DeadByDaylight.ECamperGuidedAction
enum class DeadByDaylight_ECamperGuidedAction : uint8_t
{
	ECamperGuidedAction__VE_None   = 0,
	ECamperGuidedAction__VE_PrepBeingKilled = 1,
	ECamperGuidedAction__VE_BeingKilled = 2,
	ECamperGuidedAction__VE_PrepGuidedAction = 3,
	ECamperGuidedAction__VE_BeingHelpedOffHookFront = 4,
	ECamperGuidedAction__VE_BeingHelpedOffHookBack = 5,
	ECamperGuidedAction__VE_BeingPickedUp = 6,
	ECamperGuidedAction__VE_BeingPutDown = 7,
	ECamperGuidedAction__VE_BeingCarried = 8,
	ECamperGuidedAction__VE_BeingPutOnHook = 9,
	ECamperGuidedAction__VE_BeingHealed = 10,
	ECamperGuidedAction__VE_BeingPulledFromCloset = 11,
	ECamperGuidedAction__VE_BeingHelpedFromTrap = 12,
	ECamperGuidedAction__VE_AttachReverseBearTrap = 13,
	ECamperGuidedAction__VE_BeingMended = 14,
	ECamperGuidedAction__VE_MAX    = 15,

};

// Enum DeadByDaylight.EMovementCurveType
enum class DeadByDaylight_EMovementCurveType : uint8_t
{
	EMovementCurveType__AdditiveSpeedCurve = 0,
	EMovementCurveType__MultiplicativeSpeedCurve = 1,
	EMovementCurveType__EMovementCurveType_MAX = 2,

};

// Enum DeadByDaylight.ECustomMovementMode
enum class DeadByDaylight_ECustomMovementMode : uint8_t
{
	ECustomMovementMode__CUSTOM_MOVE_None = 0,
	ECustomMovementMode__CUSTOM_MOVE_Snapping = 1,
	ECustomMovementMode__CUSTOM_MOVE_MAX = 2,

};

// Enum DeadByDaylight.EDiceRollType
enum class DeadByDaylight_EDiceRollType : uint8_t
{
	EDiceRollType__VE_EscapeHook   = 0,
	EDiceRollType__VE_EscapeTrap   = 1,
	EDiceRollType__VE_TrapInflictsDying = 2,
	EDiceRollType__VE_TriggerSkillCheck = 3,
	EDiceRollType__VE_TriggerFootNoise = 4,
	EDiceRollType__VE_TriggerCrowAlert = 5,
	EDiceRollType__VE_MAX          = 6,

};

// Enum DeadByDaylight.EEmblemProgressionType
enum class DeadByDaylight_EEmblemProgressionType : uint8_t
{
	EEmblemProgressionType__SurvivorLightbringerStartingValue = 0,
	EEmblemProgressionType__SurvivorLightbringerGeneratorRepair = 1,
	EEmblemProgressionType__SurvivorLightbringerTotemCleanse = 2,
	EEmblemProgressionType__SurvivorLightbringerKillerDiversion = 3,
	EEmblemProgressionType__SurvivorLightbringerExitGameOpen = 4,
	EEmblemProgressionType__SurvivorUnbrokenTimeAlive = 5,
	EEmblemProgressionType__SurvivorBenevolentStartingValue = 6,
	EEmblemProgressionType__SurvivorBenevolentHealing = 7,
	EEmblemProgressionType__SurvivorBenevolentHooked = 8,
	EEmblemProgressionType__SurvivorBenevolentUnhook = 9,
	EEmblemProgressionType__SurvivorBenevolentPerformUnhook = 10,
	EEmblemProgressionType__SurvivorBenevolentSaveFromKiller = 11,
	EEmblemProgressionType__SurvivorBenevolentUnsafeUnhook = 12,
	EEmblemProgressionType__SurvivorBenevolentHitWhileCarrying = 13,
	EEmblemProgressionType__SurvivorEvaderStartingValue = 14,
	EEmblemProgressionType__SurvivorEvaderSneaking = 15,
	EEmblemProgressionType__SurvivorEvaderChaseWon = 16,
	EEmblemProgressionType__SurvivorEvaderChaseLost = 17,
	EEmblemProgressionType__SurvivorEvaderPalletStun = 18,
	EEmblemProgressionType__KillerGatekeeperStartingValue = 19,
	EEmblemProgressionType__KillerGatekeeperGeneratorDefense = 20,
	EEmblemProgressionType__KillerGatekeeperGatesClosed = 21,
	EEmblemProgressionType__KillerDevoutStartingValue = 22,
	EEmblemProgressionType__KillerDevoutSacrifice = 23,
	EEmblemProgressionType__KillerDevoutDisconnect = 24,
	EEmblemProgressionType__KillerDevoutMoris = 25,
	EEmblemProgressionType__KillerDevoutAllSurvivorsHooked = 26,
	EEmblemProgressionType__KillerDevoutHooksBonus = 27,
	EEmblemProgressionType__KillerMaliciousStartingValue = 28,
	EEmblemProgressionType__KillerMaliciousInjuries = 29,
	EEmblemProgressionType__KillerMaliciousHookStages = 30,
	EEmblemProgressionType__KillerMaliciousInjuriesHealed = 31,
	EEmblemProgressionType__KillerMaliciousEscapeGrasp = 32,
	EEmblemProgressionType__KillerMaliciousDisconnect = 33,
	EEmblemProgressionType__KillerChaserStartingValue = 34,
	EEmblemProgressionType__KillerChaserSurvivorFound = 35,
	EEmblemProgressionType__KillerChaserSurvivorLost = 36,
	EEmblemProgressionType__KillerChaserHit = 37,
	EEmblemProgressionType__KillerChaserChaseWon = 38,
	EEmblemProgressionType__KillerChaserProximityToHookPenalty = 39,
	EEmblemProgressionType__Invalid = 40,
	EEmblemProgressionType__EEmblemProgressionType_MAX = 41,

};

// Enum DeadByDaylight.EEmblemQuality
enum class DeadByDaylight_EEmblemQuality : uint8_t
{
	EEmblemQuality__None           = 0,
	EEmblemQuality__Bronze         = 1,
	EEmblemQuality__Silver         = 2,
	EEmblemQuality__Gold           = 3,
	EEmblemQuality__Iridescent     = 4,
	EEmblemQuality__Count          = 5,
	EEmblemQuality__EEmblemQuality_MAX = 6,

};

// Enum DeadByDaylight.EEmblemEvaluation
enum class DeadByDaylight_EEmblemEvaluation : uint8_t
{
	EEmblemEvaluation__Authority   = 0,
	EEmblemEvaluation__Local       = 1,
	EEmblemEvaluation__EEmblemEvaluation_MAX = 2,

};

// Enum DeadByDaylight.EErrorCodes
enum class DeadByDaylight_EErrorCodes : uint8_t
{
	EErrorCodes__None              = 0,
	EErrorCodes__SavefileDeserializationFailure = 1,
	EErrorCodes__SavefileDecryptionFailure = 2,
	EErrorCodes__SavefileEmpty     = 3,
	EErrorCodes__SavefileBadPlayerId = 4,
	EErrorCodes__SavefileEmptyPlayerUID = 5,
	EErrorCodes__SavefileInvalidUniqueNetID = 6,
	EErrorCodes__SavefileInvalidPlayerState = 7,
	EErrorCodes__SavefileBackendError = 8,
	EErrorCodes__KrakenRankError   = 9,
	EErrorCodes__KrakenRatingsError = 10,
	EErrorCodes__SavefileKrakenPlayerForbidden = 11,
	EErrorCodes__SyncCachedCurrencyError = 12,
	EErrorCodes__CurrencyTransactionError = 13,
	EErrorCodes__SavefileEncryptionFailure = 14,
	EErrorCodes__SaveFailedInvalidData = 15,
	EErrorCodes__SaveFailedInvalidJSON = 16,
	EErrorCodes__SaveFailedDecodeDataString = 17,
	EErrorCodes__SaveFailedCompressDataString = 18,
	EErrorCodes__SaveFailedEncryptString = 19,
	EErrorCodes__SaveFailedCloudErrorTimeout = 20,
	EErrorCodes__JsonToPersistenDataFailed = 21,
	EErrorCodes__SaveFailedCloudErrorAfterRetries = 22,
	EErrorCodes__GetPlayerLevelRequestError = 23,
	EErrorCodes__EarnPlayerXpRequestError = 24,
	EErrorCodes__EarnPlayerXpParamError = 25,
	EErrorCodes__EErrorCodes_MAX   = 26,

};

// Enum DeadByDaylight.EGameIntroSteps
enum class DeadByDaylight_EGameIntroSteps : uint8_t
{
	EGameIntroSteps__Idling        = 0,
	EGameIntroSteps__PlayingIntro  = 1,
	EGameIntroSteps__LoopingCamView = 2,
	EGameIntroSteps__EGameIntroSteps_MAX = 3,

};

// Enum DeadByDaylight.EDisconnectErrors
enum class DeadByDaylight_EDisconnectErrors : uint8_t
{
	EDisconnectErrors__None        = 0,
	EDisconnectErrors__SteamAuthFailure = 1,
	EDisconnectErrors__SteamAuthFailureKickedFromServer = 2,
	EDisconnectErrors__EACServerValidationFailure = 3,
	EDisconnectErrors__EACValidationFailureKickedFromServer = 4,
	EDisconnectErrors__EACClientNotRunning = 5,
	EDisconnectErrors__EACClientIntegrityViolation = 6,
	EDisconnectErrors__PlayerRemovedOnSuspend = 7,
	EDisconnectErrors__LostConnectionToHost = 8,
	EDisconnectErrors__LostConnectionToProfileService = 9,
	EDisconnectErrors__MirrorsUnscheduledSessionDestruction = 10,
	EDisconnectErrors__SessionKilledByMirrors = 11,
	EDisconnectErrors__UnableToSaveProfileAfterRetries = 12,
	EDisconnectErrors__UnableToGetPlayerLevel = 13,
	EDisconnectErrors__UnableToEarnPlayerXp = 14,
	EDisconnectErrors__UnableToUpdatePips = 15,
	EDisconnectErrors__UnableToUpdateRatings = 16,
	EDisconnectErrors__ClientProviderAuthenticationFailed = 17,
	EDisconnectErrors__UnableToSyncCachedCurrency = 18,
	EDisconnectErrors__EDisconnectErrors_MAX = 19,

};

// Enum DeadByDaylight.ELevelLoadingSteps
enum class DeadByDaylight_ELevelLoadingSteps : uint8_t
{
	ELevelLoadingSteps__Invalid    = 0,
	ELevelLoadingSteps__WaitingForPlayersToBeSpawned = 1,
	ELevelLoadingSteps__WaitingForAIPawnToBeSpawned = 2,
	ELevelLoadingSteps__WaitingForLoadoutAndTheme = 3,
	ELevelLoadingSteps__WaitingForPIAToBeSpawnedAndInitialized = 4,
	ELevelLoadingSteps__WaitingForNavmeshComputationToStart = 5,
	ELevelLoadingSteps__WaitingForNavmeshComputationToFinish = 6,
	ELevelLoadingSteps__WaitingForIntroToBeDone = 7,
	ELevelLoadingSteps__LoadingCompleted = 8,
	ELevelLoadingSteps__ELevelLoadingSteps_MAX = 9,

};

// Enum DeadByDaylight.ELoadProgress
enum class DeadByDaylight_ELoadProgress : uint8_t
{
	ELoadProgress__NotStarted      = 0,
	ELoadProgress__Init            = 1,
	ELoadProgress__ArtificialDelay = 2,
	ELoadProgress__DisconnectingPresencePlugin = 3,
	ELoadProgress__ValidateOnlineSubsystem = 4,
	ELoadProgress__CheckingPlatformService = 5,
	ELoadProgress__ConnectingToMirrors = 6,
	ELoadProgress__StartEAC        = 7,
	ELoadProgress__LoadingBackendConfigs = 8,
	ELoadProgress__SetupRichPresence = 9,
	ELoadProgress__LoadingBackendTunables = 10,
	ELoadProgress__ApplyingCDNPatch = 11,
	ELoadProgress__AquiringExternalAuthentication = 12,
	ELoadProgress__LoadingPlayerIndependentShopData = 13,
	ELoadProgress__LicenseCache    = 14,
	ELoadProgress__LoadingEvents   = 15,
	ELoadProgress__LoadingInventory = 16,
	ELoadProgress__SyncingOwnedCharacters = 17,
	ELoadProgress__LoadingProfile  = 18,
	ELoadProgress__LoadingMirrorCurrencies = 19,
	ELoadProgress__LoadingWallet   = 20,
	ELoadProgress__LoadingConsent  = 21,
	ELoadProgress__LoadingGameConfigs = 22,
	ELoadProgress__LoadingCharacterXPTables = 23,
	ELoadProgress__CheckingPendingTransactions = 24,
	ELoadProgress__LoadingContentSchedule = 25,
	ELoadProgress__LoadingNews     = 26,
	ELoadProgress__SendingAnalytics = 27,
	ELoadProgress__ValidateData    = 28,
	ELoadProgress__ValidatingClientVersion = 29,
	ELoadProgress__CheckingNeedForCurrencyMigration = 30,
	ELoadProgress__MigratingCurrenciesToMirror = 31,
	ELoadProgress__SyncingFriendsList = 32,
	ELoadProgress__Complete        = 33,
	ELoadProgress__Locating        = 34,
	ELoadProgress__ELoadProgress_MAX = 35,

};

// Enum DeadByDaylight.EProceduralDebugMode
enum class DeadByDaylight_EProceduralDebugMode : uint8_t
{
	EProceduralDebugMode__None     = 0,
	EProceduralDebugMode__NoMap    = 1,
	EProceduralDebugMode__TilesSmall = 2,
	EProceduralDebugMode__TilesBig = 3,
	EProceduralDebugMode__Count    = 4,
	EProceduralDebugMode__EProceduralDebugMode_MAX = 5,

};

// Enum DeadByDaylight.EAIEvadeLoopSides
enum class DeadByDaylight_EAIEvadeLoopSides : uint8_t
{
	EAIEvadeLoopSides__Left        = 0,
	EAIEvadeLoopSides__Right       = 1,
	EAIEvadeLoopSides__Count       = 2,
	EAIEvadeLoopSides__EAIEvadeLoopSides_MAX = 3,

};

// Enum DeadByDaylight.EPlayerGameplayEventType
enum class DeadByDaylight_EPlayerGameplayEventType : uint8_t
{
	EPlayerGameplayEventType__VE_UnhookedOther = 0,
	EPlayerGameplayEventType__VE_UntrappedOther = 1,
	EPlayerGameplayEventType__VE_HealedOther = 2,
	EPlayerGameplayEventType__VE_MAX = 3,

};

// Enum DeadByDaylight.EVisibleMenuActorType
enum class DeadByDaylight_EVisibleMenuActorType : uint8_t
{
	EVisibleMenuActorType__None    = 0,
	EVisibleMenuActorType__Pawn    = 1,
	EVisibleMenuActorType__Hook    = 2,
	EVisibleMenuActorType__Charm   = 3,
	EVisibleMenuActorType__EVisibleMenuActorType_MAX = 4,

};

// Enum DeadByDaylight.ELoginType
enum class DeadByDaylight_ELoginType : uint8_t
{
	ELoginType__Reservation        = 0,
	ELoginType__Join               = 1,
	ELoginType__None               = 2,
	ELoginType__ELoginType_MAX     = 3,

};

// Enum DeadByDaylight.EGameType
enum class DeadByDaylight_EGameType : uint8_t
{
	EGameType__Online              = 0,
	EGameType__KillYourFriends     = 1,
	EGameType__SurvivorGroup       = 2,
	EGameType__Tutorial            = 3,
	EGameType__None                = 4,
	EGameType__EGameType_MAX       = 5,

};

// Enum DeadByDaylight.EToastInputType
enum class DeadByDaylight_EToastInputType : uint8_t
{
	EToastInputType__Toast_Accept  = 0,
	EToastInputType__Toast_Reject  = 1,
	EToastInputType__Toast_Close   = 2,
	EToastInputType__Toast_MAX     = 3,

};

// Enum DeadByDaylight.EShadowSystem
enum class DeadByDaylight_EShadowSystem : uint8_t
{
	EShadowSystem__CascadedShadowMap = 0,
	EShadowSystem__CacheWholeSceneStaticShadowMap = 1,
	EShadowSystem__AdaptiveShadowMap = 2,
	EShadowSystem__EShadowSystem_MAX = 3,

};

// Enum DeadByDaylight.EDemogorgonPortalState
enum class DeadByDaylight_EDemogorgonPortalState : uint8_t
{
	EDemogorgonPortalState__Hidden = 0,
	EDemogorgonPortalState__InUse  = 1,
	EDemogorgonPortalState__Exposed = 2,
	EDemogorgonPortalState__EDemogorgonPortalState_MAX = 3,

};

// Enum DeadByDaylight.EDoctorAbilityPhase
enum class DeadByDaylight_EDoctorAbilityPhase : uint8_t
{
	EDoctorAbilityPhase__VE_Charging = 0,
	EDoctorAbilityPhase__VE_Firing = 1,
	EDoctorAbilityPhase__VE_None   = 2,
	EDoctorAbilityPhase__VE_MAX    = 3,

};

// Enum DeadByDaylight.EDoctorAbilityType
enum class DeadByDaylight_EDoctorAbilityType : uint8_t
{
	EDoctorAbilityType__VE_ShockTherapy = 0,
	EDoctorAbilityType__VE_StaticBlast = 1,
	EDoctorAbilityType__VE_None    = 2,
	EDoctorAbilityType__VE_MAX     = 3,

};

// Enum DeadByDaylight.EEndGameScenarioTrigger
enum class DeadByDaylight_EEndGameScenarioTrigger : uint8_t
{
	EEndGameScenarioTrigger__ClosedHatch = 0,
	EEndGameScenarioTrigger__OpenedGate = 1,
	EEndGameScenarioTrigger__CheatUsed = 2,
	EEndGameScenarioTrigger__NotActivated = 3,
	EEndGameScenarioTrigger__EEndGameScenarioTrigger_MAX = 4,

};

// Enum DeadByDaylight.EEnergyTypeEnum
enum class DeadByDaylight_EEnergyTypeEnum : uint8_t
{
	EEnergyTypeEnum__EInvalid      = 0,
	EEnergyTypeEnum__EBattery      = 1,
	EEnergyTypeEnum__EHealth       = 2,
	EEnergyTypeEnum__EEnergyTypeEnum_MAX = 3,

};

// Enum DeadByDaylight.EEscapeDoorActivationMode
enum class DeadByDaylight_EEscapeDoorActivationMode : uint8_t
{
	EEscapeDoorActivationMode__Standard = 0,
	EEscapeDoorActivationMode__Tutorial = 1,
	EEscapeDoorActivationMode__EEscapeDoorActivationMode_MAX = 2,

};

// Enum DeadByDaylight.EConditionSubject
enum class DeadByDaylight_EConditionSubject : uint8_t
{
	EConditionSubject__Instigator  = 0,
	EConditionSubject__Target      = 1,
	EConditionSubject__EConditionSubject_MAX = 2,

};

// Enum DeadByDaylight.ELoadoutType
enum class DeadByDaylight_ELoadoutType : uint8_t
{
	ELoadoutType__Item             = 0,
	ELoadoutType__Perk             = 1,
	ELoadoutType__Offering         = 2,
	ELoadoutType__ELoadoutType_MAX = 3,

};

// Enum DeadByDaylight.FlickeringLightType
enum class DeadByDaylight_EFlickeringLightType : uint8_t
{
	FlickeringLightType__Point     = 0,
	FlickeringLightType__Rect      = 1,
	FlickeringLightType__Spot      = 2,
	FlickeringLightType__FlickeringLightType_MAX = 3,

};

// Enum DeadByDaylight.EFrenzyEndReason
enum class DeadByDaylight_EFrenzyEndReason : uint8_t
{
	EFrenzyEndReason__OutOfTime    = 0,
	EFrenzyEndReason__Manual       = 1,
	EFrenzyEndReason__PickUpCamper = 2,
	EFrenzyEndReason__Stunned      = 3,
	EFrenzyEndReason__Mori         = 4,
	EFrenzyEndReason__Blinded      = 5,
	EFrenzyEndReason__EFrenzyEndReason_MAX = 6,

};

// Enum DeadByDaylight.EFriendUIRichPresence
enum class DeadByDaylight_EFriendUIRichPresence : uint8_t
{
	EFriendUIRichPresence__Undefined = 0,
	EFriendUIRichPresence__InMenus = 1,
	EFriendUIRichPresence__InLobby = 2,
	EFriendUIRichPresence__InMatch = 3,
	EFriendUIRichPresence__Connected = 4,
	EFriendUIRichPresence__Closing = 5,
	EFriendUIRichPresence__EFriendUIRichPresence_MAX = 6,

};

// Enum DeadByDaylight.EFriendUIStatus
enum class DeadByDaylight_EFriendUIStatus : uint8_t
{
	EFriendUIStatus__Offline       = 0,
	EFriendUIStatus__Online        = 1,
	EFriendUIStatus__PlayingDBD    = 2,
	EFriendUIStatus__PendingSentRequest = 3,
	EFriendUIStatus__PendingReceivedRequest = 4,
	EFriendUIStatus__NotFriend     = 5,
	EFriendUIStatus__Self          = 6,
	EFriendUIStatus__EFriendUIStatus_MAX = 7,

};

// Enum DeadByDaylight.EFlowTransitionType
enum class DeadByDaylight_EFlowTransitionType : uint8_t
{
	EFlowTransitionType__Tally     = 0,
	EFlowTransitionType__OnlineLobby = 1,
	EFlowTransitionType__PartyLobby = 2,
	EFlowTransitionType__OfflineLobby = 3,
	EFlowTransitionType__Splash    = 4,
	EFlowTransitionType__RoleSelection = 5,
	EFlowTransitionType__None      = 6,
	EFlowTransitionType__EFlowTransitionType_MAX = 7,

};

// Enum DeadByDaylight.EUIFlowEvent
enum class DeadByDaylight_EUIFlowEvent : uint8_t
{
	EUIFlowEvent__None             = 0,
	EUIFlowEvent__AtlantaRoleSelectionScreenReady = 1,
	EUIFlowEvent__AtlantaNavigationScreenReady = 2,
	EUIFlowEvent__InGameHudReady   = 3,
	EUIFlowEvent__LoadingScreenReady = 4,
	EUIFlowEvent__OfflineLobbyScreenReady = 5,
	EUIFlowEvent__OnlineLobbyScreenReady = 6,
	EUIFlowEvent__RoleSelectionScreenReady = 7,
	EUIFlowEvent__SplashScreenReady = 8,
	EUIFlowEvent__TallyScreenReady = 9,
	EUIFlowEvent__PartyLobbyScreenReady = 10,
	EUIFlowEvent__StoreScreenReady = 11,
	EUIFlowEvent__EUIFlowEvent_MAX = 12,

};

// Enum DeadByDaylight.EWorldFlowEvent
enum class DeadByDaylight_EWorldFlowEvent : uint8_t
{
	EWorldFlowEvent__None          = 0,
	EWorldFlowEvent__GameLevelLoaded = 1,
	EWorldFlowEvent__LoadingGameLevel = 2,
	EWorldFlowEvent__LoadingOfflineParadise = 3,
	EWorldFlowEvent__LoadingOnlineLobbyLevel = 4,
	EWorldFlowEvent__OfflineLobbyMapLoaded = 5,
	EWorldFlowEvent__OfflineParadiseLoaded = 6,
	EWorldFlowEvent__OnlineLobbyMapLoaded = 7,
	EWorldFlowEvent__StartScreenMapLoaded = 8,
	EWorldFlowEvent__LoadingSplashScreen = 9,
	EWorldFlowEvent__EWorldFlowEvent_MAX = 10,

};

// Enum DeadByDaylight.EGameFlowStep
enum class DeadByDaylight_EGameFlowStep : uint8_t
{
	EGameFlowStep__None            = 0,
	EGameFlowStep__InGame          = 1,
	EGameFlowStep__OfflineLobby    = 2,
	EGameFlowStep__OfflineTally    = 3,
	EGameFlowStep__OnlineLobby     = 4,
	EGameFlowStep__SplashScreen    = 5,
	EGameFlowStep__PartyLobby      = 6,
	EGameFlowStep__Store           = 7,
	EGameFlowStep__RoleSelection   = 8,
	EGameFlowStep__EGameFlowStep_MAX = 9,

};

// Enum DeadByDaylight.EGameplayModifierSource
enum class DeadByDaylight_EGameplayModifierSource : uint8_t
{
	EGameplayModifierSource__VE_Perk = 0,
	EGameplayModifierSource__VE_StatusEffect = 1,
	EGameplayModifierSource__VE_Item = 2,
	EGameplayModifierSource__VE_ItemAddon = 3,
	EGameplayModifierSource__VE_All = 4,
	EGameplayModifierSource__VE_PerkAndStatusEffect = 5,
	EGameplayModifierSource__VE_PerkStatusAndAddon = 6,
	EGameplayModifierSource__VE_MAX = 7,

};

// Enum DeadByDaylight.EGateType
enum class DeadByDaylight_EGateType : uint8_t
{
	EGateType__VE_AndGate          = 0,
	EGateType__VE_TimerGate        = 1,
	EGateType__VE_MAX              = 2,

};

// Enum DeadByDaylight.EGestureID
enum class DeadByDaylight_EGestureID : uint8_t
{
	EGestureID__POINT              = 0,
	EGestureID__COME               = 1,
	EGestureID__EGestureID_MAX     = 2,

};

// Enum DeadByDaylight.EHatchState
enum class DeadByDaylight_EHatchState : uint8_t
{
	EHatchState__Hidden            = 0,
	EHatchState__DefaultClose      = 1,
	EHatchState__Opened            = 2,
	EHatchState__ForcedClose       = 3,
	EHatchState__EHatchState_MAX   = 4,

};

// Enum DeadByDaylight.EHelpType
enum class DeadByDaylight_EHelpType : uint8_t
{
	EHelpType__General             = 0,
	EHelpType__Survivor            = 1,
	EHelpType__Killer              = 2,
	EHelpType__EHelpType_MAX       = 3,

};

// Enum DeadByDaylight.EHintCategory
enum class DeadByDaylight_EHintCategory : uint8_t
{
	EHintCategory__Lore            = 0,
	EHintCategory__Survivor        = 1,
	EHintCategory__Killer          = 2,
	EHintCategory__EHintCategory_MAX = 3,

};

// Enum DeadByDaylight.EHitValidatorConfigName
enum class DeadByDaylight_EHitValidatorConfigName : uint8_t
{
	EHitValidatorConfigName__Default = 0,
	EHitValidatorConfigName__Hatchet = 1,
	EHitValidatorConfigName__Bomb  = 2,
	EHitValidatorConfigName__Harpoon = 3,
	EHitValidatorConfigName__Oni   = 4,
	EHitValidatorConfigName__EHitValidatorConfigName_MAX = 5,

};

// Enum DeadByDaylight.EHookType
enum class DeadByDaylight_EHookType : uint8_t
{
	EHookType__Hook                = 0,
	EHookType__DeathBed            = 1,
	EHookType__None                = 2,
	EHookType__EHookType_MAX       = 3,

};

// Enum DeadByDaylight.EProgressModifier
enum class DeadByDaylight_EProgressModifier : uint8_t
{
	EProgressModifier__Default     = 0,
	EProgressModifier__Buff        = 1,
	EProgressModifier__Debuff      = 2,
	EProgressModifier__EProgressModifier_MAX = 3,

};

// Enum DeadByDaylight.EInteractionLayer
enum class DeadByDaylight_EInteractionLayer : uint8_t
{
	EInteractionLayer__VE_Camper   = 0,
	EInteractionLayer__VE_Slasher  = 1,
	EInteractionLayer__VE_MAX      = 2,

};

// Enum DeadByDaylight.ESnapBackPositionType
enum class DeadByDaylight_ESnapBackPositionType : uint8_t
{
	ESnapBackPositionType__SnapBackToInitialPosition = 0,
	ESnapBackPositionType__SnapBackToOffsetPositionFromSnap = 1,
	ESnapBackPositionType__ESnapBackPositionType_MAX = 2,

};

// Enum DeadByDaylight.ESnapBackType
enum class DeadByDaylight_ESnapBackType : uint8_t
{
	ESnapBackType__None            = 0,
	ESnapBackType__Always          = 1,
	ESnapBackType__OnInteractionCancelledOnly = 2,
	ESnapBackType__OnInteractionEndOnly = 3,
	ESnapBackType__ESnapBackType_MAX = 4,

};

// Enum DeadByDaylight.EPowerProgressBar
enum class DeadByDaylight_EPowerProgressBar : uint8_t
{
	EPowerProgressBar__NoProgressBar = 0,
	EPowerProgressBar__ChargeBar   = 1,
	EPowerProgressBar__EPowerProgressBar_MAX = 2,

};

// Enum DeadByDaylight.EInteractionOwnership
enum class DeadByDaylight_EInteractionOwnership : uint8_t
{
	EInteractionOwnership__AnyCanUse = 0,
	EInteractionOwnership__OnlyOwnerCanUse = 1,
	EInteractionOwnership__OwnerCannotUse = 2,
	EInteractionOwnership__EInteractionOwnership_MAX = 3,

};

// Enum DeadByDaylight.EKillerHeight
enum class DeadByDaylight_EKillerHeight : uint8_t
{
	EKillerHeight__Short           = 0,
	EKillerHeight__Average         = 1,
	EKillerHeight__Tall            = 2,
	EKillerHeight__EKillerHeight_MAX = 3,

};

// Enum DeadByDaylight.EDisplayStandActorType
enum class DeadByDaylight_EDisplayStandActorType : uint8_t
{
	EDisplayStandActorType__None   = 0,
	EDisplayStandActorType__Character = 1,
	EDisplayStandActorType__Hook   = 2,
	EDisplayStandActorType__Charm  = 3,
	EDisplayStandActorType__EDisplayStandActorType_MAX = 4,

};

// Enum DeadByDaylight.EPlayerDataType
enum class DeadByDaylight_EPlayerDataType : uint8_t
{
	EPlayerDataType__None          = 0,
	EPlayerDataType__PlayerState   = 1,
	EPlayerDataType__SocialPartyMember = 2,
	EPlayerDataType__EPlayerDataType_MAX = 3,

};

// Enum DeadByDaylight.ELobbyWaitStopReason
enum class DeadByDaylight_ELobbyWaitStopReason : uint8_t
{
	ELobbyWaitStopReason__StartMatchWait = 0,
	ELobbyWaitStopReason__PlayerCancelled = 1,
	ELobbyWaitStopReason__Unknown  = 2,
	ELobbyWaitStopReason__ELobbyWaitStopReason_MAX = 3,

};

// Enum DeadByDaylight.EMainMenuButton
enum class DeadByDaylight_EMainMenuButton : uint8_t
{
	EMainMenuButton__News          = 0,
	EMainMenuButton__PlaySurvivor  = 1,
	EMainMenuButton__PlayKiller    = 2,
	EMainMenuButton__KillYourFriends = 3,
	EMainMenuButton__DailyRituals  = 4,
	EMainMenuButton__Store         = 5,
	EMainMenuButton__Settings      = 6,
	EMainMenuButton__Help          = 7,
	EMainMenuButton__Credits       = 8,
	EMainMenuButton__QuitGame      = 9,
	EMainMenuButton__Friends       = 10,
	EMainMenuButton__Archives      = 11,
	EMainMenuButton__CrowdChoice   = 12,
	EMainMenuButton__PlaySurvivorFromCrowdChoice = 13,
	EMainMenuButton__PlayKillerFromCrowdChoice = 14,
	EMainMenuButton__EMainMenuButton_MAX = 15,

};

// Enum DeadByDaylight.EMapActorCategory
enum class DeadByDaylight_EMapActorCategory : uint8_t
{
	EMapActorCategory__None        = 0,
	EMapActorCategory__Objective   = 1,
	EMapActorCategory__BlackLock   = 2,
	EMapActorCategory__KillerObject = 3,
	EMapActorCategory__ExitGate    = 4,
	EMapActorCategory__EMapActorCategory_MAX = 5,

};

// Enum DeadByDaylight.EQuadDirection
enum class DeadByDaylight_EQuadDirection : uint8_t
{
	EQuadDirection__None           = 0,
	EQuadDirection__Up             = 1,
	EQuadDirection__Down           = 2,
	EQuadDirection__Left           = 3,
	EQuadDirection__Right          = 4,
	EQuadDirection__Empty          = 5,
	EQuadDirection__EQuadDirection_MAX = 6,

};

// Enum DeadByDaylight.ETileVariation
enum class DeadByDaylight_ETileVariation : uint8_t
{
	ETileVariation__None           = 0,
	ETileVariation__BlueTag        = 1,
	ETileVariation__PinkTag        = 2,
	ETileVariation__YellowTag      = 3,
	ETileVariation__GreenTag       = 4,
	ETileVariation__Empty          = 5,
	ETileVariation__ETileVariation_MAX = 6,

};

// Enum DeadByDaylight.EPathType
enum class DeadByDaylight_EPathType : uint8_t
{
	EPathType__None                = 0,
	EPathType__Straight            = 1,
	EPathType__DeadEnd             = 2,
	EPathType__Corner              = 3,
	EPathType__Crossroads          = 4,
	EPathType__TJunction           = 5,
	EPathType__OrientationOnly     = 6,
	EPathType__Unspecified         = 7,
	EPathType__OrientedCrossroads  = 8,
	EPathType__EPathType_MAX       = 9,

};

// Enum DeadByDaylight.EDensity
enum class DeadByDaylight_EDensity : uint8_t
{
	EDensity__Unspecified          = 0,
	EDensity__Light                = 1,
	EDensity__Moderate             = 2,
	EDensity__Heavy                = 3,
	EDensity__Empty                = 4,
	EDensity__EDensity_MAX         = 5,

};

// Enum DeadByDaylight.ETileType
enum class DeadByDaylight_ETileType : uint8_t
{
	ETileType__None                = 0,
	ETileType__Blocker             = 1,
	ETileType__Any                 = 2,
	ETileType__Forest              = 3,
	ETileType__Building            = 4,
	ETileType__Maze                = 5,
	ETileType__Landmark            = 6,
	ETileType__Signature           = 7,
	ETileType__ETileType_MAX       = 8,

};

// Enum DeadByDaylight.EDirection
enum class DeadByDaylight_EDirection : uint8_t
{
	EDirection__Up                 = 0,
	EDirection__Down               = 1,
	EDirection__Left               = 2,
	EDirection__Right              = 3,
	EDirection__UpLeft             = 4,
	EDirection__UpRight            = 5,
	EDirection__DownLeft           = 6,
	EDirection__DownRight          = 7,
	EDirection__EDirection_MAX     = 8,

};

// Enum DeadByDaylight.EBasementType
enum class DeadByDaylight_EBasementType : uint8_t
{
	EBasementType__None            = 0,
	EBasementType__Basic           = 1,
	EBasementType__MainBuilding    = 2,
	EBasementType__Shack           = 3,
	EBasementType__Count           = 4,
	EBasementType__EBasementType_MAX = 5,

};

// Enum DeadByDaylight.EQuadrantSpawnType
enum class DeadByDaylight_EQuadrantSpawnType : uint8_t
{
	EQuadrantSpawnType__L_Shape    = 0,
	EQuadrantSpawnType__Square     = 1,
	EQuadrantSpawnType__Rect_X     = 2,
	EQuadrantSpawnType__Rect_Y     = 3,
	EQuadrantSpawnType__Rect       = 4,
	EQuadrantSpawnType__None       = 5,
	EQuadrantSpawnType__EQuadrantSpawnType_MAX = 6,

};

// Enum DeadByDaylight.EQuadrant
enum class DeadByDaylight_EQuadrant : uint8_t
{
	EQuadrant__BottomRight         = 0,
	EQuadrant__BottomLeft          = 1,
	EQuadrant__TopLeft             = 2,
	EQuadrant__TopRight            = 3,
	EQuadrant__Count               = 4,
	EQuadrant__EQuadrant_MAX       = 5,

};

// Enum DeadByDaylight.EPlayerAnimState
enum class DeadByDaylight_EPlayerAnimState : uint8_t
{
	EPlayerAnimState__VE_Default   = 0,
	EPlayerAnimState__VE_Injured   = 1,
	EPlayerAnimState__VE_InjuredCrouch = 2,
	EPlayerAnimState__VE_Crouch    = 3,
	EPlayerAnimState__VE_MAX       = 4,

};

// Enum DeadByDaylight.EOfferingEffectType
enum class DeadByDaylight_EOfferingEffectType : uint8_t
{
	EOfferingEffectType__SlasherPointsAll = 0,
	EOfferingEffectType__PointsBrutality = 1,
	EOfferingEffectType__PointsDeviouness = 2,
	EOfferingEffectType__PointsSacrice = 3,
	EOfferingEffectType__PointsHunting = 4,
	EOfferingEffectType__CamperPointsAll = 5,
	EOfferingEffectType__PointsObjective = 6,
	EOfferingEffectType__PointsSurvival = 7,
	EOfferingEffectType__PointsAltruism = 8,
	EOfferingEffectType__PointsBoldness = 9,
	EOfferingEffectType__CamperItemLostPrevention = 10,
	EOfferingEffectType__KillerItemLostPrevention = 11,
	EOfferingEffectType__Luck      = 12,
	EOfferingEffectType__IndustrialThemeSelectionModifier = 13,
	EOfferingEffectType__JunkyardThemeSelectionModifier = 14,
	EOfferingEffectType__FarmThemeSelectionModifier = 15,
	EOfferingEffectType__SwampThemeSelectionModifier = 16,
	EOfferingEffectType__MapModifier = 17,
	EOfferingEffectType__ChestCountModifier = 18,
	EOfferingEffectType__PortableHookCountModifier = 19,
	EOfferingEffectType__LairCountModifier = 20,
	EOfferingEffectType__PlayerGrouping = 21,
	EOfferingEffectType__FarKiller = 22,
	EOfferingEffectType__KillAllowedModifier = 23,
	EOfferingEffectType__LightingModification = 24,
	EOfferingEffectType__FogModification = 25,
	EOfferingEffectType__LivingWorldObjectCountModifier = 26,
	EOfferingEffectType__LivingWorldObjectMultModifier = 27,
	EOfferingEffectType__KillLastSurvivor = 28,
	EOfferingEffectType__SuburbsThemeSelectionModifier = 29,
	EOfferingEffectType__AsylumThemeSelectionModifier = 30,
	EOfferingEffectType__KillerSelectionModifier = 31,
	EOfferingEffectType__HospitalThemeSelectionModifier = 32,
	EOfferingEffectType__KillAllowedAfterStrugglePhase = 33,
	EOfferingEffectType__BorealThemeSelectionModifier = 34,
	EOfferingEffectType__SpringwoodThemeSelectionModifier = 35,
	EOfferingEffectType__FinlandThemeSelectionModifier = 36,
	EOfferingEffectType__JapaneseCountrySideSelectionModifier = 37,
	EOfferingEffectType__KenyaThemeSelectionModifier = 38,
	EOfferingEffectType__QatarThemeSelectionModifier = 39,
	EOfferingEffectType__UkraineThemeSelectionModifier = 40,
	EOfferingEffectType__WalesThemeSelectionModifier = 41,
	EOfferingEffectType__CancelThemeSelectionModifier = 42,
	EOfferingEffectType__BasementMainBuildingModifier = 43,
	EOfferingEffectType__BasementShackModifier = 44,
	EOfferingEffectType__HatchMainBuildingModifier = 45,
	EOfferingEffectType__HatchShackModifier = 46,
	EOfferingEffectType__SpecialEvent = 47,
	EOfferingEffectType__ObjectSubsitution = 48,
	EOfferingEffectType__ObjectAddition = 49,
	EOfferingEffectType__EOfferingEffectType_MAX = 50,

};

// Enum DeadByDaylight.EOfferingCategory
enum class DeadByDaylight_EOfferingCategory : uint8_t
{
	EOfferingCategory__None        = 0,
	EOfferingCategory__Bloodpoints = 1,
	EOfferingCategory__Mapmods     = 2,
	EOfferingCategory__Realms      = 3,
	EOfferingCategory__Shrouds     = 4,
	EOfferingCategory__Wards       = 5,
	EOfferingCategory__Luck        = 6,
	EOfferingCategory__Moris       = 7,
	EOfferingCategory__EOfferingCategory_MAX = 8,

};

// Enum DeadByDaylight.EOfferingType
enum class DeadByDaylight_EOfferingType : uint8_t
{
	EOfferingType__None            = 0,
	EOfferingType__Atmosphere      = 1,
	EOfferingType__Lighting        = 2,
	EOfferingType__Points          = 3,
	EOfferingType__Zone            = 4,
	EOfferingType__Position        = 5,
	EOfferingType__Chest           = 6,
	EOfferingType__Hook            = 7,
	EOfferingType__Protection      = 8,
	EOfferingType__Hatch           = 9,
	EOfferingType__Odds            = 10,
	EOfferingType__Killing         = 11,
	EOfferingType__World           = 12,
	EOfferingType__Luck            = 13,
	EOfferingType__Killer          = 14,
	EOfferingType__ProceduralGeneration = 15,
	EOfferingType__Count           = 16,
	EOfferingType__EOfferingType_MAX = 17,

};

// Enum DeadByDaylight.EOfferingCombinationResult
enum class DeadByDaylight_EOfferingCombinationResult : uint8_t
{
	EOfferingCombinationResult__None = 0,
	EOfferingCombinationResult__Stacked = 1,
	EOfferingCombinationResult__CoConsummed = 2,
	EOfferingCombinationResult__Overruling = 3,
	EOfferingCombinationResult__Cancelled = 4,
	EOfferingCombinationResult__EOfferingCombinationResult_MAX = 5,

};

// Enum DeadByDaylight.EOfferingAnimState
enum class DeadByDaylight_EOfferingAnimState : uint8_t
{
	EOfferingAnimState__None       = 0,
	EOfferingAnimState__Idle       = 1,
	EOfferingAnimState__Init       = 2,
	EOfferingAnimState__Reveal     = 3,
	EOfferingAnimState__ShowInteraction = 4,
	EOfferingAnimState__Burned     = 5,
	EOfferingAnimState__Returned   = 6,
	EOfferingAnimState__Cancel     = 7,
	EOfferingAnimState__Hidden     = 8,
	EOfferingAnimState__EOfferingAnimState_MAX = 9,

};

// Enum DeadByDaylight.EOfferingSequenceState
enum class DeadByDaylight_EOfferingSequenceState : uint8_t
{
	EOfferingSequenceState__SmokeIn = 0,
	EOfferingSequenceState__FadeOut = 1,
	EOfferingSequenceState__FadeIn = 2,
	EOfferingSequenceState__NotInitialized = 3,
	EOfferingSequenceState__Idle   = 4,
	EOfferingSequenceState__Init   = 5,
	EOfferingSequenceState__InitDone = 6,
	EOfferingSequenceState__Reveal = 7,
	EOfferingSequenceState__RevealDone = 8,
	EOfferingSequenceState__ShowInteraction = 9,
	EOfferingSequenceState__Finalize = 10,
	EOfferingSequenceState__Done   = 11,
	EOfferingSequenceState__EOfferingSequenceState_MAX = 12,

};

// Enum DeadByDaylight.EOfflineLobbyState
enum class DeadByDaylight_EOfflineLobbyState : uint8_t
{
	EOfflineLobbyState__None       = 0,
	EOfflineLobbyState__RoleSelection = 1,
	EOfflineLobbyState__OfflineLobby = 2,
	EOfflineLobbyState__Store      = 3,
	EOfflineLobbyState__PartyLobby = 4,
	EOfflineLobbyState__Archives   = 5,
	EOfflineLobbyState__EOfflineLobbyState_MAX = 6,

};

// Enum DeadByDaylight.EOniAttackType
enum class DeadByDaylight_EOniAttackType : uint8_t
{
	EOniAttackType__VE_NotDemonMode = 0,
	EOniAttackType__VE_DemonBasicAttack = 1,
	EOniAttackType__VE_DemonPowerAttack = 2,
	EOniAttackType__VE_DemonDashAttack = 3,
	EOniAttackType__VE_MAX         = 4,

};

// Enum DeadByDaylight.EJoinSessionFailureType
enum class DeadByDaylight_EJoinSessionFailureType : uint8_t
{
	EJoinSessionFailureType__None  = 0,
	EJoinSessionFailureType__JoiningAlreadyStartedGame = 1,
	EJoinSessionFailureType__JoiningPrivateGame = 2,
	EJoinSessionFailureType__JoiningAlreadyFullGame = 3,
	EJoinSessionFailureType__JoiningInvitation = 4,
	EJoinSessionFailureType__JoiningFailedOnDisconnect = 5,
	EJoinSessionFailureType__JoiningHostUnreachable = 6,
	EJoinSessionFailureType__EJoinSessionFailureType_MAX = 7,

};

// Enum DeadByDaylight.EOnlineOperation
enum class DeadByDaylight_EOnlineOperation : uint8_t
{
	EOnlineOperation__None         = 0,
	EOnlineOperation__HostGame     = 1,
	EOnlineOperation__EndingSession = 2,
	EOnlineOperation__DestroyingSession = 3,
	EOnlineOperation__JoinGame     = 4,
	EOnlineOperation__JoinCancelled = 5,
	EOnlineOperation__OnlineCheck  = 6,
	EOnlineOperation__CancellingMatchmaking = 7,
	EOnlineOperation__EOnlineOperation_MAX = 8,

};

// Enum DeadByDaylight.EOverlayMode
enum class DeadByDaylight_EOverlayMode : uint8_t
{
	EOverlayMode__Default          = 0,
	EOverlayMode__TrialOrTally     = 1,
	EOverlayMode__Tutorial         = 2,
	EOverlayMode__TutorialLevel    = 3,
	EOverlayMode__EOverlayMode_MAX = 4,

};

// Enum DeadByDaylight.EOverlayTabs
enum class DeadByDaylight_EOverlayTabs : uint8_t
{
	EOverlayTabs__Settings         = 0,
	EOverlayTabs__Controls         = 1,
	EOverlayTabs__Help             = 2,
	EOverlayTabs__Survivors        = 3,
	EOverlayTabs__About            = 4,
	EOverlayTabs__Language         = 5,
	EOverlayTabs__EOverlayTabs_MAX = 6,

};

// Enum DeadByDaylight.EPalletPushSideStrategy
enum class DeadByDaylight_EPalletPushSideStrategy : uint8_t
{
	EPalletPushSideStrategy__PushToClosestPalletSide = 0,
	EPalletPushSideStrategy__PushOppositeToPlayerExecutingPulldown = 1,
	EPalletPushSideStrategy__EPalletPushSideStrategy_MAX = 2,

};

// Enum DeadByDaylight.EPalletSide
enum class DeadByDaylight_EPalletSide : uint8_t
{
	EPalletSide__None              = 0,
	EPalletSide__Left              = 1,
	EPalletSide__Right             = 2,
	EPalletSide__EPalletSide_MAX   = 3,

};

// Enum DeadByDaylight.EPalletState
enum class DeadByDaylight_EPalletState : uint8_t
{
	EPalletState__Up               = 0,
	EPalletState__Falling          = 1,
	EPalletState__Fallen           = 2,
	EPalletState__Destroyed        = 3,
	EPalletState__Illusionary      = 4,
	EPalletState__EPalletState_MAX = 5,

};

// Enum DeadByDaylight.EInventoryGridFormat
enum class DeadByDaylight_EInventoryGridFormat : uint8_t
{
	EInventoryGridFormat__DEFAULT  = 0,
	EInventoryGridFormat__DIAMOND  = 1,
	EInventoryGridFormat__HONEYCOMB = 2,
	EInventoryGridFormat__EInventoryGridFormat_MAX = 3,

};

// Enum DeadByDaylight.ERequestState
enum class DeadByDaylight_ERequestState : uint8_t
{
	ERequestState__VE_None         = 0,
	ERequestState__VE_Pending      = 1,
	ERequestState__VE_Success      = 2,
	ERequestState__VE_Fail         = 3,
	ERequestState__VE_MAX          = 4,

};

// Enum DeadByDaylight.EInteractionValidationState
enum class DeadByDaylight_EInteractionValidationState : uint8_t
{
	EInteractionValidationState__None = 0,
	EInteractionValidationState__Predicted = 1,
	EInteractionValidationState__Authorized = 2,
	EInteractionValidationState__DeniedByRaceCondition = 3,
	EInteractionValidationState__DeniedByTimeout = 4,
	EInteractionValidationState__DeniedByError = 5,
	EInteractionValidationState__EInteractionValidationState_MAX = 6,

};

// Enum DeadByDaylight.EPreLevelGenerationModifierType
enum class DeadByDaylight_EPreLevelGenerationModifierType : uint8_t
{
	EPreLevelGenerationModifierType__None = 0,
	EPreLevelGenerationModifierType__ModifyKillerObjectCount = 1,
	EPreLevelGenerationModifierType__EPreLevelGenerationModifierType_MAX = 2,

};

// Enum DeadByDaylight.ESurvivorGrouping
enum class DeadByDaylight_ESurvivorGrouping : uint8_t
{
	ESurvivorGrouping__Invalid     = 0,
	ESurvivorGrouping__Separated   = 1,
	ESurvivorGrouping__Grouped2    = 2,
	ESurvivorGrouping__Grouped3    = 3,
	ESurvivorGrouping__Grouped4    = 4,
	ESurvivorGrouping__ESurvivorGrouping_MAX = 5,

};

// Enum DeadByDaylight.EscapeStrategyType
enum class DeadByDaylight_EscapeStrategyType : uint8_t
{
	EscapeStrategyType__EscapeDoor = 0,
	EscapeStrategyType__EscapeHatch = 1,
	EscapeStrategyType__EscapeStrategyType_MAX = 2,

};

// Enum DeadByDaylight.ELevelBuildingState
enum class DeadByDaylight_ELevelBuildingState : uint8_t
{
	ELevelBuildingState__NotInitialized = 0,
	ELevelBuildingState__WaitingForInitialSync = 1,
	ELevelBuildingState__SyncSeeds = 2,
	ELevelBuildingState__GetAvailableItems = 3,
	ELevelBuildingState__PendingGettingItems = 4,
	ELevelBuildingState__GettingLevelsDone = 5,
	ELevelBuildingState__PendingPremadeMapStreaming = 6,
	ELevelBuildingState__GetThemedTiles = 7,
	ELevelBuildingState__PendingGettingTiles = 8,
	ELevelBuildingState__SpawnRequiredTiles = 9,
	ELevelBuildingState__SpawningLevelTiles = 10,
	ELevelBuildingState__SpawnInterTileElements = 11,
	ELevelBuildingState__PendingInterTileElementsSpawning = 12,
	ELevelBuildingState__SpawningActors = 13,
	ELevelBuildingState__SpawningMultiPassActors = 14,
	ELevelBuildingState__StallingForRemotes = 15,
	ELevelBuildingState__BuildingDone = 16,
	ELevelBuildingState__BuildingStateCount = 17,
	ELevelBuildingState__ELevelBuildingState_MAX = 18,

};

// Enum DeadByDaylight.EScreenType
enum class DeadByDaylight_EScreenType : uint8_t
{
	EScreenType__eScaleformScreen  = 0,
	EScreenType__eUMGScreen        = 1,
	EScreenType__eMixedScaleformUMG = 2,
	EScreenType__EScreenType_MAX   = 3,

};

// Enum DeadByDaylight.SettingsId
enum class DeadByDaylight_ESettingsId : uint8_t
{
	SettingsId__None               = 0,
	SettingsId__Language           = 1,
	SettingsId__HideTutorial       = 2,
	SettingsId__RevokeConsent      = 3,
	SettingsId__BhvrAccount        = 4,
	SettingsId__AllowCrossplayGeneric = 5,
	SettingsId__AllowCrossplayLive = 6,
	SettingsId__AutoDeclineFriendRequests = 7,
	SettingsId__PlayerId           = 8,
	SettingsId__PartyPrivacy       = 9,
	SettingsId__Quality            = 10,
	SettingsId__AutoAdjust         = 11,
	SettingsId__Resolution         = 12,
	SettingsId__FullScreen         = 13,
	SettingsId__MenuScaleFactor    = 14,
	SettingsId__HudScaleFactor     = 15,
	SettingsId__SkillCheckScaleFactor = 16,
	SettingsId__MainVolume         = 17,
	SettingsId__MenuMusicVolume    = 18,
	SettingsId__Headphones         = 19,
	SettingsId__MuteOnFocusLost    = 20,
	SettingsId__InvertYAxis        = 21,
	SettingsId__SurvivorMouseSensitivity = 22,
	SettingsId__SurvivorControllerSensitivity = 23,
	SettingsId__SurvivorCameraSensitivity = 24,
	SettingsId__KillerMouseSensitivity = 25,
	SettingsId__KillerControllerSensitivity = 26,
	SettingsId__KillerCameraSensitivity = 27,
	SettingsId__ColorBarPalette    = 28,
	SettingsId__ColorBlindMode     = 29,
	SettingsId__ColorBlindModeIntensity = 30,
	SettingsId__SettingsId_MAX     = 31,

};

// Enum DeadByDaylight.SettingsSubCategory
enum class DeadByDaylight_ESettingsSubCategory : uint8_t
{
	SettingsSubCategory__None      = 0,
	SettingsSubCategory__Language  = 1,
	SettingsSubCategory__Tutorial  = 2,
	SettingsSubCategory__Privacy   = 3,
	SettingsSubCategory__Online    = 4,
	SettingsSubCategory__Graphics  = 5,
	SettingsSubCategory__UIHud     = 6,
	SettingsSubCategory__Audio     = 7,
	SettingsSubCategory__CommonControls = 8,
	SettingsSubCategory__SurvivorControls = 9,
	SettingsSubCategory__KillerControls = 10,
	SettingsSubCategory__ColorBlindMode = 11,
	SettingsSubCategory__SettingsSubCategory_MAX = 12,

};

// Enum DeadByDaylight.SettingsCategory
enum class DeadByDaylight_ESettingsCategory : uint8_t
{
	SettingsCategory__General      = 0,
	SettingsCategory__Graphics     = 1,
	SettingsCategory__Audio        = 2,
	SettingsCategory__Controls     = 3,
	SettingsCategory__SettingsCategory_MAX = 4,

};

// Enum DeadByDaylight.SettingsType
enum class DeadByDaylight_ESettingsType : uint8_t
{
	SettingsType__None             = 0,
	SettingsType__Button           = 1,
	SettingsType__PlayerId         = 2,
	SettingsType__Checkbox         = 3,
	SettingsType__NumericStepper   = 4,
	SettingsType__Dropdown         = 5,
	SettingsType__ColorBar         = 6,
	SettingsType__SettingsType_MAX = 7,

};

// Enum DeadByDaylight.EShopLoadProgress
enum class DeadByDaylight_EShopLoadProgress : uint8_t
{
	EShopLoadProgress__None        = 0,
	EShopLoadProgress__LoadCatalog = 1,
	EShopLoadProgress__LoadCurrencyPacks = 2,
	EShopLoadProgress__PlatformStoreCatalog = 3,
	EShopLoadProgress__Inventory   = 4,
	EShopLoadProgress__Wallet      = 5,
	EShopLoadProgress__FeaturedPageContent = 6,
	EShopLoadProgress__EShopLoadProgress_MAX = 7,

};

// Enum DeadByDaylight.ESoftBanReason
enum class DeadByDaylight_ESoftBanReason : uint8_t
{
	ESoftBanReason__Invalid        = 0,
	ESoftBanReason__Harassment     = 1,
	ESoftBanReason__Griefing       = 2,
	ESoftBanReason__Exploits       = 3,
	ESoftBanReason__Unsportsmanlike = 4,
	ESoftBanReason__Count          = 5,
	ESoftBanReason__ESoftBanReason_MAX = 6,

};

// Enum DeadByDaylight.ESpecialEventGameMode
enum class DeadByDaylight_ESpecialEventGameMode : uint8_t
{
	ESpecialEventGameMode__Progression = 0,
	ESpecialEventGameMode__Counter = 1,
	ESpecialEventGameMode__Collection = 2,
	ESpecialEventGameMode__ESpecialEventGameMode_MAX = 3,

};

// Enum DeadByDaylight.ESpecialEventStatus
enum class DeadByDaylight_ESpecialEventStatus : uint8_t
{
	ESpecialEventStatus__Inactive  = 0,
	ESpecialEventStatus__ActiveMain = 1,
	ESpecialEventStatus__ActivePost = 2,
	ESpecialEventStatus__ESpecialEventStatus_MAX = 3,

};

// Enum DeadByDaylight.ELoadCompleteState
enum class DeadByDaylight_ELoadCompleteState : uint8_t
{
	ELoadCompleteState__InProgress = 0,
	ELoadCompleteState__Success    = 1,
	ELoadCompleteState__ReloginRequested = 2,
	ELoadCompleteState__FailedEAC  = 3,
	ELoadCompleteState__FailedRecoverable = 4,
	ELoadCompleteState__FailedRecoverableProfileLoad = 5,
	ELoadCompleteState__FailedBlocking = 6,
	ELoadCompleteState__FailedBlockingNoDBDServer = 7,
	ELoadCompleteState__FailedBlockingNotConnected = 8,
	ELoadCompleteState__FailedBlockedNoNetworkConnection = 9,
	ELoadCompleteState__FailedBlockingPlatformNotAuthenticated = 10,
	ELoadCompleteState__FailedBlockingPlatformSubsystemNotInitialized = 11,
	ELoadCompleteState__FailedBlockingOnlinePresenceNotInitialized = 12,
	ELoadCompleteState__FailedBlockingPlatformNetUniqueIdInvalid = 13,
	ELoadCompleteState__FailedBlockingInvalidLocalPlayer = 14,
	ELoadCompleteState__FailedBlockingInvalidGameObjects = 15,
	ELoadCompleteState__FailedBlockingInvalidSDA = 16,
	ELoadCompleteState__FailedBlockingInvalidClientVersion = 17,
	ELoadCompleteState__FailedBlockingWindowsStoreAccountNotLoggedIn = 18,
	ELoadCompleteState__FailedBlockingSSLCACert = 19,
	ELoadCompleteState__FailedBlockingCDNContentError = 20,
	ELoadCompleteState__FailedBlockingCDNCantFindContentToDownload = 21,
	ELoadCompleteState__FailedBlockingCDNNoPatchForCurrentPlatformAndVersion = 22,
	ELoadCompleteState__FailedBlockingCDNNotEnoughDiskSpace = 23,
	ELoadCompleteState__FailedBlockingCDNFailureToRetrieveContent = 24,
	ELoadCompleteState__FailedRecoverableCDNUserCancelled = 25,
	ELoadCompleteState__FailedBlockingVersionFileError = 26,
	ELoadCompleteState__ELoadCompleteState_MAX = 27,

};

// Enum DeadByDaylight.EExternalEffectSource
enum class DeadByDaylight_EExternalEffectSource : uint8_t
{
	EExternalEffectSource__None    = 0,
	EExternalEffectSource__Perk    = 1,
	EExternalEffectSource__Addon   = 2,
	EExternalEffectSource__Power   = 3,
	EExternalEffectSource__EExternalEffectSource_MAX = 4,

};

// Enum DeadByDaylight.EStoreBannerLocation
enum class DeadByDaylight_EStoreBannerLocation : uint8_t
{
	EStoreBannerLocation__Primary  = 0,
	EStoreBannerLocation__Secondary = 1,
	EStoreBannerLocation__EStoreBannerLocation_MAX = 2,

};

// Enum DeadByDaylight.EInteractionStorerRole
enum class DeadByDaylight_EInteractionStorerRole : uint8_t
{
	EInteractionStorerRole__None   = 0,
	EInteractionStorerRole__AuthorityAndAutonomousProxy = 1,
	EInteractionStorerRole__ClientAndAutonomousProxy = 2,
	EInteractionStorerRole__AuthorityAndSimulatedProxy = 3,
	EInteractionStorerRole__ClientAndSimulatedProxy = 4,
	EInteractionStorerRole__EInteractionStorerRole_MAX = 5,

};

// Enum DeadByDaylight.ETextBannerPosition
enum class DeadByDaylight_ETextBannerPosition : uint8_t
{
	ETextBannerPosition__TopLeft   = 0,
	ETextBannerPosition__MiddleLeft = 1,
	ETextBannerPosition__BottomLeft = 2,
	ETextBannerPosition__MiddleRight = 3,
	ETextBannerPosition__BottomRight = 4,
	ETextBannerPosition__TopCenter = 5,
	ETextBannerPosition__MiddleCenter = 6,
	ETextBannerPosition__BottomCenter = 7,
	ETextBannerPosition__ETextBannerPosition_MAX = 8,

};

// Enum DeadByDaylight.EStoreTab
enum class DeadByDaylight_EStoreTab : uint8_t
{
	EStoreTab__Featured            = 0,
	EStoreTab__Characters          = 1,
	EStoreTab__Currency            = 2,
	EStoreTab__ShrineOfSecrets     = 3,
	EStoreTab__TabCount            = 4,
	EStoreTab__EStoreTab_MAX       = 5,

};

// Enum DeadByDaylight.EStoreState
enum class DeadByDaylight_EStoreState : uint8_t
{
	EStoreState__None              = 0,
	EStoreState__Featured          = 1,
	EStoreState__CharacterSelection = 2,
	EStoreState__CharacterStory    = 3,
	EStoreState__CharacterCatalog  = 4,
	EStoreState__BuyCurrency       = 5,
	EStoreState__ShrineOfSecrets   = 6,
	EStoreState__EStoreState_MAX   = 7,

};

// Enum DeadByDaylight.EStoryNodeState
enum class DeadByDaylight_EStoryNodeState : uint8_t
{
	EStoryNodeState__None          = 0,
	EStoryNodeState__Unavailable   = 1,
	EStoryNodeState__AvailableDefault = 2,
	EStoryNodeState__AvailableActive = 3,
	EStoryNodeState__AvailablePaused = 4,
	EStoryNodeState__Completed     = 5,
	EStoryNodeState__Claimed       = 6,
	EStoryNodeState__EStoryNodeState_MAX = 7,

};

// Enum DeadByDaylight.ETeachableStatus
enum class DeadByDaylight_ETeachableStatus : uint8_t
{
	ETeachableStatus__Unknown      = 0,
	ETeachableStatus__Locked       = 1,
	ETeachableStatus__AvailableInBloodWeb = 2,
	ETeachableStatus__AvailableInShrine = 3,
	ETeachableStatus__Acquired     = 4,
	ETeachableStatus__ETeachableStatus_MAX = 5,

};

// Enum DeadByDaylight.EPromptType
enum class DeadByDaylight_EPromptType : uint8_t
{
	EPromptType__None              = 0,
	EPromptType__ExitsPowered      = 1,
	EPromptType__HatchSpawned      = 2,
	EPromptType__HatchOpened       = 3,
	EPromptType__EPromptType_MAX   = 4,

};

// Enum DeadByDaylight.ENotificationStyle
enum class DeadByDaylight_ENotificationStyle : uint8_t
{
	ENotificationStyle__None       = 0,
	ENotificationStyle__Game       = 1,
	ENotificationStyle__Tutorial   = 2,
	ENotificationStyle__ENotificationStyle_MAX = 3,

};

// Enum DeadByDaylight.EPromptPriority
enum class DeadByDaylight_EPromptPriority : uint8_t
{
	EPromptPriority__Tutorial      = 0,
	EPromptPriority__High          = 1,
	EPromptPriority__Medium        = 2,
	EPromptPriority__Low           = 3,
	EPromptPriority__EPromptPriority_MAX = 4,

};

// Enum DeadByDaylight.ELegalTermsStatus
enum class DeadByDaylight_ELegalTermsStatus : uint8_t
{
	ELegalTermsStatus__None        = 0,
	ELegalTermsStatus__Accepted    = 1,
	ELegalTermsStatus__Declined    = 2,
	ELegalTermsStatus__ELegalTermsStatus_MAX = 3,

};

// Enum DeadByDaylight.ELoadoutSlot
enum class DeadByDaylight_ELoadoutSlot : uint8_t
{
	ELoadoutSlot__SKIN             = 0,
	ELoadoutSlot__ITEM_POWER       = 1,
	ELoadoutSlot__ADD_ON           = 2,
	ELoadoutSlot__ADD_ON01         = 3,
	ELoadoutSlot__PERK             = 4,
	ELoadoutSlot__PERK01           = 5,
	ELoadoutSlot__PERK02           = 6,
	ELoadoutSlot__PERK03           = 7,
	ELoadoutSlot__FAVOR            = 8,
	ELoadoutSlot__ELoadoutSlot_MAX = 9,

};

// Enum DeadByDaylight.ENewContentType
enum class DeadByDaylight_ENewContentType : uint8_t
{
	ENewContentType__COMING_SOON   = 0,
	ENewContentType__NEW_CONTENT   = 1,
	ENewContentType__PATCH_NOTES   = 2,
	ENewContentType__DEV_MESSAGES  = 3,
	ENewContentType__EVENTS        = 4,
	ENewContentType__ENewContentType_MAX = 5,

};

// Enum DeadByDaylight.EOverlayButtonOptions
enum class DeadByDaylight_EOverlayButtonOptions : uint8_t
{
	EOverlayButtonOptions__HIDDEN  = 0,
	EOverlayButtonOptions__DISABLED = 1,
	EOverlayButtonOptions__ENABLED = 2,
	EOverlayButtonOptions__EOverlayButtonOptions_MAX = 3,

};

// Enum DeadByDaylight.ESlasherMatchResultScore
enum class DeadByDaylight_ESlasherMatchResultScore : uint8_t
{
	DisgracefulDefeat              = 0,
	EntityDispleased               = 1,
	BrutalKiller                   = 2,
	RuthlessKiller                 = 3,
	MercilessKiller                = 4,
	ESlasherMatchResultScore_MAX   = 5,

};

// Enum DeadByDaylight.EUIControllerType
enum class DeadByDaylight_EUIControllerType : uint8_t
{
	EUIControllerType__KeyboardMouse = 0,
	EUIControllerType__GamePad     = 1,
	EUIControllerType__EUIControllerType_MAX = 2,

};

// Enum DeadByDaylight.EScreenShotBatching
enum class DeadByDaylight_EScreenShotBatching : uint8_t
{
	EScreenShotBatching__SelectedItemOrOutfit = 0,
	EScreenShotBatching__SelectedCharacter = 1,
	EScreenShotBatching__SelectedCharacterAndCategory = 2,
	EScreenShotBatching__ItemsMissingIcon = 3,
	EScreenShotBatching__AllItems  = 4,
	EScreenShotBatching__SelectedCharacterOutfits = 5,
	EScreenShotBatching__AllOutfits = 6,
	EScreenShotBatching__AllCharms = 7,
	EScreenShotBatching__EScreenShotBatching_MAX = 8,

};

// Enum DeadByDaylight.ELeaveLobbyReason
enum class DeadByDaylight_ELeaveLobbyReason : uint8_t
{
	ELeaveLobbyReason__eNone       = 0,
	ELeaveLobbyReason__eNetworkDisconnect = 1,
	ELeaveLobbyReason__eProfileOffline = 2,
	ELeaveLobbyReason__eAppSuspended = 3,
	ELeaveLobbyReason__eInternetDisconnect = 4,
	ELeaveLobbyReason__eHostDisconnect = 5,
	ELeaveLobbyReason__eDLCInstalled = 6,
	ELeaveLobbyReason__eTrialExtensionExpired = 7,
	ELeaveLobbyReason__ePartyManagementError = 8,
	ELeaveLobbyReason__ELeaveLobbyReason_MAX = 9,

};

// Enum DeadByDaylight.EFriendSearchPanelOption
enum class DeadByDaylight_EFriendSearchPanelOption : uint8_t
{
	EFriendSearchPanelOption__NotFoundPanel = 0,
	EFriendSearchPanelOption__NonFriendPanel = 1,
	EFriendSearchPanelOption__FriendRequestReceivedPanel = 2,
	EFriendSearchPanelOption__FriendRequestSentPanel = 3,
	EFriendSearchPanelOption__FriendPanel = 4,
	EFriendSearchPanelOption__IsOwnerPanel = 5,
	EFriendSearchPanelOption__EFriendSearchPanelOption_MAX = 6,

};

// Enum DeadByDaylight.EFriendContainerType
enum class DeadByDaylight_EFriendContainerType : uint8_t
{
	EFriendContainerType__Connected = 0,
	EFriendContainerType__Disconnected = 1,
	EFriendContainerType__PendingSentRequest = 2,
	EFriendContainerType__RecentlyPlayed = 3,
	EFriendContainerType__SocialSuggestions = 4,
	EFriendContainerType__PendingReceivedRequest = 5,
	EFriendContainerType__QueriedPlayer = 6,
	EFriendContainerType__Unknown  = 7,
	EFriendContainerType__EFriendContainerType_MAX = 8,

};

// Enum DeadByDaylight.EAtlantaSettingMenuType
enum class DeadByDaylight_EAtlantaSettingMenuType : uint8_t
{
	EAtlantaSettingMenuType__TabButton = 0,
	EAtlantaSettingMenuType__AlwaysDisplay = 1,
	EAtlantaSettingMenuType__EAtlantaSettingMenuType_MAX = 2,

};

// Enum DeadByDaylight.EBloodStoreRowStyle
enum class DeadByDaylight_EBloodStoreRowStyle : uint8_t
{
	EBloodStoreRowStyle__FiveItemRow = 0,
	EBloodStoreRowStyle__ThreeItemRow = 1,
	EBloodStoreRowStyle__EBloodStoreRowStyle_MAX = 2,

};

// Enum DeadByDaylight.EButtonType
enum class DeadByDaylight_EButtonType : uint8_t
{
	EButtonType__None              = 0,
	EButtonType__AttackButton      = 1,
	EButtonType__PowerButton       = 2,
	EButtonType__CancelButton      = 3,
	EButtonType__SettingsButton    = 4,
	EButtonType__SecondaryActionButton = 5,
	EButtonType__EButtonType_MAX   = 6,

};

// Enum DeadByDaylight.EInboxMessageTimeUnit
enum class DeadByDaylight_EInboxMessageTimeUnit : uint8_t
{
	EInboxMessageTimeUnit__Days    = 0,
	EInboxMessageTimeUnit__Hours   = 1,
	EInboxMessageTimeUnit__Minutes = 2,
	EInboxMessageTimeUnit__EInboxMessageTimeUnit_MAX = 3,

};

// Enum DeadByDaylight.EInboxMessageUIState
enum class DeadByDaylight_EInboxMessageUIState : uint8_t
{
	EInboxMessageUIState__New      = 0,
	EInboxMessageUIState__Read     = 1,
	EInboxMessageUIState__Archived = 2,
	EInboxMessageUIState__EInboxMessageUIState_MAX = 3,

};

// Enum DeadByDaylight.EInboxMessageUIType
enum class DeadByDaylight_EInboxMessageUIType : uint8_t
{
	EInboxMessageUIType__None      = 0,
	EInboxMessageUIType__Social    = 1,
	EInboxMessageUIType__Rewards   = 2,
	EInboxMessageUIType__News      = 3,
	EInboxMessageUIType__EInboxMessageUIType_MAX = 4,

};

// Enum DeadByDaylight.EPartyPlayerSlotWidgetState
enum class DeadByDaylight_EPartyPlayerSlotWidgetState : uint8_t
{
	EPartyPlayerSlotWidgetState__None = 0,
	EPartyPlayerSlotWidgetState__Empty = 1,
	EPartyPlayerSlotWidgetState__NotReady = 2,
	EPartyPlayerSlotWidgetState__Ready = 3,
	EPartyPlayerSlotWidgetState__Hidden = 4,
	EPartyPlayerSlotWidgetState__EPartyPlayerSlotWidgetState_MAX = 5,

};

// Enum DeadByDaylight.ESettingScreenButtonData
enum class DeadByDaylight_ESettingScreenButtonData : uint8_t
{
	ESettingScreenButtonData__PRIVACY = 0,
	ESettingScreenButtonData__EULA = 1,
	ESettingScreenButtonData__CREDITS = 2,
	ESettingScreenButtonData__ESettingScreenButtonData_MAX = 3,

};

// Enum DeadByDaylight.ENavigationState
enum class DeadByDaylight_ENavigationState : uint8_t
{
	ENavigationState__RoleSelection = 0,
	ENavigationState__Customization = 1,
	ENavigationState__CharacterSelection = 2,
	ENavigationState__Lobby        = 3,
	ENavigationState__BloodStore   = 4,
	ENavigationState__None         = 5,
	ENavigationState__ENavigationState_MAX = 6,

};

// Enum DeadByDaylight.ELobbyState
enum class DeadByDaylight_ELobbyState : uint8_t
{
	ELobbyState__Searching         = 0,
	ELobbyState__Joined            = 1,
	ELobbyState__Offering          = 2,
	ELobbyState__Fog               = 3,
	ELobbyState__ELobbyState_MAX   = 4,

};

// Enum DeadByDaylight.EInventoryButtonState
enum class DeadByDaylight_EInventoryButtonState : uint8_t
{
	EInventoryButtonState__StateDisabled = 0,
	EInventoryButtonState__StateEmpty = 1,
	EInventoryButtonState__StateLocked = 2,
	EInventoryButtonState__StateWithItem = 3,
	EInventoryButtonState__StateWithItemDisabled = 4,
	EInventoryButtonState__StateWithItemLocked = 5,
	EInventoryButtonState__StatePrivate = 6,
	EInventoryButtonState__EInventoryButtonState_MAX = 7,

};

// Enum DeadByDaylight.ERoleSelectionScreenButton
enum class DeadByDaylight_ERoleSelectionScreenButton : uint8_t
{
	ERoleSelectionScreenButton__DailyRitual = 0,
	ERoleSelectionScreenButton__Inbox = 1,
	ERoleSelectionScreenButton__InviteFriend = 2,
	ERoleSelectionScreenButton__Setting = 3,
	ERoleSelectionScreenButton__ERoleSelectionScreenButton_MAX = 4,

};

// Enum DeadByDaylight.ENavigationScreenButton
enum class DeadByDaylight_ENavigationScreenButton : uint8_t
{
	ENavigationScreenButton__AddCurrency = 0,
	ENavigationScreenButton__Start = 1,
	ENavigationScreenButton__ChangeRole = 2,
	ENavigationScreenButton__CharacterSelection = 3,
	ENavigationScreenButton__Loadout = 4,
	ENavigationScreenButton__Customization = 5,
	ENavigationScreenButton__Bloodweb = 6,
	ENavigationScreenButton__Back  = 7,
	ENavigationScreenButton__ENavigationScreenButton_MAX = 8,

};

// Enum DeadByDaylight.EInboxScreenButton
enum class DeadByDaylight_EInboxScreenButton : uint8_t
{
	EInboxScreenButton__Rewards    = 0,
	EInboxScreenButton__Social     = 1,
	EInboxScreenButton__News       = 2,
	EInboxScreenButton__Back       = 3,
	EInboxScreenButton__EInboxScreenButton_MAX = 4,

};

// Enum DeadByDaylight.EAtlantaRewardType
enum class DeadByDaylight_EAtlantaRewardType : uint8_t
{
	EAtlantaRewardType__Item       = 0,
	EAtlantaRewardType__AddOn      = 1,
	EAtlantaRewardType__Offering   = 2,
	EAtlantaRewardType__BloodPoints = 3,
	EAtlantaRewardType__IridescentShards = 4,
	EAtlantaRewardType__AuricCells = 5,
	EAtlantaRewardType__Customization = 6,
	EAtlantaRewardType__FreeTicket = 7,
	EAtlantaRewardType__MysteryBox = 8,
	EAtlantaRewardType__Character  = 9,
	EAtlantaRewardType__Count      = 10,
	EAtlantaRewardType__EAtlantaRewardType_MAX = 11,

};

// Enum DeadByDaylight.ETallyListPageID
enum class DeadByDaylight_ETallyListPageID : uint8_t
{
	ETallyListPageID__Scoreboard   = 0,
	ETallyListPageID__Bloodpoints  = 1,
	ETallyListPageID__Rank         = 2,
	ETallyListPageID__PlayerLevel  = 3,
	ETallyListPageID__CharacterLevel = 4,
	ETallyListPageID__NumberOfPages = 5,
	ETallyListPageID__ETallyListPageID_MAX = 6,

};

// Enum DeadByDaylight.EToastWidgetType
enum class DeadByDaylight_EToastWidgetType : uint8_t
{
	EToastWidgetType__Simple       = 0,
	EToastWidgetType__Interactable = 1,
	EToastWidgetType__EToastWidgetType_MAX = 2,

};

// Enum DeadByDaylight.ELinkedVomitState
enum class DeadByDaylight_ELinkedVomitState : uint8_t
{
	ELinkedVomitState__Idle        = 0,
	ELinkedVomitState__Charging    = 1,
	ELinkedVomitState__Vomiting    = 2,
	ELinkedVomitState__ELinkedVomitState_MAX = 3,

};

// Enum DeadByDaylight.EInputInteractionType
enum class DeadByDaylight_EInputInteractionType : uint8_t
{
	EInputInteractionType__VE_None = 0,
	EInputInteractionType__VE_Interact = 1,
	EInputInteractionType__VE_AttackInteract = 2,
	EInputInteractionType__VE_ItemInteract = 3,
	EInputInteractionType__VE_Rush = 4,
	EInputInteractionType__VE_ItemUse = 5,
	EInputInteractionType__VE_ItemDrop = 6,
	EInputInteractionType__VE_InteractMash = 7,
	EInputInteractionType__VE_LeftRightMash = 8,
	EInputInteractionType__VE_ExternalRequestDrop = 9,
	EInputInteractionType__VE_ExternalRequestFlashlightStunUncloak = 10,
	EInputInteractionType__VE_ExternalRequestPalletStun = 11,
	EInputInteractionType__VE_ExternalRequestStunUncloak = 12,
	EInputInteractionType__VE_ExternalRequestPalletStunUncloak = 13,
	EInputInteractionType__VE_ExternalRequestStun = 14,
	EInputInteractionType__VE_ExternalRequestDropByStunning = 15,
	EInputInteractionType__VE_ExternalRequestDropByStunningByPallet = 16,
	EInputInteractionType__VE_ExternalRequestDropByWiggleFree = 17,
	EInputInteractionType__VE_ExternalRequestDropBySkillCheck = 18,
	EInputInteractionType__VE_ExternalRequestKillerCaughtInBearTrap = 19,
	EInputInteractionType__VE_ExternalRequestDestroyWithPowerAttack = 20,
	EInputInteractionType__VE_ExternalRequestHarpoonRifleStun = 21,
	EInputInteractionType__VE_FastInteract = 22,
	EInputInteractionType__VE_ExternalRequestSlashedOutOfTrap = 23,
	EInputInteractionType__VE_ExternalRequestSacrifice = 24,
	EInputInteractionType__VE_Gesture01 = 25,
	EInputInteractionType__VE_Gesture02 = 26,
	EInputInteractionType__VE_Gesture03 = 27,
	EInputInteractionType__VE_Gesture04 = 28,
	EInputInteractionType__VE_ExternalChainBlink = 29,
	EInputInteractionType__VE_ExternalRequestStunEvilWithin = 30,
	EInputInteractionType__VE_ExternalRequestKickStun = 31,
	EInputInteractionType__VE_ExternalRequestEscape = 32,
	EInputInteractionType__VE_Struggle = 33,
	EInputInteractionType__VE_Action = 34,
	EInputInteractionType__VE_ExternalRequestPutToSleepStun = 35,
	EInputInteractionType__VE_Crouch = 36,
	EInputInteractionType__VE_ExternalRequestRBTExecute = 37,
	EInputInteractionType__VE_ActionKiller = 38,
	EInputInteractionType__VE_ExternalRequestRBTExecuteAtExit = 39,
	EInputInteractionType__VE_ExternalRequestStunBySkillCheck = 40,
	EInputInteractionType__VE_AbilityUse = 41,
	EInputInteractionType__VE_ExternalRequestClosetStun = 42,
	EInputInteractionType__VE_ExternalRequestClosetExitFast = 43,
	EInputInteractionType__VE_ActivatablePerk01 = 44,
	EInputInteractionType__VE_ActivatablePerk02 = 45,
	EInputInteractionType__VE_ActivatablePerk03 = 46,
	EInputInteractionType__VE_ActivatablePerk04 = 47,
	EInputInteractionType__VE_CancelCharge = 48,
	EInputInteractionType__VE_Count = 49,
	EInputInteractionType__VE_MAX  = 50,

};

// Enum DeadByDaylight.EInventoryType
enum class DeadByDaylight_EInventoryType : uint8_t
{
	EInventoryType__Main           = 0,
	EInventoryType__Backpack       = 1,
	EInventoryType__EInventoryType_MAX = 2,

};

// Enum DeadByDaylight.EAttachToSocketNameEnum
enum class DeadByDaylight_EAttachToSocketNameEnum : uint8_t
{
	EAttachToSocketNameEnum__ManualAttachment = 0,
	EAttachToSocketNameEnum__HandItemSocket = 1,
	EAttachToSocketNameEnum__Weapon_SocketLT = 2,
	EAttachToSocketNameEnum__Weapon_SocketRT = 3,
	EAttachToSocketNameEnum__LanternCollectableSocket = 4,
	EAttachToSocketNameEnum__EAttachToSocketNameEnum_MAX = 5,

};

// Enum DeadByDaylight.ECollectableState
enum class DeadByDaylight_ECollectableState : uint8_t
{
	ECollectableState__OnGround    = 0,
	ECollectableState__Stored      = 1,
	ECollectableState__Equipped    = 2,
	ECollectableState__ToBeDropped = 3,
	ECollectableState__InSearchable = 4,
	ECollectableState__ECollectableState_MAX = 5,

};

// Enum DeadByDaylight.ECollectableCategory
enum class DeadByDaylight_ECollectableCategory : uint8_t
{
	ECollectableCategory__Common   = 0,
	ECollectableCategory__Rare     = 1,
	ECollectableCategory__ECollectableCategory_MAX = 2,

};

// Enum DeadByDaylight.EItemHandPosition
enum class DeadByDaylight_EItemHandPosition : uint8_t
{
	EItemHandPosition__None        = 0,
	EItemHandPosition__HandleItem  = 1,
	EItemHandPosition__AimItem     = 2,
	EItemHandPosition__SmallItem   = 3,
	EItemHandPosition__FirecrackerItem = 4,
	EItemHandPosition__EItemHandPosition_MAX = 5,

};

// Enum DeadByDaylight.EAtlantaItemProgressionBarEnum
enum class DeadByDaylight_EAtlantaItemProgressionBarEnum : uint8_t
{
	EAtlantaItemProgressionBarEnum__PrimaryBar = 0,
	EAtlantaItemProgressionBarEnum__SecondaryBar = 1,
	EAtlantaItemProgressionBarEnum__EAtlantaItemProgressionBarEnum_MAX = 2,

};

// Enum DeadByDaylight.EDBDScoreTypes
enum class DeadByDaylight_EDBDScoreTypes : uint8_t
{
	EDBDScoreTypes__DBDCamperScore_SurviveHealthy = 0,
	EDBDScoreTypes__DBDCamperScore_SurviveWounded = 1,
	EDBDScoreTypes__DBDCamperScore_SurviveKO = 2,
	EDBDScoreTypes__DBDCamperScore_UnlockHatch = 3,
	EDBDScoreTypes__DBDCamperScore_EscapeThroughHatch = 4,
	EDBDScoreTypes__DBDCamperScore_AllEscapeThroughHatch = 5,
	EDBDScoreTypes__DBDCamperScore_EscapeCarry = 6,
	EDBDScoreTypes__DBDCamperScore_SurviveStreakSmall = 7,
	EDBDScoreTypes__DBDCamperScore_SurviveStreakBig = 8,
	EDBDScoreTypes__DBDCamperScore_DamageStateChanged = 9,
	EDBDScoreTypes__DBDCamperScore_NearFriendInNeed = 10,
	EDBDScoreTypes__DBDCamperScore_NearFriendInNeed_PostExit = 11,
	EDBDScoreTypes__DBDCamperScore_FoundCamper = 12,
	EDBDScoreTypes__DBDCamperScore_CoopObjectives = 13,
	EDBDScoreTypes__DBDCamperScore_OpenDoorPercent = 14,
	EDBDScoreTypes__DBDCamperScore_OpenDoor = 15,
	EDBDScoreTypes__DBDCamperScore_GeneratorPercent = 16,
	EDBDScoreTypes__DBDCamperScore_GeneratorSkillCheckSuccess = 17,
	EDBDScoreTypes__DBDCamperScore_GeneratorSkillCheckBonus = 18,
	EDBDScoreTypes__DBDCamperScore_SearchablePercent = 19,
	EDBDScoreTypes__DBDCamperScore_SearchCompleteFinalContributionPercent = 20,
	EDBDScoreTypes__DBDCamperScore_AddItemToMap = 21,
	EDBDScoreTypes__DBDCamperScore_FixGenerator = 22,
	EDBDScoreTypes__DBDCamperScore_FixSpecialMapGenerator = 23,
	EDBDScoreTypes__DBDCamperScore_LastSurvivorFixGenerator = 24,
	EDBDScoreTypes__DBDCamperScore_RepairDamagedGenerator = 25,
	EDBDScoreTypes__DBDCamperScore_PowerExitGates = 26,
	EDBDScoreTypes__DBDCamperScore_CoopAltruism = 27,
	EDBDScoreTypes__DBDCamperScore_HealPercent = 28,
	EDBDScoreTypes__DBDCamperScore_HealPercent_PostExit = 29,
	EDBDScoreTypes__DBDCamperScore_HealFromDying = 30,
	EDBDScoreTypes__DBDCamperScore_HealFromDying_PostExit = 31,
	EDBDScoreTypes__DBDCamperScore_HealFromInjured = 32,
	EDBDScoreTypes__DBDCamperScore_HealFromInjured_PostExit = 33,
	EDBDScoreTypes__DBDCamperScore_HealSkillCheckSuccess = 34,
	EDBDScoreTypes__DBDCamperScore_HealSkillCheckBonus = 35,
	EDBDScoreTypes__DBDCamperScore_HealSelfPercent = 36,
	EDBDScoreTypes__DBDCamperScore_HealSelfSkillCheckSuccess = 37,
	EDBDScoreTypes__DBDCamperScore_HealSelfSkillCheckBonus = 38,
	EDBDScoreTypes__DBDCamperScore_HitAfterHookSave = 39,
	EDBDScoreTypes__DBDCamperScore_HitNearFriendInNeed = 40,
	EDBDScoreTypes__DBDCamperScore_HitNearUnhookedFriendInNeed = 41,
	EDBDScoreTypes__DBDCamperScore_SabotageHook = 42,
	EDBDScoreTypes__DBDCamperScore_SabotageHookSkillCheckSuccess = 43,
	EDBDScoreTypes__DBDCamperScore_SabotageHookSkillCheckBonus = 44,
	EDBDScoreTypes__DBDCamperScore_EscapeFromHook = 45,
	EDBDScoreTypes__DBDCamperScore_HookStrugglePerSecond = 46,
	EDBDScoreTypes__DBDCamperScore_SaveFromHook = 47,
	EDBDScoreTypes__DBDCamperScore_SaveFromHook_PostExit = 48,
	EDBDScoreTypes__DBDCamperScore_WasUnhooked = 49,
	EDBDScoreTypes__DBDCamperScore_SabotageBearTrap = 50,
	EDBDScoreTypes__DBDCamperScore_SabotageBearTrapSkillCheckSuccess = 51,
	EDBDScoreTypes__DBDCamperScore_SabotageBearTrapSkillCheckBonus = 52,
	EDBDScoreTypes__DBDCamperScore_DisableBearTrap = 53,
	EDBDScoreTypes__DBDCamperScore_SaveFromBearTrap = 54,
	EDBDScoreTypes__DBDCamperScore_SaveFromBearTrap_PostExit = 55,
	EDBDScoreTypes__DBDCamperScore_EscapeBearTrap = 56,
	EDBDScoreTypes__DBDCamperScore_BasementChillingPerSecond = 57,
	EDBDScoreTypes__DBDCamperScore_CoopBoldness = 58,
	EDBDScoreTypes__DBDCamperScore_SlasherStun = 59,
	EDBDScoreTypes__DBDCamperScore_SlasherStunCarrying = 60,
	EDBDScoreTypes__DBDCamperScore_SlasherBlind = 61,
	EDBDScoreTypes__DBDCamperScore_SlasherBurnInvisibility = 62,
	EDBDScoreTypes__DBDCamperScore_ChasePerSecond = 63,
	EDBDScoreTypes__DBDCamperScore_ChaseEscape = 64,
	EDBDScoreTypes__DBDCamperScore_ChaseSteal = 65,
	EDBDScoreTypes__DBDCamperScore_ChaseBlind = 66,
	EDBDScoreTypes__DBDCamperScore_VaultInChase = 67,
	EDBDScoreTypes__DBDCamperScore_NoiseDistraction = 68,
	EDBDScoreTypes__DBDCamperScore_SprintingNearSlasherPerSecond = 69,
	EDBDScoreTypes__DBDCamperScore_UnhideNearSlasher = 70,
	EDBDScoreTypes__DBDCamperScore_EscapeWhileChased = 71,
	EDBDScoreTypes__DBDCamperScore_DestroyPhantomTrap = 72,
	EDBDScoreTypes__DBDCamperScore_NewItem = 73,
	EDBDScoreTypes__DBDCamperScore_StartMatchWithUltraRareItem = 74,
	EDBDScoreTypes__DBDCamperScore_ItemFrom = 75,
	EDBDScoreTypes__DBDCamperScore_ExposerAdded = 76,
	EDBDScoreTypes__DBDSlasherScore_Destroy = 77,
	EDBDScoreTypes__DBDSlasherScore_Kill = 78,
	EDBDScoreTypes__DBDSlasherScore_BleedOut = 79,
	EDBDScoreTypes__DBDSlasherScore_BleedOutPercent = 80,
	EDBDScoreTypes__DBDSlasherScore_AttackSuccess = 81,
	EDBDScoreTypes__DBDSlasherScore_AttackDeviousness = 82,
	EDBDScoreTypes__DBDSlasherScore_InterruptGenerator = 83,
	EDBDScoreTypes__DBDSlasherScore_InterruptWindow = 84,
	EDBDScoreTypes__DBDSlasherScore_InterruptHide = 85,
	EDBDScoreTypes__DBDSlasherScore_InterruptExit = 86,
	EDBDScoreTypes__DBDSlasherScore_InterruptUnhook = 87,
	EDBDScoreTypes__DBDSlasherScore_InterruptChest = 88,
	EDBDScoreTypes__DBDSlasherScore_InterruptOpenHatch = 89,
	EDBDScoreTypes__DBDSlasherScore_InterruptExitHatch = 90,
	EDBDScoreTypes__DBDSlasherScore_FindHiding = 91,
	EDBDScoreTypes__DBDSlasherScore_PlaceTrap = 92,
	EDBDScoreTypes__DBDSlasherScore_Trap = 93,
	EDBDScoreTypes__DBDSlasherScore_TrapPickup = 94,
	EDBDScoreTypes__DBDSlasherScore_Hook = 95,
	EDBDScoreTypes__DBDSlasherScore_SacrificePercent = 96,
	EDBDScoreTypes__DBDSlasherScore_SacrificeSuccess = 97,
	EDBDScoreTypes__DBDSlasherScore_SacrificedCount = 98,
	EDBDScoreTypes__DBDSlasherScore_NoEscape = 99,
	EDBDScoreTypes__DBDSlasherScore_ChaseStart = 100,
	EDBDScoreTypes__DBDSlasherScore_ChasePerSecond = 101,
	EDBDScoreTypes__DBDSlasherScore_CloakStalkPerSecond = 102,
	EDBDScoreTypes__DBDSlasherScore_UncloakInView = 103,
	EDBDScoreTypes__DBDSlasherScore_UncloakAttack = 104,
	EDBDScoreTypes__DBDSlasherScore_EvadeInvisBurn = 105,
	EDBDScoreTypes__DBDSlasherScore_EvadeBlind = 106,
	EDBDScoreTypes__DBDSlasherScore_CamperDisconnect = 107,
	EDBDScoreTypes__DBDSlasherScore_HitCamperWithChainsaw = 108,
	EDBDScoreTypes__DBDSlasherScore_RunningWithChainsaw = 109,
	EDBDScoreTypes__DBDSlasherScore_ChainBlinkAttack = 110,
	EDBDScoreTypes__DBDSlasherScore_ChainBlinkInterrupt = 111,
	EDBDScoreTypes__DBDSlasherScore_ChainBlinkInterruptAfter3 = 112,
	EDBDScoreTypes__DBDSlasherScore_ChainBlinkStartChase = 113,
	EDBDScoreTypes__DBDSlasherScore_StalkpointGained = 114,
	EDBDScoreTypes__DBDSlasherScore_StalkerTierIncrement = 115,
	EDBDScoreTypes__DBDSlasherScore_StalkerTierFirstTime = 116,
	EDBDScoreTypes__DBDSlasherScore_StalkerKillAllCampers = 117,
	EDBDScoreTypes__DBDSlasherScore_PhantomTrapSet = 118,
	EDBDScoreTypes__DBDSlasherScore_PhantomTrapTrigger = 119,
	EDBDScoreTypes__DBDSlasherScore_PhantomTrapTriggerAttack = 120,
	EDBDScoreTypes__DBDSlasherScore_PhantomTrapTeleportAttack = 121,
	EDBDScoreTypes__DBDSlasherScore_PhantomTrapTeleportAttackAllCampers = 122,
	EDBDScoreTypes__DBDSlasherScore_ThrillOfTheHunt = 123,
	EDBDScoreTypes__DBDPlayerScore_BloodwebLevelUp = 124,
	EDBDScoreTypes__DBDPlayerScore_BloodwebPrestigeLevelUp = 125,
	EDBDScoreTypes__DBDPlayerScore_BloodwebPrestige3LevelUp = 126,
	EDBDScoreTypes__DBDPlayerScore_AwardPips = 127,
	EDBDScoreTypes__DBDPlayerScore_AddBloodpoints = 128,
	EDBDScoreTypes__DBDPlayerScore_BloodpointsOneCategory = 129,
	EDBDScoreTypes__DBDPlayerScore_MaxBloodpointsAllCategories = 130,
	EDBDScoreTypes__DBDPlayerScore_AddNewPerk = 131,
	EDBDScoreTypes__DBDPlayerScore_PerkLevelUp = 132,
	EDBDScoreTypes__DBDPlayerScore_BurnOfferingUltraRare = 133,
	EDBDScoreTypes__DBDPlayerScore_StartGame = 134,
	EDBDScoreTypes__DBDPlayerScore_UnlockRanking = 135,
	EDBDScoreTypes__DBDPlayerScore_FinishWithPerks = 136,
	EDBDScoreTypes__DBDCamperScore_CheatObjectives = 137,
	EDBDScoreTypes__DBDCamperScore_CheatSurvival = 138,
	EDBDScoreTypes__DBDCamperScore_CheatAltruism = 139,
	EDBDScoreTypes__DBDCamperScore_CheatBoldness = 140,
	EDBDScoreTypes__DBDSlasherScore_CheatSacrifice = 141,
	EDBDScoreTypes__DBDSlasherScore_CheatBrutality = 142,
	EDBDScoreTypes__DBDSlasherScore_CheatDeviousness = 143,
	EDBDScoreTypes__DBDSlasherScore_CheatHunter = 144,
	EDBDScoreTypes__DBDCamperScore_CleanseDullTotem = 145,
	EDBDScoreTypes__DBDCamperScore_CleanseHexTotem = 146,
	EDBDScoreTypes__DBDPlayerScore_BalancedLanding = 147,
	EDBDScoreTypes__DBDPlayerScore_Lithe = 148,
	EDBDScoreTypes__DBDSlasherScore_DamageGenerator = 149,
	EDBDScoreTypes__DBDSlasherScore_Vault = 150,
	EDBDScoreTypes__DBDCamperScore_StartInjuredBleedout = 151,
	EDBDScoreTypes__DBDCamperScore_FullRecovery = 152,
	EDBDScoreTypes__DBDCamperScore_FirstTimeDying = 153,
	EDBDScoreTypes__DBDCamperScore_SecondTimeDying = 154,
	EDBDScoreTypes__DBDCamperScore_FirecrackerDisturbance = 155,
	EDBDScoreTypes__DBDCamperScore_GeneratorSkillCheckRuinBonus = 156,
	EDBDScoreTypes__DBDCamperScore_SlasherBurnBlink = 157,
	EDBDScoreTypes__DBDCamperScore_DieSacrificed = 158,
	EDBDScoreTypes__DBDCamperScore_DieBleedOut = 159,
	EDBDScoreTypes__DBDCamperScore_DieKill = 160,
	EDBDScoreTypes__DBDPlayerScore_EndGame = 161,
	EDBDScoreTypes__DBDPlayerScore_EnterParadise = 162,
	EDBDScoreTypes__DBDSlasherScore_CamperHookedFirstTime = 163,
	EDBDScoreTypes__DBDSlasherScore_CamperEnterHookStrugglePhase = 164,
	EDBDScoreTypes__DBDSlasherScore_ElectroShockSurvivor = 165,
	EDBDScoreTypes__DBDSlasherScore_BringAllSurvivorsToMadnessTier3 = 166,
	EDBDScoreTypes__DBDSlasherScore_BringSurvivorUpOneMadnessTier = 167,
	EDBDScoreTypes__DBDSlasherScore_HitSurvivorAfterElectroShock = 168,
	EDBDScoreTypes__DBDSlasherScore_PickupCamper = 169,
	EDBDScoreTypes__DBDSlasherScore_Blink = 170,
	EDBDScoreTypes__DBDSlasherScore_TeleportToPhantomTrap = 171,
	EDBDScoreTypes__DBDSlasherScore_HatchetThrow = 172,
	EDBDScoreTypes__DBDSlasherScore_HatchetHit = 173,
	EDBDScoreTypes__DBDSlasherScore_HatchetSkillShotHit = 174,
	EDBDScoreTypes__DBDSlasherScore_HatchetFarHit = 175,
	EDBDScoreTypes__DBDCamperScore_QuickVault = 176,
	EDBDScoreTypes__DBDCamperScore_QuickCloset = 177,
	EDBDScoreTypes__DBDCamperScore_StartGeneratorRepair = 178,
	EDBDScoreTypes__DBDCamperScore_StartCleansingTotem = 179,
	EDBDScoreTypes__DBDCamperScore_FirstRepairSkillCheck = 180,
	EDBDScoreTypes__DBDSlasherScore_CamperDisconnectedBeforeMatchStart = 181,
	EDBDScoreTypes__DBDSlasherScore_CamperDisconnectedDuringMatch = 182,
	EDBDScoreTypes__DBDCamperScore_NearFriendInNeed_GeneratorsComplete = 183,
	EDBDScoreTypes__DBDCamperScore_HealPercent_GeneratorsComplete = 184,
	EDBDScoreTypes__DBDCamperScore_HealFromDying_GeneratorsComplete = 185,
	EDBDScoreTypes__DBDCamperScore_SaveFromHook_GeneratorsComplete = 186,
	EDBDScoreTypes__DBDCamperScore_SaveFromBearTrap_GeneratorsComplete = 187,
	EDBDScoreTypes__DBDCamperScore_SnapOutOfIt = 188,
	EDBDScoreTypes__DBDSlasherScore_HookInBasement = 189,
	EDBDScoreTypes__DBDSlasherScore_LFChainsawHit = 190,
	EDBDScoreTypes__DBDCamperScore_PalletDrop = 191,
	EDBDScoreTypes__DBDCamperScore_Vault = 192,
	EDBDScoreTypes__DBDSlasherScore_StartChaseWithChainsawAttack = 193,
	EDBDScoreTypes__DBDSlasherScore_MissedAttackInChase = 194,
	EDBDScoreTypes__DBDCamperScore_DodgeAndVault = 195,
	EDBDScoreTypes__DBDCamperScore_BeginQuickVault = 196,
	EDBDScoreTypes__DBDSlasherScore_StartChainsawAttack = 197,
	EDBDScoreTypes__DBDCamperScore_WakeUpBySkillCheck = 198,
	EDBDScoreTypes__DBDCamperScore_FallAsleep = 199,
	EDBDScoreTypes__DBDCamperScore_WakeUpSelf = 200,
	EDBDScoreTypes__DBDCamperScore_WakeUpOther = 201,
	EDBDScoreTypes__DBDSlasherScore_RecentlyAsleepAttack = 202,
	EDBDScoreTypes__DBDSlasherScore_SurvivorPartyOnBasementHooks = 203,
	EDBDScoreTypes__DBDCamperScore_LootBasementChest = 204,
	EDBDScoreTypes__DBDPlayerScore_OpenMysteryBox = 205,
	EDBDScoreTypes__DBDGameEvent_SurvivorDowned = 206,
	EDBDScoreTypes__DBDGameEvent_SurvivorDied = 207,
	EDBDScoreTypes__DBDGameEvent_KillerCloak = 208,
	EDBDScoreTypes__DBDSlasherScore_SetReverseBearTrap = 209,
	EDBDScoreTypes__DBDSlasherScore_AbductionDash = 210,
	EDBDScoreTypes__DBDSlasherScore_DashHitSuccess = 211,
	EDBDScoreTypes__DBDSlasherScore_KillWithReverseBearTrap = 212,
	EDBDScoreTypes__DBDCamperScore_SearchRBTKey = 213,
	EDBDScoreTypes__DBDCamperScore_EscapeRBT = 214,
	EDBDScoreTypes__DBDGameEvent_ReplacedGoodSkillCheckAsGreat = 215,
	EDBDScoreTypes__DBDCamperScore_RemoveReverseBearTrapSkillCheckSuccess = 216,
	EDBDScoreTypes__DBDCamperScore_RemoveReverseBearTrapSkillCheckBonus = 217,
	EDBDScoreTypes__DBDSlasherScore_DamageGeneratorWhileHooked = 218,
	EDBDScoreTypes__DBDGameEvent_SurvivorDamaged = 219,
	EDBDScoreTypes__DBDGameEvent_SurvivorHealed = 220,
	EDBDScoreTypes__DBDGameEvent_Interruption = 221,
	EDBDScoreTypes__DBDGameEvent_SurvivorFailedHealSkillcheck = 222,
	EDBDScoreTypes__DBDGameEvent_HookedSurvivorSacrificeBegin = 223,
	EDBDScoreTypes__DBDGameEvent_AcquireEventKillerCoin = 224,
	EDBDScoreTypes__DBDGameEvent_AcquireEventSurvivorCoin = 225,
	EDBDScoreTypes__DBDCamperScore_EventGeneratorFixed = 226,
	EDBDScoreTypes__DBDSlasherScore_HookedOnEventHook = 227,
	EDBDScoreTypes__DBDGameEvent_GeneratorProgress = 228,
	EDBDScoreTypes__DBDSlasherScore_DownSmokedCamper = 229,
	EDBDScoreTypes__DBDSlasherScore_HitSmokedCamper = 230,
	EDBDScoreTypes__DBDSlasherScore_SurvivorEnterGasCloud = 231,
	EDBDScoreTypes__DBDSlasherScore_BombDirectHit = 232,
	EDBDScoreTypes__DBDSlasherScore_ThrowBomb = 233,
	EDBDScoreTypes__DBDGameEvent_CoopAction = 234,
	EDBDScoreTypes__DBDSlasherScore_StartActivePhaseWalk = 235,
	EDBDScoreTypes__DBDScore_Count = 236,
	EDBDScoreTypes__EDBDScoreTypes_MAX = 237,

};

// Enum DeadByDaylight.EDBDCameraSocketID
enum class DeadByDaylight_EDBDCameraSocketID : uint8_t
{
	EDBDCameraSocketID__VE_None    = 0,
	EDBDCameraSocketID__VE_Default = 1,
	EDBDCameraSocketID__VE_Killcam = 2,
	EDBDCameraSocketID__VE_Reaction = 3,
	EDBDCameraSocketID__VE_Struggle = 4,
	EDBDCameraSocketID__VE_Sacrifice = 5,
	EDBDCameraSocketID__VE_MAX     = 6,

};

// Enum DeadByDaylight.ECharacterStance
enum class DeadByDaylight_ECharacterStance : uint8_t
{
	ECharacterStance__VE_Stand     = 0,
	ECharacterStance__VE_Crouch    = 1,
	ECharacterStance__VE_Crawl     = 2,
	ECharacterStance__VE_MAX       = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DeadByDaylight.InteractionArray
// 0x0010
struct FInteractionArray
{
	TArray<TWeakObjectPtr<class UinteractionDefinition>> _interactions;                                             // 0x0000(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.SecondaryInteractionProperties
// 0x0030
struct FSecondaryInteractionProperties
{
	struct FString                                     SecondaryInteractionID;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EInputInteractionType               SecondaryInteractionInputType;                             // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D1S5[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       SecondaryInteractionDescriptionText;                       // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ArmIKSensorDatum
// 0x0030
struct FArmIKSensorDatum
{
	struct FName                                       ShoulderBoneName;                                          // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SOSV[0x24];                                    // 0x000C(0x0024) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.DBDAttackTargetTracker
// 0x0078
struct FDBDAttackTargetTracker
{
	bool                                               _useTargetTracking;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QJID[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStatProperty                               _targetSnapDistance;                                       // 0x0008(0x0048) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _ownerEyeSocketName;                                       // 0x0050(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _targetBoneName;                                           // 0x005C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UdbdPlayer>                   _trackedTarget;                                            // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UdbdPlayer>                   _owningPlayer;                                             // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.progressionPoints
// 0x0008
struct FprogressionPoints
{
	DeadByDaylight_EEmblemProgressionType              type;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HC7J[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              points;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ClippedActor
// 0x0060
struct FClippedActor
{
	TArray<TWeakObjectPtr<class UprimitiveComponent>>  DisplayComponents;                                         // 0x0000(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UprimitiveComponent*, TWeakObjectPtr<class UprimitiveComponent>> CollidingPrimitives;                                       // 0x0010(0x0050) (ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ActorSpawnerProperties
// 0x0038
struct FActorSpawnerProperties
{
	unsigned char                                      SceneElement[0x30];                                        // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	float                                              Weight;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VPSB[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.SpawnerElement
// 0x0010
struct FSpawnerElement
{
	TArray<struct FActorSpawnerProperties>             ObjectsToBeSpawned;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ActorVariationElements
// 0x0038
struct FActorVariationElements
{
	DeadByDaylight_ETileVariation                      type;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HAQI[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Element[0x30];                                             // 0x0001(0x0030) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct DeadByDaylight.AITerrorEvent
// 0x0028
struct FAITerrorEvent
{
	struct Fvector                                     location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WEL6[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Uactor*                                      instigator;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTerrorRadiusEmitterComponent*               terrorEmitter;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGenericTeamId                              TeamIdentifier;                                            // 0x0020(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E4EB[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.AITrailEvent
// 0x0030
struct FAITrailEvent
{
	struct Fvector                                     location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              startTime;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTime;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JXV2[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Uactor*                                      instigator;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameplayTag                                ignoreOnPerkTag;                                           // 0x0020(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGenericTeamId                              TeamIdentifier;                                            // 0x002C(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FYAW[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.AssetLibraryLoader
// 0x0028
struct FAssetLibraryLoader
{
	class UAssetLibrary*                               AssetLibrary;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CO6G[0x20];                                    // 0x0008(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.AtlCookedMapDescription
// 0x0040
struct FAtlCookedMapDescription
{
	struct FName                                       themeName;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IVCA[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      MapAsset[0x30];                                            // 0x000C(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct DeadByDaylight.BlockableReplicatedDatum
// 0x0020
struct FBlockableReplicatedDatum
{
	TArray<TWeakObjectPtr<class UObject>>              Sources;                                                   // 0x0000(0x0010) (ZeroConstructor, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UdbdPlayer>>           BlockedPlayers;                                            // 0x0010(0x0010) (ZeroConstructor, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.BorderElements
// 0x0018
struct FBorderElements
{
	DeadByDaylight_EDirection                          direction;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9ME3[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UActorSpawner*>                       Elements;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CameraAttachment
// 0x0018
struct FCameraAttachment
{
	class USceneComponent*                             Parent;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CZY5[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.SurvivorSleepiness
// 0x0008
struct FSurvivorSleepiness
{
	float                                              _sleepiness;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _sleepThreshold;                                           // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.CharacterToolData
// 0x0070
struct FCharacterToolData
{
	DBDSharedTypes_EPlayerRole                         role;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G0HH[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CharacterId;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       outfitId;                                                  // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       charmId;                                                   // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SurvivorHead;                                              // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SurvivorTorso;                                             // 0x002C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SurvivorLegs;                                              // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       KillerHead;                                                // 0x0044(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       KillerBody;                                                // 0x0050(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       KillerWeapon;                                              // 0x005C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationAsset*                             AnimationToPlay;                                           // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ChargeData
// 0x0010
struct FChargeData
{
	class Uactor*                                      instigator;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              chargeAmount;                                              // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bypassSkillCheckFail;                                      // 0x000C(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9A5V[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.CharmAttacherAnimationTweak
// 0x0020
struct FCharmAttacherAnimationTweak
{
	struct Fvector                                     AttachPointTranslation;                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    AttachPointRotation;                                       // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ConstraintType;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MagicTweakingFloat;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CharmSlot
// 0x00B0
struct FCharmSlot
{
	int                                                slotIndex;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6TQS[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      CharmAttacherClass[0x30];                                  // 0x0004(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	struct FCharmAttacherAnimationTweak                DefaultAnimationTweak;                                     // 0x0038(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FCharmAttacherAnimationTweak> AnimationTweakByTag;                                       // 0x0058(0x0050) (Edit, NativeAccessSpecifierPublic)
	class UCharmAttacher*                              CharmAttacherSpawned;                                      // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.DBDTimer
// 0x0028
struct FDBDTimer
{
	unsigned char                                      UnknownData_LKYR[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _startTime;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _startTimeDirty;                                           // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZGMW[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFloat_NetQuantize8                         _timeLeft;                                                 // 0x0010(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _replicateTimeLeft;                                        // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TABV[0xB];                                     // 0x0019(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _interpSpeed;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct DeadByDaylight.TargetFocusTimer
// 0x0038
struct FTargetFocusTimer
{
	class UcamperPlayer*                               _camper;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTimer                                   _cooldownTimer;                                            // 0x0008(0x0028) (NativeAccessSpecifierPrivate)
	float                                              _totalTime;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XFNC[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.chaseUpdateInfo
// 0x0040
struct FchaseUpdateInfo
{
	struct FTargetFocusTimer                           chaseTimer;                                                // 0x0000(0x0038) (NativeAccessSpecifierPublic)
	float                                              SurvivorTravelDistance;                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KillerTravelDistance;                                      // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.cinematic
// 0x0058
struct Fcinematic
{
	unsigned char                                      source[0x30];                                              // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	struct FVector2D                                   SourceSize;                                                // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SourceHasAudio;                                            // 0x0038(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4GNO[0x1F];                                    // 0x0039(0x001F) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.MaterialOriginalState
// 0x0018
struct FMaterialOriginalState
{
	class UMeshComponent*                              MeshWithChangedMaterials;                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UmaterialInterface*>                  OriginalMaterial;                                          // 0x0008(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SpecialBehaviourObjectsInfo
// 0x0014
struct FSpecialBehaviourObjectsInfo
{
	struct FName                                       specialBehaviourId;                                        // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmountRequired;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimesInteractedWith;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.DataTableDropdown
// 0x0030
struct FDataTableDropdown
{
	struct FName                                       RowValue;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_92CF[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DataTableName;                                             // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       ColumnName;                                                // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CHIR[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.CustomizedMeshPart
// 0x0048
struct FCustomizedMeshPart
{
	DeadByDaylight_ECustomizationCategory              category;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WHK7[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableDropdown                          DefaultItemId;                                             // 0x0008(0x0030) (Edit, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KA80[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.MapMeshToAkAudioEvent
// 0x0040
struct FMapMeshToAkAudioEvent
{
	unsigned char                                      mesh[0x30];                                                // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	class UAkAudioEvent*                               soundEvent;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDelayBetweenEvents;                                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDelayBetweenObject;                                     // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.MapSoundsToAvoid
// 0x0010
struct FMapSoundsToAvoid
{
	class UprimitiveComponent*                         component;                                                 // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0T45[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.DBD_SoundSpawnerData
// 0x0028
struct FDBD_SoundSpawnerData
{
	unsigned char                                      TriggerObject[0x10];                                       // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
	bool                                               TriggerVisualForCamper;                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TriggerVisualForSlasher;                                   // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_054M[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ActorToSpawnVisual[0x10];                                  // 0x0012(0x0010) UNKNOWN PROPERTY: ArrayProperty

};

// ScriptStruct DeadByDaylight.AuthenticationInfo
// 0x0018
struct FAuthenticationInfo
{
	unsigned char                                      UnknownData_STD4[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.PerMeshInstancingData
// 0x00A0
struct FPerMeshInstancingData
{
	TMap<uint32_t, class UInstancedStaticMeshComponent*> hashToInstancedMeshes;                                     // 0x0000(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HT4M[0x50];                                    // 0x0050(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.SpawnInfo
// 0x0040
struct FSpawnInfo
{
	class UClass*                                      ActorClass;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_58CU[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AffectedMaterialAndVariant
// 0x0010
struct FAffectedMaterialAndVariant
{
	class UmaterialInterface*                          AffectedMaterial;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UmaterialInterface*                          MaterialVariant;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CustomTransformation
// 0x0014
struct FCustomTransformation
{
	bool                                               UseCustomTransformation;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EPOG[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   CustomScale;                                               // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                                   CustomTranslation;                                         // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.ItemUIData
// 0x0078
struct FItemUIData
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) (Edit, NativeAccessSpecifierPrivate)
	struct FText                                       description;                                               // 0x0018(0x0018) (Edit, NativeAccessSpecifierPrivate)
	TArray<struct FString>                             IconFilePathList;                                          // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      IconAssetList[0x10];                                       // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty
	struct FCustomTransformation                       CustomTransformation;                                      // 0x0050(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint32_t                                           PlatformsForIconUnlicensedFilePathListOverride;            // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FString>                             IconUnlicensedFilePathListOverride;                        // 0x0068(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.itemAvailability
// 0x0030
struct FitemAvailability
{
	DBDSharedTypes_EItemAvailability                   itemAvailability;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EN7X[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     dlcId;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                CloudInventoryId;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KB8B[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CommunityId;                                               // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.CustomizationData
// 0x00C0 (0x00C8 - 0x0008)
struct FCustomizationData : public FDBDTableRowBase
{
	struct FName                                       Id;                                                        // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AssociatedCharacter;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         AssociatedRole;                                            // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_02R6[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemUIData                                 UIData;                                                    // 0x0020(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FitemAvailability                           Availability;                                              // 0x0098(0x0030) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.MaterialReplacerData
// 0x0060
struct FMaterialReplacerData
{
	unsigned char                                      From[0x30];                                                // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      To[0x30];                                                  // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct DeadByDaylight.MaterialReplacerArray
// 0x0010
struct FMaterialReplacerArray
{
	TArray<struct FMaterialReplacerData>               MaterialsMap;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ConditionalMaterialReplacer
// 0x0060
struct FConditionalMaterialReplacer
{
	struct FName                                       ItemTag;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V06N[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, struct FMaterialReplacerArray>  ConditionalMaterials;                                      // 0x0010(0x0050) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.BPAttachementSocketData
// 0x00E0
struct FBPAttachementSocketData
{
	unsigned char                                      AttachementBlueprint[0x30];                                // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      SkeletalMesh[0x30];                                        // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	struct FName                                       SocketName;                                                // 0x0060(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N2DB[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMaterialReplacerData>               MaterialsMap;                                              // 0x0070(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConditionalMaterialReplacer                ConditionalMaterialReplacer;                               // 0x0080(0x0060) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.UnlockSaveStatCondition
// 0x0014
struct FUnlockSaveStatCondition
{
	struct FName                                       statName;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ValueRequired;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isCharacterSpecific;                                       // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2JU7[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.CustomSoundFXData
// 0x0018
struct FCustomSoundFXData
{
	DeadByDaylight_EAudioCustomizationCategory         AudioCategory;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_30IW[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SwitchState;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CustomAnimData
// 0x0060
struct FCustomAnimData
{
	unsigned char                                      MenuAnimationBlueprint[0x30];                              // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      InGameAnimationBlueprint[0x30];                            // 0x0030(0x0030) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct DeadByDaylight.CustomizationItemData
// 0x0208 (0x02D0 - 0x00C8)
struct FCustomizationItemData : public FCustomizationData
{
	DeadByDaylight_ECustomizationCategory              category;                                                  // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9JG0[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ItemMesh[0x30];                                            // 0x00C9(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      AnimClass[0x30];                                           // 0x0100(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      ItemBlueprint[0x30];                                       // 0x0130(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	TArray<struct FMaterialReplacerData>               MaterialsMap;                                              // 0x0160(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConditionalMaterialReplacer                ConditionalMaterialReplacer;                               // 0x0170(0x0060) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SkeletalComponentTags;                                     // 0x01D0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       CollectionName;                                            // 0x01E0(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       CollectionDescription;                                     // 0x01F8(0x0018) (Edit, NativeAccessSpecifierPublic)
	int                                                PrestigeUlockLevel;                                        // 0x0210(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YKNI[0x4];                                     // 0x0214(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PrestigeUnlockDate;                                        // 0x0218(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       eventId;                                                   // 0x0228(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECharmCategory                      CharmCategory;                                             // 0x0234(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O269[0x3];                                     // 0x0235(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBPAttachementSocketData>            SocketAttachements;                                        // 0x0238(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUnlockSaveStatCondition>            UnlockingConditions;                                       // 0x0248(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInStore;                                                 // 0x0258(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInNonViolentBuild;                                       // 0x0259(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAvailableInAtlantaBuild;                                 // 0x025A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MGJF[0x1];                                     // 0x025B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           PlatformExclusiveFlag;                                     // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomSoundFXData>                  CustomSFXs;                                                // 0x0260(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCustomAnimData                             AnimationData;                                             // 0x0270(0x0060) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.DBDCustomizationToolData
// 0x0BB8
struct FDBDCustomizationToolData
{
	struct FCustomizationItemData                      Head;                                                      // 0x0000(0x02D0) (Edit, NativeAccessSpecifierPublic)
	struct FCustomizationItemData                      Torso;                                                     // 0x02D0(0x02D0) (Edit, NativeAccessSpecifierPublic)
	struct FCustomizationItemData                      Leg;                                                       // 0x05A0(0x02D0) (Edit, NativeAccessSpecifierPublic)
	struct FCustomizationItemData                      Bodies;                                                    // 0x0870(0x02D0) (Edit, NativeAccessSpecifierPublic)
	struct FString                                     CharacterName;                                             // 0x0B40(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleName;                                                  // 0x0B50(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               BaseSkeleton;                                              // 0x0B60(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  MaskTexture;                                               // 0x0B68(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationAsset*                             AnimationToPlay;                                           // 0x0B70(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StrHeadDLC;                                                // 0x0B78(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StrTorsoDLC;                                               // 0x0B88(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StrLegDLC;                                                 // 0x0B98(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StrBodiesDLC;                                              // 0x0BA8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.RoleDropdown
// 0x0002
struct FRoleDropdown
{
	bool                                               ShowRoleSelection;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         role;                                                      // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CharmDropdown
// 0x000E (0x0010 - 0x0002)
struct FCharmDropdown : public FRoleDropdown
{
	unsigned char                                      UnknownData_MWBI[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       charmId;                                                   // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.DebugLoadoutAddon
// 0x0030
struct FDebugLoadoutAddon
{
	struct FDataTableDropdown                          addonID;                                                   // 0x0000(0x0030) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.DebugLoadoutPerk
// 0x0038
struct FDebugLoadoutPerk
{
	struct FDataTableDropdown                          perkID;                                                    // 0x0000(0x0030) (Edit, NativeAccessSpecifierPublic)
	int                                                perkLevel;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z34A[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.CharacterDropdown
// 0x0006 (0x0008 - 0x0002)
struct FCharacterDropdown : public FRoleDropdown
{
	unsigned char                                      UnknownData_RPQ6[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CharacterId;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CharacterCustomizationDropdown
// 0x0054 (0x005C - 0x0008)
struct FCharacterCustomizationDropdown : public FCharacterDropdown
{
	struct FName                                       outfitId;                                                  // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SurvivorHead;                                              // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SurvivorTorso;                                             // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SurvivorLegs;                                              // 0x002C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       KillerHead;                                                // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       KillerBody;                                                // 0x0044(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       KillerWeapon;                                              // 0x0050(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CamperLoadout
// 0x00E0
struct FCamperLoadout
{
	struct FCharacterCustomizationDropdown             Camper;                                                    // 0x0000(0x005C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharmDropdown                              Slot0_CharmID;                                             // 0x005C(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharmDropdown                              Slot1_CharmID;                                             // 0x006C(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharmDropdown                              Slot2_CharmID;                                             // 0x007C(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_04DB[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableDropdown                          itemId;                                                    // 0x0090(0x0030) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FDebugLoadoutAddon>                  AddonIDs;                                                  // 0x00C0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDebugLoadoutPerk>                   perks;                                                     // 0x00D0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SlasherLoadout
// 0x0080
struct FSlasherLoadout
{
	struct FCharacterCustomizationDropdown             slasher;                                                   // 0x0000(0x005C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JNLS[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDebugLoadoutAddon>                  PowerAddonIDs;                                             // 0x0060(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDebugLoadoutPerk>                   perks;                                                     // 0x0070(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PerkLevelDefinition
// 0x0004
struct FPerkLevelDefinition
{
	int                                                CountRequired;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SharedAuthenticationTokenInformation
// 0x0020
struct FSharedAuthenticationTokenInformation
{
	struct FString                                     LoginProvider;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuthToken;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.KeyDisplayInfo
// 0x0040
struct FKeyDisplayInfo
{
	struct Fkey                                        key;                                                       // 0x0000(0x0020) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KeyDisplayName;                                            // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PromptType;                                                // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.TypeFoliageToAutomateDensity
// 0x0068
struct FTypeFoliageToAutomateDensity
{
	unsigned char                                      SourceMesh[0x30];                                          // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      ReplacementMesh[0x30];                                     // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bGenerateOverlaps;                                         // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReceiveDecals;                                            // 0x0061(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECanBeCharacterBase>            bCanCharacterStepOn;                                       // 0x0062(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EDetailMode>                    DetailMode;                                                // 0x0063(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumFoliageRadius;                                      // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.DBDOutlineRenderStrategySelector
// 0x0010
struct FDBDOutlineRenderStrategySelector
{
	class Uactor*                                      _actorForStrategy;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UA4N[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.OutlineConfiguration
// 0x0020
struct FOutlineConfiguration
{
	TArray<class UmaterialInterface*>                  TranslucencyMaterials;                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UmaterialInterface*>                  LocallyControlledTranslucencyMaterials;                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.OutlineColourConfiguration
// 0x0010
struct FOutlineColourConfiguration
{
	struct FLinearColor                                ColourValue;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.gamePresetData
// 0x0078
struct FgamePresetData
{
	TArray<unsigned char>                              _mapAvailabilities;                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<unsigned char>                              _perkAvailabilities;                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<unsigned char>                              _offeringAvailabilities;                                   // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<unsigned char>                              _itemAvailabilities;                                       // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<unsigned char>                              _itemAddonAvailabilities;                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<unsigned char>                              _customizationItemAvailabilities;                          // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<unsigned char>                              _characterAvailabilities;                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _allowDlcContent;                                          // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _privateMatch;                                             // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isTrainingMatch;                                          // 0x0072(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SIP9[0x5];                                     // 0x0073(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.GamePersistentData
// 0x00F0
struct FGamePersistentData
{
	int                                                playerCount;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpectatorCount;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgamePresetData                             gamePresetData;                                            // 0x0008(0x0078) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HJX8[0x70];                                    // 0x0080(0x0070) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.PlayerSavedProfileDataShared
// 0x0058
struct FPlayerSavedProfileDataShared
{
	struct FString                                     playerName;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SelectedCamperIndex;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SelectedSlasherIndex;                                      // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SelectedCharacterCustomization;                            // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCharmIdSlot>                        SelectedCharacterCharms;                                   // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CamperStreak;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_43DP[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     platformId;                                                // 0x0040(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _slasherPips;                                              // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _camperPips;                                               // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.FearMarketItemInstance
// 0x0018
struct FFearMarketItemInstance
{
	struct FName                                       itemId;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Cost;                                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BloodpointConversion;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Purchased;                                                 // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0YTT[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.FearMarketOfferingInstance
// 0x0020
struct FFearMarketOfferingInstance
{
	TArray<struct FFearMarketItemInstance>             ObjectsForSale;                                            // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   startTime;                                                 // 0x0010(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   EndTime;                                                   // 0x0018(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PlayerSavedProfileCumulativeData
// 0x0038
struct FPlayerSavedProfileCumulativeData
{
	bool                                               FirstTimePlaying;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BMY3[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CumulativeMatches;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeMatchesAsSurvivor;                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeMatchesAsKiller;                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeMatchesAsSurvivorNoFriends;                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeMatchesAsKillerNoFriends;                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LastMatchTimestamp;                                        // 0x0018(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LastSessionTimestamp;                                      // 0x0020(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeSessions;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GJ1N[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimespan                                   CumulativePlaytime;                                        // 0x0030(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SpecialEventSavedData
// 0x0010
struct FSpecialEventSavedData
{
	TArray<int>                                        SeenCinematics;                                            // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.DailyRitualInstance
// 0x0078
struct FDailyRitualInstance
{
	struct FName                                       RitualKey;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DifficultyTier;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<DeadByDaylight_EDBDScoreTypes>              TrackedEvents;                                             // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FgameplayTag>                        TrackedGameEvents;                                         // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        CharacterIDs;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<DBDSharedTypes_EPlayerRole>                 Roles;                                                     // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              progress;                                                  // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              threshold;                                                 // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              tolerance;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisplayThreshold;                                          // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExpReward;                                                 // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               active;                                                    // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsNew;                                                     // 0x0065(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YXRE[0x2];                                     // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   DateAssigned;                                              // 0x0068(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NbGameElapsed;                                             // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9V8Z[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.DailyRitualContainer
// 0x0028
struct FDailyRitualContainer
{
	struct FDateTime                                   LastRitualReceivedDate;                                    // 0x0000(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LastRitualPopupDate;                                       // 0x0008(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LastRitualDismissedDate;                                   // 0x0010(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDailyRitualInstance>                Rituals;                                                   // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PlayerLoadoutData
// 0x0098
struct FPlayerLoadoutData
{
	struct FName                                       Item;                                                      // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_358S[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               ItemAddOns;                                                // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               CamperPerks;                                               // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        CamperPerkLevels;                                          // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CamperFavor;                                               // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Power;                                                     // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               PowerAddOns;                                               // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SlasherPerks;                                              // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        SlasherPerkLevels;                                         // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SlasherFavor;                                              // 0x0088(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1FDA[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.BloodwebNodeProperties
// 0x0018
struct FBloodwebNodeProperties
{
	DeadByDaylight_EBloodwebNodeContentType            ContentType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8VE0[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             tags;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.BloodwebNodeGate
// 0x0000 (0x0008 - 0x0008)
struct FBloodwebNodeGate : public FDBDTableRowBase
{

};

// ScriptStruct DeadByDaylight.BloodwebChest
// 0x0030 (0x0038 - 0x0008)
struct FBloodwebChest : public FDBDTableRowBase
{
	struct FName                                       Id;                                                        // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       eventId;                                                   // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_21WR[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      GivenItemRarity;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.BloodwebNode
// 0x0088
struct FBloodwebNode
{
	struct FBloodwebNodeProperties                     Properties;                                                // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	TArray<struct FBloodwebNodeGate>                   Gates;                                                     // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EBloodwebNodeState                  state;                                                     // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_70GA[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NodeID;                                                    // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ContentId;                                                 // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IT2W[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBloodwebChest                              BloodwebChest;                                             // 0x0050(0x0038) (NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.BloodWebRingPersistentData
// 0x0010
struct FBloodWebRingPersistentData
{
	TArray<struct FBloodwebNode>                       NodeData;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.BloodWebPersistentData
// 0x0040
struct FBloodWebPersistentData
{
	int                                                versionNumber;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                level;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBloodWebRingPersistentData>         RingData;                                                  // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Paths;                                                     // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EntityCurrentNode;                                         // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   GenerationDate;                                            // 0x0038(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SavedStatsData
// 0x0014
struct FSavedStatsData
{
	uint32_t                                           version;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       name;                                                      // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CharacterSavedInventoryData
// 0x0010
struct FCharacterSavedInventoryData
{
	uint32_t                                           version;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       name;                                                      // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AssignedPerkProperties
// 0x0014
struct FAssignedPerkProperties
{
	struct FName                                       perkID;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                perkLevel;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsTeachable;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0KKC[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.SavedCharacterLevelData
// 0x0018
struct FSavedCharacterLevelData
{
	int                                                level;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasPerksBeenSelected;                                      // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_84E7[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAssignedPerkProperties>             PerkSelection;                                             // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CharacterSavedProfileData
// 0x0158
struct FCharacterSavedProfileData
{
	int                                                BloodwebLevel;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimesConfronted;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDateTime>                           PrestigeEarnedDates;                                       // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBloodWebPersistentData                     BloodWebData;                                              // 0x0018(0x0040) (NativeAccessSpecifierPublic)
	struct FPlayerLoadoutData                          CharacterLoadoutData;                                      // 0x0058(0x0098) (NativeAccessSpecifierPublic)
	TArray<struct FName>                               CurrentCustomization;                                      // 0x00F0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCharmIdSlot>                        CurrentCharmCustomization;                                 // 0x0100(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               UniquePerksAdded;                                          // 0x0110(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCharacterSavedInventoryData>        inventoryData;                                             // 0x0120(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSavedCharacterLevelData>            CharacterLevelData;                                        // 0x0130(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSavedStatsData>                     StatProgression;                                           // 0x0140(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                prestigeLevel;                                             // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                CharacterExperience;                                       // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.PlayerSavedProfileDataLocal
// 0x03B0
struct FPlayerSavedProfileDataLocal
{
	int                                                Tokens;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_02AC[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               Offerings;                                                 // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, bool>                           PageVisited;                                               // 0x0018(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FName, bool>                           ChatVisible;                                               // 0x0068(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FName, bool>                           OnBoardingCompleted;                                       // 0x00B8(0x0050) (NativeAccessSpecifierPublic)
	int                                                ConsecutiveMatchStreak;                                    // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Wins;                                                      // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Losses;                                                    // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7K92[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint64_t                                           CurrentSeasonTicks;                                        // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDailyRitualContainer                       DailyRituals;                                              // 0x0120(0x0028) (NativeAccessSpecifierPublic)
	struct FFearMarketOfferingInstance                 FearMarket;                                                // 0x0148(0x0020) (NativeAccessSpecifierPublic)
	struct FPlayerLoadoutData                          LastConnectedLoadout;                                      // 0x0168(0x0098) (NativeAccessSpecifierPublic)
	int                                                LastConnectedCharacterIndex;                               // 0x0200(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2UQ5[0x4];                                     // 0x0204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   DisconnectPenaltyTime;                                     // 0x0208(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LastMatchEndTime;                                          // 0x0210(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LastMatchStartTime;                                        // 0x0218(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LastKillerMatchEndTime;                                    // 0x0220(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LastSurvivorMatchEndTime;                                  // 0x0228(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBloodWebPersistentData                     BloodStoreKillers;                                         // 0x0230(0x0040) (NativeAccessSpecifierPublic)
	struct FBloodWebPersistentData                     BloodStoreSurvivors;                                       // 0x0270(0x0040) (NativeAccessSpecifierPublic)
	bool                                               CrossplayAllowed;                                          // 0x02B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoDeclineFriendInvites;                                  // 0x02B1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N21U[0x6];                                     // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   _ongoingGameTime;                                          // 0x02B8(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FPlayerSavedProfileCumulativeData           _cumulativeData;                                           // 0x02C0(0x0038) (NoDestructor, NativeAccessSpecifierPrivate)
	TArray<struct FSavedStatsData>                     _savedPlayerStats;                                         // 0x02F8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _hasBeenGivenKillerTutorialEndReward;                      // 0x0308(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _hasBeenGivenSurvivorTutorialEndReward;                    // 0x0309(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CNSO[0x6];                                     // 0x030A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, struct FCharacterSavedProfileData>       _characterData;                                            // 0x0310(0x0050) (NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FSpecialEventSavedData>  _specialEvent;                                             // 0x0360(0x0050) (NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.ConsoleUserSettings
// 0x0068
struct FConsoleUserSettings
{
	TArray<struct FInputActionKeyMapping>              ActionMappings;                                            // 0x0000(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputAxisKeyMapping>                AxisMappings;                                              // 0x0010(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MenuScaleFactor;                                           // 0x0020(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HudScaleFactor;                                            // 0x0024(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillCheckScaleFactor;                                     // 0x0028(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MainVolume;                                                // 0x002C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MenuMusicVolume;                                           // 0x0030(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseHeadphones;                                             // 0x0034(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HideTutorial;                                              // 0x0035(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MuteOnFocusLost;                                           // 0x0036(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NIBM[0x1];                                     // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                KillerControllerSensitivity;                               // 0x0038(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SurvivorControllerSensitivity;                             // 0x003C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InvertY;                                                   // 0x0040(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9TVB[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HighestWeightSeenNews;                                     // 0x0044(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasAcceptedCrossplayPopup;                                 // 0x0048(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasAcceptedCrossProgressionPopup;                          // 0x0049(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MJHC[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PartyPrivacyState;                                         // 0x0050(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                colorBlindMode;                                            // 0x0060(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ColorBlindModeIntensity;                                   // 0x0064(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PlayerSavedProfileData
// 0x0480
struct FPlayerSavedProfileData
{
	struct FString                                     PlayerUID;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerSavedProfileDataShared               SharedData;                                                // 0x0010(0x0058) (NativeAccessSpecifierPublic)
	struct FPlayerSavedProfileDataLocal                LocalData;                                                 // 0x0068(0x03B0) (NativeAccessSpecifierPublic)
	struct FConsoleUserSettings                        ConsoleUserSettings;                                       // 0x0418(0x0068) (NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PlayerPersistentData
// 0x0708
struct FPlayerPersistentData
{
	DBDSharedTypes_EPlayerRole                         GameRole;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P61D[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlayerLoadoutData                          StartingLoadout;                                           // 0x0008(0x0098) (Transient, NativeAccessSpecifierPublic)
	struct FPlayerLoadoutData                          CurrentLoadout;                                            // 0x00A0(0x0098) (Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4731[0x98];                                    // 0x0138(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDailyRitualInstance                        CachedAvailableRitual;                                     // 0x01D0(0x0078) (Transient, NativeAccessSpecifierPublic)
	struct FPlayerSavedProfileData                     SavedData;                                                 // 0x0248(0x0480) (NativeAccessSpecifierPublic)
	PlatformsProviders_EPlatformFlag                   PlayerPlatform;                                            // 0x06C8(0x0001) ELEMENT_SIZE_MISMATCH (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M6AV[0x3];                                     // 0x06C8(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	PlatformsProviders_EProviderFlag                   PlayerProvider;                                            // 0x06CC(0x0001) ELEMENT_SIZE_MISMATCH (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_35AS[0x3];                                     // 0x06CC(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                PreviousSlasherPips;                                       // 0x06D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                PreviousCamperPips;                                        // 0x06D4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           _playerId;                                                 // 0x06D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WH44[0x14];                                    // 0x06DC(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     _contentVersion;                                           // 0x06F0(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDateTime                                   _startSessionTime;                                         // 0x0700(0x0008) (ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.CloudInventoryItem
// 0x0010
struct FCloudInventoryItem
{
	int                                                DefinitionId;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YRQ1[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint64_t                                           InstanceId;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CharacterStateData
// 0x0020
struct FCharacterStateData
{
	int                                                _pips;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _powerId;                                                  // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               _addonIds;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.PlayerStateData
// 0x0038
struct FPlayerStateData
{
	int                                                characterLevel;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EquipedFavorId;                                            // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               EquipedPerkIds;                                            // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        EquipedPerkLevels;                                         // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsLeavingMatch;                                            // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EGameState                          _playerGameState;                                          // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isEscapeHatch;                                            // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BL5S[0x1];                                     // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _prestigeLevel;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.scoreEventData
// 0x0018
struct FscoreEventData
{
	class Uactor*                                      target;                                                    // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              percentToAward;                                            // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EVJM[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     customObjectParameter;                                     // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AnimData
// 0x0001
struct FAnimData
{
	DeadByDaylight_ECharacterStance                    Stance;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.RankGroupDefinition
// 0x0018
struct FRankGroupDefinition
{
	int                                                RankThreshold;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1VKS[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      PipThresholds;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.RankDefinition
// 0x0004
struct FRankDefinition
{
	int                                                PipsRequired;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SaveDataBase
// 0x0010
struct FSaveDataBase
{
	unsigned char                                      UnknownData_FYHL[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                versionNumber;                                             // 0x0008(0x0004) (ZeroConstructor, SaveGame, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RPMN[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.KeyTupleBool
// 0x0010
struct FKeyTupleBool
{
	struct FName                                       key;                                                       // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Value;                                                     // 0x000C(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OTYB[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.LegacySavedBloodwebNodeProperties
// 0x0018
struct FLegacySavedBloodwebNodeProperties
{
	DeadByDaylight_EBloodwebNodeContentType            ContentType;                                               // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x0001(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B193[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             tags;                                                      // 0x0008(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LegacySavedBloodwebNodeGate
// 0x0020
struct FLegacySavedBloodwebNodeGate
{
	struct FName                                       description;                                               // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x000C(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         role;                                                      // 0x000D(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EBloodwebNodeGateTypes              gateType;                                                  // 0x000E(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CKVX[0x1];                                     // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     param;                                                     // 0x0010(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LegacySavedBloodwebChest
// 0x0030
struct FLegacySavedBloodwebChest
{
	struct FName                                       Id;                                                        // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       eventId;                                                   // 0x000C(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x0018(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9EP6[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      GivenItemRarity;                                           // 0x0020(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LegacySavedBloodwebNode
// 0x0080
struct FLegacySavedBloodwebNode
{
	struct FLegacySavedBloodwebNodeProperties          Properties;                                                // 0x0000(0x0018) (SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FLegacySavedBloodwebNodeGate>        Gates;                                                     // 0x0018(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EBloodwebNodeState                  state;                                                     // 0x0028(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N8T7[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NodeID;                                                    // 0x0030(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ContentId;                                                 // 0x0040(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WM8V[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLegacySavedBloodwebChest                   BloodwebChest;                                             // 0x0050(0x0030) (SaveGame, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LegacySavedBloodWebRingPersistentData
// 0x0010
struct FLegacySavedBloodWebRingPersistentData
{
	TArray<struct FLegacySavedBloodwebNode>            NodeData;                                                  // 0x0000(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LegacySavedBloodWebPersistentData
// 0x0040
struct FLegacySavedBloodWebPersistentData
{
	int                                                versionNumber;                                             // 0x0000(0x0004) (ZeroConstructor, SaveGame, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                level;                                                     // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLegacySavedBloodWebRingPersistentData> RingData;                                                  // 0x0008(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Paths;                                                     // 0x0018(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EntityCurrentNode;                                         // 0x0028(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   GenerationDate;                                            // 0x0038(0x0008) (ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LegacySavedPlayerLoadoutData
// 0x0098
struct FLegacySavedPlayerLoadoutData
{
	struct FName                                       Item;                                                      // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_639H[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               ItemAddOns;                                                // 0x0010(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               CamperPerks;                                               // 0x0020(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        CamperPerkLevels;                                          // 0x0030(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CamperFavor;                                               // 0x0040(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Power;                                                     // 0x004C(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               PowerAddOns;                                               // 0x0058(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SlasherPerks;                                              // 0x0068(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        SlasherPerkLevels;                                         // 0x0078(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SlasherFavor;                                              // 0x0088(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JL1O[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.CharacterSavedInventoryDataV7
// 0x0020
struct FCharacterSavedInventoryDataV7
{
	struct FName                                       Id;                                                        // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Num;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     I;                                                         // 0x0010(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AssignedPerkPropertiesV7
// 0x0014
struct FAssignedPerkPropertiesV7
{
	struct FName                                       perkID;                                                    // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                perkLevel;                                                 // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsTeachable;                                               // 0x0010(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_344Y[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.SavedCharacterLevelDataV7
// 0x0018
struct FSavedCharacterLevelDataV7
{
	int                                                level;                                                     // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasPerksBeenSelected;                                      // 0x0004(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W06R[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAssignedPerkPropertiesV7>           PerkSelection;                                             // 0x0008(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SavedStatsDataV7
// 0x0010
struct FSavedStatsDataV7
{
	struct FName                                       name;                                                      // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SavedCharmSlotData
// 0x0010
struct FSavedCharmSlotData
{
	int8_t                                             slotIndex;                                                 // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RX63[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       charmId;                                                   // 0x0004(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CharacterSavedProfileDataV7
// 0x0158
struct FCharacterSavedProfileDataV7
{
	int                                                BloodwebLevel;                                             // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                prestigeLevel;                                             // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CharacterExperience;                                       // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimesConfronted;                                           // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             PrestigeDates;                                             // 0x0010(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLegacySavedBloodWebPersistentData          BloodWebData;                                              // 0x0020(0x0040) (SaveGame, NativeAccessSpecifierPublic)
	struct FLegacySavedPlayerLoadoutData               CharacterLoadoutData;                                      // 0x0060(0x0098) (SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FCharacterSavedInventoryDataV7>      Inventory;                                                 // 0x00F8(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSavedCharacterLevelDataV7>          CharacterProgression;                                      // 0x0108(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSavedStatsDataV7>                   StatProgression;                                           // 0x0118(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               CurrentCustomization;                                      // 0x0128(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSavedCharmSlotData>                 CurrentCharmCustomization;                                 // 0x0138(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               UniquePerksAdded;                                          // 0x0148(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CharacterKeyTuple
// 0x0160
struct FCharacterKeyTuple
{
	int                                                key;                                                       // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G8BU[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCharacterSavedProfileDataV7                data;                                                      // 0x0008(0x0158) (SaveGame, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LegacySavedDailyRitualInstance
// 0x0078
struct FLegacySavedDailyRitualInstance
{
	struct FName                                       RitualKey;                                                 // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IY4J[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        CharacterIDs;                                              // 0x0010(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<DBDSharedTypes_EPlayerRole>                 Roles;                                                     // 0x0020(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              progress;                                                  // 0x0030(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              threshold;                                                 // 0x0034(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              tolerance;                                                 // 0x0038(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisplayThreshold;                                          // 0x003C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExpReward;                                                 // 0x0040(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               active;                                                    // 0x0044(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Rewarded;                                                  // 0x0045(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StateChanged;                                              // 0x0046(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LDCA[0x1];                                     // 0x0047(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   DateAssigned;                                              // 0x0048(0x0008) (ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NbGameElapsed;                                             // 0x0050(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OTVR[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<DeadByDaylight_EDBDScoreTypes>              TrackedEvents;                                             // 0x0058(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FgameplayTag>                        TrackedGameEvents;                                         // 0x0068(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.SavedDailyRitualContainerV7
// 0x0040
struct FSavedDailyRitualContainerV7
{
	struct FString                                     LastRitualReceivedDate;                                    // 0x0000(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastRitualPopupDate;                                       // 0x0010(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastRitualDismissedDate;                                   // 0x0020(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLegacySavedDailyRitualInstance>     Rituals;                                                   // 0x0030(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LegacySavedFearMarketItemInstance
// 0x0018
struct FLegacySavedFearMarketItemInstance
{
	struct FName                                       itemId;                                                    // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Cost;                                                      // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BloodpointConversion;                                      // 0x0010(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Purchased;                                                 // 0x0014(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EIDV[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.SavedFearMarketOfferingInstanceV7
// 0x0030
struct FSavedFearMarketOfferingInstanceV7
{
	TArray<struct FLegacySavedFearMarketItemInstance>  ObjectsForSale;                                            // 0x0000(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     startTime;                                                 // 0x0010(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EndTime;                                                   // 0x0020(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SavedSpecialEventDataV7
// 0x0020
struct FSavedSpecialEventDataV7
{
	struct FName                                       eventId;                                                   // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6J15[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        SeenCinematics;                                            // 0x0010(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SaveDataV7
// 0x0368 (0x0378 - 0x0010)
struct FSaveDataV7 : public FSaveDataBase
{
	struct FString                                     PlayerUID;                                                 // 0x0010(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SelectedCamperIndex;                                       // 0x0020(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SelectedSlasherIndex;                                      // 0x0024(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Offerings;                                                 // 0x0028(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FirstTimePlaying;                                          // 0x0038(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5O5F[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ConsecutiveMatchStreak;                                    // 0x003C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasBeenGivenKillerTutorialEndReward;                       // 0x0040(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasBeenGivenSurvivorTutorialEndReward;                     // 0x0041(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V1UD[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint64_t                                           CurrentSeasonTicks;                                        // 0x0048(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LastConnectedCharacterIndex;                               // 0x0050(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_48HZ[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DisconnectPenaltyTime;                                     // 0x0058(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastMatchEndTime;                                          // 0x0068(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastMatchStartTime;                                        // 0x0078(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastKillerMatchEndTime;                                    // 0x0088(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastSurvivorMatchEndTime;                                  // 0x0098(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Experience;                                                // 0x00A8(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BonusExperience;                                           // 0x00AC(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FearTokens;                                                // 0x00B0(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FearTokensMigrated;                                        // 0x00B4(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5KDU[0x3];                                     // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OngoingGameTime;                                           // 0x00B8(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeMatches;                                         // 0x00C8(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PW89[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKeyTupleBool>                       PageVisited;                                               // 0x00D0(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKeyTupleBool>                       ChatVisible;                                               // 0x00E0(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeMatchesAsSurvivor;                               // 0x00F0(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeMatchesAsKiller;                                 // 0x00F4(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LastMatchTimestamp;                                        // 0x00F8(0x0008) (ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LastSessionTimestamp;                                      // 0x0100(0x0008) (ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeSessions;                                        // 0x0108(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HTMU[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CumulativePlaytime;                                        // 0x0110(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCharacterKeyTuple>                  characterData;                                             // 0x0120(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               OwnedCharms;                                               // 0x0130(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSavedDailyRitualContainerV7                DailyRituals;                                              // 0x0140(0x0040) (SaveGame, NativeAccessSpecifierPublic)
	struct FSavedFearMarketOfferingInstanceV7          FearMarket;                                                // 0x0180(0x0030) (SaveGame, NativeAccessSpecifierPublic)
	struct FLegacySavedPlayerLoadoutData               LastLoadout;                                               // 0x01B0(0x0098) (SaveGame, NativeAccessSpecifierPublic)
	struct FConsoleUserSettings                        ConsoleUserSettings;                                       // 0x0248(0x0068) (SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FSavedStatsDataV7>                   PlayerStatProgression;                                     // 0x02B0(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             OwnedContent;                                              // 0x02C0(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSavedSpecialEventDataV7>            SpecialEvent;                                              // 0x02D0(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLegacySavedBloodWebPersistentData          BloodStoreKillers;                                         // 0x02E0(0x0040) (SaveGame, NativeAccessSpecifierPublic)
	struct FLegacySavedBloodWebPersistentData          BloodStoreSurvivors;                                       // 0x0320(0x0040) (SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FKeyTupleBool>                       OnBoardingCompleted;                                       // 0x0360(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCrossplayAllowed;                                        // 0x0370(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoDeclineFriendInvites;                                  // 0x0371(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OQQZ[0x6];                                     // 0x0372(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.SaveDataV8
// 0x0358 (0x0368 - 0x0010)
struct FSaveDataV8 : public FSaveDataBase
{
	struct FString                                     PlayerUID;                                                 // 0x0010(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SelectedCamperIndex;                                       // 0x0020(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SelectedSlasherIndex;                                      // 0x0024(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Offerings;                                                 // 0x0028(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FirstTimePlaying;                                          // 0x0038(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7ZF7[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ConsecutiveMatchStreak;                                    // 0x003C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasBeenGivenKillerTutorialEndReward;                       // 0x0040(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasBeenGivenSurvivorTutorialEndReward;                     // 0x0041(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XXBS[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint64_t                                           CurrentSeasonTicks;                                        // 0x0048(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LastConnectedCharacterIndex;                               // 0x0050(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RUY4[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DisconnectPenaltyTime;                                     // 0x0058(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastMatchEndTime;                                          // 0x0068(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastMatchStartTime;                                        // 0x0078(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastKillerMatchEndTime;                                    // 0x0088(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastSurvivorMatchEndTime;                                  // 0x0098(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OngoingGameTime;                                           // 0x00A8(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeMatches;                                         // 0x00B8(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZG6U[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKeyTupleBool>                       PageVisited;                                               // 0x00C0(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKeyTupleBool>                       ChatVisible;                                               // 0x00D0(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeMatchesAsSurvivor;                               // 0x00E0(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeMatchesAsKiller;                                 // 0x00E4(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LastMatchTimestamp;                                        // 0x00E8(0x0008) (ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LastSessionTimestamp;                                      // 0x00F0(0x0008) (ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CumulativeSessions;                                        // 0x00F8(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GT5Q[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CumulativePlaytime;                                        // 0x0100(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCharacterKeyTuple>                  characterData;                                             // 0x0110(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               OwnedCharms;                                               // 0x0120(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSavedDailyRitualContainerV7                DailyRituals;                                              // 0x0130(0x0040) (SaveGame, NativeAccessSpecifierPublic)
	struct FSavedFearMarketOfferingInstanceV7          FearMarket;                                                // 0x0170(0x0030) (SaveGame, NativeAccessSpecifierPublic)
	struct FLegacySavedPlayerLoadoutData               LastLoadout;                                               // 0x01A0(0x0098) (SaveGame, NativeAccessSpecifierPublic)
	struct FConsoleUserSettings                        ConsoleUserSettings;                                       // 0x0238(0x0068) (SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FSavedStatsDataV7>                   PlayerStatProgression;                                     // 0x02A0(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             OwnedContent;                                              // 0x02B0(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSavedSpecialEventDataV7>            SpecialEvent;                                              // 0x02C0(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLegacySavedBloodWebPersistentData          BloodStoreKillers;                                         // 0x02D0(0x0040) (SaveGame, NativeAccessSpecifierPublic)
	struct FLegacySavedBloodWebPersistentData          BloodStoreSurvivors;                                       // 0x0310(0x0040) (SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FKeyTupleBool>                       OnBoardingCompleted;                                       // 0x0350(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCrossplayAllowed;                                        // 0x0360(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoDeclineFriendInvites;                                  // 0x0361(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AW2Y[0x6];                                     // 0x0362(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.CharacterValidationData
// 0x0008
struct FCharacterValidationData
{
	int                                                prestigeLevel;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BloodwebLevel;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SaveValidationData
// 0x0060
struct FSaveValidationData
{
	struct FString                                     PlayerUID;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int, struct FCharacterValidationData>         characterData;                                             // 0x0010(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.scoreValue
// 0x0040 (0x0048 - 0x0008)
struct FscoreValue : public FDBDTableRowBase
{
	struct FName                                       Id;                                                        // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EDBDScoreCategory                   category;                                                  // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1K7W[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BloodpointValue;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxBloodpointValue;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 BloodpointDepreciationCurve;                               // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ongoingWaitTime;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M6ER[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0030(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ScoreCategoryData
// 0x0010 (0x0018 - 0x0008)
struct FScoreCategoryData : public FDBDTableRowBase
{
	DBDSharedTypes_EDBDScoreCategory                   category;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VL7C[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ScoreCap;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProgressionCap;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AchievementCap;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.awardedScore
// 0x0010
struct FawardedScore
{
	struct FName                                       ScoreTypeId;                                               // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloodpointsAwarded;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AwardedScores
// 0x0010
struct FAwardedScores
{
	TArray<struct FawardedScore>                       Array;                                                     // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PlayerstateDataCache
// 0x0058
struct FPlayerstateDataCache
{
	TMap<struct FName, struct FAwardedScores>          awardedScoresByType;                                       // 0x0000(0x0050) (NativeAccessSpecifierPublic)
	bool                                               IsDataCacheValid;                                          // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TWD1[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.UserGameStats
// 0x00B0
struct FUserGameStats
{
	bool                                               Disconnected;                                              // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RLHJ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FearTokens;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Skulls;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UQ32[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<DBDSharedTypes_EDBDScoreCategory, int>        BonusBloodpoints;                                          // 0x0010(0x0050) (Transient, NativeAccessSpecifierPublic)
	TMap<DBDSharedTypes_EDBDScoreCategory, int>        _bloodpoints;                                              // 0x0060(0x0050) (Transient, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.OngoingScoreData
// 0x0030
struct FOngoingScoreData
{
	DeadByDaylight_EDBDScoreTypes                      ScoreType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FOS5[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FgameplayTag                                ScoreTypeTag;                                              // 0x0004(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeSinceScore;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ApplyScoreTimeout;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccumulatedPercent;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X6VD[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Uactor*                                      target;                                                    // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     customObjectParameter;                                     // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PlayerFloatTuple
// 0x0010
struct FPlayerFloatTuple
{
	class Ucharacter*                                  player;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_APIK[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.SurfaceTypeName
// 0x0010 (0x0018 - 0x0008)
struct FSurfaceTypeName : public FDBDTableRowBase
{
	struct FName                                       name;                                                      // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_34VA[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.ToastButton
// 0x0020
struct FToastButton
{
	struct FText                                       buttonText;                                                // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               IsRegression;                                              // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M4DL[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.Toast
// 0x00A8 (0x00B0 - 0x0008)
struct FToast : public FDBDTableRowBase
{
	float                                              DisplayDuration;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              lifeTime;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ToastText;                                                 // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<DeadByDaylight_EToastInputType, struct FToastButton> ButtonsData;                                               // 0x0028(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              DelayBeforeInteraction;                                    // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6DPC[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ToastIcon[0x30];                                           // 0x007C(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct DeadByDaylight.UniquelyIdentifiedAnalytic
// 0x0050 (0x0068 - 0x0018)
struct FUniquelyIdentifiedAnalytic : public FBaseSingleStructIndexAnalytics
{
	struct FString                                     version;                                                   // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     mirrorsId;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientId;                                                  // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Platform;                                                  // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BackendEnv;                                                // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.DedicatedServerStatusAnalytics
// 0x0088 (0x00F0 - 0x0068)
struct FDedicatedServerStatusAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     DSSessionProvider;                                         // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerStatus;                                              // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameLiftSessionId;                                         // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionEndReason;                                          // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FleetId;                                                   // 0x00B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IpAddress;                                                 // 0x00C8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7C7L[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DnsName;                                                   // 0x00E0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.DetailedScoreEventData
// 0x0068
struct FDetailedScoreEventData
{
	struct FString                                     MatchId;                                                   // 0x0000(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ScorerMirrorsId;                                           // 0x0010(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ScorerIsABot;                                              // 0x0020(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W7UU[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TargetMirrorsId;                                           // 0x0028(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TargetIsABot;                                              // 0x0038(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HDBK[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ScoreTypeId;                                               // 0x003C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ScoreExperience;                                           // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ElapsedMatchTime;                                          // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     InstigatorLocation;                                        // 0x0050(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     TargetLocation;                                            // 0x005C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.GeneratorQueryHandlePair
// 0x0028
struct FGeneratorQueryHandlePair
{
	class Ugenerator*                                  generator;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8SH1[0x20];                                    // 0x0008(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.downloadProgression
// 0x0030
struct FdownloadProgression
{
	float                                              DownloadSize;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalDownloadedSize;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DownloadSpeed;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InstallProgress;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDownloading;                                             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VXY4[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DownloadStatus;                                            // 0x0018(0x0018) (NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.EACAnalyticsController
// 0x0001
struct FEACAnalyticsController
{
	unsigned char                                      UnknownData_V5QL[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.EACAnalytics
// 0x0010 (0x0078 - 0x0068)
struct FEACAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     LogMessage;                                                // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.EACClientViolationAnalytics
// 0x0010 (0x0088 - 0x0078)
struct FEACClientViolationAnalytics : public FEACAnalytics
{
	struct FString                                     ViolationCase;                                             // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.EACClientInitAnalytics
// 0x0008 (0x0080 - 0x0078)
struct FEACClientInitAnalytics : public FEACAnalytics
{
	unsigned char                                      ValidationErrorType;                                       // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XES5[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.EACServerValidateAnalytics
// 0x0000 (0x0080 - 0x0080)
struct FEACServerValidateAnalytics : public FEACClientInitAnalytics
{

};

// ScriptStruct DeadByDaylight.EACClientAuthChallengeAnalytics
// 0x0000 (0x0080 - 0x0080)
struct FEACClientAuthChallengeAnalytics : public FEACClientInitAnalytics
{

};

// ScriptStruct DeadByDaylight.EACClientAuthInitAnalytics
// 0x0000 (0x0080 - 0x0080)
struct FEACClientAuthInitAnalytics : public FEACClientInitAnalytics
{

};

// ScriptStruct DeadByDaylight.EffectsLocatorTargets
// 0x0008
struct FEffectsLocatorTargets
{
	class UClass*                                      TargetActorClass;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.EmblemProgressionData
// 0x0018
struct FEmblemProgressionData
{
	struct FString                                     ProgressionText;                                           // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProgressionPercent;                                        // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GUJR[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.EmblemSlotData
// 0x0068
struct FEmblemSlotData
{
	DeadByDaylight_EEmblemQuality                      Quality;                                                   // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XY32[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     title;                                                     // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     description;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KFOC[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             IconPaths;                                                 // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ThresholdPoints;                                           // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentPoints;                                             // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QPD3[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEmblemProgressionData>              ProgressionData;                                           // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.EnvironmentAnalytics
// 0x0120 (0x0188 - 0x0068)
struct FEnvironmentAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     Environment;                                               // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     endpoint;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SelectedCountry;                                           // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timezone;                                                  // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeviceProfile;                                             // 0x00B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GpuAdapter;                                                // 0x00C8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GpuProviderName;                                           // 0x00D8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GpuDriverVersion;                                          // 0x00E8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Cpu;                                                       // 0x00F8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QualitySetting;                                            // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFullScreen;                                              // 0x010C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAutomaticResolution;                                     // 0x010D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SOQ0[0x2];                                     // 0x010E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ScreenResolutionSetting;                                   // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EngineResolutionX;                                         // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EngineResolutionY;                                         // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ER0K[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     provider;                                                  // 0x0120(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Device;                                                    // 0x0130(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OperatingSystem;                                           // 0x0140(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KrakenVersion;                                             // 0x0150(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContentVersion;                                            // 0x0160(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsUsingKeyboard;                                           // 0x0170(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6P35[0x7];                                     // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ControllerType;                                            // 0x0178(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ErrorAnalyticsController
// 0x0001
struct FErrorAnalyticsController
{
	unsigned char                                      UnknownData_FOEC[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.ErrorAnalytics
// 0x0020 (0x0088 - 0x0068)
struct FErrorAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     ErrorCategory;                                             // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LogMessage;                                                // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ElementSubstitutions
// 0x0010
struct FElementSubstitutions
{
	unsigned char                                      UnknownData_3BEA[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.SubstitutionElements
// 0x0060
struct FSubstitutionElements
{
	unsigned char                                      _elementToReplace[0x30];                                   // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      _elementToReplaceWith[0x30];                               // 0x0030(0x0030) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct DeadByDaylight.GameplayElementSubstitutions
// 0x0018 (0x0028 - 0x0010)
struct FGameplayElementSubstitutions : public FElementSubstitutions
{
	TArray<struct FSubstitutionElements>               _replacements;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	DeadByDaylight_EGameplayElementType                _type;                                                     // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EJPB[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.DependencyElementSubstitutions
// 0x0018 (0x0028 - 0x0010)
struct FDependencyElementSubstitutions : public FElementSubstitutions
{
	TArray<struct FSubstitutionElements>               _replacements;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	DeadByDaylight_ETileSpawnPointType                 _type;                                                     // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_D8AA[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.DependencyElementAddition
// 0x0038
struct FDependencyElementAddition
{
	unsigned char                                      _object[0x30];                                             // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	DeadByDaylight_ETileSpawnPointType                 _type;                                                     // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KGO9[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _numberToAdd;                                              // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.GameplayElementAddition
// 0x0040
struct FGameplayElementAddition
{
	unsigned char                                      _elementToAdd[0x30];                                       // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	DeadByDaylight_EGameplayElementType                _spawnerType;                                              // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZZT8[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _numberToAdd;                                              // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _numberToAddAffectedByOffering;                            // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FB8F[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.EventSubstitionData
// 0x0058
struct FEventSubstitionData
{
	struct FName                                       _name;                                                     // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _allowSubstitutionInKYF;                                   // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AYI2[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _baseNumOfSubstitutionPerGroup;                            // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8ZZH[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayElementSubstitutions>       _gameplaySubstitutionElements;                             // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FDependencyElementSubstitutions>     _dependencySubstitutionElements;                           // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FDependencyElementAddition>          _dependencyElementAdditions;                               // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayElementAddition>            _gameplayElementAdditions;                                 // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.PathPosition
// 0x0018
struct FPathPosition
{
	unsigned char                                      UnknownData_79P4[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.FilterLoadoutData
// 0x0070 (0x0078 - 0x0008)
struct FFilterLoadoutData : public FDBDTableRowBase
{
	struct FName                                       Id;                                                        // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GQAL[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      icon[0x30];                                                // 0x0014(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	struct FText                                       title;                                                     // 0x0048(0x0018) (Edit, NativeAccessSpecifierPublic)
	TArray<DBDSharedTypes_EPlayerRole>                 role;                                                      // 0x0060(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ELoadoutType                        LoadoutType;                                               // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_REOO[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.FootStep
// 0x0028
struct FFootStep
{
	class UDecalComponent*                             Decal;                                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OZD2[0x20];                                    // 0x0008(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.FreeTrialLoginAnalytics
// 0x0000 (0x0068 - 0x0068)
struct FFreeTrialLoginAnalytics : public FUniquelyIdentifiedAnalytic
{

};

// ScriptStruct DeadByDaylight.gameEventData
// 0x0028
struct FgameEventData
{
	class UdbdPlayer*                                  instigator;                                                // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      target;                                                    // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              customValue;                                               // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_62YS[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     customObjectParameter;                                     // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                customIntValue;                                            // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8YQO[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.OngoingGameEvent
// 0x0070
struct FOngoingGameEvent
{
	struct FgameEventData                              _eventData;                                                // 0x0000(0x0028) (Transient, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9FYM[0x48];                                    // 0x0028(0x0048) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.GameEventDispatcherHandleBP
// 0x0020
struct FGameEventDispatcherHandleBP
{
	struct FgameplayTag                                filter;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             GameEventDelegate;                                         // 0x000C(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SB42[0x4];                                     // 0x000C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};

// ScriptStruct DeadByDaylight.GameNotificationData
// 0x0020 (0x0028 - 0x0008)
struct FGameNotificationData : public FDBDTableRowBase
{
	DeadByDaylight_EPromptType                         PromptType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EPromptPriority                     priority;                                                  // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1L2R[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       content;                                                   // 0x0010(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.NotificationHistoryElement
// 0x0018
struct FNotificationHistoryElement
{
	unsigned char                                      UnknownData_95HR[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.GameplayNotificationData
// 0x0058
struct FGameplayNotificationData
{
	struct FName                                       SourceId;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DeadByDaylight_EInventoryItemType                  SourceType;                                                // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FWYM[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SourceIconIndex;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SourceLevel;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       EffectID;                                                  // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QIE0[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EffectIconFilePath;                                        // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EStatusEffectType                   effectType;                                                // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VBRB[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       EffectDisplayName;                                         // 0x0040(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct DeadByDaylight.GarantiedRarityRingDistributionValues
// 0x0070 (0x0078 - 0x0008)
struct FGarantiedRarityRingDistributionValues : public FDBDTableRowBase
{
	int                                                InnerRingCommonItemProbability;                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingCommonItemProbability;                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingCommonItemProbability;                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InnerRingUncommonItemProbability;                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingUncommonItemProbability;                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingUncommonItemProbability;                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InnerRingRareItemProbability;                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingRareItemProbability;                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingRareItemProbability;                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InnerRingVeryRareItemProbability;                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingVeryRareItemProbability;                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingVeryRareItemProbability;                          // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InnerRingUltraRareItemProbability;                         // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingUltraRareItemProbability;                        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingUltraRareItemProbability;                         // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InnerRingArtifactItemProbability;                          // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingArtifactItemProbability;                         // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingArtifactItemProbability;                          // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InnerRingSpectralItemProbability;                          // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingSpectralItemProbability;                         // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingSpectralItemProbability;                          // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InnerRingSpecialEventItemProbability;                      // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingSpecialEventItemProbability;                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingSpecialEventItemProbability;                      // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InnerRingLegendaryItemProbability;                         // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingLegendaryItemProbability;                        // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingLegendaryItemProbability;                         // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9HE2[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.DamageData
// 0x0020
struct FDamageData
{
	bool                                               _isRegressing;                                             // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isIntense;                                                // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_33K9[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UdbdPlayer>                   _lastDamageChangeSource;                                   // 0x0004(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QP5M[0x14];                                    // 0x000C(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.HelpCategoryData
// 0x0048 (0x0050 - 0x0008)
struct FHelpCategoryData : public FDBDTableRowBase
{
	DeadByDaylight_EHelpType                           type;                                                      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_914A[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       title;                                                     // 0x0010(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0028(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FName>                               TopicIds;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.HelpContextMappingData
// 0x0020 (0x0028 - 0x0008)
struct FHelpContextMappingData : public FDBDTableRowBase
{
	struct FString                                     ContextName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               TopicIds;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.HelpTopicData
// 0x0060 (0x0068 - 0x0008)
struct FHelpTopicData : public FDBDTableRowBase
{
	struct FText                                       title;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     ImagePath;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     iconPath;                                                  // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     videoID;                                                   // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.HintData
// 0x0058 (0x0060 - 0x0008)
struct FHintData : public FDBDTableRowBase
{
	DeadByDaylight_EHintCategory                       category;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G8U0[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       title;                                                     // 0x0010(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0028(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     iconPath;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                levelMin;                                                  // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                levelMax;                                                  // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                relevantCharacterID;                                       // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DP7X[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.DetailedHitAnalytics
// 0x0098 (0x0100 - 0x0068)
struct FDetailedHitAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchId;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InstigatorMirrorsId;                                       // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TargetMirrorsId;                                           // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Ping;                                                      // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitTimestamp;                                              // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsValidHit;                                                // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsValidDistance;                                           // 0x00A1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsValidCollision;                                          // 0x00A2(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N9P3[0x1];                                     // 0x00A3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RecorderCacheTimespan;                                     // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumDistance;                                           // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CapsuleInflation;                                          // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InstigatorName;                                            // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HitPrimitiveName;                                          // 0x00C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InstigatorCoordinateX;                                     // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InstigatorCoordinateY;                                     // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InstigatorCoordinateZ;                                     // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InstigatorRotationX;                                       // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InstigatorRotationY;                                       // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InstigatorRotationZ;                                       // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetLocationInstigatorTimestamp;                         // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetCoordinateX;                                         // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetCoordinateY;                                         // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetCoordinateZ;                                         // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              distance;                                                  // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_64AA[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.HookAnalyticsController
// 0x0150
struct FHookAnalyticsController
{
	unsigned char                                      UnknownData_MJMO[0x150];                                   // 0x0000(0x0150) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.HookAnalytics
// 0x00A8 (0x0110 - 0x0068)
struct FHookAnalytics : public FUniquelyIdentifiedAnalytic
{
	float                                              HookStartTime;                                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6PXY[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MirrorsIdSurvivor;                                         // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SurvivorIsABot;                                            // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_636B[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MirrorsIdKiller;                                           // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      KillerIsABot;                                              // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3ESD[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MirrorsIdRescuer;                                          // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RescuerIsABot;                                             // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IRIY[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TimesOnHook;                                               // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Outcome;                                                   // 0x00B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HookDuration;                                              // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EscapeAttemptStart;                                        // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EscapeAttemptFull;                                         // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SurvivorsRemaining;                                        // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfActiveSurvivorsStart;                              // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfActiveSurvivorsEnd;                                // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfActiveSurvivorsTotal;                              // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DurationCampFace;                                          // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DurationCampHard;                                          // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DurationCampSoft;                                          // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfRescuers;                                          // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeForFirstRescuer;                                       // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x00F8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReverseBearTrapOn;                                         // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MXNI[0x7];                                     // 0x0109(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.PlayerInfoCache
// 0x0038
struct FPlayerInfoCache
{
	unsigned char                                      UnknownData_Y0FJ[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.InteractionProficiencyProperties
// 0x0078 (0x0080 - 0x0008)
struct FInteractionProficiencyProperties : public FDBDTableRowBase
{
	struct FName                                       ProficiencyID;                                             // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IFUI[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ProficiencyBlueprint[0x30];                                // 0x0014(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	TArray<float>                                      BuffLevelThresholds;                                       // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<float>                                      DebuffLevelThresholds;                                     // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               HasLevels;                                                 // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L74Y[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     IconFilePath;                                              // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct DeadByDaylight.InteractionProficiencyData
// 0x0010
struct FInteractionProficiencyData
{
	bool                                               isActive;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EQKK[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                level;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EStatusEffectType                   ProficiencyType;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9IIL[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Value;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct DeadByDaylight.InteractionRequest
// 0x0018
struct FInteractionRequest
{
	class UinteractionDefinition*                      _interaction;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TQ7C[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UdbdPlayer*                                  _requester;                                                // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.InvalidLoadoutAnalytics
// 0x0028 (0x0090 - 0x0068)
struct FInvalidLoadoutAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                SlasherPerkCount;                                          // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PowerAddonCount;                                           // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CamperPerkCount;                                           // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemAddonCount;                                            // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CallingFunctionName;                                       // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CharacterId;                                               // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RZCA[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.BaseItemData
// 0x00D0 (0x00D8 - 0x0008)
struct FBaseItemData : public FDBDTableRowBase
{
	struct FName                                       Id;                                                        // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EInventoryItemType                  type;                                                      // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3YKK[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemUIData                                 UIData;                                                    // 0x0018(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       GenericDisplayName;                                        // 0x0090(0x0018) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      ItemBlueprint[0x30];                                       // 0x00A8(0x0030) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct DeadByDaylight.ItemData
// 0x0080 (0x0158 - 0x00D8)
struct FItemData : public FBaseItemData
{
	unsigned char                                      ItemMesh[0x30];                                            // 0x00D8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	DeadByDaylight_EItemHandPosition                   HandPosition;                                              // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         role;                                                      // 0x0109(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x010A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Inventory;                                                 // 0x010B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Chest;                                                     // 0x010C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EKillerAbilities                    RequiredKillerAbility;                                     // 0x010D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HQRR[0x2];                                     // 0x010E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FitemAvailability                           Availability;                                              // 0x0110(0x0030) (Edit, NativeAccessSpecifierPublic)
	bool                                               IsInNonViolentBuild;                                       // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAvailableInAtlantaBuild;                                 // 0x0141(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AntiDLC;                                                   // 0x0142(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Bloodweb;                                                  // 0x0143(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       eventId;                                                   // 0x0144(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_ELoadoutItemType                    itemType;                                                  // 0x0150(0x0001) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6WL9[0x3];                                     // 0x0150(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_B5PX[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.ParentItemIDs
// 0x0018
struct FParentItemIDs
{
	bool                                               MatchAnyItemID;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SBTK[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               itemIds;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ItemAddonProperties
// 0x0058 (0x01B0 - 0x0158)
struct FItemAddonProperties : public FItemData
{
	unsigned char                                      ItemAddonBlueprint[0x30];                                  // 0x0158(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	struct FParentItemIDs                              ParentItem;                                                // 0x0188(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FName>                               PreLevelGenerationModifierID;                              // 0x01A0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.Turn180Settings
// 0x0001
struct FTurn180Settings
{
	unsigned char                                      _settings;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.KillerSoundCueTracker
// 0x001C
struct FKillerSoundCueTracker
{
	unsigned char                                      UnknownData_6M32[0x1C];                                    // 0x0000(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.LevelLoadingTimeoutAnalytics
// 0x0008 (0x0070 - 0x0068)
struct FLevelLoadingTimeoutAnalytics : public FUniquelyIdentifiedAnalytic
{
	float                                              TimeElapsed;                                               // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QZFK[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.LevelLoadingStepAnalytics
// 0x0010 (0x0078 - 0x0068)
struct FLevelLoadingStepAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     LoadingStep;                                               // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ParadiseData
// 0x0040
struct FParadiseData
{
	unsigned char                                      UnknownData_11FR[0x40];                                    // 0x0000(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.LevelReadyToPlayRequirements
// 0x0010
struct FLevelReadyToPlayRequirements
{
	class UdbdPlayer*                                  player;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      perkCount;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ItemCount;                                                 // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      addonCount;                                                // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JW0L[0x5];                                     // 0x000B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.LightingSpecifics
// 0x0030
struct FLightingSpecifics
{
	unsigned char                                      LightBlueprint[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct DeadByDaylight.SceneLightingDescription
// 0x00D0
struct FSceneLightingDescription
{
	struct FName                                       themeName;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YPOZ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLightingSpecifics                          LightingDetailsLowMedium;                                  // 0x0010(0x0030) (Edit, NativeAccessSpecifierPublic)
	struct FLightingSpecifics                          LightingDetailsHighUltra;                                  // 0x0040(0x0030) (Edit, NativeAccessSpecifierPublic)
	struct FLightingSpecifics                          LightingAtlanta;                                           // 0x0070(0x0030) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      TextureCube[0x30];                                         // 0x00A0(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct DeadByDaylight.DirectionalHeightFogInterpolationValues
// 0x0050
struct FDirectionalHeightFogInterpolationValues
{
	float                                              FogDensity;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FogInscatteringColor;                                      // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DirectionalInscatteringExponent;                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DirectionalInscatteringStartDistance;                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DirectionalInscatteringColor;                              // 0x001C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FogHeightFalloff;                                          // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FogMaxOpacity;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartDistance;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHeightFogGradientEntry>             FogGradient;                                               // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceUntilFlatFog;                                      // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceUntilNoFog;                                        // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LoadingTimeoutAnalytics
// 0x0058 (0x00C0 - 0x0068)
struct FLoadingTimeoutAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     match_id;                                                  // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     lobby_id;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     timeout_timestamp;                                         // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              total_load_time;                                           // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0KT1[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     current_map_name;                                          // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     transition_id;                                             // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LoadingStepAnalytics
// 0x0068 (0x00D0 - 0x0068)
struct FLoadingStepAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     match_id;                                                  // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     lobby_id;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     step_change_timestamp;                                     // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     loading_step;                                              // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              time_on_prev_step;                                         // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              total_load_time;                                           // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     current_map_name;                                          // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     transition_id;                                             // 0x00C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LoadoutSlotUnlockLevelValue
// 0x0008 (0x0010 - 0x0008)
struct FLoadoutSlotUnlockLevelValue : public FDBDTableRowBase
{
	DeadByDaylight_ELoadoutSlot                        loadoutSlot;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A3XV[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BloodwebLevel;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LobbyPlayerData
// 0x0058
struct FLobbyPlayerData
{
	unsigned char                                      UnknownData_98YY[0x58];                                    // 0x0000(0x0058) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.lock
// 0x0008
struct Flock
{
	TWeakObjectPtr<class UObject>                      _lockingObject;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.KillerClosetActorsTypes
// 0x0030 (0x0038 - 0x0008)
struct FKillerClosetActorsTypes : public FDBDTableRowBase
{
	unsigned char                                      ClosetActorClass[0x30];                                    // 0x0008(0x0030) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct DeadByDaylight.GameEventLogAnalytics
// 0x0010 (0x0078 - 0x0068)
struct FGameEventLogAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     EventName;                                                 // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LogAnalytics
// 0x0010 (0x0078 - 0x0068)
struct FLogAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     message;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LoudNoiseIndicatorData
// 0x0020
struct FLoudNoiseIndicatorData
{
	class UStaticMeshComponent*                        MeshMask;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        DistortionMesh;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     location;                                                  // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemainingTime;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.MainMenuButtonData
// 0x0088 (0x0090 - 0x0008)
struct FMainMenuButtonData : public FDBDTableRowBase
{
	DeadByDaylight_EMainMenuButton                     ButtonType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C3LY[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Label;                                                     // 0x0010(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       InfoTitle;                                                 // 0x0028(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       InfoDescription;                                           // 0x0040(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       LockedInfoTitle;                                           // 0x0058(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       LockedInfoDescription;                                     // 0x0070(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               IsDisabled;                                                // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsLocked;                                                  // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsHidden;                                                  // 0x008A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZAVZ[0x5];                                     // 0x008B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.TileProperties
// 0x0078
struct FTileProperties
{
	unsigned char                                      UnknownData_EQFH[0x78];                                    // 0x0000(0x0078) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.MatchmakingContextData
// 0x0004
struct FMatchmakingContextData
{
	uint32_t                                           ContextId;                                                 // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.MatchRatingAnalytics
// 0x0018 (0x0080 - 0x0068)
struct FMatchRatingAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                Rating;                                                    // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z7WW[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MatchId;                                                   // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.MemoryUsageAnalytics
// 0x0040 (0x00A8 - 0x0068)
struct FMemoryUsageAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     GameFlowStep;                                              // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            TotalPhysical;                                             // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            TotalVirtual;                                              // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            PeakUsedPhysical;                                          // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            PeakUsedVirtual;                                           // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            AvailablePhysical;                                         // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            AvailableVirtual;                                          // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.MenuIndexChangeEventData
// 0x0004
struct FMenuIndexChangeEventData
{
	int                                                index;                                                     // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.MenuRoleChangeEventData
// 0x0001
struct FMenuRoleChangeEventData
{
	DBDSharedTypes_EPlayerRole                         playerRole;                                                // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.GameInfoEventData
// 0x0002
struct FGameInfoEventData
{
	DBDSharedTypes_EPlayerRole                         playerRole;                                                // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EGameType                           GameType;                                                  // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.MontageInstanceInfo
// 0x0030
struct FMontageInstanceInfo
{
	unsigned char                                      UnknownData_96NP[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.NamedButton
// 0x0018
struct FNamedButton
{
	int                                                ClickCounter;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R6HR[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DisplayName;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.NodeContentDistributionValue
// 0x0058 (0x0060 - 0x0008)
struct FNodeContentDistributionValue : public FDBDTableRowBase
{
	int                                                Empty_Weight;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Empty_MinCount;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Empty_MaxCount;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Perks_Weight;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Perks_MinCount;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Perks_MaxCount;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PerksPacks_Weight;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PerksPacks_MinCount;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PerksPacks_MaxCount;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offerings_Weight;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offerings_MinCount;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offerings_MaxCount;                                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Items_Weight;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Items_MinCount;                                            // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Items_MaxCount;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AddOn_Weight;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AddOn_MinCount;                                            // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AddOn_MaxCount;                                            // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Chests_Weight;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Chests_MinCount;                                           // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Chests_MaxCount;                                           // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LMC8[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.OfferingEffect
// 0x0028
struct FOfferingEffect
{
	DeadByDaylight_EOfferingEffectType                 type;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_153P[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               tags;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Value;                                                     // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              modifier;                                                  // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.OfferingProperties
// 0x0038 (0x0190 - 0x0158)
struct FOfferingProperties : public FItemData
{
	DeadByDaylight_EOfferingType                       OfferingType;                                              // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanUseAfterEventEnd;                                       // 0x0159(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TO2Y[0x6];                                     // 0x015A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               tags;                                                      // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOfferingEffect>                     Effects;                                                   // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BigIconFilePath;                                           // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.OfferingTypeTexture
// 0x0030
struct FOfferingTypeTexture
{
	struct FName                                       type;                                                      // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SOEW[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftObjectPath                             TextureBack;                                               // 0x0010(0x0020) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.RarityTexture
// 0x0030
struct FRarityTexture
{
	struct FName                                       type;                                                      // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OL4E[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftObjectPath                             texture;                                                   // 0x0010(0x0020) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.OfferingRevealDelays
// 0x0008
struct FOfferingRevealDelays
{
	DeadByDaylight_EOfferingSequenceState              RevealState;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N1UH[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              delay;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.OfferingTriggerPositionData
// 0x000C
struct FOfferingTriggerPositionData
{
	int                                                index;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              posX;                                                      // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PosY;                                                      // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.DBDQueueTimeInfo
// 0x0018
struct FDBDQueueTimeInfo
{
	unsigned char                                      UnknownData_AMZ4[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.DBDConnectionStatus
// 0x0010
struct FDBDConnectionStatus
{
	unsigned char                                      UnknownData_U24Y[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDGameInstance*                            _gameInstance;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.DBDSearchParams
// 0x0080
struct FDBDSearchParams
{
	unsigned char                                      UnknownData_MK4D[0x80];                                    // 0x0000(0x0080) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.DBDJoinParams
// 0x0001
struct FDBDJoinParams
{
	DeadByDaylight_EGameType                           GameType;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.OutfitData
// 0x0100 (0x0108 - 0x0008)
struct FOutfitData : public FDBDTableRowBase
{
	struct FName                                       Id;                                                        // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PFGH[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemUIData                                 UIData;                                                    // 0x0018(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FitemAvailability                           Availability;                                              // 0x0090(0x0030) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FName>                               OutfitItems;                                               // 0x00C0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       CollectionName;                                            // 0x00D0(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       CollectionDescription;                                     // 0x00E8(0x0018) (Edit, NativeAccessSpecifierPublic)
	bool                                               IsAvailableInAtlantaBuild;                                 // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R6PN[0x7];                                     // 0x0101(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.OutfitDropdown
// 0x000C (0x0014 - 0x0008)
struct FOutfitDropdown : public FCharacterDropdown
{
	struct FName                                       outfitId;                                                  // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SurvivorInfoData
// 0x0038
struct FSurvivorInfoData
{
	unsigned char                                      UnknownData_PBGG[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.PalletPushSettings
// 0x0002
struct FPalletPushSettings
{
	bool                                               IgnorePlayerExecutingPulldown;                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EPalletPushSideStrategy             PalletPushSideStrategy;                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PartyJoinFailureAnalyticsController
// 0x0001
struct FPartyJoinFailureAnalyticsController
{
	unsigned char                                      UnknownData_OPCE[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.PartyJoinFailureAnalytics
// 0x0018 (0x0080 - 0x0068)
struct FPartyJoinFailureAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     PartyMembersFriendshipStatus;                              // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           NumKrakenConfirmedFriendsInParty;                          // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           NumPlatformAcceptedFriendsInParty;                         // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PartyMemberUIData
// 0x0030
struct FPartyMemberUIData
{
	bool                                               _isLocalPlayer;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isReady;                                                  // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9G1Q[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     _mirrorId;                                                 // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     _playerName;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _playerId;                                                 // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y14W[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.PerformanceAnalytics
// 0x01B0 (0x0218 - 0x0068)
struct FPerformanceAnalytics : public FUniquelyIdentifiedAnalytic
{
	float                                              AverageFPS;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinFPS;                                                    // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFPS;                                                    // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageFrameTime;                                          // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinFrameTime;                                              // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFrameTime;                                              // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StandardDeviationFrameTime;                                // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow60msFrameTime;                                 // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow47msFrameTime;                                 // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow34msFrameTime;                                 // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow17msFrameTime;                                 // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentHitchesFrameTime;                                   // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageRenderThreadTime;                                   // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRenderThreadTime;                                       // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRenderThreadTime;                                       // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StandardDeviationRenderThreadTime;                         // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow60msRenderThreadTime;                          // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow47msRenderThreadTime;                          // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow34msRenderThreadTime;                          // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow17msRenderThreadTime;                          // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentHitchesRenderThreadTime;                            // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageGameThreadTime;                                     // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinGameThreadTime;                                         // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxGameThreadTime;                                         // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StandardDeviationGameThreadTime;                           // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow60msGameThreadTime;                            // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow47msGameThreadTime;                            // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow34msGameThreadTime;                            // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow17msGameThreadTime;                            // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentHitchesGameThreadTime;                              // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageRhiThreadTime;                                      // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRhiThreadTime;                                          // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRhiThreadTime;                                          // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StandardDeviationRhiThreadTime;                            // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow60msRhiThreadTime;                             // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow47msRhiThreadTime;                             // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow34msRhiThreadTime;                             // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow17msRhiThreadTime;                             // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentHitchesRhiThreadTime;                               // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageGpuTime;                                            // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinGpuTime;                                                // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxGpuTime;                                                // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StandardDeviationGpuTime;                                  // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow60msGpuTime;                                   // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow47msGpuTime;                                   // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow34msGpuTime;                                   // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentBelow17msGpuTime;                                   // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentHitchesGpuTime;                                     // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageGpuTimeBasePass;                                    // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageGpuTimePrepass;                                     // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageGpuTimePostProcess;                                 // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageGpuTimeTranslucency;                                // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageGpuTimeShadowDepth;                                 // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageGpuTimeShadowProjection;                            // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageGpuTimeSSAO;                                        // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageGpuTimeTAA;                                         // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageGpuTimeLights;                                      // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V4KZ[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AllGpuMarkers;                                             // 0x0150(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AllGpuMarkersAverageTime;                                  // 0x0160(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageSlateTickTime;                                      // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageSlateRenderThreadTime;                              // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageSlateDrawWindowTime;                                // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalFrames;                                               // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ResolutionQuality;                                         // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ViewDistanceQuality;                                       // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AntiAliasingQuality;                                       // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShadowQuality;                                             // 0x018C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TextureQuality;                                            // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EffectsQuality;                                            // 0x0194(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FoliageQuality;                                            // 0x0198(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DZSM[0x4];                                     // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     scenario;                                                  // 0x01A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     theme;                                                     // 0x01B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     mapName;                                                   // 0x01C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileListCount;                                             // 0x01D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                seed;                                                      // 0x01D4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterName;                                             // 0x01D8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Cpu;                                                       // 0x01E8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GpuAdapter;                                                // 0x01F8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0208(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PerformanceChartingAnalytics
// 0x0140 (0x01A8 - 0x0068)
struct FPerformanceChartingAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     scenario;                                                  // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     theme;                                                     // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     map_name;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                tile_spawn_count;                                          // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                seed;                                                      // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     match_id;                                                  // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     character_name;                                            // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     cpu_name;                                                  // 0x00C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     gpu_name;                                                  // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     resolution;                                                // 0x00E0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                graphics_quality_level;                                    // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_38XD[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     hitch_times;                                               // 0x00F8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              target_30_fps;                                             // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              target_60_fps;                                             // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              target_120_fps;                                            // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              measured_perf_time;                                        // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              mvp;                                                       // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              avg_fps;                                                   // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              hitches_per_minute;                                        // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              avg_hitch;                                                 // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              frame_time_avg;                                            // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              frame_time_max;                                            // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              frame_time_min;                                            // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              game_thread_avg;                                           // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              game_thread_hitches_per_min;                               // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              game_thread_bound_frames;                                  // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              render_thread_avg;                                         // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              render_thread_hitches_per_min;                             // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              render_thread_bound_frames;                                // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              rhi_thread_avg;                                            // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              rhi_thread_hitches_per_min;                                // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              rhi_thread_bound_frames;                                   // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              gpu_avg;                                                   // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              gpu_hitches_per_min;                                       // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              gpu_bound_frames;                                          // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              draw_calls_avg;                                            // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              draw_calls_max;                                            // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              draw_calls_min;                                            // 0x016C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              drawn_prims_avg;                                           // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              drawn_prims_max;                                           // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              drawn_prims_min;                                           // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              cpu_memory_peak;                                           // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              cpu_memory_used;                                           // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              streaming_memory_peak;                                     // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              streaming_memory_used;                                     // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              physical_memory_peak;                                      // 0x018C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              physical_memory_used;                                      // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XQS2[0x4];                                     // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     texturegroups_guid;                                        // 0x0198(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PerkLevelText
// 0x0028
struct FPerkLevelText
{
	TArray<struct FString>                             tunables;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       TextOverride;                                              // 0x0010(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PerkProperties
// 0x0120 (0x0278 - 0x0158)
struct FPerkProperties : public FItemData
{
	TArray<struct FName>                               tags;                                                      // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOfferingEffect>                     Effects;                                                   // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AssociatedPlayerIndex;                                     // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MandatoryOnBloodweblevel;                                  // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeachableOnBloodweblevel;                                  // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AtlantaTeachableLevel;                                     // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<DeadByDaylight_EPerkCategory>               PerkCategory;                                              // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PerkBlueprint[0x30];                                       // 0x0198(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	TArray<DBDSharedTypes_EItemRarity>                 PerkLevelRarity;                                           // 0x01C8(0x0010) (Edit, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       PerkDefaultDescription;                                    // 0x01D8(0x0018) (Edit, EditFixedSize, NativeAccessSpecifierPublic)
	TArray<struct FPerkLevelText>                      PerkLevelTunables;                                         // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       PerkLevel1Description;                                     // 0x0200(0x0018) (Edit, EditFixedSize, NativeAccessSpecifierPublic)
	struct FText                                       PerkLevel2Description;                                     // 0x0218(0x0018) (Edit, EditFixedSize, NativeAccessSpecifierPublic)
	struct FText                                       PerkLevel3Description;                                     // 0x0230(0x0018) (Edit, EditFixedSize, NativeAccessSpecifierPublic)
	TArray<struct FString>                             AtlantaActivatableInteractionIDs;                          // 0x0248(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           PlatformsForPerkUnlicensedDescriptionOverride;             // 0x0258(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_47P4[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       PerkUnlicensedDescriptionOverride;                         // 0x0260(0x0018) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PerkAcquisitionAnalytics
// 0x0048 (0x00B0 - 0x0068)
struct FPerkAcquisitionAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     CharacterName;                                             // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     perkID;                                                    // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PerkSource;                                                // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Duplicate;                                                 // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                perkLevel;                                                 // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I18F[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.BasePerkAnalytics
// 0x0018 (0x0080 - 0x0068)
struct FBasePerkAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchId;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ElapsedMatchTime;                                          // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PAD0[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.FranklinsHitNearDroppedItemAnalytics
// 0x0020 (0x00A0 - 0x0080)
struct FFranklinsHitNearDroppedItemAnalytics : public FBasePerkAnalytics
{
	struct FString                                     HitSurvivorMirrorsId;                                      // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AttackingSlasherMirrorsId;                                 // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.FranklinsDemiseConsumedItemAnalytics
// 0x0010 (0x0090 - 0x0080)
struct FFranklinsDemiseConsumedItemAnalytics : public FBasePerkAnalytics
{
	struct FString                                     PreviousOwnerSurvivorMirrorsId;                            // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.KnockoutSurvivorFoundAnalytics
// 0x0020 (0x00A0 - 0x0080)
struct FKnockoutSurvivorFoundAnalytics : public FBasePerkAnalytics
{
	struct FString                                     RescuingSurvivorMirrorsId;                                 // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FoundSurvivorMirrorsId;                                    // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.TinkererUndetectableInterruptAnalytics
// 0x0020 (0x00A0 - 0x0080)
struct FTinkererUndetectableInterruptAnalytics : public FBasePerkAnalytics
{
	struct FString                                     InterruptedSurvivorMirrorsId;                              // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InterruptingSlasherMirrorsId;                              // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.TinkererUndetectableHitNearGeneratorAnalytics
// 0x0020 (0x00A0 - 0x0080)
struct FTinkererUndetectableHitNearGeneratorAnalytics : public FBasePerkAnalytics
{
	struct FString                                     HitSurvivorMirrorsId;                                      // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AttackingSlasherMirrorsId;                                 // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LightbornAuraRevealedAnalytics
// 0x0020 (0x00A0 - 0x0080)
struct FLightbornAuraRevealedAnalytics : public FBasePerkAnalytics
{
	struct FString                                     RevealedSurvivorMirrorsId;                                 // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FlashlightedSlasherMirrorsId;                              // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PlatformDlcData
// 0x00D0 (0x00D8 - 0x0008)
struct FPlatformDlcData : public FDBDTableRowBase
{
	struct FString                                     Id;                                                        // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       UnlockDescription;                                         // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     description;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UISortOrder;                                               // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PVTD[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DlcIdSteam;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     DlcIdDmm;                                                  // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     DlcIdPS4;                                                  // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     DlcIdXB1;                                                  // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     DlcIdXSX;                                                  // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     DlcIdSwitch;                                               // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     DlcIdGRDK;                                                 // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     DlcIdPS5;                                                  // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     DlcIdStadia;                                               // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct DeadByDaylight.PlayerLevelData
// 0x000C
struct FPlayerLevelData
{
	int                                                LevelValue;                                                // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PrestigeValue;                                             // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxXp;                                                     // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PlayerReadyStatusData
// 0x0008
struct FPlayerReadyStatusData
{
	int                                                playerId;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isReady;                                                   // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isSlasher;                                                 // 0x0005(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsLocalPlayer;                                             // 0x0006(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MGA9[0x1];                                     // 0x0007(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.PlayerRankData
// 0x0018
struct FPlayerRankData
{
	struct FString                                     mirrorsId;                                                 // 0x0000(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         playerRole;                                                // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2EJM[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PlayerRankForRole;                                         // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PlayerRoundStartEventData
// 0x0028
struct FPlayerRoundStartEventData
{
	DBDSharedTypes_EPlayerRole                         playerRole;                                                // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsABot;                                                    // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EAIDifficultyLevel                  BotDifficultyLevel;                                        // 0x0002(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1H6S[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CharacterId;                                               // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerRankForRole;                                         // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                prestigeLevel;                                             // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BloodwebLevel;                                             // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Pips;                                                      // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerRankData>                     PlayerRankDataArray;                                       // 0x0018(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PreLevelGenerationModifierProperties
// 0x0018 (0x0020 - 0x0008)
struct FPreLevelGenerationModifierProperties : public FDBDTableRowBase
{
	struct FName                                       ModifierID;                                                // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DeadByDaylight_EPreLevelGenerationModifierType     ModifierType;                                              // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EKillerAbilities                    KillerAbiliy;                                              // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UVWI[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              modifierValue;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VH9V[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.PrestigeIconData
// 0x0038 (0x0040 - 0x0008)
struct FPrestigeIconData : public FDBDTableRowBase
{
	DBDSharedTypes_EPlayerRole                         playerRole;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H7NC[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                prestigeLevel;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      icon[0x30];                                                // 0x0010(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct DeadByDaylight.ProceduralMap
// 0x00B8 (0x00C0 - 0x0008)
struct FProceduralMap : public FDBDTableRowBase
{
	struct FName                                       mapId;                                                     // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MRI3[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       name;                                                      // 0x0018(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       themeName;                                                 // 0x0030(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0048(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              HookMinDistance;                                           // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HookMinCount;                                              // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HookMaxCount;                                              // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BookShelvesMinDistance;                                    // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BookShelvesMinCount;                                       // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BookShelvesMaxCount;                                       // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LivingWorldObjectsMinCount;                                // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LivingWorldObjectsMaxCount;                                // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ThumbnailPath;                                             // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SortingIndex;                                              // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KD34[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DlcIDString;                                               // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        FixedLayoutSeed;                                           // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInNonViolentBuild;                                       // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V72L[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.ArrayOfSceneComponent
// 0x0010
struct FArrayOfSceneComponent
{
	TArray<class USceneComponent*>                     SceneComp;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ManagedGameplayElementData
// 0x0050
struct FManagedGameplayElementData
{
	unsigned char                                      UnknownData_ZHRX[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UActorSpawner*>                       ActivatedSpawners;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UActorSpawner*>                       RemovedSpawners;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EGameplayElementType                PopulationType;                                            // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9VW2[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentPopulationCost;                                     // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPopulationCost;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinPopulationCost;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MapWidth;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinProximityBetweenElements;                               // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistSqrBetweenElements;                                 // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TileWidth;                                                 // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FactorToAdjustToWhenOutOfProximity;                        // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HVO3[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.ForceSpawnTileData
// 0x0020
struct FForceSpawnTileData
{
	struct FString                                     name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                matrixX;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                matrixY;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                rotation;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N56T[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.Dependency
// 0x0038
struct FDependency
{
	DeadByDaylight_ETileSpawnPointType                 type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D52R[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftObjectPath                             AssetReference;                                            // 0x0008(0x0020) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      Object;                                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               Unique;                                                    // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZZBJ[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Count;                                                     // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct DeadByDaylight.GeneratedLevelData
// 0x02A0
struct FGeneratedLevelData
{
	struct FString                                     UsedPaperTileMap;                                          // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     premadeMap;                                                // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AvailableEscapeCount;                                      // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AvailableSurvivorItemCount;                                // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ESurvivorGrouping                   GroupingType;                                              // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6RMZ[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             KillerSpawnPoint;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USceneComponent*>                     SurvivorSpawnPoints;                                       // 0x0038(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USceneComponent*>                     InteractableElementsSpawnPoints;                           // 0x0048(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, int>                            SpecialBehaviourRequestCounts;                             // 0x0058(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FArrayOfSceneComponent>  SpecialBehaviourSpawnPoints;                               // 0x00A8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class USceneComponent*>                     SearchableSpawners;                                        // 0x00F8(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USceneComponent*>                     HexSpawners;                                               // 0x0108(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USceneComponent*>                     KillerLairSpawners;                                        // 0x0118(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USceneComponent*>                     HatchSpawners;                                             // 0x0128(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USceneComponent*>                     MainBuildingHatchSpawners;                                 // 0x0138(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USceneComponent*>                     ShackHatchSpawners;                                        // 0x0148(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USceneComponent*>                     BreakableWallSpawners;                                     // 0x0158(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USceneComponent*>                     EscapeSpawners;                                            // 0x0168(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FManagedGameplayElementData                 BookshelfManagedGameplayElementData;                       // 0x0178(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FManagedGameplayElementData                 MeatHookManagedGameplayElementData;                        // 0x01C8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FDependency>                         LevelDependencies;                                         // 0x0218(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class Uactor*>                              FixedMapTileIds;                                           // 0x0228(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class Uactor*>                              FixedMapOrphanSpawners;                                    // 0x0238(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       specialEventId;                                            // 0x0248(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseForcedMap;                                              // 0x0254(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UsePremadeMap;                                             // 0x0255(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KEOL[0x2];                                     // 0x0256(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GenerationLogs;                                            // 0x0258(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GenerationErrors;                                          // 0x0268(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                generationPlayerCount;                                     // 0x0278(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y5M4[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FForceSpawnTileData>                 ForceSpawnTileData;                                        // 0x0280(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class Uactor*>                              LevelLightings;                                            // 0x0290(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SectionLenghtsProperties
// 0x0008
struct FSectionLenghtsProperties
{
	DeadByDaylight_EDirection                          direction;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VP7N[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Lenght;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.QuadrantSpawnTypeProperties
// 0x0018
struct FQuadrantSpawnTypeProperties
{
	DeadByDaylight_EQuadrantSpawnType                  QuadrantSpawnType;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G6G0[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSectionLenghtsProperties>           SectionLenghts;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SurvivorItemProperties
// 0x000C
struct FSurvivorItemProperties
{
	DeadByDaylight_ECollectableCategory                category;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GHS1[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Weight;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPopulation;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.EscapeTypeObjects
// 0x0018
struct FEscapeTypeObjects
{
	DeadByDaylight_EscapeStrategyType                  type;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YFOR[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      EscapeObjects[0x10];                                       // 0x0001(0x0010) UNKNOWN PROPERTY: ArrayProperty

};

// ScriptStruct DeadByDaylight.KillerItemProperty
// 0x0040
struct FKillerItemProperty
{
	unsigned char                                      Object[0x30];                                              // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	class UCurveFloat*                                 Population;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	DeadByDaylight_EGameplayElementType                _gameplayElementType;                                      // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CP7S[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.KillerItemDependencies
// 0x0018
struct FKillerItemDependencies
{
	DBDSharedTypes_EKillerAbilities                    KillerAbility;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KWQT[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKillerItemProperty>                 Items;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.EscapeStrategyProperty
// 0x0018
struct FEscapeStrategyProperty
{
	DeadByDaylight_EscapeStrategyType                  type;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TKZ8[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 Population;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z6RM[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.ManagedGameplayElementsPopulation
// 0x0048
struct FManagedGameplayElementsPopulation
{
	DeadByDaylight_EGameplayElementType                type;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6OIO[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      GameplayElementBlueprint[0x30];                            // 0x0001(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	float                                              MinDistance;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinPopulation;                                             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPopulation;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_83B3[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.GameplayElementsPopulation
// 0x0048
struct FGameplayElementsPopulation
{
	DeadByDaylight_EGameplayElementType                type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LNXM[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      GameplayElementBlueprint[0x30];                            // 0x0001(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	int                                                MinPopulation;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MaxPopulation;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MinGuaranteePopulation;                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                SpawnPass;                                                 // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.SurvivorGroupingProbability
// 0x0008
struct FSurvivorGroupingProbability
{
	DeadByDaylight_ESurvivorGrouping                   type;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V3OC[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Probability;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ThemeProperties
// 0x00B8
struct FThemeProperties
{
	struct FName                                       name;                                                      // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Weather;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       audioStateThemes;                                          // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       audioStateWeather;                                         // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       audioGameStartEvent;                                       // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XR40[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TilePath;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapPath;                                                   // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ThemeNumber;                                               // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LH2X[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0068(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	DBDSharedTypes_EThemeColorId                       ThemeColorId;                                              // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EOfferingEffectType                 ThemeSelectionOfferingEffectType;                          // 0x0081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MYZ8[0x6];                                     // 0x0082(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayElementSubstitutions>       SubstitutionElements;                                      // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DlcIDString;                                               // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardData*                             Blackboard;                                                // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Gesture;                                                   // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NSXN[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.WeightedItem
// 0x0038
struct FWeightedItem
{
	unsigned char                                      Element[0x30];                                             // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	float                                              Weight;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3C8T[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.QuadrantSpawnItem
// 0x0018
struct FQuadrantSpawnItem
{
	DeadByDaylight_EQuadrantSpawnType                  type;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VKYX[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWeightedItem>                       Elements;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.QuadrantSpawnCategories
// 0x0020
struct FQuadrantSpawnCategories
{
	struct FName                                       QuadrantSpawnTag;                                          // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FTS4[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FQuadrantSpawnItem>                  Items;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.GenerationParams
// 0x0004
struct FGenerationParams
{
	int                                                seed;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ProfileLoadEventData
// 0x0010
struct FProfileLoadEventData
{
	bool                                               FirstTimePlaying;                                          // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IPSK[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   timestamp;                                                 // 0x0008(0x0008) (ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.RankUIData
// 0x0060 (0x0068 - 0x0008)
struct FRankUIData : public FDBDTableRowBase
{
	int                                                rank;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         playerRole;                                                // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WCRZ[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 color;                                                     // 0x0010(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      Frame[0x30];                                               // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct DeadByDaylight.RarityDistributionValue
// 0x0010 (0x0018 - 0x0008)
struct FRarityDistributionValue : public FDBDTableRowBase
{
	int                                                InnerRing;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRing;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRing;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YU8O[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.ReceiverTerrorRadiusOverride
// 0x0010
struct FReceiverTerrorRadiusOverride
{
	unsigned char                                      UnknownData_B52X[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.DBDRecentGameplayEvents
// 0x0050
struct FDBDRecentGameplayEvents
{
	TMap<DeadByDaylight_EDBDScoreTypes, struct FDateTime> _recentGameplayEvents;                                     // 0x0000(0x0050) (NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.Region
// 0x0020
struct FRegion
{
	struct FName                                       Region;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TR9G[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     IP;                                                        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.RewardItemData
// 0x0038
struct FRewardItemData
{
	struct FString                                     iconPath;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     title;                                                     // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     description;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EInventoryItemType                  itemType;                                                  // 0x0031(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDuplicate;                                               // 0x0032(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECurrencyType                       currencyType;                                              // 0x0033(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrencyAmount;                                            // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.S3CommandErrorAnalytics
// 0x0030 (0x0098 - 0x0068)
struct FS3CommandErrorAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     Url;                                                       // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Verb;                                                      // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ResponseCode;                                              // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InvalidRequest;                                            // 0x008C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InvalidResponse;                                           // 0x008D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DecryptionFailure;                                         // 0x008E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BadResponse;                                               // 0x008F(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ContentModifiedError;                                      // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PKWK[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.S3CommandAnalytics
// 0x0060 (0x00C8 - 0x0068)
struct FS3CommandAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                RequestContentLength;                                      // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ROGE[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ContentType;                                               // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ElapsedTime;                                               // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UG4J[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Status;                                                    // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Url;                                                       // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Verb;                                                      // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ResponseContentLength;                                     // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ResponseCode;                                              // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OOPX[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.SaveGameLoadResultAnalytics
// 0x0018 (0x0080 - 0x0068)
struct FSaveGameLoadResultAnalytics : public FUniquelyIdentifiedAnalytic
{
	bool                                               LoadSuccessful;                                            // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QJWP[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     message;                                                   // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SaveGameSaveResultAnalytics
// 0x0008 (0x0070 - 0x0068)
struct FSaveGameSaveResultAnalytics : public FUniquelyIdentifiedAnalytic
{
	bool                                               SaveSuccessful;                                            // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CO9I[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ResponseCode;                                              // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SaveGameErrorAnalytics
// 0x0030 (0x0098 - 0x0068)
struct FSaveGameErrorAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                errorCode;                                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KKBB[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     category;                                                  // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorDetails;                                              // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           KrakenErrorCode;                                           // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_31CB[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.ShopAnalyticsController
// 0x0001
struct FShopAnalyticsController
{
	unsigned char                                      UnknownData_WT1D[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.ShopAnalytics
// 0x0010 (0x0078 - 0x0068)
struct FShopAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     LogMessage;                                                // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SimpleCharacterDropdown
// 0x0004
struct FSimpleCharacterDropdown
{
	int                                                CharacterId;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CharacterCameraTag
// 0x0018
struct FCharacterCameraTag
{
	class UCameraActor*                                camera;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSimpleCharacterDropdown>            characters;                                                // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.skillCheckResponse
// 0x0018
struct FskillCheckResponse
{
	float                                              chargeChange;                                              // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsTriggeredByInput;                                        // 0x0004(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsSuccessful;                                              // 0x0005(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsBonus;                                                   // 0x0006(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInsane;                                                  // 0x0007(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_ESkillCheckCustomType               type;                                                      // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsTriggeringLoudNoise;                                     // 0x0009(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9XP7[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChargeableInteractionDefinition*            interaction;                                               // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SkillCheckDefinition
// 0x0018
struct FSkillCheckDefinition
{
	float                                              SuccessZoneStart;                                          // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SuccessZoneEnd;                                            // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BonusZoneLength;                                           // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProgressRate;                                              // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              warningSoundDelay;                                         // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsJittering;                                               // 0x0014(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G943[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.OutlineRevealDescription
// 0x0070
struct FOutlineRevealDescription
{
	unsigned char                                      UnknownData_RFMF[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UdbdPlayer*>                          _affectedCharacters;                                       // 0x0038(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PPUO[0x28];                                    // 0x0048(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.SpawnPopulationHandler
// 0x00C8
struct FSpawnPopulationHandler
{
	unsigned char                                      UnknownData_ABQ0[0xB8];                                    // 0x0000(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USceneComponent*>                     _allAvailableSpawners;                                     // 0x00B8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.SpecialBehaviourPopulation
// 0x0060
struct FSpecialBehaviourPopulation
{
	struct FName                                       _name;                                                     // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3TJ2[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<DeadByDaylight_EGameplayElementType>        _spawnerTypes;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<DeadByDaylight_ETileSpawnPointType>         _spawnPointTypes;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _actor[0x30];                                              // 0x0030(0x0030) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct DeadByDaylight.SpecialEventBaseAnalytics
// 0x0040 (0x00A8 - 0x0068)
struct FSpecialEventBaseAnalytics : public FUniquelyIdentifiedAnalytic
{
	DBDSharedTypes_EPlayerRole                         role;                                                      // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6WG7[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MatchId;                                                   // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EventName;                                                 // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Challenge;                                                 // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                    // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartAmount;                                               // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndAmount;                                                 // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EZTT[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.SpecialEventObjectiveData
// 0x00E0
struct FSpecialEventObjectiveData
{
	struct FName                                       objectiveId;                                               // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IVKN[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       title;                                                     // 0x0010(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0028(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FString                                     iconPath;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ObjectiveFrameLabel;                                       // 0x0050(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       CompletedTitle;                                            // 0x0060(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       CompletedDescription;                                      // 0x0078(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FName                                       RewardId;                                                  // 0x0090(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7H9E[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LockedRewardGenericIconPath;                               // 0x00A0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UnlockedRewardGenericIconPath;                             // 0x00B0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         playerRole;                                                // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TMHY[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     statName;                                                  // 0x00C8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Sections;                                                  // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           MaxValue;                                                  // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SpecialEventCinematicData
// 0x0028
struct FSpecialEventCinematicData
{
	struct FDateTime                                   startTime;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       VideoThumbnailId;                                          // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4J88[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     VideoIconPath;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.specialEventData
// 0x00D0 (0x00D8 - 0x0008)
struct FspecialEventData : public FDBDTableRowBase
{
	struct FName                                       eventId;                                                   // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECurrencyType                       currencyType;                                              // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RKXO[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       EventName;                                                 // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     EventBannerLabel;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsTrackedOnline;                                           // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseSpecialEventLoadingScreen;                              // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4OZT[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSpecialEventObjectiveData>          Objectives;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fcolor                                      ObjectOutlineColour;                                       // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OGWT[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbyName;                                                 // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ShopName;                                                  // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AudioStateSpecialEvent;                                    // 0x0080(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YCSN[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      GameplayComponent[0x30];                                   // 0x008C(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	TArray<struct FSpecialEventCinematicData>          cinematics;                                                // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ESpecialEventGameMode               GameMode;                                                  // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LVBR[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.SpecialEventLoadingTextData
// 0x0050 (0x0058 - 0x0008)
struct FSpecialEventLoadingTextData : public FDBDTableRowBase
{
	struct FName                                       eventId;                                                   // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E9T3[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       title;                                                     // 0x0018(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0030(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     iconPath;                                                  // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.StatusEffectProperties
// 0x0048 (0x01A0 - 0x0158)
struct FStatusEffectProperties : public FItemData
{
	TArray<struct FName>                               tags;                                                      // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      StatusEffectBlueprint[0x30];                               // 0x0168(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	DBDSharedTypes_EStatusEffectType                   StatusEffectType;                                          // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EExternalEffectSource               ExternalEffectSource;                                      // 0x0199(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UTDS[0x6];                                     // 0x019A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.StatusEffectSlotData
// 0x0048
struct FStatusEffectSlotData
{
	struct FString                                     Id;                                                        // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IconFilePath;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     description;                                               // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EStatusEffectType                   StatusEffectType;                                          // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q16C[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                level;                                                     // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.StatusViewProperties
// 0x00B8 (0x00C0 - 0x0008)
struct FStatusViewProperties : public FDBDTableRowBase
{
	struct FName                                       statusViewID;                                              // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0BGS[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       description;                                               // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DisplayName;                                               // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      StatusViewBlueprint[0x30];                                 // 0x0048(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	DBDSharedTypes_EStatusEffectType                   StatusType;                                                // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KPLY[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     IconFilePath;                                              // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      IconAsset[0x30];                                           // 0x0090(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct DeadByDaylight.statusViewSource
// 0x0028
struct FstatusViewSource
{
	struct FName                                       SourceId;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               isActive;                                                  // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RGGB[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _remainingTime;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PercentageFill;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                level;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DeadByDaylight_EInventoryItemType                  SourceType;                                                // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZJZW[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SourceIconIndex;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SourceLevel;                                               // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct DeadByDaylight.StoreFeaturedBannerData
// 0x0080
struct FStoreFeaturedBannerData
{
	unsigned char                                      UnknownData_NVIL[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       title;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       subtitle;                                                  // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     ImagePath;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AssociatedDlcId;                                           // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AssociatedCombinedItemId;                                  // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AssociatedCombinedOutfitId;                                // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ETextBannerPosition                 TextPosition;                                              // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KDB0[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.StoreBannersData
// 0x0098 (0x00A0 - 0x0008)
struct FStoreBannersData : public FDBDTableRowBase
{
	struct FName                                       BannerId;                                                  // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2U4O[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStoreFeaturedBannerData                    BannerData;                                                // 0x0018(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               UseAsDefault;                                              // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EStoreBannerLocation                DefaultLocation;                                           // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9OQ5[0x6];                                     // 0x009A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.InteractionPlayerProperties
// 0x0050
struct FInteractionPlayerProperties
{
	struct FVector_NetQuantize                         AverageVelocityAtStart;                                    // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         PlayerPositionAtStart;                                     // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    PlayerRotationAtStart;                                     // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UdbdPlayer>                   requester;                                                 // 0x0024(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         SnapPositionAtStart;                                       // 0x002C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    SnapRotationAtStart;                                       // 0x0038(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              SnapDistanceAtStart;                                       // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SnapTimeAtStart;                                           // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldSnapPosition;                                        // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_02VP[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.StoredInteraction
// 0x0060
struct FStoredInteraction
{
	TWeakObjectPtr<class UinteractionDefinition>       _interaction;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	DeadByDaylight_EInputInteractionType               _inputType;                                                // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_REB3[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInteractionPlayerProperties                _playerProperties;                                         // 0x000C(0x0050) (Transient, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UFW2[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.StoreFeaturedBannerUIData
// 0x0098
struct FStoreFeaturedBannerUIData
{
	struct FName                                       BannerId;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NS0M[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStoreFeaturedBannerData                    BannerData;                                                // 0x0010(0x0080) (NativeAccessSpecifierPublic)
	bool                                               IsNew;                                                     // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NQG5[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.SurvivorHookTimer
// 0x0038
struct FSurvivorHookTimer
{
	unsigned char                                      UnknownData_MW6F[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.SyncLoadAnalytics
// 0x0050 (0x0068 - 0x0018)
struct FSyncLoadAnalytics : public FBaseSingleStructIndexAnalytics
{
	struct FString                                     AssetName;                                                 // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoadTimeMilliseconds;                                      // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7NR6[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DeviceProfileName;                                         // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BuildConfiguration;                                        // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChangelistNumber;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HJKT[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     mapName;                                                   // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SpecialEventUIInfo
// 0x0050
struct FSpecialEventUIInfo
{
	struct FString                                     eventId;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventBannerFrameLabel;                                     // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       EventName;                                                 // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	bool                                               IsPastEvent;                                               // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S3OU[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BloodwebCollectSoundEvent;                                 // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.InventorySlotData
// 0x00F8
struct FInventorySlotData
{
	struct FName                                       itemId;                                                    // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R0E9[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     IconFilePath;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ParentDisplayName;                                         // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     description;                                               // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<DeadByDaylight_EPerkCategory>               PerkCategory;                                              // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EInventoryItemType                  itemType;                                                  // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x0061(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EStatusEffectType                   StatusEffectType;                                          // 0x0062(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R4KR[0x1];                                     // 0x0063(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                level;                                                     // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     subtitle;                                                  // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                stackCount;                                                // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemAvailability                   Availability;                                              // 0x007C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsTeachablePerk;                                           // 0x007D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsSlasherPerk;                                             // 0x007E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPerkAvailableInFearMarket;                               // 0x007F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPerkAvailableInBloodWeb;                                 // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZANT[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TeachableLevel;                                            // 0x0084(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DlcDisplayName;                                            // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsLocked;                                                  // 0x0098(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FD9U[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSpecialEventUIInfo                         EventInfo;                                                 // 0x00A0(0x0050) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	int                                                UnlockableLevel;                                           // 0x00F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UH1D[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.TallyItemChangedData
// 0x02F0
struct FTallyItemChangedData
{
	struct FInventorySlotData                          Item;                                                      // 0x0000(0x00F8) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FInventorySlotData                          addon1;                                                    // 0x00F8(0x00F8) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FInventorySlotData                          addon2;                                                    // 0x01F0(0x00F8) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	DeadByDaylight_EEnergyTypeEnum                     EnergyType;                                                // 0x02E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AAO4[0x3];                                     // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              energyLevel;                                               // 0x02EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.TallyPlayerResultData
// 0x0278
struct FTallyPlayerResultData
{
	struct FName                                       CharacterIconPath;                                         // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9385[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     playerId;                                                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformAccountId;                                         // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     mirrorsId;                                                 // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerName;                                                // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerScore;                                               // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                playerRank;                                                // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EGameState                          PlayerStatus;                                              // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D320[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInventorySlotData                          OfferingData;                                              // 0x0060(0x00F8) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	TArray<struct FInventorySlotData>                  PerksData;                                                 // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventorySlotData                          ItemData;                                                  // 0x0168(0x00F8) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	TArray<struct FInventorySlotData>                  AddonsData;                                                // 0x0260(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsReported;                                                // 0x0270(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isSlasher;                                                 // 0x0271(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsMyScore;                                                 // 0x0272(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isOffNetwork;                                              // 0x0273(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QGT9[0x4];                                     // 0x0274(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.TallyScorePipsData
// 0x0030
struct FTallyScorePipsData
{
	float                                              threshold;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A8I0[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      PipThresholds;                                             // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEmblemSlotData>                     Scores;                                                    // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PipsDelta;                                                 // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isSlasher;                                                 // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2IWA[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.TexturegroupChartingAnalytics
// 0x0050 (0x00B8 - 0x0068)
struct FTexturegroupChartingAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     texturegroup_name;                                         // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     texturegroups_guid;                                        // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     map_name;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                avg_qty_streaming;                                         // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                max_qty_streaming;                                         // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                avg_memory_streaming;                                      // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                max_memory_streaming;                                      // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                avg_qty_non_streaming;                                     // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                max_qty_non_streaming;                                     // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                avg_memory_non_streaming;                                  // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                max_memory_non_streaming;                                  // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ArrayOfATile
// 0x0010
struct FArrayOfATile
{
	TArray<class UTile*>                               ArrayOfTiles;                                              // 0x0000(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ArrayOfInt32
// 0x0010
struct FArrayOfInt32
{
	TArray<int>                                        Value;                                                     // 0x0000(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.QuadrantInfo
// 0x0020
struct FQuadrantInfo
{
	unsigned char                                      UnknownData_W2WR[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.TransactionAnalyticsController
// 0x00F0
struct FTransactionAnalyticsController
{
	unsigned char                                      UnknownData_XP1A[0xF0];                                    // 0x0000(0x00F0) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.TransactionAnalytics
// 0x0088 (0x00F0 - 0x0068)
struct FTransactionAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     TransactionType;                                           // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TransactionSource;                                         // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SourceId;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SourceTier;                                                // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LGZU[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     currencyType;                                              // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrencyAmount;                                            // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrencyBalance;                                           // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelAchieved;                                             // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                prestige;                                                  // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemIDAcquired;                                            // 0x00C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                rank;                                                      // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SZ58[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     selectedCharacter;                                         // 0x00D8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TransactionTriggeredLevelUp;                               // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UIPX[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.PerPlatformTunable
// 0x0018 (0x0020 - 0x0008)
struct FPerPlatformTunable : public FDBDTableRowBase
{
	struct FperPlatformFloat                           Value;                                                     // 0x0008(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M1Z3[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     description;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.TunableValue
// 0x0020 (0x0028 - 0x0008)
struct FTunableValue : public FDBDTunableRowBase
{
	float                                              Value;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AtlantaOverriddenValue;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     description;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverriddenInAtlanta;                                       // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EPW6[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.TutorialEndReward
// 0x0008 (0x0010 - 0x0008)
struct FTutorialEndReward : public FDBDTableRowBase
{
	int                                                BloodpointReward;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y7EA[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.TutorialLevelData
// 0x0068 (0x0070 - 0x0008)
struct FTutorialLevelData : public FDBDTableRowBase
{
	struct FName                                       Id;                                                        // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TWJ4[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       title;                                                     // 0x0018(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0030(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     iconPath;                                                  // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     mapName;                                                   // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsKillerTutorial;                                          // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_67K0[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.TutorialNotificationData
// 0x0048 (0x0050 - 0x0008)
struct FTutorialNotificationData : public FDBDTableRowBase
{
	struct FText                                       title;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     iconPath;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsShowAnalyticEnabled;                                     // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B3HS[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.TutorialObjective
// 0x0020 (0x0028 - 0x0008)
struct FTutorialObjective : public FDBDTableRowBase
{
	struct FText                                       description;                                               // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               IsCompletionAnalyticEnabled;                               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WVG0[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.TutorialTallyData
// 0x0008
struct FTutorialTallyData
{
	bool                                               isKiller;                                                  // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FirstTimeCompleted;                                        // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ENRU[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BloodpointsScore;                                          // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.RoleItemCategoryDropdown
// 0x0004 (0x000C - 0x0008)
struct FRoleItemCategoryDropdown : public FCharacterDropdown
{
	bool                                               IncludeOutfits;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IncludeNone;                                               // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECustomizationCategory              category;                                                  // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SJC3[0x1];                                     // 0x000B(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.CharacterAnimationDropdown
// 0x001C (0x0028 - 0x000C)
struct FCharacterAnimationDropdown : public FRoleItemCategoryDropdown
{
	unsigned char                                      UnknownData_7R21[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimationAsset*                             animation;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AnimationPath;                                             // 0x0018(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CharacterAnimation
// 0x0038
struct FCharacterAnimation
{
	struct FName                                       Label;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9V1I[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCharacterAnimationDropdown                 data;                                                      // 0x0010(0x0028) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ItemIdDropdown
// 0x000C
struct FItemIdDropdown
{
	struct FName                                       itemId;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ScreenshotViewSetting
// 0x0028
struct FScreenshotViewSetting
{
	float                                              distance;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LateralOffset;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightOffset;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CharacterYaw;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CharacterRoll;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CharacterPitch;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraPitch;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // 0x001C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ItemViewSetting
// 0x0040
struct FItemViewSetting
{
	struct FName                                       Label;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemIdDropdown                             Item;                                                      // 0x000C(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FScreenshotViewSetting                      settings;                                                  // 0x0018(0x0028) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CharacterItemCategoryViewSetting
// 0x0040
struct FCharacterItemCategoryViewSetting
{
	struct FName                                       Label;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRoleItemCategoryDropdown                   CharacterDropdown;                                         // 0x000C(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FScreenshotViewSetting                      settings;                                                  // 0x0018(0x0028) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CharmViewSetting
// 0x0044
struct FCharmViewSetting
{
	struct FName                                       Label;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharmDropdown                              charmId;                                                   // 0x000C(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FScreenshotViewSetting                      settings;                                                  // 0x001C(0x0028) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CharmCategorySetting
// 0x0038
struct FCharmCategorySetting
{
	struct FName                                       Label;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECharmCategory                      CharmCategory;                                             // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5T9J[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScreenshotViewSetting                      settings;                                                  // 0x0010(0x0028) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.OutfitViewSetting
// 0x0048
struct FOutfitViewSetting
{
	struct FName                                       Label;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOutfitDropdown                             OutfitDropdown;                                            // 0x000C(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FScreenshotViewSetting                      settings;                                                  // 0x0020(0x0028) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CharacterViewSetting
// 0x003C
struct FCharacterViewSetting
{
	struct FName                                       Label;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterDropdown                          CharacterDropdown;                                         // 0x000C(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FScreenshotViewSetting                      settings;                                                  // 0x0014(0x0028) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.GenderViewSetting
// 0x0038
struct FGenderViewSetting
{
	struct FRoleItemCategoryDropdown                   RoleItemCategory;                                          // 0x0000(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	DBDSharedTypes_EGender                             Gender;                                                    // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HEP8[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScreenshotViewSetting                      settings;                                                  // 0x0010(0x0028) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.RoleGenderViewSetting
// 0x0038
struct FRoleGenderViewSetting
{
	struct FName                                       Label;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRoleDropdown                               RoleDropdown;                                              // 0x000C(0x0002) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	DBDSharedTypes_EGender                             Gender;                                                    // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2W9O[0x1];                                     // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScreenshotViewSetting                      settings;                                                  // 0x0010(0x0028) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.FriendWidgetList
// 0x0010
struct FFriendWidgetList
{
	unsigned char                                      UnknownData_WA89[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.WidgetFriendData
// 0x0010
struct FWidgetFriendData
{
	unsigned char                                      UnknownData_Z126[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUMGBaseFriendListElement*                   correspondingWidget;                                       // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AtlantaSettingMenuData
// 0x0028 (0x0030 - 0x0008)
struct FAtlantaSettingMenuData : public FDBDTableRowBase
{
	DeadByDaylight_EOverlayTabs                        OverlayTab;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EOverlayMode                        OverlayMode;                                               // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_85KX[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0010(0x0018) (Edit, NativeAccessSpecifierPublic)
	DeadByDaylight_EAtlantaSettingMenuType             MenuType;                                                  // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WNZ4[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.HtmlTagConvertRow
// 0x0020 (0x0028 - 0x0008)
struct FHtmlTagConvertRow : public FTableRowBase
{
	struct FString                                     HtmlTag;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RichTextTag;                                               // 0x0018(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.InteractButtonInfo
// 0x0050 (0x0058 - 0x0008)
struct FInteractButtonInfo : public FTableRowBase
{
	struct FName                                       InteractButtonID;                                          // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       interactionID;                                             // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         playerRole;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EInputInteractionType               InteractionInputType;                                      // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4GXD[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      icon[0x30];                                                // 0x0022(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct DeadByDaylight.InboxMessageElapsedTime
// 0x0008
struct FInboxMessageElapsedTime
{
	int                                                ElapsedTime;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EInboxMessageTimeUnit               TimeUnit;                                                  // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QL0T[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.InboxMessageUIData
// 0x0060
struct FInboxMessageUIData
{
	struct FString                                     messageId;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   ReceivedTime;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EInboxMessageUIType                 messageType;                                               // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OSHD[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MessageTitle;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MessageBody;                                               // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EInboxMessageUIState                MessageState;                                              // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RZUA[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FClaimableInboxMessage                      AttachedClaimable;                                         // 0x0048(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.playerInfoData
// 0x0048
struct FplayerInfoData
{
	struct FString                                     CharacterName;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterIconPath;                                         // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     playerName;                                                // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                playerLevel;                                               // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                prestigeLevel;                                             // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                playerRank;                                                // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ActivePips;                                                // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumPipsToNextRank;                                         // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ready;                                                     // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isSlasher;                                                 // 0x0045(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               canPrestige;                                               // 0x0046(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B81L[0x1];                                     // 0x0047(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.ScoreCategoryUIExtraData
// 0x0028
struct FScoreCategoryUIExtraData
{
	struct FText                                       ScoreCategoryName;                                         // 0x0000(0x0018) (Edit, Transient, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ScoreCategoryAsset;                                        // 0x0018(0x0008) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                scoreValue;                                                // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BFMX[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.VariationData
// 0x0028 (0x0030 - 0x0008)
struct FVariationData : public FDBDTableRowBase
{
	struct FgameplayTag                                tag;                                                       // 0x0008(0x000C) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YLQ9[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       name;                                                      // 0x0018(0x0018) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.VideoThumbnailProperties
// 0x0048 (0x0050 - 0x0008)
struct FVideoThumbnailProperties : public FDBDTableRowBase
{
	struct FName                                       _id;                                                       // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _hasAudio;                                                 // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MH9R[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   _size;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _source[0x30];                                             // 0x0020(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct DeadByDaylight.ArchivesVignetteEntry
// 0x0038 (0x0040 - 0x0008)
struct FArchivesVignetteEntry : public FDBDTableRowBase
{
	struct FText                                       title;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       text;                                                      // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               HasAudio;                                                  // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VX40[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.ArchivesVignettes
// 0x0060 (0x0068 - 0x0008)
struct FArchivesVignettes : public FDBDTableRowBase
{
	struct FString                                     vignetteId;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       title;                                                     // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       subtitle;                                                  // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FArchivesVignetteEntry>              Entries;                                                   // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CinematicPaths[0x10];                                      // 0x0058(0x0010) UNKNOWN PROPERTY: ArrayProperty

};

// ScriptStruct DeadByDaylight.ArchivesJournal
// 0x0028 (0x0040 - 0x0018)
struct FArchivesJournal : public FDBDTableRowBaseWithId
{
	struct FText                                       title;                                                     // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FArchivesVignettes>                  Vignettes;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.WalesCypherAnalytics
// 0x0030 (0x0098 - 0x0068)
struct FWalesCypherAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     EnteredSequence;                                           // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExpectedSequence;                                          // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeoutThreshold;                                          // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x008C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TimeOut;                                                   // 0x008D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CharmGranted;                                              // 0x008E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U0BF[0x1];                                     // 0x008F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ValidCharacterSelcted;                                     // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C4T6[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.WalletUpdateTracker
// 0x0050
struct FWalletUpdateTracker
{
	TMap<struct FString, int>                          _walletChangeMap;                                          // 0x0000(0x0050) (NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.NativeBlockIndicatorData
// 0x0018
struct FNativeBlockIndicatorData
{
	bool                                               IsBlockActive;                                             // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsBlockUpdating;                                           // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S5QX[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentBlockFade;                                          // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 FadeCurve;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UactorComponent*                             BlockIndicator;                                            // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.VaultData
// 0x0038
struct FVaultData
{
	unsigned char                                      UnknownData_FK2Y[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.XpBonusData
// 0x0018
struct FXpBonusData
{
	struct FString                                     name;                                                      // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                XpValue;                                                   // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CZ1B[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.EffectCameraTypeSettings
// 0x0003
struct FEffectCameraTypeSettings
{
	DeadByDaylight_ECustomizationCategory              category;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               VisibilityInFirstPerson;                                   // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               VisibilityInThirdPerson;                                   // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.offering
// 0x0190
struct Foffering
{
	unsigned char                                      UnknownData_I5WL[0x190];                                   // 0x0000(0x0190) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.selectedOffering
// 0x0010
struct FselectedOffering
{
	int                                                ownerId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       OfferingName;                                              // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.BuiltLevelData
// 0x0078
struct FBuiltLevelData
{
	struct FName                                       themeName;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       themeWeather;                                              // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       audioStateThemes;                                          // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       audioStateWeather;                                         // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       audioGameStartEvent;                                       // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MC9K[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     mapName;                                                   // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                tileCount;                                                 // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DPP1[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDependency>                         Dependencies;                                              // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       specialEventId;                                            // 0x0068(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IC8O[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.OfferingData
// 0x0018
struct FOfferingData
{
	bool                                               OfferingReady;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YKNH[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FselectedOffering>                   Offerings;                                                 // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CamperHealResult
// 0x0018
struct FCamperHealResult
{
	DeadByDaylight_ECamperDamageState                  PreviousDamageState;                                       // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperDamageState                  currentDamageState;                                        // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0YYP[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                healAmount;                                                // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UdbdPlayer*>                          healers;                                                   // 0x0008(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AttackDelegatePair
// 0x0010
struct FAttackDelegatePair
{
	class UDBDAttack*                                  _attack;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_I86J[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.tooltipPressedData
// 0x0008
struct FtooltipPressedData
{
	struct FVector2D                                   touchPosition;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PurchaseCurrencyData
// 0x0018
struct FPurchaseCurrencyData
{
	unsigned char                                      UnknownData_3H2O[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	DeadByDaylight_ECurrencyType                       currencyType;                                              // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JXJ8[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Price;                                                     // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DiscountPercentage;                                        // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAffordable;                                              // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E34U[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.StoreItemSlotData
// 0x0160
struct FStoreItemSlotData
{
	unsigned char                                      UnknownData_6ZGG[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       itemId;                                                    // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECustomizationCategory              category;                                                  // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_49DL[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       mirrorsId;                                                 // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K4TT[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     iconPath;                                                  // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayCollectionName;                                     // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     description;                                               // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleCategoryInfo;                                          // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RarityPartInfo;                                            // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x0088(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8XYA[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSpecialEventUIInfo                         EventInfo;                                                 // 0x0090(0x0050) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	TArray<struct FPurchaseCurrencyData>               PurchaseDataList;                                          // 0x00E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCustomTransformation                       CustomTransformation;                                      // 0x00F0(0x0014) (BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               IsOwned;                                                   // 0x0104(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsBuyable;                                                 // 0x0105(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEquipped;                                                // 0x0106(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsNewInStore;                                              // 0x0107(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsLocked;                                                  // 0x0108(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInStore;                                                 // 0x0109(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         AssociatedRole;                                            // 0x010A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KH6D[0x5];                                     // 0x010B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   ReleaseDate;                                               // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JZGQ[0x48];                                    // 0x0118(0x0048) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.FirecrackerEffectData
// 0x0010
struct FFirecrackerEffectData
{
	class UFireCracker*                                FireCracker;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInRange;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isFirstTime;                                               // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8RXO[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.phaseWalkInfo
// 0x0020
struct FphaseWalkInfo
{
	bool                                               IsActivePhaseWalking;                                      // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPassivePhaseWalking;                                     // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInteractionPhaseWalking;                                 // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9HGH[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     HuskLocation;                                              // 0x0004(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    HuskRotation;                                              // 0x0010(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               teleportToHusk;                                            // 0x001C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EX8X[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.PortalRestrictedLocation
// 0x0010
struct FPortalRestrictedLocation
{
	struct Fvector                                     location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceSquared;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AIDetectedStimulus
// 0x005C
struct FAIDetectedStimulus
{
	TWeakObjectPtr<class Uactor>                       instigator;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     location;                                                  // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rotation;                                                  // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     Velocity;                                                  // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AtTime;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A62Z[0x2C];                                    // 0x0030(0x002C) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.AITunableParameter
// 0x0010
struct FAITunableParameter
{
	float                                              DefaultValue;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TunableName;                                               // 0x0004(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AkObservedPlayerSoundLoop
// 0x0018 (0x0040 - 0x0028)
struct FAkObservedPlayerSoundLoop : public FAkSoundLoop
{
	unsigned char                                      UnknownData_E1VT[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayerPerspectiveComponent*                 _perspectiveComponent;                                     // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct DeadByDaylight.AimAssistInfo
// 0x0018
struct FAimAssistInfo
{
	unsigned char                                      UnknownData_U8FO[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.AnimationMapping
// 0x0050 (0x0058 - 0x0008)
struct FAnimationMapping : public FDBDTableRowBase
{
	unsigned char                                      MontageAsset[0x30];                                        // 0x0008(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	TArray<struct FName>                               tags;                                                      // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                                _montage;                                                  // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _loadAttempted;                                            // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W1GM[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.AnimationMappingRow
// 0x0010 (0x0018 - 0x0008)
struct FAnimationMappingRow : public FDBDTableRowBase
{
	TArray<struct FAnimationMapping>                   Mappings;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ArchiveQuestSpecialBehaviour
// 0x0030 (0x0048 - 0x0018)
struct FArchiveQuestSpecialBehaviour : public FDBDTableRowBaseWithId
{
	struct FText                                       description;                                               // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	DeadByDaylight_EContextualType                     type;                                                      // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NRWH[0x3];                                     // 0x0030(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       SpawnObjectId;                                             // 0x0034(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EAdditiveBehaviour                  AdditiveBehaviour;                                         // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EStackingBehaviours                 StackableBehaviour;                                        // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EOwnershipBehaviour                 OwnershipBehaviour;                                        // 0x0042(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9PSQ[0x1];                                     // 0x0043(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SpawnQuantity;                                             // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ArchiveDefinition
// 0x0070 (0x0088 - 0x0018)
struct FArchiveDefinition : public FDBDTableRowBaseWithId
{
	struct FText                                       title;                                                     // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FString>                             HiddenImages;                                              // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PurchasePassPicturePath;                                   // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PurchaseTierPicturePath;                                   // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StyleFrameLabel;                                           // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.QuestEventDefinition
// 0x0040 (0x0058 - 0x0018)
struct FQuestEventDefinition : public FDBDTableRowBaseWithId
{
	TArray<struct FgameplayTag>                        TrackedGameEvents;                                         // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      QuestEventEvaluator[0x30];                                 // 0x0028(0x0030) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct DeadByDaylight.ArchiveQuestObjectiveDefinition
// 0x0048 (0x0060 - 0x0018)
struct FArchiveQuestObjectiveDefinition : public FDBDTableRowBaseWithId
{
	struct FText                                       description;                                               // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       RulesDescription;                                          // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FName>                               DescriptionParameters;                                     // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsProgressionPercentage;                                   // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V1BO[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.ArchiveNodeDefinition
// 0x0050 (0x0068 - 0x0018)
struct FArchiveNodeDefinition : public FDBDTableRowBaseWithId
{
	struct FText                                       DisplayName;                                               // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     iconPath;                                                  // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         playerRole;                                                // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GFOE[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CinematicId;                                               // 0x005C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PlayerDataForQuestConditions
// 0x0078
struct FPlayerDataForQuestConditions
{
	unsigned char                                      UnknownData_9OAN[0x78];                                    // 0x0000(0x0078) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.AtlantaKillerSoundDistanceData
// 0x0010 (0x0018 - 0x0008)
struct FAtlantaKillerSoundDistanceData : public FDBDTableRowBase
{
	float                                              MinRadiusSoundDistance;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRadiusSoundDistance;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRangeSoundHeard;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S52F[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.AtlantaOnBoardingData
// 0x0040 (0x0048 - 0x0008)
struct FAtlantaOnBoardingData : public FDBDTableRowBase
{
	struct FName                                       OnBoardingId;                                              // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4IYA[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       title;                                                     // 0x0018(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0030(0x0018) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AtlantaRitualRewardUIData
// 0x0020
struct FAtlantaRitualRewardUIData
{
	DeadByDaylight_EAtlantaRitualRewardUIType          type;                                                      // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2IFL[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Quantity;                                                  // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IconFilePath;                                              // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C4JA[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.AtlantaSubRitualUIData
// 0x0018
struct FAtlantaSubRitualUIData
{
	struct FString                                     description;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TargetNumber;                                              // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentNumber;                                             // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AtlantaRitualUIData
// 0x0068
struct FAtlantaRitualUIData
{
	int                                                Id;                                                        // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EAltantaRitualUIType                type;                                                      // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IJ9C[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     title;                                                     // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     description;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IconFilePath;                                              // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsNew;                                                     // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsClaimed;                                                 // 0x0039(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MBT8[0x2];                                     // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ProgressPercentage;                                        // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RefreshPrice;                                              // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3G6Z[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAtlantaRitualRewardUIData>          rewards;                                                   // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAtlantaSubRitualUIData>             SubRituals;                                                // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AtlantaRitualsUIScreenData
// 0x0030
struct FAtlantaRitualsUIScreenData
{
	struct FDateTime                                   DailyRefreshTime;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   WeeklyRefreshTime;                                         // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAtlantaRitualUIData>                DailyRituals;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAtlantaRitualUIData>                WeeklyRituals;                                             // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AttackEventTypeDetails
// 0x0028 (0x0030 - 0x0008)
struct FAttackEventTypeDetails : public FDBDTableRowBase
{
	struct FgameplayTag                                gameplayTag;                                               // 0x0008(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EAttackEventType                    AttackEventType;                                           // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanBeProtective;                                           // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4JDK[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AssociatedCharacter;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HB0Z[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     description;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AttackHitResult
// 0x0080
struct FAttackHitResult
{
	class UdbdPlayer*                                  attacker;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  target;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDAttack*                                  Attack;                                                    // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsBasicAttack;                                             // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CosmeticOnly;                                              // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1QWW[0x66];                                    // 0x001A(0x0066) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.DBDBidirectionalTimer
// 0x0000 (0x0028 - 0x0028)
struct FDBDBidirectionalTimer : public FDBDTimer
{

};

// ScriptStruct DeadByDaylight.BlindPackData
// 0x0000 (0x00D8 - 0x00D8)
struct FBlindPackData : public FBaseItemData
{

};

// ScriptStruct DeadByDaylight.BloodstoreRowUnlockThreshold
// 0x0008 (0x0010 - 0x0008)
struct FBloodstoreRowUnlockThreshold : public FDBDTableRowBase
{
	int                                                PreviousRowPurchasedItemsCount;                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L7VD[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.BloodwebContentTypePerRingDistribution
// 0x0058 (0x0060 - 0x0008)
struct FBloodwebContentTypePerRingDistribution : public FDBDTableRowBase
{
	int                                                PerkPerRingMinCount;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PerkPerRingMaxCount;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PerkPerRingWeight;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OfferingPerRingMinCount;                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OfferingPerRingMaxCount;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OfferingPerRingWeight;                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemPerRingMinCount;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemPerRingMaxCount;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemPerRingWeight;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AddOnPerRingMinCount;                                      // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AddOnPerRingMaxCount;                                      // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AddOnPerRingWeight;                                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChestPerRingMinCount;                                      // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChestPerRingMaxCount;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChestPerRingWeight;                                        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PerksPackPerRingMinCount;                                  // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PerksPackPerRingMaxCount;                                  // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PerksPackPerRingWeight;                                    // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IridiscentShardsPackPerRingMinCount;                       // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IridiscentShardsPackPerRingMaxCount;                       // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IridiscentShardsPackPerRingWeight;                         // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PPEX[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.BloodwebCostModifier
// 0x0008 (0x0010 - 0x0008)
struct FBloodwebCostModifier : public FDBDTableRowBase
{
	DeadByDaylight_EBloodwebNodeContentType            type;                                                      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PNXH[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CostModifier;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.BlockingNode
// 0x0018
struct FBlockingNode
{
	struct FString                                     Id;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BlockingCount;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IOV6[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.BloodwebMandatoryContentByLevel
// 0x0028 (0x0030 - 0x0008)
struct FBloodwebMandatoryContentByLevel : public FDBDTableRowBase
{
	int                                                level;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ForcedItem01;                                              // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ForcedItem02;                                              // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ForcedItem03;                                              // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ContentPerWebDistribution
// 0x000C
struct FContentPerWebDistribution
{
	int                                                Weight;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinCount;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxCount;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.ContentPerRingDistribution
// 0x0030
struct FContentPerRingDistribution
{
	TArray<int>                                        WeightList;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        MinCountList;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        MaxCountList;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.RarityPerWebDistribution
// 0x000C
struct FRarityPerWebDistribution
{
	int                                                Weight;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinCount;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxCount;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.RarityPerRingDistribution
// 0x0030
struct FRarityPerRingDistribution
{
	TArray<int>                                        WeightList;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        MinCountList;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        MaxCountList;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AccessNode
// 0x0018
struct FAccessNode
{
	struct FString                                     Id;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AccessCost;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VXCB[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.BloodwebNodeCost
// 0x0008 (0x0010 - 0x0008)
struct FBloodwebNodeCost : public FDBDTableRowBase
{
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DT0E[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Cost;                                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.BloodwebNodeRarityCost
// 0x0008 (0x0010 - 0x0008)
struct FBloodwebNodeRarityCost : public FDBDTableRowBase
{
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O39Q[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Cost;                                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.BloodwebNodesPerRingDistribution
// 0x0008 (0x0010 - 0x0008)
struct FBloodwebNodesPerRingDistribution : public FDBDTableRowBase
{
	int                                                MinCount;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxCount;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.BloodwebPrestigeModifiers
// 0x0020 (0x0028 - 0x0008)
struct FBloodwebPrestigeModifiers : public FDBDTableRowBase
{
	float                                              CommonItemProbabilityModifier;                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UncommonItemProbabilityModifier;                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RareItemProbabilityModifier;                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VeryRareItemProbabilityModifier;                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UltraRareItemProbabilityModifier;                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArtifactItemProbabilityModifier;                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpectralItemProbabilityModifier;                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LegendaryItemProbabilityModifier;                          // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.BloodwebProgressionValue
// 0x00C8 (0x00D0 - 0x0008)
struct FBloodwebProgressionValue : public FDBDTableRowBase
{
	int                                                InnerRingNodeCount;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingNodeCount;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingNodeCount;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Common_MinCount;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Common_MaxCount;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Uncommon_MinCount;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Uncommon_MaxCount;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rare_MinCount;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rare_MaxCount;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VeryRare_MinCount;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VeryRare_MaxCount;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UltraRare_MinCount;                                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UltraRare_MaxCount;                                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Artifact_MinCount;                                         // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Artifact_MaxCount;                                         // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Spectral_MinCount;                                         // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Spectral_MaxCount;                                         // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpecialEvent_MinCount;                                     // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpecialEvent_MaxCount;                                     // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Legendary_MinCount;                                        // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Legendary_MaxCount;                                        // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InnerRingCommonItemProbability;                            // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingCommonItemProbability;                           // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingCommonItemProbability;                            // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InnerRingUncommonItemProbability;                          // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingUncommonItemProbability;                         // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingUncommonItemProbability;                          // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InnerRingRareItemProbability;                              // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingRareItemProbability;                             // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingRareItemProbability;                              // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InnerRingVeryRareItemProbability;                          // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingVeryRareItemProbability;                         // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingVeryRareItemProbability;                          // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InnerRingUltraRareItemProbability;                         // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingUltraRareItemProbability;                        // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingUltraRareItemProbability;                         // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InnerRingArtifactItemProbability;                          // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingArtifactItemProbability;                         // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingArtifactItemProbability;                          // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InnerRingSpectralItemProbability;                          // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingSpectralItemProbability;                         // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingSpectralItemProbability;                          // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InnerRingSpecialEventItemProbability;                      // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingSpecialEventItemProbability;                     // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingSpecialEventItemProbability;                      // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InnerRingLegendaryItemProbability;                         // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiddleRingLegendaryItemProbability;                        // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OuterRingLegendaryItemProbability;                         // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EntityStartingRound;                                       // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z8AQ[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.BloodwebRarityPerRingDistribution
// 0x0070 (0x0078 - 0x0008)
struct FBloodwebRarityPerRingDistribution : public FDBDTableRowBase
{
	int                                                CommonMinCount;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CommonMaxCount;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CommonWeight;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UncommonMinCount;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UncommonMaxCount;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UncommonWeight;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RareMinCount;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RareMaxCount;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RareWeight;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VeryRareMinCount;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VeryRareMaxCount;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VeryRareWeight;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UltraRareMinCount;                                         // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UltraRareMaxCount;                                         // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UltraRareWeight;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArtefactMinCount;                                          // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArtefactMaxCount;                                          // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArtefactWeight;                                            // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpectralMinCount;                                          // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpectralMaxCount;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpectralWeight;                                            // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpecialEventMinCount;                                      // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpecialEventMaxCount;                                      // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpecialEventWeight;                                        // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LegendaryMinCount;                                         // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LegendaryMaxCount;                                         // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LegendaryWeight;                                           // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JZSW[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.DBDPerPlatformFloat
// 0x0004
struct FDBDPerPlatformFloat
{
	struct FperPlatformFloat                           Value;                                                     // 0x0000(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.DBDPerPlatformInt
// 0x0004
struct FDBDPerPlatformInt
{
	struct FperPlatformInt                             Value;                                                     // 0x0000(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.BundleData
// 0x0088
struct FBundleData
{
	struct FName                                       Id;                                                        // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LV8K[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemUIData                                 UIData;                                                    // 0x0010(0x0078) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CamperDamageResult
// 0x0058
struct FCamperDamageResult
{
	unsigned char                                      UnknownData_XBLY[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Uactor*                                      DamageSource;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SXDT[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UgameplayModifierContainer*                  KOPreventedSource;                                         // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RUDV[0x30];                                    // 0x0028(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.CharacterCustomizationDataTable
// 0x0038 (0x0040 - 0x0008)
struct FCharacterCustomizationDataTable : public FDBDTableRowBase
{
	int                                                characterIndex;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JEG9[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      CustomizationStoreDB[0x30];                                // 0x000C(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct DeadByDaylight.SlideShowDescription
// 0x0050
struct FSlideShowDescription
{
	struct FText                                       Overview;                                                  // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       Playstyle;                                                 // 0x0018(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FString                                     ImageFilePath;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<DeadByDaylight_EPerkCategory>               PerkCategory;                                              // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CharacterDescription
// 0x01E0 (0x01E8 - 0x0008)
struct FCharacterDescription : public FDBDTableRowBase
{
	int                                                characterIndex;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         role;                                                      // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_ECharacterDifficulty                Difficulty;                                                // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1337[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0010(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       BackStory;                                                 // 0x0028(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       Biography;                                                 // 0x0040(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FName                                       IconFilePath;                                              // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_REPE[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  HudIcon;                                                   // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BackgroundImagePath;                                       // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JGJB[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCustomizedMeshPart>                 CustomizationDescription;                                  // 0x0080(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequiredDlcIDString;                                       // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       IdName;                                                    // 0x00A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DebugName;                                                 // 0x00AC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInChunk0;                                                // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAvailableInNonViolentBuild;                              // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAvailableInAtlantaBuild;                                 // 0x00BA(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KJ93[0x1];                                     // 0x00BB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           PlatformExclusiveFlag;                                     // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      GamePawn[0x30];                                            // 0x00C0(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      MenuPawn[0x30];                                            // 0x00F0(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	struct FName                                       DefaultItem;                                               // 0x0120(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EGender                             Gender;                                                    // 0x012C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IDUS[0x3];                                     // 0x012D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<DBDSharedTypes_EKillerAbilities>            KillerAbilities;                                           // 0x0130(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableProxy                             TunableDB;                                                 // 0x0140(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	DeadByDaylight_EKillerHeight                       KillerHeight;                                              // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CA0E[0x7];                                     // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlideShowDescription                       SlideShowDescriptions;                                     // 0x0188(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FName>                               CustomizationCategories;                                   // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct DeadByDaylight.CharacterSlotData
// 0x00F8
struct FCharacterSlotData
{
	unsigned char                                      UnknownData_RSWI[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Id;                                                        // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                characterIndex;                                            // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IconFilePath;                                              // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BackgroundImagePath;                                       // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Biography;                                                 // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     dlcId;                                                     // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DLCTitle;                                                  // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                level;                                                     // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                prestige;                                                  // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_ECharacterDifficulty                Difficulty;                                                // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsUnlocked;                                                // 0x0081(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDLCPurchasable;                                          // 0x0082(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U6C3[0x5];                                     // 0x0083(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPurchaseCurrencyData>               PurchaseDataList;                                          // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemsOwned;                                                // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalItems;                                                // 0x009C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowNew;                                                   // 0x00A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDlcLockedKiller;                                         // 0x00A1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8AKG[0x6];                                     // 0x00A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSpecialEventUIInfo                         EventInfo;                                                 // 0x00A8(0x0050) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.TeachableData
// 0x0110
struct FTeachableData
{
	struct FInventorySlotData                          InventorySlotData;                                         // 0x0000(0x00F8) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	DeadByDaylight_ETeachableStatus                    Status;                                                    // 0x00F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2EDQ[0x3];                                     // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                UnlockLevel;                                               // 0x00FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     message;                                                   // 0x0100(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.killerAttributesData
// 0x000C
struct FkillerAttributesData
{
	float                                              speed;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TerrorRadius;                                              // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EKillerHeight                       Height;                                                    // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q2E2[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.CharacterInfoData
// 0x0220
struct FCharacterInfoData
{
	struct FCharacterSlotData                          slotData;                                                  // 0x0000(0x00F8) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FString                                     description;                                               // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTeachableData>                      TeachablePerksData;                                        // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventorySlotData                          PowerData;                                                 // 0x0118(0x00F8) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FkillerAttributesData                       killerAttributesData;                                      // 0x0210(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               isKiller;                                                  // 0x021C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MW60[0x3];                                     // 0x021D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.CharacterLevelData
// 0x0020
struct FCharacterLevelData
{
	int                                                level;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExperienceToNextLevel;                                     // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isComplete;                                                // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasPerksBeenSelected;                                      // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CJTG[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAssignedPerkProperties>             PerkSelection;                                             // 0x0010(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CharacterSlideData
// 0x0070
struct FCharacterSlideData
{
	struct FString                                     DisplayName;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Overview;                                                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Playstyle;                                                 // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         role;                                                      // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UPGD[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ImageFilePath;                                             // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<DeadByDaylight_EPerkCategory>               SurvivorPerkCategories;                                    // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KillerPowerIconPath;                                       // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NDM8[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.SnappingData
// 0x0024
struct FSnappingData
{
	bool                                               DoSnapPosition;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DoSnapRotation;                                            // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DoSnapRoll;                                                // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseZCoord;                                                 // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SweepOnFinalSnap;                                          // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y8UT[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     TargetPosition;                                            // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    TargetRotation;                                            // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              duration;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.MaterialMapForClip
// 0x0010 (0x0018 - 0x0008)
struct FMaterialMapForClip : public FDBDTableRowBase
{
	class UmaterialInterface*                          SrcMaterial;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UmaterialInterface*                          DstMaterial;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CombinedPartyFriendData
// 0x0120
struct FCombinedPartyFriendData
{
	unsigned char                                      UnknownData_UBKX[0x120];                                   // 0x0000(0x0120) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.CombinedSpecialEventData
// 0x0100
struct FCombinedSpecialEventData
{
	unsigned char                                      UnknownData_DQ2E[0x100];                                   // 0x0000(0x0100) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.ContextEventData
// 0x0058
struct FContextEventData
{
	struct FString                                     ContextGroupName;                                          // 0x0000(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           contextGroupUId;                                           // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SKTR[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PreviousContextName;                                       // 0x0018(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CurrentContextName;                                        // 0x0028(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           CurrentContextUid;                                         // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V0SD[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NextContextName;                                           // 0x0040(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   timestamp;                                                 // 0x0050(0x0008) (ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CurrencyPurchaseData
// 0x0058
struct FCurrencyPurchaseData
{
	unsigned char                                      UnknownData_MMF1[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     iconPath;                                                  // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     currencyName;                                              // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CurrencyIcon;                                              // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrencyAmount;                                            // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3NYW[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DisplayedPrice;                                            // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BonusPercentage;                                           // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FBCY[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.CustomerSupportClientLoginAnalytics
// 0x0020 (0x0088 - 0x0068)
struct FCustomerSupportClientLoginAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     playerName;                                                // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     provider;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.CustomerSupportAnalytics
// 0x0000 (0x0068 - 0x0068)
struct FCustomerSupportAnalytics : public FUniquelyIdentifiedAnalytic
{

};

// ScriptStruct DeadByDaylight.CustomizationCategoryData
// 0x0040 (0x0048 - 0x0008)
struct FCustomizationCategoryData : public FDBDTableRowBase
{
	struct FName                                       Id;                                                        // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECustomizationCategory              category;                                                  // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JTQY[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     iconPath;                                                  // 0x0018(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0028(0x0018) (Edit, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         role;                                                      // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YBML[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.DailyRitualAnalytics
// 0x0038 (0x00A0 - 0x0068)
struct FDailyRitualAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     Status;                                                    // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RitualId;                                                  // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HoursElapsed;                                              // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NbGameElapsed;                                             // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                progress;                                                  // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                threshold;                                                 // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PendingRituals;                                            // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpecificCharacter;                                         // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AIRoll
// 0x0024
struct FAIRoll
{
	struct FAITunableParameter                         Random;                                                    // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         OnFailCooldown;                                            // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7T7Y[0x4];                                     // 0x0020(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.AIDifficultyTunableRowData
// 0x0010 (0x0018 - 0x0008)
struct FAIDifficultyTunableRowData : public FDBDTableRowBase
{
	float                                              Easy;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Medium;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Hard;                                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CDU5[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.WebPath
// 0x0028
struct FWebPath
{
	unsigned char                                      UnknownData_D92K[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.WebNode
// 0x0028
struct FWebNode
{
	unsigned char                                      UnknownData_RVOR[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.DailyRitualPossibleCharacters
// 0x0030
struct FDailyRitualPossibleCharacters
{
	TArray<int>                                        CharacterIDs;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<DBDSharedTypes_EPlayerRole>                 Roles;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<DBDSharedTypes_EPlayerRole>                 SelectOneCharacterFromRoles;                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.DailyRitualLevel
// 0x0010
struct FDailyRitualLevel
{
	float                                              threshold;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              tolerance;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DisplayTotal;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloodpointsReward;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.DailyRitualDefinition
// 0x00D0 (0x00D8 - 0x0008)
struct FDailyRitualDefinition : public FDBDTableRowBase
{
	struct FText                                       DisplayName;                                               // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     iconPath;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDailyRitualPossibleCharacters              PossibleCharacters;                                        // 0x0048(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<DeadByDaylight_EDBDScoreTypes>              TrackedEvents;                                             // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FgameplayTag>                        TrackedGameEvents;                                         // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDailyRitualLevel>                   DifficultyLevels;                                          // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Evaluator[0x30];                                           // 0x00A8(0x0030) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct DeadByDaylight.ritualEvent
// 0x0030
struct FritualEvent
{
	DeadByDaylight_EDBDScoreTypes                      ScoreType;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CB1A[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FgameplayTag                                GameEventType;                                             // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                    // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EYRQ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UdbdPlayer*                                  instigator;                                                // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDPlayerState*                             InstigatorPlayerState;                                     // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      target;                                                    // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AttackTypeDetails
// 0x0020 (0x0028 - 0x0008)
struct FAttackTypeDetails : public FDBDTableRowBase
{
	DBDSharedTypes_EAttackType                         AttackType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsBasicAttack;                                             // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PXE4[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AssociatedCharacter;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0010(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LevelUpDetails
// 0x0050 (0x0058 - 0x0008)
struct FLevelUpDetails : public FDBDTableRowBase
{
	int                                                level;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                prestige;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       title;                                                     // 0x0010(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0028(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FName                                       itemId;                                                    // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EInventoryItemType                  itemType;                                                  // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VZYC[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AssociatedCharacter;                                       // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6HX2[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.EACClientInfo
// 0x0028
struct FEACClientInfo
{
	unsigned char                                      UnknownData_9LYF[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.EmblemProgressionDescriptionByQuality
// 0x0020
struct FEmblemProgressionDescriptionByQuality
{
	DeadByDaylight_EEmblemQuality                      EmblemQuality;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_90NV[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       description;                                               // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.EmblemProgressionID
// 0x0030
struct FEmblemProgressionID
{
	DeadByDaylight_EEmblemProgressionType              EmblemProgressionType;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DTOD[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DefaultDescription;                                        // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FEmblemProgressionDescriptionByQuality> DescriptionsByQuality;                                     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.DBDEmblemDefinition
// 0x00A8 (0x00B0 - 0x0008)
struct FDBDEmblemDefinition : public FDBDTableRowBase
{
	struct FName                                       Id;                                                        // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_POJL[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       name;                                                      // 0x0018(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0030(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<DBDSharedTypes_EPlayerRole>                 Roles;                                                     // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CustomEmblem[0x30];                                        // 0x0058(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	TArray<struct FString>                             IconFilePaths;                                             // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EEmblemEvaluation                   EmblemEvaluation;                                          // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               enabled;                                                   // 0x0099(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LVZJ[0x6];                                     // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEmblemProgressionID>                EmblemProgressionData;                                     // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LegacyPlayerSavedProfileDataShared
// 0x0040
struct FLegacyPlayerSavedProfileDataShared
{
	unsigned char                                      UnknownData_YURO[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     playerName;                                                // 0x0008(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SelectedCamperIndex;                                       // 0x0018(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SelectedSlasherIndex;                                      // 0x001C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SelectedCharacterCustomization;                            // 0x0020(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlasherSkulls;                                             // 0x0030(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CamperSkulls;                                              // 0x0034(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CamperStreak;                                              // 0x0038(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_72YP[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.LegacyCharacterSavedInventoryData
// 0x0018
struct FLegacyCharacterSavedInventoryData
{
	uint32_t                                           version;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       name;                                                      // 0x0004(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            TimeObtainedSinceEpoch;                                    // 0x0010(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LegacyCharacterSavedProfileData
// 0x0130
struct FLegacyCharacterSavedProfileData
{
	int                                                versionNumber;                                             // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bloodPoints;                                               // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BloodwebLevel;                                             // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                prestigeLevel;                                             // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimesConfronted;                                           // 0x0010(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AJ9H[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDateTime>                           PrestigeDates;                                             // 0x0018(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLegacySavedBloodWebPersistentData          BloodWebData;                                              // 0x0028(0x0040) (SaveGame, NativeAccessSpecifierPublic)
	struct FLegacySavedPlayerLoadoutData               CharacterLoadoutData;                                      // 0x0068(0x0098) (SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Inventory;                                                 // 0x0100(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLegacyCharacterSavedInventoryData>  inventoryData;                                             // 0x0110(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               CurrentCustomization;                                      // 0x0120(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LegacySavedDailyRitualContainer
// 0x0018
struct FLegacySavedDailyRitualContainer
{
	struct FDateTime                                   LastRitualReceivedDate;                                    // 0x0000(0x0008) (ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLegacySavedDailyRitualInstance>     Rituals;                                                   // 0x0008(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LegacySavedFearMarketOfferingInstance
// 0x0020
struct FLegacySavedFearMarketOfferingInstance
{
	TArray<struct FLegacySavedFearMarketItemInstance>  ObjectsForSale;                                            // 0x0000(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   startTime;                                                 // 0x0010(0x0008) (ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   EndTime;                                                   // 0x0018(0x0008) (ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.LegacyPlayerSavedProfileDataLocal
// 0x0180
struct FLegacyPlayerSavedProfileDataLocal
{
	int                                                Tokens;                                                    // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DVSU[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               Offerings;                                                 // 0x0008(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FirstTimePlaying;                                          // 0x0018(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasBeenGivenKillerTutorialEndReward;                       // 0x0019(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasBeenGivenSurvivorTutorialEndReward;                     // 0x001A(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5XRI[0x1];                                     // 0x001B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Wins;                                                      // 0x001C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Losses;                                                    // 0x0020(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C6F8[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, struct FLegacyCharacterSavedProfileData> characterData;                                             // 0x0028(0x0050) (SaveGame, NativeAccessSpecifierPublic)
	uint64_t                                           CurrentSeasonTicks;                                        // 0x0078(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLegacySavedDailyRitualContainer            DailyRituals;                                              // 0x0080(0x0018) (SaveGame, NativeAccessSpecifierPublic)
	struct FLegacySavedFearMarketOfferingInstance      FearMarket;                                                // 0x0098(0x0020) (SaveGame, NativeAccessSpecifierPublic)
	struct FLegacySavedPlayerLoadoutData               LastConnectedLoadout;                                      // 0x00B8(0x0098) (SaveGame, NativeAccessSpecifierPublic)
	int                                                LastConnectedCharacterIndex;                               // 0x0150(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_36NZ[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   DisconnectPenaltyTime;                                     // 0x0158(0x0008) (ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                _bloodpoints;                                              // 0x0160(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                _bonusBloodpoints;                                         // 0x0164(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                _unclampedBloodpoints;                                     // 0x0168(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                _fearTokens;                                               // 0x016C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   _ongoingGameTime;                                          // 0x0170(0x0008) (ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               _fearTokensMigrated;                                       // 0x0178(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WAPC[0x7];                                     // 0x0179(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.LegacyPlayerSavedProfileData
// 0x01D0 (0x01E0 - 0x0010)
struct FLegacyPlayerSavedProfileData : public FSaveDataBase
{
	struct FString                                     PlayerUID;                                                 // 0x0010(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLegacyPlayerSavedProfileDataShared         SharedData;                                                // 0x0020(0x0040) (SaveGame, NativeAccessSpecifierPublic)
	struct FLegacyPlayerSavedProfileDataLocal          LocalData;                                                 // 0x0060(0x0180) (SaveGame, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.SessionInfos
// 0x0048
struct FSessionInfos
{
	unsigned char                                      UnknownData_15OQ[0x48];                                    // 0x0000(0x0048) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.LookInputScalingData
// 0x0080
struct FLookInputScalingData
{
	unsigned char                                      UnknownData_ZQ64[0x80];                                    // 0x0000(0x0080) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.LookInputAxisScalingData
// 0x0040
struct FLookInputAxisScalingData
{
	struct FDBDTimer                                   ScalingTimer;                                              // 0x0000(0x0028) (Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0YQG[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct DeadByDaylight.playerDataSync
// 0x0078
struct FplayerDataSync
{
	struct FPlayerStateData                            playerData;                                                // 0x0000(0x0038) (NativeAccessSpecifierPublic)
	TArray<struct FName>                               CustomizationMesh;                                         // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCharmIdSlot>                        CustomizationCharms;                                       // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EquipedItemId;                                             // 0x0058(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_00JO[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               EquipedItemAddonIds;                                       // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.PlayerHUDInfos
// 0x0058 (0x0060 - 0x0008)
struct FPlayerHUDInfos : public FDBDTableRowBase
{
	DBDSharedTypes_EPlayerRole                         role;                                                      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I37V[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      HUDClass[0x30];                                            // 0x0009(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	struct FSoftObjectPath                             TouchInterfaceName;                                        // 0x0040(0x0020) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.AttackSubstateRequestResult
// 0x0003
struct FAttackSubstateRequestResult
{
	bool                                               isValid;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EAttackSubstate                     RequestedNextSubstate;                                     // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EAttackSubstate                     ServerNextSubstate;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DeadByDaylight.RankResetStartingPips
// 0x0004
struct FRankResetStartingPips
{
	int                                                NewPipAmount;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
