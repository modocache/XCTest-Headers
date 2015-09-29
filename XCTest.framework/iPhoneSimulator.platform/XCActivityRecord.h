//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSData, NSDate, NSString, NSUUID, XCElementSnapshot, XCSynthesizedEventRecord;

@interface XCActivityRecord : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSUUID *_uuid;
    NSDate *_start;
    NSDate *_finish;
    _Bool _hasSubactivities;
    NSData *_screenImageData;
    XCElementSnapshot *_snapshot;
    NSArray *_elementsOfInterest;
    XCSynthesizedEventRecord *_synthesizedEvent;
}

+ (_Bool)supportsSecureCoding;
@property(retain) XCSynthesizedEventRecord *synthesizedEvent; // @synthesize synthesizedEvent=_synthesizedEvent;
@property(copy) NSArray *elementsOfInterest; // @synthesize elementsOfInterest=_elementsOfInterest;
@property(retain) XCElementSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(copy) NSData *screenImageData; // @synthesize screenImageData=_screenImageData;
@property _Bool hasSubactivities; // @synthesize hasSubactivities=_hasSubactivities;
@property(copy) NSDate *start; // @synthesize start=_start;
@property(copy) NSDate *finish; // @synthesize finish=_finish;
@property(copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy) NSString *title; // @synthesize title=_title;
@property(readonly) double duration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end

