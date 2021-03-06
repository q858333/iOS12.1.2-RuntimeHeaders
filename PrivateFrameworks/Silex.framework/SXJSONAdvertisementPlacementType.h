/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXJSONAdvertisementPlacementType : SXJSONObject <SXAdvertisementPlacementType>

@property (nonatomic, readonly) unsigned long long bannerType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } distanceFromMedia;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) unsigned long long frequency;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXAutoPlacementLayout> *layout;
@property (readonly) Class superclass;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;

- (unsigned long long)bannerTypeWithValue:(id)arg1 withType:(int)arg2;
- (id)description;

@end
