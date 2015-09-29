@interface XCTestProbe : NSObject
{
}

+ (void)load;
+ (void)initialize;
+ (void)_applicationFinishedLaunching:(id)arg1;
+ (void)runTests:(id)arg1;
+ (void)exitTests:(int)arg1;
+ (void)resumeAppSleep:(id)arg1;
+ (id)suspendAppSleep;
+ (void)runTestsAtUnitPath:(id)arg1 scope:(id)arg2;
+ (id)specifiedTestSuite;
+ (id)multiTestSuiteForScope:(id)arg1 inverse:(BOOL)arg2;
+ (id)testCaseNamesForScopeNames:(id)arg1;
+ (id)testedBundlePath;
+ (BOOL)isTesting;
+ (BOOL)isInverseTestScope;
+ (id)testScope;
+ (id)_scopeDictionary;
+ (BOOL)isLoadedFromTool;
+ (BOOL)isProcessActingAsTestRig;
+ (BOOL)isLoadedFromApplication;

@end
