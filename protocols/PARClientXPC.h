/* Generated by EzioChiu.
 */

@protocol PARClientXPC <NSObject>

@required

- (void)bagDidLoad:(PARBag *)arg1 error:(NSError *)arg2;
- (void)didDeleteResource:(NSString *)arg1;
- (void)didDownloadResource:(NSString *)arg1;
- (void)sessionDidChange:(NSUUID *)arg1;

@end