/* Generated by EzioChiu.
 */

@protocol AVCVirtualTTYDeviceDelegate <NSObject>

@required

- (void)device:(AVCVirtualTTYDevice *)arg1 didReceiveCharacter:(unsigned short)arg2;
- (void)device:(AVCVirtualTTYDevice *)arg1 didReceiveText:(struct NSString { Class x1; }*)arg2;
- (void)device:(AVCVirtualTTYDevice *)arg1 didStart:(bool)arg2 error:(NSError *)arg3;
- (void)deviceDidStop:(AVCVirtualTTYDevice *)arg1;

@end