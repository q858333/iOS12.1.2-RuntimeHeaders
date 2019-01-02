/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPerformSyncDownPeerDeletionsOperation : _DKSyncCompositeOperation {
    unsigned long long  _batchNumber;
    bool  _foundDeletions;
    bool  _hadDeletions;
    NSString * _hadDeletionsKey;
    bool  _highPriority;
    NSDate * _highWaterMark;
    _DKSyncHistory * _history;
    <_DKKeyValueStore> * _keyValueStore;
    <_DKSyncLocalKnowledgeStorage> * _localStorage;
    _DKSyncPeer * _peer;
    struct _CDPerfEvent { 
        unsigned long long CDPM_startTime; 
        unsigned long long CDPM_endTime; 
    }  _perfEvent;
    _CDMutablePerfMetric * _perfMetric;
    _DKSync2Policy * _policy;
    NSDate * _startDate;
    <_DKSyncRemoteKnowledgeStorage> * _transport;
    _DKSyncType * _type;
}

+ (void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(long long)arg2;
+ (void)_updateEventStatsWithTotal:(unsigned long long)arg1 transportType:(long long)arg2;

- (void).cxx_destruct;
- (void)endOperation;
- (void)endPerfMetrics;
- (void)handleFetchedDeletedEventIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 untilDate:(id)arg4;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6;
- (bool)isAsynchronous;
- (void)main;
- (void)performSyncDownPeerDeletions;
- (void)performSyncDownPeerDeletionsWithDidPrewarm:(bool)arg1 orError:(id)arg2;
- (void)performSyncDownPeerDeletionsWithHighWaterMark:(id)arg1 orError:(id)arg2;
- (void)performSyncDownPeerDeletionsWithPreviousUntilDate:(id)arg1;
- (void)startPerfMetrics;

@end