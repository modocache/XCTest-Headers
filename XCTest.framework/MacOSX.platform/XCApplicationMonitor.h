//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCTestObservation.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface XCApplicationMonitor : NSObject <XCTestObservation>
{
    NSMutableDictionary *_launchSessionTokens;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedMonitor;
@property NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, copy) NSArray *allMonitoredApplications;
- (void)testCaseWillStart:(id)arg1;
- (id)monitoredApplicationWithProcessIdentifier:(int)arg1;
- (id)launchSessionTokenForApplication:(id)arg1;
- (void)setLaunchSessionToken:(id)arg1 forApplication:(id)arg2;
- (void)applicationWithBundleID:(id)arg1 didUpdatePID:(int)arg2 andState:(unsigned long long)arg3;
- (void)setAccessibilityActive:(BOOL)arg1 forApplicationWithPID:(int)arg2;
- (void)beginMonitoringApplication:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

