/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCAVState : NSObject <NSCopying, NSSecureCoding> {
    long long  _AVCaptureState;
    long long  _AVPreviewState;
}

@property (nonatomic) long long AVCaptureState;
@property (nonatomic) long long AVPreviewState;
@property (nonatomic, readonly) bool isCaptureActive;
@property (nonatomic, readonly) bool isCaptureActiveOrPreparing;
@property (nonatomic, readonly) bool isCaptureActiveOrPreparingOrResumable;
@property (nonatomic, readonly) bool isCaptureInactive;
@property (nonatomic, readonly) bool isCapturePaused;
@property (nonatomic, readonly) bool isCapturePreparing;
@property (nonatomic, readonly) bool isPreviewActive;
@property (nonatomic, readonly) bool isPreviewActiveOrPreparing;
@property (nonatomic, readonly) bool isPreviewInactive;
@property (nonatomic, readonly) bool isPreviewPreparing;

+ (id)inactiveState;
+ (bool)supportsSecureCoding;

- (long long)AVCaptureState;
- (long long)AVPreviewState;
- (id)_assetStateByChangingToCaptureState:(long long)arg1 previewState:(long long)arg2;
- (id)_assetStateByTransitioningItermediateStatesToGoalStates;
- (id)assetStateByCaptureState;
- (id)assetStateByChangingToCaptureState:(long long)arg1;
- (id)assetStateByChangingToPreviewRate:(float)arg1;
- (id)assetStateByChangingToPreviewState:(long long)arg1;
- (id)assetStateByTogglingPreview;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCaptureActive;
- (bool)isCaptureActiveOrPreparing;
- (bool)isCaptureActiveOrPreparingOrResumable;
- (bool)isCaptureInactive;
- (bool)isCapturePaused;
- (bool)isCapturePreparing;
- (bool)isEqual:(id)arg1;
- (bool)isPreviewActive;
- (bool)isPreviewActiveOrPreparing;
- (bool)isPreviewInactive;
- (bool)isPreviewPreparing;
- (void)setAVCaptureState:(long long)arg1;
- (void)setAVPreviewState:(long long)arg1;

@end