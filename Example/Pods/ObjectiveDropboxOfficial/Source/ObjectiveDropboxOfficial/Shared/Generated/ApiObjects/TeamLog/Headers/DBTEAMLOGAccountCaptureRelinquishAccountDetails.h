///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGAccountCaptureRelinquishAccountDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AccountCaptureRelinquishAccountDetails` struct.
///
/// Account captured user relinquished their account by changing the email
/// address associated with it.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGAccountCaptureRelinquishAccountDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Domain names.
@property (nonatomic, readonly) NSArray<NSString *> *domainName;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param domainName Domain names.
///
/// @return An initialized instance.
///
- (instancetype)initWithDomainName:(NSArray<NSString *> *)domainName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `AccountCaptureRelinquishAccountDetails`
/// struct.
///
@interface DBTEAMLOGAccountCaptureRelinquishAccountDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGAccountCaptureRelinquishAccountDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGAccountCaptureRelinquishAccountDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGAccountCaptureRelinquishAccountDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGAccountCaptureRelinquishAccountDetails *)instance;

///
/// Deserializes `DBTEAMLOGAccountCaptureRelinquishAccountDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGAccountCaptureRelinquishAccountDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGAccountCaptureRelinquishAccountDetails` object.
///
+ (DBTEAMLOGAccountCaptureRelinquishAccountDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
