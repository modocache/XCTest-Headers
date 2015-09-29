@interface XCTest : NSObject
{
}

+ (id)languageAgnosticTestClassNameForTestClass:(Class)arg1;
@property(readonly) NSString *nameForLegacyLogging;
@property(readonly) NSString *languageAgnosticTestMethodName;
@property(readonly) NSString *languageAgnosticTestClassName;
- (void)tearDown;
- (void)setUp;
- (id)run;
- (void)performTest:(id)arg1;
@property(readonly) Class testRunClass;
@property(readonly) Class _requiredTestRunBaseClass;
@property(readonly, copy) NSString *name;
@property(readonly) unsigned long long testCaseCount;
@property(readonly) NSString *testMethodName;
@property(readonly) NSString *testClassName;
- (void)removeTestsWithNames:(id)arg1;

@end
