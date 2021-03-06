//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface XCUIApplicationRegistry : NSObject
{
    NSMutableDictionary *_discoveredApplications;
    NSDictionary *_testDependencies;
    NSDictionary *_userOverrides;
    id <XCUIApplicationRegistryProvider> _platformProvider;
}

@property(retain) id <XCUIApplicationRegistryProvider> platformProvider; // @synthesize platformProvider=_platformProvider;
@property(copy) NSDictionary *userOverrides; // @synthesize userOverrides=_userOverrides;
@property(copy) NSDictionary *testDependencies; // @synthesize testDependencies=_testDependencies;
- (void).cxx_destruct;
- (BOOL)testDependencyExistsForApplicationAtURL:(id)arg1;
- (BOOL)_validateBundleIdentifier:(id)arg1 withApplicationAtURL:(id)arg2 error:(id *)arg3;
- (id)_discoveredURLForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)_deduceInfoDictionaryReadFailureForApplicationAtURL:(id)arg1;
- (id)recordForApplicationAtURL:(id)arg1 error:(id *)arg2;
- (id)recordForApplicationWithBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)_constructRecordMapFromRawMap:(id)arg1 isTestDependencyMap:(BOOL)arg2;
- (id)initWithTestDependencies:(id)arg1 userOverrides:(id)arg2;

@end

