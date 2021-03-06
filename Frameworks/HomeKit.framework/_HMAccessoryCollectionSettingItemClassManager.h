/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMAccessoryCollectionSettingItemClassManager : NSObject {
    NSMutableDictionary * _classes;
    HMFUnfairLock * _lock;
}

+ (id)defaultItemValueClasses;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)itemValueClassesForKeyPath:(id)arg1;
- (void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2;

@end
