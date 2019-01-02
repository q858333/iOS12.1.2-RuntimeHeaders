/* Generated by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPinchRotationTracker : NSObject <QLDismissGestureTracking> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorLocationOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    double  _dismissalProgress;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialGestureLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTrackingCenter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _minimumZoomForDismissal;
    double  _previousScale;
    double  _rotation;
    bool  _shouldFinishDismissal;
    double  _targetZoom;
    struct CGPoint { 
        double x; 
        double y; 
    }  _trackedCenter;
    double  _trackedScale;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _trackedTransform;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } anchorPoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double dismissalProgress;
@property (nonatomic, readonly) double finalAnimationDuration;
@property (nonatomic, readonly) double finalAnimationSpringDamping;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minimumZoomForDismissal;
@property (nonatomic, readonly) bool shouldFinishDismissal;
@property (readonly) Class superclass;
@property (nonatomic) double targetZoom;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } trackedBounds;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } trackedCenter;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } trackedTransform;
@property (nonatomic, readonly) struct _QLDismissGestureTrackingVelocity { double x1; double x2; double x3; double x4; } trackedVelocity;

- (struct CGPoint { double x1; double x2; })anchorPoint;
- (double)dismissalProgress;
- (double)finalAnimationDuration;
- (double)finalAnimationSpringDamping;
- (id)init;
- (double)minimumZoomForDismissal;
- (void)setMinimumZoomForDismissal:(double)arg1;
- (void)setTargetZoom:(double)arg1;
- (bool)shouldFinishDismissal;
- (void)startTrackingCenter:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 withInitialGestureLocation:(struct CGPoint { double x1; double x2; })arg4;
- (double)targetZoom;
- (void)trackGestureLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)trackRotation:(double)arg1;
- (void)trackScale:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackedBounds;
- (struct CGPoint { double x1; double x2; })trackedCenter;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })trackedTransform;
- (struct _QLDismissGestureTrackingVelocity { double x1; double x2; double x3; double x4; })trackedVelocity;
- (void)update;

@end