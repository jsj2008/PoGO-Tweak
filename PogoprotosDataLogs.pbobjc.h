// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos.Data.Logs.proto

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

 #import "PogoprotosEnums.pbobjc.h"
 #import "PogoprotosInventoryItem.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class BuddyPokemonLogEntry;
@class CatchPokemonLogEntry;
@class FortSearchLogEntry;
@class ItemData;
GPB_ENUM_FWD_DECLARE(PokemonId);

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum BuddyPokemonLogEntry_Result

typedef GPB_ENUM(BuddyPokemonLogEntry_Result) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  BuddyPokemonLogEntry_Result_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  BuddyPokemonLogEntry_Result_Unset = 0,
  BuddyPokemonLogEntry_Result_CandyFound = 1,
};

GPBEnumDescriptor *BuddyPokemonLogEntry_Result_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL BuddyPokemonLogEntry_Result_IsValidValue(int32_t value);

#pragma mark - Enum CatchPokemonLogEntry_Result

typedef GPB_ENUM(CatchPokemonLogEntry_Result) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  CatchPokemonLogEntry_Result_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  CatchPokemonLogEntry_Result_Unset = 0,
  CatchPokemonLogEntry_Result_PokemonCaptured = 1,
  CatchPokemonLogEntry_Result_PokemonFled = 2,
  CatchPokemonLogEntry_Result_PokemonHatched = 3,
};

GPBEnumDescriptor *CatchPokemonLogEntry_Result_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL CatchPokemonLogEntry_Result_IsValidValue(int32_t value);

#pragma mark - Enum FortSearchLogEntry_Result

typedef GPB_ENUM(FortSearchLogEntry_Result) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  FortSearchLogEntry_Result_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  FortSearchLogEntry_Result_Unset = 0,
  FortSearchLogEntry_Result_Success = 1,
};

GPBEnumDescriptor *FortSearchLogEntry_Result_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL FortSearchLogEntry_Result_IsValidValue(int32_t value);

#pragma mark - PogoprotosDataLogsRoot

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
@interface PogoprotosDataLogsRoot : GPBRootObject
@end

#pragma mark - ActionLogEntry

typedef GPB_ENUM(ActionLogEntry_FieldNumber) {
  ActionLogEntry_FieldNumber_TimestampMs = 1,
  ActionLogEntry_FieldNumber_Sfida = 2,
  ActionLogEntry_FieldNumber_CatchPokemon = 3,
  ActionLogEntry_FieldNumber_FortSearch = 4,
  ActionLogEntry_FieldNumber_BuddyPokemon = 5,
};

typedef GPB_ENUM(ActionLogEntry_Action_OneOfCase) {
  ActionLogEntry_Action_OneOfCase_GPBUnsetOneOfCase = 0,
  ActionLogEntry_Action_OneOfCase_CatchPokemon = 3,
  ActionLogEntry_Action_OneOfCase_FortSearch = 4,
  ActionLogEntry_Action_OneOfCase_BuddyPokemon = 5,
};

@interface ActionLogEntry : GPBMessage

@property(nonatomic, readwrite) int64_t timestampMs;

@property(nonatomic, readwrite) BOOL sfida;

@property(nonatomic, readonly) ActionLogEntry_Action_OneOfCase actionOneOfCase;

@property(nonatomic, readwrite, strong, null_resettable) CatchPokemonLogEntry *catchPokemon;

@property(nonatomic, readwrite, strong, null_resettable) FortSearchLogEntry *fortSearch;

@property(nonatomic, readwrite, strong, null_resettable) BuddyPokemonLogEntry *buddyPokemon;

@end

/**
 * Clears whatever value was set for the oneof 'action'.
 **/
void ActionLogEntry_ClearActionOneOfCase(ActionLogEntry *message);

#pragma mark - BuddyPokemonLogEntry

typedef GPB_ENUM(BuddyPokemonLogEntry_FieldNumber) {
  BuddyPokemonLogEntry_FieldNumber_Result = 1,
  BuddyPokemonLogEntry_FieldNumber_PokemonId = 2,
  BuddyPokemonLogEntry_FieldNumber_Amount = 3,
};

