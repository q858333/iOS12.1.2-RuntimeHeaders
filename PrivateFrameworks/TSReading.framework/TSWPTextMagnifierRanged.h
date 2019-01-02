/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPTextMagnifierRanged : UIView <TSWPTextMagnifier, TSWPTextMagnifierRendererDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _animationPoint;
    bool  _inPlace;
    struct CGPoint { 
        double x; 
        double y; 
    }  _magnificationPoint;
    TSWPTextMagnifierRenderer * _magnifierRenderer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    TSWPRep * _target;
    TSWPTextMagnifierTimeWeightedPoint * _weightedPoint;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } animationPoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } magnificationPoint;
@property (nonatomic, readonly) NSString *maskImageName;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic, readonly) NSString *overlayImageName;
@property (readonly) Class superclass;
@property (nonatomic, retain) TSWPRep *target;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } terminalPoint;
@property (nonatomic, readonly) bool terminalPointPlacedCarefully;
@property (nonatomic, readonly) NSString *underlayImageName;

- (struct CGPoint { double x1; double x2; })animationPoint;
- (void)autoscrollWillNotStart;
- (void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(struct CGPoint { double x1; double x2; })arg2 offset:(struct CGPoint { double x1; double x2; })arg3 animated:(bool)arg4;
- (void)canvasNeedsDisplay;
- (double)currentOffset;
- (void)dealloc;
- (void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (double)horizontalMovement;
- (double)horizontalMovementAtTime:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })magnificationPoint;
- (id)maskImageName;
- (struct CGPoint { double x1; double x2; })offset;
- (id)overlayImageName;
- (void)postAutoscrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAnimationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAutoscrollDirections:(int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMagnificationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNeedsDisplay;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTarget:(id)arg1;
- (bool)shouldHideCanvasLayer;
- (void)stopMagnifying:(bool)arg1;
- (id)target;
- (struct CGPoint { double x1; double x2; })terminalPoint;
- (bool)terminalPointPlacedCarefully;
- (id)underlayImageName;
- (void)updateFrame;
- (bool)wasPlacedCarefullyAtTime:(double)arg1;

@end