/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class HKQuantity;

@interface _HKWorkoutGoalFilter : _HKFilter {
    HKQuantity *_comparisonQuantity;
    unsigned int _goalType;
    unsigned int _operatorType;
}

@property(readonly) HKQuantity * comparisonQuantity;
@property(readonly) unsigned int goalType;
@property(readonly) unsigned int operatorType;

+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned int)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithComparisonQuantity:(id)arg1 goalType:(unsigned int)arg2 operatorType:(unsigned int)arg3;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)acceptsDataObject:(id)arg1;
- (id)comparisonQuantity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)goalType;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)operatorType;
- (id)predicateWithHealthDaemon:(id)arg1;

@end
