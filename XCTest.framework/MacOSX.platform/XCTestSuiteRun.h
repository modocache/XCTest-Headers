//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTest/XCTestRun.h>

@class NSMutableArray;

@interface XCTestSuiteRun : XCTestRun
{
    NSMutableArray *runs;
}

- (double)testDuration;
- (unsigned long long)unexpectedExceptionCount;
- (unsigned long long)failureCount;
- (void)addTestRun:(id)arg1;
- (id)testRuns;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithTest:(id)arg1;

@end

