/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthServiceDiscovery : NSObject {
    id /* block */  _discoveryHandler;
    unsigned long long  _discoveryIdentifier;
    long long  _serviceType;
}

@property (nonatomic, copy) id /* block */ discoveryHandler;
@property (nonatomic) unsigned long long discoveryIdentifier;
@property (nonatomic, readonly) long long serviceType;

- (void).cxx_destruct;
- (id /* block */)discoveryHandler;
- (unsigned long long)discoveryIdentifier;
- (id)initForAllTypes;
- (id)initWithType:(long long)arg1;
- (long long)serviceType;
- (void)setDiscoveryHandler:(id /* block */)arg1;
- (void)setDiscoveryIdentifier:(unsigned long long)arg1;

@end