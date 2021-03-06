/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDirectoryEnumerator : NSEnumerator

@property (readonly, copy) NSDictionary *directoryAttributes;
@property (readonly, copy) NSDictionary *fileAttributes;
@property (readonly) unsigned long long level;

- (id)directoryAttributes;
- (id)fileAttributes;
- (unsigned long long)level;
- (id)nextObject;
- (void)skipDescendants;
- (void)skipDescendents;

@end
