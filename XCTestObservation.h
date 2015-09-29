@protocol XCTestObservation <NSObject>

@optional
- (void)testCaseDidFail:(XCTestRun *)arg1 withDescription:(NSString *)arg2 inFile:(NSString *)arg3 atLine:(unsigned long long)arg4;
- (void)testCaseDidStop:(XCTestRun *)arg1;
- (void)testCaseDidStart:(XCTestRun *)arg1;
- (void)testSuiteDidFail:(XCTestRun *)arg1 withDescription:(NSString *)arg2 inFile:(NSString *)arg3 atLine:(unsigned long long)arg4;
- (void)testSuiteDidStop:(XCTestRun *)arg1;
- (void)testSuiteDidStart:(XCTestRun *)arg1;
- (void)stopObserving;
- (void)startObserving;
@end
