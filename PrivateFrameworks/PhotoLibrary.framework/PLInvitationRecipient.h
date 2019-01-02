/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLInvitationRecipient : NSObject {
    NSMutableArray * _allEmails;
    NSMutableArray * _allPhones;
    NSString * _firstName;
    NSString * _invalidAddressString;
    NSString * _lastName;
    MFComposeRecipient * _mfRecipient;
    NSString * _selectedEmailString;
    NSString * _selectedPhoneString;
}

@property (nonatomic, readonly, retain) NSArray *allEmails;
@property (nonatomic, readonly, retain) NSArray *allPhones;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly, copy) NSString *invalidAddressString;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, readonly, copy) NSString *selectedEmailString;
@property (nonatomic, readonly, copy) NSString *selectedPhoneString;

+ (id)validEmailAddressFromComposeRecipient:(id)arg1;
+ (id)validPhoneNumberFromString:(id)arg1;

- (id)allEmails;
- (id)allPhones;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)firstName;
- (id)initWithRecipient:(id)arg1;
- (id)invalidAddressString;
- (id)lastName;
- (id)selectedEmailString;
- (id)selectedPhoneString;

@end