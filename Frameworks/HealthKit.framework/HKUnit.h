/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class NSString, _HKDimension, _HKFactorization;

@interface HKUnit : NSObject <NSSecureCoding, NSCopying> {
    _HKFactorization *_baseUnitReduction;
    _HKFactorization *_dimensionReduction;
    long _reduceToken;
    double _reducedProportionalSize;
    double _scaleOffset;
}

@property(readonly) _HKFactorization * _baseUnits;
@property(readonly) _HKDimension * dimension;
@property(readonly) double scaleOffset;
@property(readonly) NSString * unitString;

+ (id)_distanceUnitForLocale:(id)arg1;
+ (id)_foodEnergyUnitForLocale:(id)arg1;
+ (id)_heightUnitForLocale:(id)arg1;
+ (BOOL)_isValidUnitString:(id)arg1;
+ (id)_moles;
+ (id)_nullUnit;
+ (id)_personMassUnitForLocale:(id)arg1;
+ (id)_prefixStringForMetricPrefix:(int)arg1;
+ (id)_temperatureUnitForLocale:(id)arg1;
+ (id)atmosphereUnit;
+ (id)calorieUnit;
+ (id)centimeterOfWaterUnit;
+ (id)countUnit;
+ (id)dayUnit;
+ (id)degreeCelsiusUnit;
+ (id)degreeFahrenheitUnit;
+ (int)energyFormatterUnitFromUnit:(id)arg1;
+ (id)fluidOunceImperialUnit;
+ (id)fluidOunceUSUnit;
+ (id)footUnit;
+ (id)gramUnit;
+ (id)gramUnitWithMetricPrefix:(int)arg1;
+ (id)hourUnit;
+ (id)inchUnit;
+ (id)jouleUnit;
+ (id)jouleUnitWithMetricPrefix:(int)arg1;
+ (id)kelvinUnit;
+ (id)kilocalorieUnit;
+ (id)kilojoulesUnit;
+ (int)lengthFormatterUnitFromUnit:(id)arg1;
+ (id)literUnit;
+ (id)literUnitWithMetricPrefix:(int)arg1;
+ (int)massFormatterUnitFromUnit:(id)arg1;
+ (id)meterUnit;
+ (id)meterUnitWithMetricPrefix:(int)arg1;
+ (id)mileUnit;
+ (id)millimeterOfMercuryUnit;
+ (id)milliseconds;
+ (id)minuteUnit;
+ (id)moleUnitWithMetricPrefix:(int)arg1 molarMass:(double)arg2;
+ (id)moleUnitWithMolarMass:(double)arg1;
+ (id)ounceUnit;
+ (id)pascalUnit;
+ (id)pascalUnitWithMetricPrefix:(int)arg1;
+ (id)percentUnit;
+ (id)pintImperialUnit;
+ (id)pintUSUnit;
+ (id)poundUnit;
+ (id)secondUnit;
+ (id)secondUnitWithMetricPrefix:(int)arg1;
+ (id)siemenUnit;
+ (id)siemenUnitWithMetricPrefix:(int)arg1;
+ (id)stoneUnit;
+ (BOOL)supportsSecureCoding;
+ (id)unitFromEnergyFormatterUnit:(int)arg1;
+ (id)unitFromLengthFormatterUnit:(int)arg1;
+ (id)unitFromMassFormatterUnit:(int)arg1;
+ (id)unitFromString:(id)arg1;

- (void).cxx_destruct;
- (id)_baseUnitReduction;
- (id)_baseUnitReductionAndProportionalSize:(out double*)arg1 withCycleSet:(id)arg2;
- (id)_baseUnits;
- (id)_computeBaseUnitReductionAndProportionalSize:(out double*)arg1 withCycleSet:(id)arg2;
- (id)_dimensionReduction;
- (id)_init;
- (BOOL)_isCompatibleWithDimension:(id)arg1;
- (BOOL)_isCompatibleWithUnit:(id)arg1;
- (void)_reduceIfNecessaryWithCycleSet:(id)arg1;
- (double)_reducedProportionalSize;
- (double)_valueByConvertingValue:(double)arg1 toUnit:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dimension;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNull;
- (id)reciprocalUnit;
- (double)scaleOffset;
- (id)unitDividedByUnit:(id)arg1;
- (id)unitMultipliedByUnit:(id)arg1;
- (id)unitRaisedToPower:(int)arg1;
- (id)unitString;

@end
