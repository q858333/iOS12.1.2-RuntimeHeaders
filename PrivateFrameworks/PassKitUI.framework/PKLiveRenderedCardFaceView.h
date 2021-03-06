/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKLiveRenderedCardFaceView : UIView <PK3DLiveCardViewDelegate> {
    PK3DCardView * _cardView;
    UIImageView * _logoImageView;
    UIImageView * _maskView;
    PKPass * _pass;
}

- (void).cxx_destruct;
- (double)cornerRadiusForStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pass:(id)arg2;
- (void)layoutSubviews;
- (void)sceneDidRenderAtTime:(double)arg1;
- (void)setMotionEnabled:(bool)arg1;
- (bool)shouldUseContinuousCornersForStyle:(long long)arg1;

@end
