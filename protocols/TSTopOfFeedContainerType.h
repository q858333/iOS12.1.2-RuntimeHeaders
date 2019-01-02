/* Generated by EzioChiu.
 */

@protocol TSTopOfFeedContainerType

@required

- (<TSTopOfFeedContainerTypeDelegate> *)delegate;
- (void)setDelegate:(id <TSTopOfFeedContainerTypeDelegate>)arg1;
- (UIView *)topOfFeedAnimatableView;
- (void)topOfFeedContentDidPresentHeadline:(id <FCHeadlineProviding>)arg1;
- (NSArray *)topOfFeedContentHeadlines;
- (double)topOfFeedContentHeight;
- (void)topOfFeedContentShouldRefreshWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, long long, void*
- (NSString *)topOfFeedContentTitle;
- (FCColor *)topOfFeedContentTitleColor;
- (<TSTopOfFeedHeadlineContextType> *)topOfFeedHeadlineContextForHeadline:(id <FCHeadlineProviding>)arg1;
- (long long)topOfFeedSpecialEventsType;

@end