/* Generated by EzioChiu.
 */

@protocol NNMKDeviceRegistryHolder <NSObject>

@required

- (NNMKDeviceSyncRegistry *)currentDeviceRegistry;
- (bool)pairedDeviceSupportsMultipleMailboxes;
- (bool)pairedDeviceSupportsStandaloneMode;

@end