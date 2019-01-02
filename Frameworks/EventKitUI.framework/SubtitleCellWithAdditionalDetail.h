/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface SubtitleCellWithAdditionalDetail : EKUITableViewCell {
    UILabel * _additionalDetailLabel;
    id  _source;
}

@property (nonatomic, readonly, retain) UILabel *additionalDetailLabel;
@property id source;

- (void).cxx_destruct;
- (id)additionalDetailLabel;
- (void)layoutSubviews;
- (bool)leftFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 overlapsRightFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 difference:(double*)arg3;
- (void)setSource:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)source;

@end