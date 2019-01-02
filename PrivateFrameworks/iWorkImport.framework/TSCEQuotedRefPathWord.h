/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEQuotedRefPathWord : NSObject {
    bool  _hasPreserveFlag;
    NSString * _rawString;
    bool  _wasQuoted;
}

@property (nonatomic) bool hasPreserveFlag;
@property (nonatomic, retain) NSString *rawString;
@property (nonatomic) bool wasQuoted;

- (void).cxx_destruct;
- (id)description;
- (bool)hasPreserveFlag;
- (id)initWithRawString:(id)arg1;
- (id)quoteStringIfNeeded;
- (id)rawString;
- (void)setHasPreserveFlag:(bool)arg1;
- (void)setRawString:(id)arg1;
- (void)setWasQuoted:(bool)arg1;
- (id)trimmedString;
- (id)trimmedStringWithPreserveFlag:(bool)arg1;
- (bool)wasQuoted;

@end