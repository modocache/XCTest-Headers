@interface _XCTestExpectationImplementation : NSObject
{
    BOOL _hasCompleted;
    XCTestCase *_testCase;
    NSString *_expectationDescription;
}

@property(copy) NSString *expectationDescription; // @synthesize expectationDescription=_expectationDescription;
@property XCTestCase *testCase; // @synthesize testCase=_testCase;
@property BOOL hasCompleted; // @synthesize hasCompleted=_hasCompleted;
- (void)dealloc;

@end
