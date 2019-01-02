/* Generated by EzioChiu.
 */

@protocol PHBatchFetchingArrayDataSource <NSObject>

@required

- (NSArray *)bfa_fetchObjectsForOIDs:(NSArray *)arg1 propertyHint:(unsigned long long)arg2;
- (PHPhotoLibrary *)bfa_photoLibrary;
- (<PHBatchFetchingArrayElement> *)bfa_tombstoneObjectForOID:(id)arg1 uuid:(NSString *)arg2 propertyHint:(unsigned long long)arg3;

@end