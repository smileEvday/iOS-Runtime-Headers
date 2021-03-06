/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class <NSCopying><NSSecureCoding>, GSPermanentStorage, NSDate, NSString, NSURL;

@interface BRNonLocalVersion : NSObject {
    NSString *_displayName;
    NSString *_etag;
    BOOL _hasThumbnail;
    NSString *_lastEditorDeviceName;
    NSDate *_modificationDate;
    long long _sandboxHandle;
    unsigned long long _size;
    NSURL *_url;
    GSPermanentStorage *_versionsStore;
}

@property(readonly) NSString * displayName;
@property(readonly) NSString * etag;
@property BOOL hasThumbnail;
@property(readonly) BOOL isLatestVersion;
@property(readonly) NSString * lastEditorDeviceName;
@property(readonly) NSDate * modificationDate;
@property(readonly) <NSCopying><NSSecureCoding> * persistentIdentifier;
@property(readonly) unsigned long long size;
@property(readonly) NSURL * url;

+ (id)listVersionsOfDocumentAtURL:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)etag;
- (BOOL)hasThumbnail;
- (id)initWithURL:(id)arg1 physicalURL:(id)arg2 extension:(id)arg3 etag:(id)arg4 hasThumbnail:(BOOL)arg5 lastEditorDeviceName:(id)arg6 versionsStore:(id)arg7;
- (BOOL)isLatestVersion;
- (id)lastEditorDeviceName;
- (id)modificationDate;
- (id)persistentIdentifier;
- (void)setHasThumbnail:(BOOL)arg1;
- (unsigned long long)size;
- (id)url;

@end
