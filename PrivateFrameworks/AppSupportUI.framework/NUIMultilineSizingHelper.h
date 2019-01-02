/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

@interface NUIMultilineSizingHelper : NSObject {
    struct { 
        unsigned int isContainerView : 1; 
        unsigned int determiningPreferredMaxLayoutWidth : 1; 
        unsigned int inSecondConstraintsPass : 1; 
    }  _flags;
    double  _preferredMaxLayoutWidth;
    UIView * _view;
    /* Warning: unhandled struct encoding: '{objc_super="receiver"@"super_class"#}' */ struct objc_super { 
        id receiver; 
    }  _view_super;
}

- (void).cxx_destruct;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_resetToBeginningOfDoublePass;
- (void)_setInSecondConstraintsPass:(bool)arg1;
- (id)initWithView:(id)arg1 class:(Class)arg2;
- (double)preferredMaxLayoutWidth;
- (void)updateConstraints;

@end