/* Generated by EzioChiu.
 */

@protocol ProjectDelegate

@required

- (void)coordinateMove:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)coordinateRemove:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)coordinateRenameFrom:(void *)arg1 to:(void *)arg2 renameHandler:(void *)arg3; // needs 3 arg types, found 7: NSURL *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)coordinateWrite:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)isInCloud;
- (void)projectDidInvalidateSharingInfo:(Project *)arg1;
- (void)projectWasChanged:(Project *)arg1;
- (void)projectWasSaved:(Project *)arg1;
- (UIImage *)thumbnailImageForProject:(Project *)arg1;

@end