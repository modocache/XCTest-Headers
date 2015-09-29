@interface XCTestSuiteRun : XCTestRun
{
    NSMutableArray *_testRuns;
}

- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(BOOL)arg4;
- (double)testDuration;
- (unsigned long long)unexpectedExceptionCount;
- (unsigned long long)failureCount;
- (unsigned long long)executionCount;
- (void)addTestRun:(id)arg1;
@property(readonly, copy) NSArray *testRuns;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithTest:(id)arg1;

@end
