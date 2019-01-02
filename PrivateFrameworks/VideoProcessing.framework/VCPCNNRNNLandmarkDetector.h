/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNRNNLandmarkDetector : NSObject {
    MPSImage * _c0Img;
    MPSImage * _c1Img;
    <MTLCommandQueue> * _commandQueue;
    MPSCNNConvolution * _conv0;
    MPSCNNConvolution * _conv1;
    <MTLDevice> * _device;
    float  _initShape;
    MPSImage * _inputImg;
    MPSVector * _outBias;
    <MTLBuffer> * _outBiasBuf;
    <MTLBuffer> * _outBuf;
    MPSMatrixVectorMultiplication * _outLayer;
    MPSMatrix * _outMatrix;
    <MTLBuffer> * _outMatrixBuf;
    MPSImage * _p0Img;
    MPSImage * _p1Img;
    MPSCNNPoolingMax * _pool0;
    MPSCNNPoolingMax * _pool1;
    <MTLBuffer> * _rnnHiddenStatesBuf;
    MPSMatrix * _rnnHiddenStatesMatrix;
    MPSRNNMatrixInferenceLayer * _rnnInferLayer;
    <MTLBuffer> * _rnnInputBuf;
    MPSMatrix * _rnnInputMatrix;
    MPSMatrix * _tmpMatrix;
    MPSVector * _vecHidden;
    MPSVector * _vecOut;
}

- (void).cxx_destruct;
- (int)allocateBuffers;
- (int)detectLandmark:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(int)arg4 facerect:(float*)arg5 result:(float*)arg6;
- (void)extractPatches:(float*)arg1 patch:(float*)arg2 curShape:(float*)arg3;
- (id)initWithDevice:(id)arg1 queue:(id)arg2;
- (int)loadWeights;
- (int)setupCNNWeights:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (int)setupRNNWeights:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;

@end