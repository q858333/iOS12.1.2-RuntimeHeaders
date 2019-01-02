/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouGadgetPriorityManager : NSObject {
    NSDate * _baseNewDate;
    NSMutableDictionary * _currentEntries;
    bool  _needsSorting;
    long long  _nestedRegistration;
    <PXGadgetRankStorage> * _rankStorage;
    long long  _sortingAlgorithm;
}

@property (nonatomic, retain) NSDate *baseNewDate;
@property (nonatomic, readonly) NSMutableDictionary *currentEntries;
@property (nonatomic) bool needsSorting;
@property (nonatomic) long long nestedRegistration;
@property (nonatomic, readonly) <PXGadgetRankStorage> *rankStorage;
@property (nonatomic) long long sortingAlgorithm;

- (void).cxx_destruct;
- (void)_persistSortedEntries:(id)arg1;
- (void)_sortCurrentEntries;
- (void)_sortCurrentEntriesIfNeeded;
- (id)_sortingKeyForOldEntries;
- (void)_splitCurrentEntriesIntoNew:(id)arg1 andOld:(id)arg2;
- (id)baseNewDate;
- (id)currentEntries;
- (void)endRegistration;
- (id)initWithStorage:(id)arg1;
- (bool)invalidateRanks;
- (bool)needsSorting;
- (long long)nestedRegistration;
- (long long)rankForGadgetType:(unsigned long long)arg1;
- (id)rankStorage;
- (void)registerRankable:(id)arg1;
- (void)resetToDefaultPriorities;
- (void)setBaseNewDate:(id)arg1;
- (void)setNeedsSorting:(bool)arg1;
- (void)setNestedRegistration:(long long)arg1;
- (void)setSortingAlgorithm:(long long)arg1;
- (long long)sortingAlgorithm;
- (void)startRegistration;

@end