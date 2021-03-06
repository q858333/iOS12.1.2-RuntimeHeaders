/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalOSLogWriter : CalLogWriter {
    NSObject<OS_os_log> * CalOSLogClient;
}

+ (id)autoLogNamespaces;

- (void).cxx_destruct;
- (void)_configureAutoLogNamespaces;
- (void)_configureOSLogClient;
- (unsigned long long)_indexToSplitOnForIndex:(unsigned long long)arg1 chunkBytes:(const char *)arg2;
- (void)_logStringInChunks:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (void)write:(id)arg1;

@end
