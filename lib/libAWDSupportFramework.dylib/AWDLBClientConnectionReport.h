/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLBClientConnectionReport : PBCodable <NSCopying> {
    struct { 
        unsigned int bytesReceived : 1; 
        unsigned int bytesSent : 1; 
        unsigned int connectionDuration : 1; 
        unsigned int connectionServiceId : 1; 
        unsigned int timeToConnectionFailure : 1; 
        unsigned int timeToFirstResponse : 1; 
        unsigned int timestamp : 1; 
        unsigned int connectionJoiningFailure : 1; 
        unsigned int connectionJoiningLbConnectionMigration : 1; 
        unsigned int connectionJoiningLbConnectionState : 1; 
        unsigned int dataPathResult : 1; 
    long long _bytesReceived;
    long long _bytesSent;
    long long _connectionDuration;
    int _connectionJoiningFailure;
    int _connectionJoiningLbConnectionMigration;
    int _connectionJoiningLbConnectionState;
    unsigned long long _connectionServiceId;
    int _dataPathResult;
    } _has;
    long long _timeToConnectionFailure;
    long long _timeToFirstResponse;
    unsigned long long _timestamp;
}

@property long long bytesReceived;
@property long long bytesSent;
@property long long connectionDuration;
@property int connectionJoiningFailure;
@property int connectionJoiningLbConnectionMigration;
@property int connectionJoiningLbConnectionState;
@property unsigned long long connectionServiceId;
@property int dataPathResult;
@property BOOL hasBytesReceived;
@property BOOL hasBytesSent;
@property BOOL hasConnectionDuration;
@property BOOL hasConnectionJoiningFailure;
@property BOOL hasConnectionJoiningLbConnectionMigration;
@property BOOL hasConnectionJoiningLbConnectionState;
@property BOOL hasConnectionServiceId;
@property BOOL hasDataPathResult;
@property BOOL hasTimeToConnectionFailure;
@property BOOL hasTimeToFirstResponse;
@property BOOL hasTimestamp;
@property long long timeToConnectionFailure;
@property long long timeToFirstResponse;
@property unsigned long long timestamp;

- (long long)bytesReceived;
- (long long)bytesSent;
- (long long)connectionDuration;
- (int)connectionJoiningFailure;
- (int)connectionJoiningLbConnectionMigration;
- (int)connectionJoiningLbConnectionState;
- (unsigned long long)connectionServiceId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dataPathResult;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBytesReceived;
- (BOOL)hasBytesSent;
- (BOOL)hasConnectionDuration;
- (BOOL)hasConnectionJoiningFailure;
- (BOOL)hasConnectionJoiningLbConnectionMigration;
- (BOOL)hasConnectionJoiningLbConnectionState;
- (BOOL)hasConnectionServiceId;
- (BOOL)hasDataPathResult;
- (BOOL)hasTimeToConnectionFailure;
- (BOOL)hasTimeToFirstResponse;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBytesReceived:(long long)arg1;
- (void)setBytesSent:(long long)arg1;
- (void)setConnectionDuration:(long long)arg1;
- (void)setConnectionJoiningFailure:(int)arg1;
- (void)setConnectionJoiningLbConnectionMigration:(int)arg1;
- (void)setConnectionJoiningLbConnectionState:(int)arg1;
- (void)setConnectionServiceId:(unsigned long long)arg1;
- (void)setDataPathResult:(int)arg1;
- (void)setHasBytesReceived:(BOOL)arg1;
- (void)setHasBytesSent:(BOOL)arg1;
- (void)setHasConnectionDuration:(BOOL)arg1;
- (void)setHasConnectionJoiningFailure:(BOOL)arg1;
- (void)setHasConnectionJoiningLbConnectionMigration:(BOOL)arg1;
- (void)setHasConnectionJoiningLbConnectionState:(BOOL)arg1;
- (void)setHasConnectionServiceId:(BOOL)arg1;
- (void)setHasDataPathResult:(BOOL)arg1;
- (void)setHasTimeToConnectionFailure:(BOOL)arg1;
- (void)setHasTimeToFirstResponse:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimeToConnectionFailure:(long long)arg1;
- (void)setTimeToFirstResponse:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)timeToConnectionFailure;
- (long long)timeToFirstResponse;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