@interface BuddyPokemonLogEntry : GPBMessage

@property(nonatomic, readwrite) BuddyPokemonLogEntry_Result result;

@property(nonatomic, readwrite) enum PokemonId pokemonId;

@property(nonatomic, readwrite) int32_t amount;

@end

/**
 * Fetches the raw value of a @c BuddyPokemonLogEntry's @c result property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t BuddyPokemonLogEntry_Result_RawValue(BuddyPokemonLogEntry *message);
/**
 * Sets the raw value of an @c BuddyPokemonLogEntry's @c result property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetBuddyPokemonLogEntry_Result_RawValue(BuddyPokemonLogEntry *message, int32_t value);

/**
 * Fetches the raw value of a @c BuddyPokemonLogEntry's @c pokemonId property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t BuddyPokemonLogEntry_PokemonId_RawValue(BuddyPokemonLogEntry *message);
/**
 * Sets the raw value of an @c BuddyPokemonLogEntry's @c pokemonId property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetBuddyPokemonLogEntry_PokemonId_RawValue(BuddyPokemonLogEntry *message, int32_t value);

#pragma mark - CatchPokemonLogEntry

typedef GPB_ENUM(CatchPokemonLogEntry_FieldNumber) {
  CatchPokemonLogEntry_FieldNumber_Result = 1,
  CatchPokemonLogEntry_FieldNumber_PokemonId = 2,
  CatchPokemonLogEntry_FieldNumber_CombatPoints = 3,
  CatchPokemonLogEntry_FieldNumber_PokemonDataId = 4,
};

@interface CatchPokemonLogEntry : GPBMessage

@property(nonatomic, readwrite) CatchPokemonLogEntry_Result result;

@property(nonatomic, readwrite) enum PokemonId pokemonId;

@property(nonatomic, readwrite) int32_t combatPoints;

@property(nonatomic, readwrite) uint64_t pokemonDataId;

@end

/**
 * Fetches the raw value of a @c CatchPokemonLogEntry's @c result property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t CatchPokemonLogEntry_Result_RawValue(CatchPokemonLogEntry *message);
/**
 * Sets the raw value of an @c CatchPokemonLogEntry's @c result property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetCatchPokemonLogEntry_Result_RawValue(CatchPokemonLogEntry *message, int32_t value);

/**
 * Fetches the raw value of a @c CatchPokemonLogEntry's @c pokemonId property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t CatchPokemonLogEntry_PokemonId_RawValue(CatchPokemonLogEntry *message);
/**
 * Sets the raw value of an @c CatchPokemonLogEntry's @c pokemonId property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetCatchPokemonLogEntry_PokemonId_RawValue(CatchPokemonLogEntry *message, int32_t value);

#pragma mark - FortSearchLogEntry

typedef GPB_ENUM(FortSearchLogEntry_FieldNumber) {
  FortSearchLogEntry_FieldNumber_Result = 1,
  FortSearchLogEntry_FieldNumber_FortId = 2,
  FortSearchLogEntry_FieldNumber_ItemsArray = 3,
  FortSearchLogEntry_FieldNumber_Eggs = 4,
};

@interface FortSearchLogEntry : GPBMessage

@property(nonatomic, readwrite) FortSearchLogEntry_Result result;

@property(nonatomic, readwrite, copy, null_resettable) NSString *fortId;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ItemData*> *itemsArray;
/** The number of items in @c itemsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger itemsArray_Count;

@property(nonatomic, readwrite) int32_t eggs;

@end

/**
 * Fetches the raw value of a @c FortSearchLogEntry's @c result property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t FortSearchLogEntry_Result_RawValue(FortSearchLogEntry *message);
/**
 * Sets the raw value of an @c FortSearchLogEntry's @c result property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetFortSearchLogEntry_Result_RawValue(FortSearchLogEntry *message, int32_t value);

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)