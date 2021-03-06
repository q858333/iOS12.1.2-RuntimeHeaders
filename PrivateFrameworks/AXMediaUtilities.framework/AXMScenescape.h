/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMScenescape : NSObject {
    long long  _height;
    long long  _proximityThreshold;
    unsigned char * _scenescapeData;
    long long  _width;
}

@property (nonatomic) long long proximityThreshold;

+ (id)scenescapeByInterpretingLayer:(id)arg1 error:(id*)arg2;

- (id)_initWithWidth:(long long)arg1 height:(long long)arg2;
- (void)dealloc;
- (id)generateVisualizedScenescape;
- (unsigned char)hapticAttributesForPosition:(struct CGPoint { double x1; double x2; })arg1;
- (long long)proximityThreshold;
- (void)setProximityThreshold:(long long)arg1;

@end
