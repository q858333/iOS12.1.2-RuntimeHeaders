/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPullFromTransportTask : CPLEngineMultiscopeSyncTask {
    CPLScopeFilter * _scopeFilter;
}

@property (nonatomic, retain) CPLScopeFilter *scopeFilter;

- (void).cxx_destruct;
- (id)enumerateScopesForTaskInTransaction:(id)arg1;
- (id)newScopedTaskWithScope:(id)arg1 transportScope:(id)arg2 clientCacheIdentifier:(id)arg3;
- (id)scopeFilter;
- (void)setScopeFilter:(id)arg1;
- (bool)shouldProcessScope:(id)arg1 inTransaction:(id)arg2;
- (id)taskIdentifier;

@end