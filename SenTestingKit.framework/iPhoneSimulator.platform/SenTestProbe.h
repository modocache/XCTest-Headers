//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SenTestProbe : NSObject
{
}

+ (void)load;
+ (void)initialize;
+ (void)runTests:(id)arg1;
+ (void)resumeAppSleep:(id)arg1;
+ (id)suspendAppSleep;
+ (void)runTestsAtUnitPath:(id)arg1 scope:(id)arg2;
+ (id)specifiedTestSuite;
+ (id)multiTestSuiteForScope:(id)arg1 inverse:(_Bool)arg2;
+ (id)testCaseNamesForScopeNames:(id)arg1;
+ (id)testedBundlePath;
+ (_Bool)isTesting;
+ (_Bool)isInverseTestScope;
+ (id)testScope;
+ (_Bool)isLoadedFromTool;
+ (_Bool)isProcessActingAsTestRig;
+ (_Bool)isLoadedFromApplication;

@end

