/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIOverlayEffectViewColorEntry : _UIVisualEffectViewEntry {
    double  _alpha;
    UIColor * _color;
    NSString * _filterType;
}

@property (nonatomic) double alpha;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic, copy) NSString *filterType;

- (void).cxx_destruct;
- (void)addEffectToView:(id)arg1;
- (double)alpha;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (bool)canTransitionToEffect:(id)arg1;
- (id)color;
- (id)description;
- (id)filterType;
- (void)removeEffectFromView:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setColor:(id)arg1;
- (void)setFilterType:(id)arg1;

@end
