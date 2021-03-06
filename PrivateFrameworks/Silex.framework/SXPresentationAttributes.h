/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPresentationAttributes : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSize;
    NSString * _contentSizeCategory;
    bool  _enableViewportDebugging;
    bool  _fadeInComponents;
    unsigned long long  _presentationMode;
}

@property (nonatomic) struct CGSize { double x1; double x2; } canvasSize;
@property (nonatomic, retain) NSString *contentSizeCategory;
@property (nonatomic) bool enableViewportDebugging;
@property (nonatomic) bool fadeInComponents;
@property (nonatomic, readonly) bool fadeWhenTransitioning;
@property (nonatomic) unsigned long long presentationMode;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })canvasSize;
- (id)contentSizeCategory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enableViewportDebugging;
- (bool)fadeInComponents;
- (bool)fadeWhenTransitioning;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)presentationMode;
- (void)setCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setEnableViewportDebugging:(bool)arg1;
- (void)setFadeInComponents:(bool)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;

@end
