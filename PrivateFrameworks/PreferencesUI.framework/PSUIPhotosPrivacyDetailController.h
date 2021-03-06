/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIPhotosPrivacyDetailController : PSListController {
    NSMutableDictionary * _grantStatusByAuthType;
    NSArray * _orderdAuthTypes;
    NSDictionary * _serviceLevelsByAuthType;
    NSMutableDictionary * _specifierByAuthType;
}

- (void).cxx_destruct;
- (void)_refreshLinkStatusInParent;
- (void)_reloadAuthorizations;
- (void)_updateAuthStatus;
- (void)_updateSpecifiers;
- (void)_updateSpecifiersUI;
- (id)accesssForSpecifier:(id)arg1;
- (struct __CFBundle { }*)appBundle;
- (id)init;
- (void)setAccess:(id)arg1 forSpecifier:(id)arg2;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
