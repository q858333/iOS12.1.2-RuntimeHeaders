/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSOSMessage : NSObject <NSCopying> {
    id /* block */  _failureBlock;
    NSArray * _handles;
    bool  _isMMSEnabled;
    CLLocation * _location;
    NSString * _locationURL;
    NSString * _message;
    NSString * _mmsMessage;
    NSArray * _recipients;
    NSString * _smsMessage;
    bool  _useStandalone;
}

@property (nonatomic, copy) id /* block */ failureBlock;
@property (getter=handles, nonatomic, copy) NSArray *handles;
@property (nonatomic) bool isMMSEnabled;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, copy) NSString *locationURL;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *mmsMessage;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, copy) NSString *smsMessage;
@property (nonatomic) bool useStandalone;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id /* block */)failureBlock;
- (id)handles;
- (id)initWithMessage:(id)arg1 recipients:(id)arg2;
- (id)initWithSMSMessage:(id)arg1 mmsMessage:(id)arg2 recipients:(id)arg3;
- (bool)isMMSEnabled;
- (id)location;
- (id)locationURL;
- (id)message;
- (id)mmsMessage;
- (id)recipients;
- (void)setFailureBlock:(id /* block */)arg1;
- (void)setHandles:(id)arg1;
- (void)setIsMMSEnabled:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationURL:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMmsMessage:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSmsMessage:(id)arg1;
- (void)setUseStandalone:(bool)arg1;
- (id)smsMessage;
- (bool)useStandalone;

@end