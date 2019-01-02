/* Generated by EzioChiu.
 */

@protocol BBSyncServiceDelegate <NSObject>

@required

- (void)syncService:(BBSyncService *)arg1 receivedDismissalDictionaries:(NSArray *)arg2 dismissalIDs:(NSArray *)arg3 inSection:(NSString *)arg4 forFeeds:(unsigned long long)arg5;
- (NSString *)syncService:(BBSyncService *)arg1 sectionIdentifierForUniversalSectionIdentifier:(NSString *)arg2;
- (bool)syncService:(BBSyncService *)arg1 shouldAbortDelayedDismissalForBulletin:(BBBulletin *)arg2;
- (NSString *)syncService:(BBSyncService *)arg1 universalSectionIdentifierForSectionIdentifier:(NSString *)arg2;

@end