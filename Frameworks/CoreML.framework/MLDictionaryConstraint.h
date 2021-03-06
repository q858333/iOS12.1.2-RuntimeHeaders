/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLDictionaryConstraint : NSObject <MLFeatureValueConstraint, NSCopying> {
    long long  _keyType;
}

@property (nonatomic, readonly) long long keyType;

+ (id)constraintWithInt64Keys;
+ (id)constraintWithStringKeys;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithKeyType:(long long)arg1;
- (bool)isAllowedValue:(id)arg1 error:(id*)arg2;
- (long long)keyType;

@end
