/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSMessageLiveLayout : MSMessageLayout <NSSecureCoding> {
    MSMessageTemplateLayout * _alternateLayout;
}

@property (nonatomic, readonly) MSMessageTemplateLayout *alternateLayout;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alternateLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAlternateLayout:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
