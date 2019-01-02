/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEExtensionAppProxyProviderHostContext : NEExtensionTunnelProviderHostContext <NEExtensionAppProxyProviderHostProtocol, NEExtensionAppProxyProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)openFlowDivertControlSocketWithCompletionHandler:(id /* block */)arg1;
- (void)setDelegateInterface:(unsigned int)arg1;
- (void)setInitialFlowDivertControlSocket:(id)arg1;
- (void)setInitialFlowDivertControlSocket:(id)arg1 extraValidation:(bool)arg2;
- (void)verifyAppWithPID:(long long)arg1 uuid:(id)arg2 matchesAppRule:(id)arg3 completionHandler:(id /* block */)arg4;

@end