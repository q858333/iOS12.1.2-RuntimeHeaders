/* Generated by EzioChiu.
 */

@protocol AVCaptureDepthDataOutputDelegate <NSObject>

@optional

- (void)depthDataOutput:(AVCaptureDepthDataOutput *)arg1 didDropDepthData:(AVDepthData *)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(AVCaptureConnection *)arg4 reason:(long long)arg5;
- (void)depthDataOutput:(AVCaptureDepthDataOutput *)arg1 didOutputDepthData:(AVDepthData *)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(AVCaptureConnection *)arg4;

@end