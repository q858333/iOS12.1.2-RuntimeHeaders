/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDBSCANClustering : PLDataDensityClustering

- (id)_expandClusterForObject:(id)arg1 dataset:(id)arg2 objectsMappedToCluster:(struct __CFSet { }*)arg3 visitedObjects:(unsigned long long*)arg4 distancesMatrix:(double**)arg5 neighbors:(id)arg6;
- (id)_neighborsAtIndex:(unsigned long long)arg1 withDistancesMatrix:(double**)arg2 number:(unsigned long long)arg3;
- (id)performWithDataset:(id)arg1 progressBlock:(id /* block */)arg2;

@end