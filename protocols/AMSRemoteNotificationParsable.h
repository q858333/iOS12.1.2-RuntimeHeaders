/* Generated by EzioChiu.
 */

@protocol AMSRemoteNotificationParsable <NSObject>

@required

+ (void)handleNotificationPayload:(AMSRemoteNotificationPayload *)arg1;
+ (long long)supportedActionType;

@optional

+ (bool)supportsInactiveAccounts;

@end