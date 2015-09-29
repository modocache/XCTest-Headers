//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface XCAccessibilityElement : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_context;
    id _payload;
    int _processIdentifier;
    struct __AXUIElement *_axElement;
}

+ (_Bool)supportsSecureCoding;
+ (id)elementWithAXUIElement:(struct __AXUIElement *)arg1;
+ (id)elementWithProcessIdentifier:(int)arg1;
+ (id)deviceElement;
+ (id)mockElementWithProcessIdentifier:(int)arg1 payload:(id)arg2;
+ (id)mockElementWithProcessIdentifier:(int)arg1;
@property(readonly) id payload; // @synthesize payload=_payload;
@property(readonly) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly) const struct __AXUIElement *AXUIElement; // @synthesize AXUIElement=_axElement;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, getter=isNative) _Bool native;
- (void)dealloc;
- (id)initWithMockProcessIdentifier:(int)arg1 payload:(id)arg2;
- (id)initWithAXUIElement:(struct __AXUIElement *)arg1;
- (id)init;

@end

