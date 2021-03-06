/* Generated by EzioChiu.
 */

@protocol CalLogWriter <NSObject>

@required

- (bool)flush;
- (<CalLogFormatter> *)formatter;
- (id)initWithParameters:(NSDictionary *)arg1;
- (void)setFormatter:(id <CalLogFormatter>)arg1;
- (void)write:(CalLogEnvelope *)arg1;

@end
