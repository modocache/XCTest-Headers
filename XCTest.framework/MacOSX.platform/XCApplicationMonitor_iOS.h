//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTest/XCApplicationMonitor.h>

@class NSMutableDictionary;

@interface XCApplicationMonitor_iOS : XCApplicationMonitor
{
    NSMutableDictionary *_applicationsForBundleIDs;
    NSMutableDictionary *_AXActiveForPID;
}

- (id)allMonitoredApplications;
- (id)monitoredApplicationWithProcessIdentifier:(int)arg1;
- (void)beginMonitoringApplication:(id)arg1;
- (void)applicationWithBundleID:(id)arg1 didUpdatePID:(int)arg2 andState:(unsigned long long)arg3;
- (void)setAccessibilityActive:(_Bool)arg1 forApplicationWithPID:(int)arg2;
- (id)init;

@end

