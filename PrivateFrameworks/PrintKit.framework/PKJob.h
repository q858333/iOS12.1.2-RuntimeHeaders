/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@interface PKJob : NSObject {
    NSString * _PIN;
    NSURL * _printerURI;
    long long  mediaProgress;
    long long  mediaSheets;
    long long  mediaSheetsCompleted;
    long long  number;
    NSString * printerDisplayName;
    long long  printerKind;
    NSString * printerLocation;
    long long  remoteJobId;
    PKPrintSettings * settings;
    long long  state;
    NSData * thumbnailImage;
    NSDate * timeAtCompleted;
    NSDate * timeAtCreation;
    NSDate * timeAtProcessing;
}

@property (nonatomic, retain) NSString *PIN;
@property (nonatomic, readonly) NSString *localizedJobOptions;
@property (nonatomic, readonly) NSString *localizedStatusString;
@property (nonatomic) long long mediaProgress;
@property (nonatomic) long long mediaSheets;
@property (nonatomic) long long mediaSheetsCompleted;
@property (nonatomic) long long number;
@property (nonatomic, retain) NSString *printerDisplayName;
@property (nonatomic) long long printerKind;
@property (nonatomic, retain) NSString *printerLocation;
@property (nonatomic, retain) NSURL *printerURI;
@property (nonatomic) long long remoteJobId;
@property (nonatomic, retain) PKPrintSettings *settings;
@property (nonatomic) long long state;
@property (nonatomic, retain) NSData *thumbnailImage;
@property (nonatomic, retain) NSDate *timeAtCompleted;
@property (nonatomic, retain) NSDate *timeAtCreation;
@property (nonatomic, retain) NSDate *timeAtProcessing;

+ (id)currentJob;
+ (id)jobs;

- (id)PIN;
- (long long)cancel;
- (id)localizedJobOptions;
- (id)localizedStatusString;
- (long long)mediaProgress;
- (long long)mediaSheets;
- (long long)mediaSheetsCompleted;
- (long long)number;
- (id)printerDisplayName;
- (long long)printerKind;
- (id)printerLocation;
- (id)printerURI;
- (long long)remoteJobId;
- (void)setMediaProgress:(long long)arg1;
- (void)setMediaSheets:(long long)arg1;
- (void)setMediaSheetsCompleted:(long long)arg1;
- (void)setNumber:(long long)arg1;
- (void)setPIN:(id)arg1;
- (void)setPrinterDisplayName:(id)arg1;
- (void)setPrinterKind:(long long)arg1;
- (void)setPrinterLocation:(id)arg1;
- (void)setPrinterURI:(id)arg1;
- (void)setRemoteJobId:(long long)arg1;
- (void)setSettings:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setTimeAtCompleted:(id)arg1;
- (void)setTimeAtCreation:(id)arg1;
- (void)setTimeAtProcessing:(id)arg1;
- (id)settings;
- (long long)state;
- (id)thumbnailImage;
- (id)timeAtCompleted;
- (id)timeAtCreation;
- (id)timeAtProcessing;
- (long long)update;

@end