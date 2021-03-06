/* Generated by EzioChiu.
 */

@protocol MTSyncOperation <NSObject, NSSecureCoding, NSCopying, NAEquatable>

@required

+ (<MTSyncOperation> *)operationFromMetaData:(NSDictionary *)arg1;

- (bool)isEquivalentToOperation:(id <MTSyncOperation>)arg1;
- (bool)isFromSync;
- (NSDictionary *)operationMetaData;
- (long long)priority;
- (bool)requiresResponse;
- (id)responseOperation;
- (bool)shouldRetry;
- (NSString *)uuid;

@end
