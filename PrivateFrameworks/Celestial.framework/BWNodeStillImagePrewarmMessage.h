/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeStillImagePrewarmMessage : BWNodeMessage {
    FigCaptureStillImageSettings * _requestedStillImageCaptureSettings;
    NSArray * _resolvedPhotoManifest;
    BWStillImageCaptureSettings * _resolvedStillImageCaptureSettings;
}

@property (readonly) FigCaptureStillImageSettings *requestedStillImageCaptureSettings;
@property (readonly) NSArray *resolvedPhotoManifest;
@property (readonly) BWStillImageCaptureSettings *resolvedStillImageCaptureSettings;

+ (id)newMessageWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 resolvedPhotoManifest:(id)arg3;

- (id)_initWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 resolvedPhotoManifest:(id)arg3;
- (void)dealloc;
- (id)requestedStillImageCaptureSettings;
- (id)resolvedPhotoManifest;
- (id)resolvedStillImageCaptureSettings;

@end
