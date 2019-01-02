/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSCMSMessageDigestAttribute : NSObject <MSCMSAttributeCoder> {
    NSData * _messageDigest;
}

@property (retain) NSData *messageDigest;

+ (id)messageDigestAttributeWithDigest:(id)arg1;

- (void).cxx_destruct;
- (id)encodeAttributeWithError:(id*)arg1;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;
- (id)initWithDigest:(id)arg1;
- (id)messageDigest;
- (void)setMessageDigest:(id)arg1;

@end