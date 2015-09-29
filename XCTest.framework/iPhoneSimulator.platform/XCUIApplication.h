//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTest/XCUIElement.h>

@class NSArray, NSDictionary, NSString, XCAccessibilityElement, XCApplicationQuery;

@interface XCUIApplication : XCUIElement
{
    _Bool _accessibilityActive;
    _Bool _ancillary;
    _Bool _eventLoopIsIdle;
    int _processID;
    unsigned long long _state;
    XCUIElement *_keyboard;
    NSArray *_launchArguments;
    NSDictionary *_launchEnvironment;
    NSString *_path;
    NSString *_bundleID;
    XCApplicationQuery *_applicationQuery;
    unsigned long long _generation;
}

+ (id)keyPathsForValuesAffectingRunning;
+ (id)appWithPID:(int)arg1;
@property unsigned long long generation; // @synthesize generation=_generation;
@property _Bool eventLoopIsIdle; // @synthesize eventLoopIsIdle=_eventLoopIsIdle;
@property(retain) XCApplicationQuery *applicationQuery; // @synthesize applicationQuery=_applicationQuery;
@property(readonly, copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy) NSString *path; // @synthesize path=_path;
@property _Bool ancillary; // @synthesize ancillary=_ancillary;
@property(nonatomic) _Bool accessibilityActive; // @synthesize accessibilityActive=_accessibilityActive;
@property(copy, nonatomic) NSDictionary *launchEnvironment; // @synthesize launchEnvironment=_launchEnvironment;
@property(copy, nonatomic) NSArray *launchArguments; // @synthesize launchArguments=_launchArguments;
- (void)dismissKeyboard;
@property(readonly) XCUIElement *keyboard; // @synthesize keyboard=_keyboard;
@property(readonly, nonatomic) long long interfaceOrientation;
- (void)_waitForViewControllerViewDidDisappearWithTimeout:(double)arg1;
- (void)_waitForQuiescence;
- (void)terminate;
- (void)_launchUsingXcode:(_Bool)arg1;
- (void)launch;
- (void)_waitForLaunchProgressViaProxy:(id)arg1;
- (void)_waitForLaunchTokenViaProxy:(id)arg1;
- (id)application;
@property(readonly, nonatomic) _Bool running;
@property(nonatomic) int processID; // @synthesize processID=_processID;
@property unsigned long long state; // @synthesize state=_state;
- (id)description;
- (id)lastSnapshot;
- (id)query;
- (void)clearQuery;
@property(readonly) XCAccessibilityElement *accessibilityElement;
- (unsigned long long)elementType;
- (id)initPrivateWithPath:(id)arg1 bundleID:(id)arg2;
- (id)init;
- (void)dealloc;

@end

