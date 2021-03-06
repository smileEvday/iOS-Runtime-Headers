/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartRepElementIndex : NSObject <NSCopying> {
    unsigned int mSeriesIndex;
    unsigned int mValueIndex;
}

@property(readonly) unsigned int seriesIndex;
@property(readonly) unsigned int valueIndex;

+ (id)repElementIndexWithSeriesIndex:(unsigned int)arg1 valueIndex:(unsigned int)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (id)initWithSeriesIndex:(unsigned int)arg1 valueIndex:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)seriesIndex;
- (id)seriesIndexSet;
- (unsigned int)valueIndex;
- (id)valueIndexSet;

@end
