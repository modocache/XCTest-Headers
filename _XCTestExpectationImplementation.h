//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
//
// File: /Applications/Xcode-Beta.app/Contents/Developer/Platforms/MacOSX.platform/Developer/Library/Frameworks/XCTest.framework/Versions/A/XCTest
// UUID: AA71A0D6-8421-3B6F-9CEF-CFB7F936F16F
//
//                           Arch: x86_64
//                Current version: 6700.0.0
//          Compatibility version: 1.0.0
//                 Source version: 6700.0.0.0.0
//       Minimum Mac OS X version: 10.9.0
//                    SDK version: 10.10.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @loader_path/../../../../../../../../../SharedFrameworks/
//                               = /Applications/Xcode-Beta.app/Contents/SharedFrameworks
//

@interface _XCTestExpectationImplementation : NSObject
{
    BOOL _hasCompleted;
    XCTestCase *_testCase;
    NSString *_expectationDescription;
}

@property(copy) NSString *expectationDescription; // @synthesize expectationDescription=_expectationDescription;
@property XCTestCase *testCase; // @synthesize testCase=_testCase;
@property BOOL hasCompleted; // @synthesize hasCompleted=_hasCompleted;
- (void)dealloc;

@end
