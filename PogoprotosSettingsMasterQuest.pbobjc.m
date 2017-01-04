// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos.Settings.Master.Quest.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers_RuntimeSupport.h>
#else
 #import "GPBProtocolBuffers_RuntimeSupport.h"
#endif

 #import "PogoprotosSettingsMasterQuest.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma mark - PogoprotosSettingsMasterQuestRoot

@implementation PogoprotosSettingsMasterQuestRoot

// No extensions in the file and no imports, so no need to generate
// +extensionRegistry.

@end

#pragma mark - PogoprotosSettingsMasterQuestRoot_FileDescriptor

static GPBFileDescriptor *PogoprotosSettingsMasterQuestRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@"POGOProtos.Settings.Master.Quest"
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - DailyQuestSettings

@implementation DailyQuestSettings

@dynamic bucketsPerDay;
@dynamic streakLength;
@dynamic bonusMultiplier;
@dynamic streakBonusMultiplier;

typedef struct DailyQuestSettings__storage_ {
  uint32_t _has_storage_[1];
  int32_t bucketsPerDay;
  int32_t streakLength;
  float bonusMultiplier;
  float streakBonusMultiplier;
} DailyQuestSettings__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "bucketsPerDay",
        .dataTypeSpecific.className = NULL,
        .number = DailyQuestSettings_FieldNumber_BucketsPerDay,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(DailyQuestSettings__storage_, bucketsPerDay),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "streakLength",
        .dataTypeSpecific.className = NULL,
        .number = DailyQuestSettings_FieldNumber_StreakLength,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(DailyQuestSettings__storage_, streakLength),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "bonusMultiplier",
        .dataTypeSpecific.className = NULL,
        .number = DailyQuestSettings_FieldNumber_BonusMultiplier,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(DailyQuestSettings__storage_, bonusMultiplier),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeFloat,
      },
      {
        .name = "streakBonusMultiplier",
        .dataTypeSpecific.className = NULL,
        .number = DailyQuestSettings_FieldNumber_StreakBonusMultiplier,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(DailyQuestSettings__storage_, streakBonusMultiplier),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeFloat,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[DailyQuestSettings class]
                                     rootClass:[PogoprotosSettingsMasterQuestRoot class]
                                          file:PogoprotosSettingsMasterQuestRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(DailyQuestSettings__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end


#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)