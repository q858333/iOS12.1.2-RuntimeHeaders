/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCABTestingAgent : NSObject <FCUserInfoObserving> {
    FCUserInfo * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCUserInfo *userInfo;

- (void).cxx_destruct;
- (void)_updateABTestingBucketForFeldsparID:(id)arg1;
- (id)init;
- (id)initWithUserInfo:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(bool)arg2;

@end
