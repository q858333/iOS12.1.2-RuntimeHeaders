/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRestaurant : NSObject <INRestaurantExport, NSCopying, NSSecureCoding> {
    CLLocation * _location;
    NSString * _name;
    NSString * _restaurantIdentifier;
    NSString * _vendorIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *restaurantIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *vendorIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 name:(id)arg2 vendorIdentifier:(id)arg3 restaurantIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)location;
- (bool)location:(id)arg1 equalToLocation:(id)arg2;
- (id)name;
- (id)restaurantIdentifier;
- (void)setLocation:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRestaurantIdentifier:(id)arg1;
- (void)setVendorIdentifier:(id)arg1;
- (id)vendorIdentifier;

@end