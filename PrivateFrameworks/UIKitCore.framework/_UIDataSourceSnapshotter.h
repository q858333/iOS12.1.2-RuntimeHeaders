/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDataSourceSnapshotter : NSObject <NSCopying> {
    long long  _sectionCount;
    struct _NSRange { unsigned long long x1; unsigned long long x2; } * _sectionRanges;
}

+ (id)snapshotForDataSourceBackedView:(id)arg1;

- (bool)_decrementSectionCount:(long long)arg1;
- (bool)_decrementSectionCount:(long long)arg1 byCount:(long long)arg2;
- (bool)_deleteSection:(long long)arg1;
- (bool)_incrementSectionCount:(long long)arg1;
- (bool)_incrementSectionCount:(long long)arg1 byCount:(long long)arg2;
- (bool)_insertSection:(long long)arg1 withInitialCount:(long long)arg2;
- (void)_recomputeRangeLocations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (long long)globalIndexForIndexPath:(id)arg1;
- (id)indexPathForAppendingInsertInSection:(long long)arg1;
- (id)indexPathForGlobalIndex:(long long)arg1;
- (bool)indexPathIsSectionAppendingInsert:(id)arg1;
- (id)init;
- (id)initWithDataSourceBackedView:(id)arg1;
- (id)initWithSectionCounts:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)numberOfItems;
- (long long)numberOfItemsBeforeSection:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForSection:(long long)arg1;
- (long long)sectionForGlobalIndex:(long long)arg1;

@end