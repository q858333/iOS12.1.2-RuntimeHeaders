/* Generated by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFFolderPickerItem : NSObject {
    WebBookmark * _bookmark;
    unsigned long long  _depth;
}

@property (nonatomic, readonly) WebBookmark *bookmark;
@property (nonatomic, readonly) unsigned long long depth;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)_initWithBookmark:(id)arg1 depth:(unsigned long long)arg2;
- (id)bookmark;
- (unsigned long long)depth;
- (id)title;

@end