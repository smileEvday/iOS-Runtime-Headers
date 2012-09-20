/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPStringFormat : NSObject  {
    int mAlignment;
    unsigned short mDigitSubstitutionLanguage;
    int mDigitSubstitutionMethod;
    unsigned long mFormatFlags;
    int mHotkeyPrefix;
    int mLineAlignment;
    float mFirstTabOffset;
    int mTabStopCount;
    float *mTabStops;
    int mTrimming;
}


- (void)dealloc;
- (id)init;
- (int)alignment;
- (void)setAlignment:(int)arg1;
- (int)hotkeyPrefix;
- (int)digitSubstitutionMethod;
- (unsigned short)digitSubstitutionLanguage;
- (int)trimming;
- (int)lineAlignment;
- (unsigned long)formatFlags;
- (float)firstTabOffset;
- (void)setTabStops:(const float*)arg1 count:(int)arg2;
- (void)setTrimming:(int)arg1;
- (void)setHotkeyPrefix:(int)arg1;
- (void)setFirstTabOffset:(float)arg1;
- (void)setDigitSubstitutionMethod:(int)arg1;
- (void)setDigitSubstitutionLanguage:(unsigned short)arg1;
- (void)setLineAlignment:(int)arg1;
- (void)setFormatFlags:(unsigned long)arg1;
- (const float*)tabStops;
- (int)tabStopCount;

@end