/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXNotificationsSuggestion : NSObject {
    _ATXAggregateLogger * _aggdlogger;
    _ATXAppLaunchHistogram * _appHistory;
    NSMutableDictionary * _cache;
    _ATXDataStore * _db;
    NSMutableSet * _inmemorycache;
    ATXNotificationsLogger * _logger;
    ATXNotificationsSuggestionLR * _lrmodel;
    _ATXAppLaunchCategoricalHistogram * _notificationsHistory;
    ATXNotificationsPriors * _notificationsPriors;
    bool  _override;
    ATXNotificationsRecorderPermanentStore * _permanentStore;
    double  _postthreshold;
    double  _probaThreshold;
    NSObject<OS_dispatch_queue> * _queue;
    double  _stdthreshold;
    long long  _stype;
    double  _threshold;
    bool  _uselrmodel;
}

+ (id)createNotificationIdForSuggestion:(id)arg1;
+ (id)generateAppId:(id)arg1 topic:(id)arg2;
+ (id)getSuggestionLRModel;
+ (bool)isSettingSuggestion:(id)arg1;

- (void).cxx_destruct;
- (bool)_checkIfInDB:(id)arg1 topic:(id)arg2;
- (id)checkForBundleIdOverride;
- (bool)checkIfInDB:(id)arg1 topic:(id)arg2;
- (id)computeFeaturesForBundleId:(id)arg1;
- (double)computeLikelihood:(double)arg1 count:(double)arg2;
- (double)computePosterior:(double)arg1 count:(double)arg2 prior:(double)arg3;
- (double)computeScoreByLogisticRegression:(id)arg1 observed:(double)arg2 count:(double)arg3;
- (double)computeScoreByPriors:(id)arg1 observed:(double)arg2 count:(double)arg3;
- (double)computeStandardError:(double)arg1 count:(double)arg2;
- (double)computeThresholdScore:(id)arg1 topic:(id)arg2;
- (double)computeTurnoffProbabilityForBundleId:(id)arg1;
- (double)computeTurnoffProbabilityWithInput:(id)arg1;
- (id)getCachedScoreForAppId:(id)arg1;
- (id)getResponses;
- (id)initWithSuggestionType:(long long)arg1;
- (id)initWithThresholds:(double)arg1 stdThreshold:(double)arg2 suggestionType:(long long)arg3 notificationsHistogram:(id)arg4 applaunchHistogram:(id)arg5 uselrmodel:(bool)arg6 probaThreshold:(double)arg7 lrmodel:(id)arg8 permanentStore:(id)arg9;
- (void)logRTTOutcomeWithBundleId:(id)arg1 topic:(id)arg2 rttOutcome:(unsigned long long)arg3;
- (void)makeSuggestionForNextNotification;
- (id)message:(id)arg1 topic:(id)arg2 response:(long long)arg3;
- (void)resetResponses;
- (double)shouldMakeSuggestionForBundleId:(id)arg1 topic:(id)arg2;
- (void)suggestionResponse:(id)arg1 topic:(id)arg2 response:(long long)arg3;

@end