//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTest/XCTestRun.h>

@interface XCTestCaseRun : XCTestRun
{
    unsigned long long failureCount;
    unsigned long long unexpectedExceptionCount;
}

- (void)recordFailureInTest:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4 expected:(BOOL)arg5;
- (unsigned long long)unexpectedExceptionCount;
- (unsigned long long)failureCount;
- (void)stop;
- (void)start;

@end

