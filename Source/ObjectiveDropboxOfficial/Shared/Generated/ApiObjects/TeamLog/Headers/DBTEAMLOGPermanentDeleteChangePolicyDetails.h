///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGContentPermanentDeletePolicy;
@class DBTEAMLOGPermanentDeleteChangePolicyDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PermanentDeleteChangePolicyDetails` struct.
///
/// Enabled/disabled ability of team members to permanently delete content.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGPermanentDeleteChangePolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New permanent delete content policy.
@property (nonatomic, readonly) DBTEAMLOGContentPermanentDeletePolicy *dNewValue;

/// Previous permanent delete content policy. Might be missing due to historical
/// data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGContentPermanentDeletePolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New permanent delete content policy.
/// @param previousValue Previous permanent delete content policy. Might be
/// missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGContentPermanentDeletePolicy *)dNewValue
                    previousValue:(nullable DBTEAMLOGContentPermanentDeletePolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewValue New permanent delete content policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGContentPermanentDeletePolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PermanentDeleteChangePolicyDetails` struct.
///
@interface DBTEAMLOGPermanentDeleteChangePolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGPermanentDeleteChangePolicyDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGPermanentDeleteChangePolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGPermanentDeleteChangePolicyDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGPermanentDeleteChangePolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGPermanentDeleteChangePolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGPermanentDeleteChangePolicyDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGPermanentDeleteChangePolicyDetails` object.
///
+ (DBTEAMLOGPermanentDeleteChangePolicyDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
