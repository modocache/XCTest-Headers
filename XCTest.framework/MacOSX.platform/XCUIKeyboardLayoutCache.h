//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface XCUIKeyboardLayoutCache : NSObject
{
    NSMutableDictionary *_entries;
}

+ (id)sharedCache;
- (void).cxx_destruct;
@property(readonly) unsigned long long count;
- (void)flush;
- (id)keyboardLayoutForIdentifier:(id)arg1;
- (void)addKeyboardLayout:(id)arg1;
- (id)init;

@end
