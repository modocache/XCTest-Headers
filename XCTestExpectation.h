@interface XCTestExpectation : NSObject
{
    id _internalImplementation;
}

+ (id)expectationForTestCase:(id)arg1 withDescription:(id)arg2;
@property(readonly) _XCTestExpectationImplementation *internalImplementation; // @synthesize internalImplementation=_internalImplementation;
- (void)cleanup;
- (void)fulfill;
- (id)description;
- (id)_initForTestCase:(id)arg1 withDescription:(id)arg2;
- (void)dealloc;

@end
