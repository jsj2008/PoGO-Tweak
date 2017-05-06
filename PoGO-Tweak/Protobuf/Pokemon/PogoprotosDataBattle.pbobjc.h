// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos.Data.Battle.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

 #import "PogoprotosDataPlayer.pbobjc.h"
 #import "PogoprotosData.pbobjc.h"
 #import "PogoprotosDataGym.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class BattleAction;
@class BattleParticipant;
@class BattlePokemonInfo;
@class BattleResults;
@class GymState;
@class PlayerPublicProfile;
@class PokemonData;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum BattleActionType

typedef GPB_ENUM(BattleActionType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  BattleActionType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  BattleActionType_ActionUnset = 0,
  BattleActionType_ActionAttack = 1,
  BattleActionType_ActionDodge = 2,
  BattleActionType_ActionSpecialAttack = 3,
  BattleActionType_ActionSwapPokemon = 4,
  BattleActionType_ActionFaint = 5,
  BattleActionType_ActionPlayerJoin = 6,
  BattleActionType_ActionPlayerQuit = 7,
  BattleActionType_ActionVictory = 8,
  BattleActionType_ActionDefeat = 9,
  BattleActionType_ActionTimedOut = 10,
};

GPBEnumDescriptor *BattleActionType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL BattleActionType_IsValidValue(int32_t value);

#pragma mark - Enum BattleState

typedef GPB_ENUM(BattleState) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  BattleState_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  BattleState_StateUnset = 0,
  BattleState_Active = 1,
  BattleState_Victory = 2,
  BattleState_Defeated = 3,
  BattleState_TimedOut = 4,
};

GPBEnumDescriptor *BattleState_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL BattleState_IsValidValue(int32_t value);

#pragma mark - Enum BattleType

typedef GPB_ENUM(BattleType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  BattleType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  BattleType_BattleTypeUnset = 0,
  BattleType_BattleTypeNormal = 1,
  BattleType_BattleTypeTraining = 2,
};

GPBEnumDescriptor *BattleType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL BattleType_IsValidValue(int32_t value);

#pragma mark - PogoprotosDataBattleRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface PogoprotosDataBattleRoot : GPBRootObject
@end

#pragma mark - BattleAction

typedef GPB_ENUM(BattleAction_FieldNumber) {
  BattleAction_FieldNumber_Type = 1,
  BattleAction_FieldNumber_ActionStartMs = 2,
  BattleAction_FieldNumber_DurationMs = 3,
  BattleAction_FieldNumber_EnergyDelta = 5,
  BattleAction_FieldNumber_AttackerIndex = 6,
  BattleAction_FieldNumber_TargetIndex = 7,
  BattleAction_FieldNumber_ActivePokemonId = 8,
  BattleAction_FieldNumber_PlayerJoined = 9,
  BattleAction_FieldNumber_BattleResults = 10,
  BattleAction_FieldNumber_DamageWindowsStartTimestampMs = 11,
  BattleAction_FieldNumber_DamageWindowsEndTimestampMs = 12,
  BattleAction_FieldNumber_PlayerLeft = 13,
  BattleAction_FieldNumber_TargetPokemonId = 14,
};

@interface BattleAction : GPBMessage

@property(nonatomic, readwrite) BattleActionType type;

@property(nonatomic, readwrite) int64_t actionStartMs;

@property(nonatomic, readwrite) int32_t durationMs;

@property(nonatomic, readwrite) int32_t energyDelta;

@property(nonatomic, readwrite) int32_t attackerIndex;

@property(nonatomic, readwrite) int32_t targetIndex;

@property(nonatomic, readwrite) uint64_t activePokemonId;

@property(nonatomic, readwrite, strong, null_resettable) BattleParticipant *playerJoined;
/** Test to see if @c playerJoined has been set. */
@property(nonatomic, readwrite) BOOL hasPlayerJoined;

@property(nonatomic, readwrite, strong, null_resettable) BattleResults *battleResults;
/** Test to see if @c battleResults has been set. */
@property(nonatomic, readwrite) BOOL hasBattleResults;

@property(nonatomic, readwrite) int64_t damageWindowsStartTimestampMs;

@property(nonatomic, readwrite) int64_t damageWindowsEndTimestampMs;

@property(nonatomic, readwrite, strong, null_resettable) BattleParticipant *playerLeft;
/** Test to see if @c playerLeft has been set. */
@property(nonatomic, readwrite) BOOL hasPlayerLeft;

@property(nonatomic, readwrite) uint64_t targetPokemonId;

@end

