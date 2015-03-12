/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSMutableArray, NSString;

@interface HDCodableNanoSyncChange : PBCodable <HDSyncChange, HDNanoSyncDescription, NSCopying> {
    struct { 
        unsigned int endAnchor : 1; 
        unsigned int startAnchor : 1; 
        unsigned int objectType : 1; 
    long long _endAnchor;
    } _has;
    NSMutableArray *_objectDatas;
    int _objectType;
    long long _startAnchor;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property long long endAnchor;
@property BOOL hasEndAnchor;
@property BOOL hasObjectType;
@property BOOL hasStartAnchor;
@property(readonly) unsigned int hash;
@property(retain) NSMutableArray * objectDatas;
@property int objectType;
@property long long startAnchor;
@property(readonly) Class superclass;

+ (id)changeWithNanoSyncEntityClass:(Class)arg1;

- (void).cxx_destruct;
- (void)addObjectData:(id)arg1;
- (void)clearObjectDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedObjects;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)endAnchor;
- (BOOL)hasEndAnchor;
- (BOOL)hasObjectType;
- (BOOL)hasStartAnchor;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nanoSyncDescription;
- (id)objectDataAtIndex:(unsigned int)arg1;
- (id)objectDatas;
- (unsigned int)objectDatasCount;
- (int)objectType;
- (BOOL)readFrom:(id)arg1;
- (void)setEndAnchor:(long long)arg1;
- (void)setHasEndAnchor:(BOOL)arg1;
- (void)setHasObjectType:(BOOL)arg1;
- (void)setHasStartAnchor:(BOOL)arg1;
- (void)setObjectDatas:(id)arg1;
- (void)setObjectType:(int)arg1;
- (void)setObjects:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2;
- (void)setStartAnchor:(long long)arg1;
- (long long)startAnchor;
- (struct HDSyncAnchorRange { long long x1; long long x2; })syncAnchorRange;
- (Class)syncEntityClass;
- (void)writeTo:(id)arg1;

@end