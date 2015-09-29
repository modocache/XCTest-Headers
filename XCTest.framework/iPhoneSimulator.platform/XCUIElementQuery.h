//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCUIElementTypeQueryProvider.h"

@class NSArray, NSOrderedSet, NSString, XCUIApplication, XCUIElement;

@interface XCUIElementQuery : NSObject <XCUIElementTypeQueryProvider>
{
    _Bool _changesScope;
    NSString *_queryDescription;
    XCUIElementQuery *_inputQuery;
    CDUnknownBlockType _filter;
    unsigned long long _expressedType;
    NSArray *_expressedIdentifiers;
    NSOrderedSet *_lastInput;
    NSOrderedSet *_lastOutput;
}

@property(copy) NSOrderedSet *lastOutput; // @synthesize lastOutput=_lastOutput;
@property(copy) NSOrderedSet *lastInput; // @synthesize lastInput=_lastInput;
@property(copy) NSArray *expressedIdentifiers; // @synthesize expressedIdentifiers=_expressedIdentifiers;
@property unsigned long long expressedType; // @synthesize expressedType=_expressedType;
@property _Bool changesScope; // @synthesize changesScope=_changesScope;
@property(readonly, copy) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(readonly) XCUIElementQuery *inputQuery; // @synthesize inputQuery=_inputQuery;
@property(readonly, copy) NSString *queryDescription; // @synthesize queryDescription=_queryDescription;
@property(readonly, copy) XCUIElementQuery *otherElements;
@property(readonly, copy) XCUIElementQuery *handles;
@property(readonly, copy) XCUIElementQuery *layoutItems;
@property(readonly, copy) XCUIElementQuery *layoutAreas;
@property(readonly, copy) XCUIElementQuery *cells;
@property(readonly, copy) XCUIElementQuery *levelIndicators;
@property(readonly, copy) XCUIElementQuery *grids;
@property(readonly, copy) XCUIElementQuery *rulerMarkers;
@property(readonly, copy) XCUIElementQuery *rulers;
@property(readonly, copy) XCUIElementQuery *dockItems;
@property(readonly, copy) XCUIElementQuery *mattes;
@property(readonly, copy) XCUIElementQuery *helpTags;
@property(readonly, copy) XCUIElementQuery *colorWells;
@property(readonly, copy) XCUIElementQuery *relevanceIndicators;
@property(readonly, copy) XCUIElementQuery *splitters;
@property(readonly, copy) XCUIElementQuery *splitGroups;
@property(readonly, copy) XCUIElementQuery *valueIndicators;
@property(readonly, copy) XCUIElementQuery *ratingIndicators;
@property(readonly, copy) XCUIElementQuery *timelines;
@property(readonly, copy) XCUIElementQuery *decrementArrows;
@property(readonly, copy) XCUIElementQuery *incrementArrows;
@property(readonly, copy) XCUIElementQuery *steppers;
@property(readonly, copy) XCUIElementQuery *webViews;
@property(readonly, copy) XCUIElementQuery *maps;
@property(readonly, copy) XCUIElementQuery *menuBarItems;
@property(readonly, copy) XCUIElementQuery *menuBars;
@property(readonly, copy) XCUIElementQuery *menuItems;
@property(readonly, copy) XCUIElementQuery *menus;
@property(readonly, copy) XCUIElementQuery *textViews;
@property(readonly, copy) XCUIElementQuery *datePickers;
@property(readonly, copy) XCUIElementQuery *secureTextFields;
@property(readonly, copy) XCUIElementQuery *textFields;
@property(readonly, copy) XCUIElementQuery *staticTexts;
@property(readonly, copy) XCUIElementQuery *scrollBars;
@property(readonly, copy) XCUIElementQuery *scrollViews;
@property(readonly, copy) XCUIElementQuery *searchFields;
@property(readonly, copy) XCUIElementQuery *icons;
@property(readonly, copy) XCUIElementQuery *images;
@property(readonly, copy) XCUIElementQuery *links;
@property(readonly, copy) XCUIElementQuery *toggles;
@property(readonly, copy) XCUIElementQuery *switches;
@property(readonly, copy) XCUIElementQuery *pickerWheels;
@property(readonly, copy) XCUIElementQuery *pickers;
@property(readonly, copy) XCUIElementQuery *segmentedControls;
@property(readonly, copy) XCUIElementQuery *activityIndicators;
@property(readonly, copy) XCUIElementQuery *progressIndicators;
@property(readonly, copy) XCUIElementQuery *pageIndicators;
@property(readonly, copy) XCUIElementQuery *sliders;
@property(readonly, copy) XCUIElementQuery *collectionViews;
@property(readonly, copy) XCUIElementQuery *browsers;
@property(readonly, copy) XCUIElementQuery *outlineRows;
@property(readonly, copy) XCUIElementQuery *outlines;
@property(readonly, copy) XCUIElementQuery *tableColumns;
@property(readonly, copy) XCUIElementQuery *tableRows;
@property(readonly, copy) XCUIElementQuery *tables;
@property(readonly, copy) XCUIElementQuery *statusBars;
@property(readonly, copy) XCUIElementQuery *toolbars;
@property(readonly, copy) XCUIElementQuery *tabGroups;
@property(readonly, copy) XCUIElementQuery *tabBars;
@property(readonly, copy) XCUIElementQuery *tabs;
@property(readonly, copy) XCUIElementQuery *navigationBars;
@property(readonly, copy) XCUIElementQuery *keys;
@property(readonly, copy) XCUIElementQuery *keyboards;
@property(readonly, copy) XCUIElementQuery *popovers;
@property(readonly, copy) XCUIElementQuery *toolbarButtons;
@property(readonly, copy) XCUIElementQuery *menuButtons;
@property(readonly, copy) XCUIElementQuery *comboBoxes;
@property(readonly, copy) XCUIElementQuery *popUpButtons;
@property(readonly, copy) XCUIElementQuery *disclosureTriangles;
@property(readonly, copy) XCUIElementQuery *checkBoxes;
@property(readonly, copy) XCUIElementQuery *radioGroups;
@property(readonly, copy) XCUIElementQuery *radioButtons;
@property(readonly, copy) XCUIElementQuery *buttons;
@property(readonly, copy) XCUIElementQuery *dialogs;
@property(readonly, copy) XCUIElementQuery *alerts;
@property(readonly, copy) XCUIElementQuery *drawers;
@property(readonly, copy) XCUIElementQuery *sheets;
@property(readonly, copy) XCUIElementQuery *windows;
@property(readonly, copy) XCUIElementQuery *groups;
- (id)matchingSnapshotsWithError:(id *)arg1;
- (id)matchingSnapshotsHandleUIInterruption:(_Bool)arg1 withError:(id *)arg2;
@property(readonly, copy) NSArray *allElementsBoundByIndex;
@property(readonly, copy) NSArray *allElementsBoundByAccessibilityElement;
- (id)_elementMatchingAccessibilityElementOfSnapshot:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)elementMatchingType:(unsigned long long)arg1 identifier:(id)arg2;
- (id)elementMatchingPredicate:(id)arg1;
- (id)elementBoundByIndex:(unsigned long long)arg1;
- (id)elementAtIndex:(unsigned long long)arg1;
@property(readonly) XCUIElement *element;
- (id)containingType:(unsigned long long)arg1 identifier:(id)arg2;
- (id)containingPredicate:(id)arg1;
- (id)_containingPredicate:(id)arg1 queryDescription:(id)arg2;
- (id)matchingIdentifier:(id)arg1;
- (id)matchingType:(unsigned long long)arg1 identifier:(id)arg2;
- (id)matchingPredicate:(id)arg1;
- (id)_predicateWithType:(unsigned long long)arg1 identifier:(id)arg2;
- (id)_queryWithPredicate:(id)arg1;
- (id)sorted:(CDUnknownBlockType)arg1;
- (id)descending:(unsigned long long)arg1;
- (id)ascending:(unsigned long long)arg1;
- (id)filter:(CDUnknownBlockType)arg1;
- (id)childrenMatchingType:(unsigned long long)arg1;
- (id)descendantsMatchingType:(unsigned long long)arg1;
@property(readonly, copy) NSString *debugDescription;
- (id)_debugInfoWithIndent:(id *)arg1;
@property(readonly, copy) NSString *elementDescription;
- (id)_derivedExpressedIdentifiers;
- (unsigned long long)_derivedExpressedType;
@property(readonly) XCUIApplication *application;
@property(readonly) unsigned long long count;
- (id)initWithInputQuery:(id)arg1 queryDescription:(id)arg2 filter:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

