//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTest/XCUIRecorder.h>

#import "XCTestManager_IDEInterface.h"

@class DTXConnection, NSObject<OS_dispatch_queue>, XCSourceCodeTreeNode, XCUIRecorderUtilities;

@interface XCUIRecorder_iOS : XCUIRecorder <XCTestManager_IDEInterface>
{
    id <XCTestManager_DaemonConnectionInterface> _daemonProxy;
    XCUIRecorderUtilities *_utilities;
    NSObject<OS_dispatch_queue> *_processingQueue;
    DTXConnection *_connection;
    XCSourceCodeTreeNode *_deferredSoftKeyboardTapNode;
    unsigned long long _deferredSoftKeyboardTapGeneration;
    long long _testProtocolVersion;
}

@property long long testProtocolVersion; // @synthesize testProtocolVersion=_testProtocolVersion;
@property unsigned long long deferredSoftKeyboardTapGeneration; // @synthesize deferredSoftKeyboardTapGeneration=_deferredSoftKeyboardTapGeneration;
@property(retain) XCSourceCodeTreeNode *deferredSoftKeyboardTapNode; // @synthesize deferredSoftKeyboardTapNode=_deferredSoftKeyboardTapNode;
@property(retain) DTXConnection *connection; // @synthesize connection=_connection;
@property(retain) XCUIRecorderUtilities *utilities; // @synthesize utilities=_utilities;
@property(retain) id <XCTestManager_DaemonConnectionInterface> daemonProxy; // @synthesize daemonProxy=_daemonProxy;
- (id)_XCT_testCase:(id)arg1 method:(id)arg2 didFinishActivity:(id)arg3;
- (id)_XCT_testCase:(id)arg1 method:(id)arg2 willStartActivity:(id)arg3;
- (id)_XCT_getProgressForLaunch:(id)arg1;
- (id)_XCT_recordedEvent:(id)arg1 targetElementID:(id)arg2 applicationSnapshot:(id)arg3;
- (id)_XCT_recordedEvent:(id)arg1 forElement:(id)arg2;
- (id)_XCT_logMessage:(id)arg1;
- (id)_XCT_testMethod:(id)arg1 ofClass:(id)arg2 didMeasureMetric:(id)arg3 file:(id)arg4 line:(id)arg5;
- (id)_XCT_testCase:(id)arg1 method:(id)arg2 didStallOnMainThreadInFile:(id)arg3 line:(id)arg4;
- (id)_XCT_testCaseDidFinishForTestClass:(id)arg1 method:(id)arg2 withStatus:(id)arg3 duration:(id)arg4;
- (id)_XCT_testCaseDidFailForTestClass:(id)arg1 method:(id)arg2 withMessage:(id)arg3 file:(id)arg4 line:(id)arg5;
- (id)_XCT_testCaseDidStartForTestClass:(id)arg1 method:(id)arg2;
- (id)_XCT_testSuite:(id)arg1 didFinishAt:(id)arg2 runCount:(id)arg3 withFailures:(id)arg4 unexpected:(id)arg5 testDuration:(id)arg6 totalDuration:(id)arg7;
- (id)_XCT_testSuite:(id)arg1 didStartAt:(id)arg2;
- (id)_XCT_didFinishExecutingTestPlan;
- (id)_XCT_didBeginExecutingTestPlan;
- (id)_XCT_testBundleReadyWithProtocolVersion:(id)arg1 minimumVersion:(id)arg2;
- (id)_XCT_terminateProcess:(id)arg1;
- (id)_XCT_launchProcessWithPath:(id)arg1 bundleID:(id)arg2 arguments:(id)arg3 environmentVariables:(id)arg4;
- (id)elementSnapshotParameters;
- (id)applicationSnapshotParameters;
- (void)postGestureNode:(id)arg1 isSoftKeyTap:(BOOL)arg2;
- (void)postNode:(id)arg1 replaceLastNode:(BOOL)arg2;
- (id)_XCT_exchangeCurrentProtocolVersion:(id)arg1 minimumVersion:(id)arg2;
- (id)_XCT_recordedFirstResponderChangedWithApplicationSnapshot:(id)arg1;
- (id)_XCT_recordedOrientationChange:(id)arg1;
- (id)_XCT_recordedEventNames:(id)arg1 duration:(id)arg2 startLocation:(id)arg3 startElementSnapshot:(id)arg4 startApplicationSnapshot:(id)arg5 endLocation:(id)arg6 endElementSnapshot:(id)arg7 endApplicationSnapshot:(id)arg8;
- (id)_findBestMatchForElementSnapshot:(id)arg1 inApplicationSnapshot:(id)arg2;
- (id)_XCT_recordedEventNames:(id)arg1 duration:(id)arg2 startElement:(id)arg3 startApplicationSnapshot:(id)arg4 endElement:(id)arg5 endApplicationSnapshot:(id)arg6;
- (id)_XCT_recordedKeyEventsWithApplicationSnapshot:(id)arg1 characters:(id)arg2 charactersIgnoringModifiers:(id)arg3 modifierFlags:(id)arg4;
- (id)_XCT_recordedKeyEventsWithCharacters:(id)arg1 charactersIgnoringModifiers:(id)arg2 modifierFlags:(id)arg3;
- (id)_methodNameSimpleTargetGestureNames;
- (void)invalidate;
- (void)recordTargetProcessPID:(int)arg1 forLanguage:(unsigned long long)arg2 reservedNames:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)initWithTransport:(id)arg1;

@end

