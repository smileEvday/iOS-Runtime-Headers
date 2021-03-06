/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class <HDHealthDaemon>, HDLastIntervalInfo, NSArray, NSDictionary, NSMutableArray;

@interface HDCumulativeCollectionCalculator : NSObject {
    struct map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > { 
        struct __tree<std::__1::__value_type<long long, double>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, double> > > { 
            struct __tree_node<std::__1::__value_type<long long, double>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, double>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    struct map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > { 
        struct __tree<std::__1::__value_type<long long, double>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, double> > > { 
            struct __tree_node<std::__1::__value_type<long long, double>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, double>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    struct map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double> > > { 
        struct __tree<std::__1::__value_type<long long, double>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, double> > > { 
            struct __tree_node<std::__1::__value_type<long long, double>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, double>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, double>, std::__1::less<long long>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    unsigned int _bucketIndex;
    NSArray *_bucketPeriods;
    } _bySource;
    unsigned int _currPeriod;
    long long _currentAligned;
    } _currentInterval;
    <HDHealthDaemon> *_daemon;
    unsigned int _dataCount;
    BOOL _detailBySource;
    NSMutableArray *_futureBuckets;
    NSMutableArray *_futureCounts;
    NSMutableArray *_futureIntervals;
    BOOL _lastBucket;
    HDLastIntervalInfo *_lastIntervalInfo;
    } _lastIntervalSources;
    unsigned int _mergeStrategy;
    NSArray *_orderedSourceIds;
}

@property unsigned int bucketIndex;
@property(retain) NSArray * bucketPeriods;
@property unsigned int currPeriod;
@property long long currentAligned;
@property(retain) <HDHealthDaemon> * daemon;
@property unsigned int dataCount;
@property BOOL detailBySource;
@property(retain) NSMutableArray * futureBuckets;
@property(retain) NSMutableArray * futureCounts;
@property(retain) NSMutableArray * futureIntervals;
@property BOOL lastBucket;
@property(readonly) HDLastIntervalInfo * lastIntervalInfo;
@property unsigned int mergeStrategy;
@property(retain) NSArray * orderedSourceIds;
@property(readonly) NSDictionary * sumsBySource;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)_putInFutureBucketsValue:(double)arg1 timeAfterEnd:(double)arg2 valuePerSecond:(double)arg3 sampleEndTime:(double)arg4 sourceId:(unsigned long long)arg5;
- (double)addCurrentBucket;
- (void)addCurrentValue:(double)arg1 sourceId:(long long)arg2;
- (void)addSumsBySource:(id)arg1 lastInterval:(id)arg2 currentAligned:(long long)arg3 unit:(id)arg4;
- (void)advanceBucket;
- (double)advanceUntilInterval:(long long)arg1;
- (unsigned int)bucketIndex;
- (id)bucketPeriods;
- (unsigned int)currPeriod;
- (long long)currentAligned;
- (id)daemon;
- (unsigned int)dataCount;
- (id)description;
- (BOOL)detailBySource;
- (id)futureBuckets;
- (id)futureCounts;
- (id)futureIntervals;
- (BOOL)hasData;
- (BOOL)hasFutureBuckets;
- (id)initWithDaemon:(id)arg1 orderedSourceIds:(id)arg2 bucketPeriods:(id)arg3 mergeStrategy:(unsigned int)arg4;
- (BOOL)lastBucket;
- (id)lastIntervalInfo;
- (unsigned int)mergeStrategy;
- (id)orderedSourceIds;
- (void)setBucketIndex:(unsigned int)arg1;
- (void)setBucketPeriods:(id)arg1;
- (void)setCurrPeriod:(unsigned int)arg1;
- (void)setCurrentAligned:(long long)arg1;
- (void)setDaemon:(id)arg1;
- (void)setDataCount:(unsigned int)arg1;
- (void)setDetailBySource:(BOOL)arg1;
- (void)setFutureBuckets:(id)arg1;
- (void)setFutureCounts:(id)arg1;
- (void)setFutureIntervals:(id)arg1;
- (void)setLastBucket:(BOOL)arg1;
- (void)setMergeStrategy:(unsigned int)arg1;
- (void)setOrderedSourceIds:(id)arg1;
- (void)splitValue:(double)arg1 perSecond:(double)arg2 sourceId:(long long)arg3 sampleInfo:(struct { double x1; double x2; long long x3; long long x4; double x5; })arg4 sampleEndTime:(double)arg5;
- (id)sumsBySource;

@end
