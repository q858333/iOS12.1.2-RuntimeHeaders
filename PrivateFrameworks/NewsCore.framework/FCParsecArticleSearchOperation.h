/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCParsecArticleSearchOperation : FCOperation {
    id /* block */  _articleSearchCompletionHandler;
    unsigned long long  _batchSize;
    <FCContentContext> * _contentContext;
    SFMoreResults * _moreResults;
    SFRankingFeedback * _previousRankingFeedback;
    NSString * _query;
    SFRankingFeedback * _rankingFeedback;
    NSArray * _results;
}

@property (copy) id /* block */ articleSearchCompletionHandler;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic, retain) SFMoreResults *moreResults;
@property (nonatomic, retain) SFRankingFeedback *previousRankingFeedback;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, retain) SFRankingFeedback *rankingFeedback;
@property (nonatomic, retain) NSArray *results;

- (void).cxx_destruct;
- (id)_rankingFeedbackWithSection:(id)arg1;
- (id /* block */)articleSearchCompletionHandler;
- (unsigned long long)batchSize;
- (id)contentContext;
- (id)initWithMoreResults:(id)arg1;
- (id)moreResults;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)previousRankingFeedback;
- (id)query;
- (id)rankingFeedback;
- (id)results;
- (void)setArticleSearchCompletionHandler:(id /* block */)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setContentContext:(id)arg1;
- (void)setMoreResults:(id)arg1;
- (void)setPreviousRankingFeedback:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setRankingFeedback:(id)arg1;
- (void)setResults:(id)arg1;
- (bool)validateOperation;

@end