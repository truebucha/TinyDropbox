///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMMembersListArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MembersListArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMMembersListArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Number of results to return per call.
@property (nonatomic, readonly) NSNumber *limit;

/// Whether to return removed members.
@property (nonatomic, readonly) NSNumber *includeRemoved;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param limit Number of results to return per call.
/// @param includeRemoved Whether to return removed members.
///
/// @return An initialized instance.
///
- (instancetype)initWithLimit:(nullable NSNumber *)limit includeRemoved:(nullable NSNumber *)includeRemoved;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MembersListArg` struct.
///
@interface DBTEAMMembersListArgSerializer : NSObject

///
/// Serializes `DBTEAMMembersListArg` instances.
///
/// @param instance An instance of the `DBTEAMMembersListArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMMembersListArg` API object.
///
+ (NSDictionary *)serialize:(DBTEAMMembersListArg *)instance;

///
/// Deserializes `DBTEAMMembersListArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMMembersListArg` API object.
///
/// @return An instantiation of the `DBTEAMMembersListArg` object.
///
+ (DBTEAMMembersListArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
