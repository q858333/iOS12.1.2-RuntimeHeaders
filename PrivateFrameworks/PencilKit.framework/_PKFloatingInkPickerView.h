/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKFloatingInkPickerView : UIView {
    UIVisualEffectView * _dockView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _dragStartOrigin;
    PKInlineInkPicker * _inkPicker;
    unsigned long long  _position;
    UIButton * _redoButton;
    UIButton * _shapeButton;
    UIButton * _undoButton;
}

@property (nonatomic, retain) UIVisualEffectView *dockView;
@property (nonatomic) struct CGPoint { double x1; double x2; } dragStartOrigin;
@property (nonatomic, retain) PKInlineInkPicker *inkPicker;
@property (nonatomic) unsigned long long position;
@property (nonatomic, retain) UIButton *redoButton;
@property (nonatomic, retain) UIButton *shapeButton;
@property (nonatomic, retain) UIButton *undoButton;

- (void).cxx_destruct;
- (void)didPanInkPicker:(id)arg1;
- (id)dockView;
- (struct CGPoint { double x1; double x2; })dragStartOrigin;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inkPicker;
- (void)layoutSubviews;
- (unsigned long long)position;
- (id)redoButton;
- (void)setDockView:(id)arg1;
- (void)setDragStartOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInkPicker:(id)arg1;
- (void)setPosition:(unsigned long long)arg1;
- (void)setPositionForProjectedOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRedoButton:(id)arg1;
- (void)setShapeButton:(id)arg1;
- (void)setUndoButton:(id)arg1;
- (id)shapeButton;
- (id)undoButton;

@end