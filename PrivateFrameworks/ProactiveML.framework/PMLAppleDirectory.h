/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLAppleDirectory : NSObject

+ (id)sharedInstance;

- (id)initWithData:(id)arg1;
- (id)initWithPath:(id)arg1;
- (bool)isEmailInAppleDirectory:(id)arg1;
- (bool)isEmailInAppleDirectory:(id)arg1 withAnotherEmail:(id)arg2;
- (bool)isEmailInAppleDirectory:(id)arg1 withPhonenumber:(id)arg2;
- (bool)isPhoneNumberInAppleDirectory:(id)arg1;
- (bool)isPhoneNumberInAppleDirectory:(id)arg1 withAnotherPhone:(id)arg2;

@end
