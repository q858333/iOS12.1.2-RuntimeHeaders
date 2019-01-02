/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationPlaceholder : FBBundleInfo {
    FBApplicationLibrary * _appLibrary;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    LSApplicationProxy * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _queue_observers;
    FBApplicationPlaceholderProgress * _queue_progress;
}

@property (nonatomic) FBApplicationLibrary *appLibrary;
@property (getter=isCancellable, nonatomic, readonly) bool cancellable;
@property (getter=isPausable, nonatomic, readonly) bool pausable;
@property (nonatomic, readonly) double percentComplete;
@property (getter=isPrioritizable, nonatomic, readonly) bool prioritizable;
@property (nonatomic, readonly) <FBApplicationPlaceholderProgress> *progress;
@property (getter=_proxy, setter=_setProxy:, nonatomic, retain) LSApplicationProxy *proxy;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (getter=isResumable, nonatomic, readonly) bool resumable;

+ (id)_callOutQueue;
+ (id)_sharedQueue;

- (void).cxx_destruct;
- (bool)_canPerformAction:(unsigned long long)arg1;
- (void)_cancelWithResult:(id /* block */)arg1;
- (void)_dispatchToObserversWithBlock:(id /* block */)arg1;
- (id)_initWithApplicationProxy:(id)arg1;
- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;
- (id)_initWithBundleProxy:(id)arg1 url:(id)arg2;
- (void)_noteChangedSignificantly;
- (void)_pauseWithResult:(id /* block */)arg1;
- (bool)_performAction:(unsigned long long)arg1 withResult:(id /* block */)arg2;
- (void)_prioritizeWithResult:(id /* block */)arg1;
- (id)_proxy;
- (bool)_queue_canPerformAction:(unsigned long long)arg1;
- (bool)_queue_isCloudDemoted;
- (void)_queue_noteChangedSignificantly:(id)arg1;
- (void)_queue_setProxy:(id)arg1 force:(bool)arg2;
- (unsigned long long)_queue_supportedActions;
- (void)_reloadFromProxy:(id)arg1;
- (void)_reloadProgress;
- (void)_resumeWithResult:(id /* block */)arg1;
- (void)_sendToObserversPlaceholderDidChangeSignificantly;
- (void)_sendToObserversPlaceholderProgressDidUpdate;
- (void)_setProxy:(id)arg1;
- (void)_setProxy:(id)arg1 force:(bool)arg2;
- (void)addObserver:(id)arg1;
- (id)appLibrary;
- (bool)cancel;
- (bool)cancelWithResult:(id /* block */)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (unsigned long long)installPhase;
- (unsigned long long)installState;
- (unsigned long long)installType;
- (bool)isCancellable;
- (bool)isPausable;
- (bool)isPrioritizable;
- (bool)isRestricted;
- (bool)isResumable;
- (bool)pause;
- (bool)pauseWithResult:(id /* block */)arg1;
- (double)percentComplete;
- (bool)prioritize;
- (bool)prioritizeWithResult:(id /* block */)arg1;
- (id)progress;
- (void)removeObserver:(id)arg1;
- (bool)resume;
- (bool)resumeWithResult:(id /* block */)arg1;
- (void)setAppLibrary:(id)arg1;
- (id)succinctDescriptionBuilder;

@end