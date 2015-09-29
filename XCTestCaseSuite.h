@interface XCTestCaseSuite : XCTestSuite
{
    Class _testCaseClass;
}

+ (id)emptyTestSuiteForTestCaseClass:(Class)arg1;
- (void)tearDown;
- (void)setUp;
- (id)initWithTestCaseClass:(Class)arg1;

@end
