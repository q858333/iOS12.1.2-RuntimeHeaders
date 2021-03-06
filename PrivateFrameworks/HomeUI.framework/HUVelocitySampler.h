/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUVelocitySampler : NSObject {
    HOVelocitySample * _currentSample;
    HOVelocitySample * _previousSample;
}

@property (nonatomic, retain) HOVelocitySample *currentSample;
@property (nonatomic, retain) HOVelocitySample *previousSample;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } velocity;

- (void).cxx_destruct;
- (void)addTouchSample:(struct CGPoint { double x1; double x2; })arg1;
- (id)currentSample;
- (id)previousSample;
- (void)reset;
- (void)setCurrentSample:(id)arg1;
- (void)setPreviousSample:(id)arg1;
- (struct CGVector { double x1; double x2; })velocity;

@end
