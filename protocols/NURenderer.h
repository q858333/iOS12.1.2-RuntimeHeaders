/* Generated by EzioChiu.
 */

@protocol NURenderer <NSObject>

@required

- (CIRenderTask *)renderImage:(CIImage *)arg1 rect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 toDestination:(CIRenderDestination *)arg3 atPoint:(struct { long long x1; long long x2; })arg4 error:(out id*)arg5;

@end