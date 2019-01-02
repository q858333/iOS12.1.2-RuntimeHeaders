/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDInMemoryContext : NSObject <_CDContextInternal, _CDLocalContext> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableDictionary * _context;
    NSMutableDictionary * _registrations;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) NSMutableDictionary *context;
@property (nonatomic, retain) NSMutableDictionary *registrations;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;

+ (id)context;

- (void).cxx_destruct;
- (void)addCallback:(id)arg1 forKeyPath:(id)arg2;
- (bool)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3;
- (id)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 valueDidChange:(bool*)arg4;
- (bool)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2;
- (id)callbackQueue;
- (id)context;
- (void)deregisterCallback:(id)arg1;
- (id)description;
- (bool)evaluatePredicate:(id)arg1;
- (bool)hasKnowledgeOfContextualKeyPath:(id)arg1;
- (id)init;
- (id)lastModifiedDateForContextualKeyPath:(id)arg1;
- (id)objectForContextualKeyPath:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)propertiesForContextualKeyPath:(id)arg1;
- (void)registerCallback:(id)arg1;
- (id)registrations;
- (bool)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2;
- (void)setCallbackQueue:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setContextValue:(id)arg1 forContextualKeyPath:(id)arg2;
- (bool)setObject:(id)arg1 forContextualKeyPath:(id)arg2;
- (bool)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2;
- (void)setRegistrations:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (id)syncQueue;
- (void)unsafeDeregisterCallback:(id)arg1;
- (id)unsafe_setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2;

@end