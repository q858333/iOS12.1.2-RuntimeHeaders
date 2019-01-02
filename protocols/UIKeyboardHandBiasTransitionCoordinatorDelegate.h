/* Generated by EzioChiu.
 */

@protocol UIKeyboardHandBiasTransitionCoordinatorDelegate <NSObject>

@required

- (long long)currentHandBiasWithCoordinator:(UIKeyboardHandBiasTransitionCoordinator *)arg1;
- (void)finishHandBiasTransitionWithFinalBias:(long long)arg1;
- (bool)gestureRecognizerShouldBegin:(UIPanGestureRecognizer *)arg1 forHandBiasCoordinator:(UIKeyboardHandBiasTransitionCoordinator *)arg2;
- (UIView *)hostViewForHandBiasTransition:(UIKeyboardHandBiasTransitionCoordinator *)arg1;
- (UIKeyboardHandBiasTransitionContext *)prepareTransition:(UIKeyboardKeyplaneTransition *)arg1 forTargetHandBias:(long long)arg2 coordinator:(UIKeyboardHandBiasTransitionCoordinator *)arg3;

@end