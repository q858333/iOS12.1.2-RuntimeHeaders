/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@interface DDScanServerDispatcher : NSObject {
    NSObject<OS_dispatch_queue> * _scannerQueue;
    NSMutableDictionary * _scanners;
    bool  _tearDownRequested;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void)dealloc;
- (id)init;
- (void)recycleScanner:(id)arg1 fromList:(id)arg2;
- (id)scannerListForType:(int)arg1;
- (void)scannerType:(int)arg1 sync:(bool)arg2 runTask:(id /* block */)arg3;

@end
