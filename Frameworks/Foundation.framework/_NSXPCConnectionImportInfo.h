/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCConnectionImportInfo : NSObject {
    unsigned long long  _generationCount;
    NSLock * _lock;
    struct __CFDictionary { } * _proxyNumberToCount;
    NSMutableDictionary * _remoteSideEntitlementCache;
}

- (id)_valueForEntitlement:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;
- (void)addProxy:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)removeProxy:(id)arg1;

@end