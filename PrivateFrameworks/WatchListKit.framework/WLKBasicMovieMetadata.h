/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKBasicMovieMetadata : WLKBasicContentMetadata {
    WLKMovieContentRating * _contentRating;
    double  _duration;
    NSArray * _genres;
    NSDate * _releaseDate;
    WLKRottenTomatoesRating * _rottenTomatoesRating;
    NSString * _studio;
}

@property (nonatomic, readonly) WLKMovieContentRating *contentRating;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) NSArray *genres;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) WLKRottenTomatoesRating *rottenTomatoesRating;
@property (nonatomic, readonly, copy) NSString *studio;

- (void).cxx_destruct;
- (id)contentRating;
- (double)duration;
- (id)genres;
- (id)initWithDictionary:(id)arg1;
- (id)releaseDate;
- (id)rottenTomatoesRating;
- (id)studio;

@end
