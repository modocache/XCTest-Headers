//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSSet, XCSourceCodeTreeNode, XCUIRecorderNodeFinder;

@interface XCUIRecorderNodeFinderMatch : NSObject
{
    NSSet *_matchingSnapshots;
    XCSourceCodeTreeNode *_node;
    XCUIRecorderNodeFinder *_ancestorFinder;
    NSMutableArray *_descendantFinders;
}

@property(retain) NSMutableArray *descendantFinders; // @synthesize descendantFinders=_descendantFinders;
@property(retain) XCUIRecorderNodeFinder *ancestorFinder; // @synthesize ancestorFinder=_ancestorFinder;
@property(retain) XCSourceCodeTreeNode *node; // @synthesize node=_node;
@property(copy) NSSet *matchingSnapshots; // @synthesize matchingSnapshots=_matchingSnapshots;
- (void).cxx_destruct;
- (void)invalidate;
- (id)nodeIncludingDescendants;
- (id)description;
- (id)initWithNode:(id)arg1 matchingSnapshots:(id)arg2 ancestorFinder:(id)arg3;

@end
