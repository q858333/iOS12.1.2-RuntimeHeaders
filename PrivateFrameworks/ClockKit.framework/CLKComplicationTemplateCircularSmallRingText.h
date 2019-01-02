/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateCircularSmallRingText : CLKComplicationTemplate {
    float  _fillFraction;
    long long  _ringStyle;
    CLKTextProvider * _textProvider;
}

@property (nonatomic) float fillFraction;
@property (nonatomic) long long ringStyle;
@property (nonatomic, copy) CLKTextProvider *textProvider;

- (void).cxx_destruct;
- (void)_enumerateFloatKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (float)fillFraction;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (long long)ringStyle;
- (void)setFillFraction:(float)arg1;
- (void)setRingStyle:(long long)arg1;
- (void)setTextProvider:(id)arg1;
- (id)textProvider;

@end