/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMutableStoreAssetPlaybackResponse : MPStoreAssetPlaybackResponse

@property (nonatomic, copy) NSDictionary *dialogDictionary;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSArray *fileAssetInfoList;
@property (nonatomic, retain) MPStoreHLSAssetInfo *hlsAssetInfo;
@property (nonatomic, retain) id suzeLeaseID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDialogDictionary:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFileAssetInfoList:(id)arg1;
- (void)setHlsAssetInfo:(id)arg1;
- (void)setSuzeLeaseID:(id)arg1;

@end