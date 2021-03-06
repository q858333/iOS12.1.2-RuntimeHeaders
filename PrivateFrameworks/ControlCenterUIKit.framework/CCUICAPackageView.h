/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUICAPackageView : UIView {
    CAPackage * _package;
    CCUICAPackageDescription * _packageDescription;
    CALayer * _packageLayer;
    CAStateController * _stateController;
}

@property (nonatomic, retain) CAPackage *package;
@property (nonatomic, retain) CCUICAPackageDescription *packageDescription;

- (void).cxx_destruct;
- (void)_setPackage:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)package;
- (id)packageDescription;
- (void)setPackage:(id)arg1;
- (void)setPackageDescription:(id)arg1;
- (void)setStateName:(id)arg1;

@end
