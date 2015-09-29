@interface XCTestSuite : XCTest
{
    NSString *_name;
    NSMutableArray *_tests;
}

+ (id)defaultTestSuite;
+ (id)allTests;
+ (id)testSuiteForTestCaseClass:(Class)arg1;
+ (id)testSuiteForTestCaseWithName:(id)arg1;
+ (id)testSuiteForBundlePath:(id)arg1;
+ (id)suiteForBundleCache;
+ (void)invalidateCache;
+ (id)_suiteForBundleCache;
+ (id)emptyTestSuiteNamedFromPath:(id)arg1;
+ (id)testSuiteWithName:(id)arg1;
- (void)performTest:(id)arg1;
- (void)_recordUnexpectedFailureForTestRun:(id)arg1 description:(id)arg2 exception:(id)arg3;
- (Class)testRunClass;
- (Class)_requiredTestRunBaseClass;
- (unsigned long long)testCaseCount;
@property(readonly, copy) NSArray *tests;
- (void)addTest:(id)arg1;
- (id)description;
@property(copy) NSString *name;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)removeTestsWithNames:(id)arg1;

@end
