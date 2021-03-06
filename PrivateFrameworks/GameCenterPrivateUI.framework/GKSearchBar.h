/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKSearchBar : UISearchBar {
    GKCollectionViewDataSource * _dataSource;
    long long  _sectionIndex;
}

@property (nonatomic, retain) GKCollectionViewDataSource *dataSource;
@property (nonatomic) long long sectionIndex;

- (id)dataSource;
- (void)dealloc;
- (long long)sectionIndex;
- (void)setDataSource:(id)arg1;
- (void)setSectionIndex:(long long)arg1;

@end