/**
 * Fetches the raw value of a @c BattleAction's @c type property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t BattleAction_Type_RawValue(BattleAction *message);
/**
 * Sets the raw value of an @c BattleAction's @c type property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetBattleAction_Type_RawValue(BattleAction *message, int32_t value);

#pragma mark - BattleLog

typedef GPB_ENUM(BattleLog_FieldNumber) {
  BattleLog_FieldNumber_State = 1,
  BattleLog_FieldNumber_BattleType = 2,
  BattleLog_FieldNumber_ServerMs = 3,
  BattleLog_FieldNumber_BattleActionsArray = 4,
  BattleLog_FieldNumber_BattleStartTimestampMs = 5,
  BattleLog_FieldNumber_BattleEndTimestampMs = 6,
};

@interface BattleLog : GPBMessage

@property(nonatomic, readwrite) BattleState state;

@property(nonatomic, readwrite) BattleType battleType;

@property(nonatomic, readwrite) int64_t serverMs;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<BattleAction*> *battleActionsArray;
/** The number of items in @c battleActionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger battleActionsArray_Count;

@property(nonatomic, readwrite) int64_t battleStartTimestampMs;

@property(nonatomic, readwrite) int64_t battleEndTimestampMs;

@end

/**
 * Fetches the raw value of a @c BattleLog's @c state property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t BattleLog_State_RawValue(BattleLog *message);
/**
 * Sets the raw value of an @c BattleLog's @c state property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetBattleLog_State_RawValue(BattleLog *message, int32_t value);

/**
 * Fetches the raw value of a @c BattleLog's @c battleType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t BattleLog_BattleType_RawValue(BattleLog *message);
/**
 * Sets the raw value of an @c BattleLog's @c battleType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetBattleLog_BattleType_RawValue(BattleLog *message, int32_t value);

#pragma mark - BattleParticipant

typedef GPB_ENUM(BattleParticipant_FieldNumber) {
  BattleParticipant_FieldNumber_ActivePokemon = 1,
  BattleParticipant_FieldNumber_TrainerPublicProfile = 2,
  BattleParticipant_FieldNumber_ReversePokemonArray = 3,
  BattleParticipant_FieldNumber_DefeatedPokemonArray = 4,
};

@interface BattleParticipant : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) BattlePokemonInfo *activePokemon;
/** Test to see if @c activePokemon has been set. */
@property(nonatomic, readwrite) BOOL hasActivePokemon;

@property(nonatomic, readwrite, strong, null_resettable) PlayerPublicProfile *trainerPublicProfile;
/** Test to see if @c trainerPublicProfile has been set. */
@property(nonatomic, readwrite) BOOL hasTrainerPublicProfile;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<BattlePokemonInfo*> *reversePokemonArray;
/** The number of items in @c reversePokemonArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger reversePokemonArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<BattlePokemonInfo*> *defeatedPokemonArray;
/** The number of items in @c defeatedPokemonArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger defeatedPokemonArray_Count;

@end

#pragma mark - BattlePokemonInfo

typedef GPB_ENUM(BattlePokemonInfo_FieldNumber) {
  BattlePokemonInfo_FieldNumber_PokemonData = 1,
  BattlePokemonInfo_FieldNumber_CurrentHealth = 2,
  BattlePokemonInfo_FieldNumber_CurrentEnergy = 3,
};

@interface BattlePokemonInfo : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) PokemonData *pokemonData;
/** Test to see if @c pokemonData has been set. */
@property(nonatomic, readwrite) BOOL hasPokemonData;

@property(nonatomic, readwrite) int32_t currentHealth;

@property(nonatomic, readwrite) int32_t currentEnergy;

@end

#pragma mark - BattleResults

typedef GPB_ENUM(BattleResults_FieldNumber) {
  BattleResults_FieldNumber_GymState = 1,
  BattleResults_FieldNumber_AttackersArray = 2,
  BattleResults_FieldNumber_PlayerExperienceAwardedArray = 3,
  BattleResults_FieldNumber_NextDefenderPokemonId = 4,
  BattleResults_FieldNumber_GymPointsDelta = 5,
};

@interface BattleResults : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) GymState *gymState;
/** Test to see if @c gymState has been set. */
@property(nonatomic, readwrite) BOOL hasGymState;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<BattleParticipant*> *attackersArray;
/** The number of items in @c attackersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger attackersArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *playerExperienceAwardedArray;
/** The number of items in @c playerExperienceAwardedArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger playerExperienceAwardedArray_Count;

@property(nonatomic, readwrite) int64_t nextDefenderPokemonId;

@property(nonatomic, readwrite) int32_t gymPointsDelta;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)