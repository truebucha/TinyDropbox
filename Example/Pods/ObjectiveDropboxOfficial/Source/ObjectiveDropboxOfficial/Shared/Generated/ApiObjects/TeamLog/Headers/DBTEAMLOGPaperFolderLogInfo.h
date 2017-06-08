///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGPaperFolderLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperFolderLogInfo` struct.
///
/// Paper folder's logged information.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGPaperFolderLogInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Papers folder Id.
@property (nonatomic, readonly, copy) NSString *folderId;

/// Paper folder name.
@property (nonatomic, readonly, copy) NSString *folderName;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param folderId Papers folder Id.
/// @param folderName Paper folder name.
///
/// @return An initialized instance.
///
- (instancetype)initWithFolderId:(NSString *)folderId folderName:(NSString *)folderName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PaperFolderLogInfo` struct.
///
@interface DBTEAMLOGPaperFolderLogInfoSerializer : NSObject

///
/// Serializes `DBTEAMLOGPaperFolderLogInfo` instances.
///
/// @param instance An instance of the `DBTEAMLOGPaperFolderLogInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperFolderLogInfo` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGPaperFolderLogInfo *)instance;

///
/// Deserializes `DBTEAMLOGPaperFolderLogInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperFolderLogInfo` API object.
///
/// @return An instantiation of the `DBTEAMLOGPaperFolderLogInfo` object.
///
+ (DBTEAMLOGPaperFolderLogInfo *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
