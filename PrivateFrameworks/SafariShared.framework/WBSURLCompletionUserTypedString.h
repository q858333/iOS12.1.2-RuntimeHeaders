/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSURLCompletionUserTypedString : NSObject <NSSecureCoding> {
    const char * _chars;
    bool  _containsAnySpaces;
    int  _length;
    bool  _ownsChars;
    bool  _ownsUnichars;
    NSString * _string;
    const unsigned short * _unichars;
}

@property (nonatomic, readonly) NSString *normalizedString;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)normalizedString;

@end