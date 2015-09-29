//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCharacterSet, NSData, NSDictionary, NSIndexSet, NSSet;

@interface XCKeyboardKeyMap : NSObject
{
    struct __TISInputSource *_inputSource;
    NSData *_layoutData;
    const struct UCKeyboardLayout *_layoutHeader;
    const struct UCKeyboardTypeHeader *_keyboardType;
    const struct UCKeyModifiersToTableNum *_keyModifiersToTableNum;
    const struct UCKeyToCharTableIndex *_keyToCharTableIndex;
    const struct UCKeyStateRecordsIndex *_keyStateRecordsIndex;
    const struct UCKeyStateTerminators *_keyStateTerminators;
    const struct UCKeySequenceDataIndex *_keySequenceDataIndex;
    NSSet *_numericPadKeyCodes;
    NSDictionary *_systemKeyForKeyCode;
    NSDictionary *_inputsForSystemKey;
    NSDictionary *_inputForKey;
    unsigned long long _longestSystemKey;
    NSDictionary *_modifiersForTableID;
    NSCharacterSet *_validKeyOutputIDs;
    NSDictionary *_inputsForKeyOutputID;
    NSSet *_safeTerminationInputs;
    struct _NSRange _keyStateOutputIDsRange;
    NSIndexSet *_keyStatesWithTerminator;
    NSCharacterSet *_validKeyStates;
    NSCharacterSet *_validSequenceIDs;
    BOOL _canEmitSequenceIDAndKeyState;
    NSDictionary *_inexactSequencesNFC;
    unsigned long long _longestInexactSequence;
    NSDictionary *_stringsForIntendedStrings;
}

@property(readonly) BOOL canEmitSequenceIDAndKeyState; // @synthesize canEmitSequenceIDAndKeyState=_canEmitSequenceIDAndKeyState;
- (id)description;
- (id)stringForIntendedString:(id)arg1;
- (id)stringForInputs:(id)arg1;
- (id)stringForInput:(id)arg1;
- (id)_stringForInput:(id)arg1 keyState:(unsigned long long *)arg2 output:(id)arg3;
- (void)addCachedPaths:(id)arg1 endingString:(id)arg2 range:(struct _NSRange)arg3;
- (id)cachedPathsEndingString:(id)arg1 range:(struct _NSRange)arg2;
- (void)_pathsForSequenceID:(unsigned short)arg1 range:(id)arg2 nextPath:(id)arg3 results:(id)arg4;
- (BOOL)_pathsForSystemKeyEndingString:(id)arg1 range:(struct _NSRange)arg2 nextPath:(id)arg3 results:(id)arg4;
- (id)pathsEndingString:(id)arg1 range:(id)arg2 nextPath:(id)arg3;
- (id)_pathByTerminatingKeyState:(unsigned short)arg1 next:(id)arg2 output:(id)arg3 sequenceID:(unsigned short)arg4;
- (id)pathsForSequenceID:(unsigned short)arg1 nextPath:(id)arg2;
- (void)_sequenceIDsEndingString:(id)arg1 range:(struct _NSRange)arg2 suffixRange:(struct _NSRange)arg3 results:(id)arg4;
- (id)sequenceIDsEndingString:(id)arg1 range:(struct _NSRange)arg2;
- (id)sequenceIDsForString:(id)arg1 range:(struct _NSRange)arg2;
- (id)sequenceIDsForString:(id)arg1;
- (id)stringForSequenceID:(unsigned short)arg1;
- (id)inputsForOutputID:(unsigned short)arg1;
- (id)inputsForText:(id)arg1 currentFlags:(unsigned long long)arg2;
- (id)inputsForText:(id)arg1;
- (id)inputsToSetModifierFlags:(unsigned long long)arg1 currentFlags:(unsigned long long)arg2;
- (id)inputForKey:(id)arg1 modifierFlags:(unsigned long long)arg2;
- (BOOL)canEmitKeyState:(unsigned short)arg1;
- (BOOL)canEmitSequenceIDAsOutputID:(unsigned short)arg1;
- (BOOL)canEmitSequenceID:(unsigned short)arg1;
- (BOOL)canEmitOutputID:(unsigned short)arg1;
- (unsigned long long)uniqueKeyboardType:(unsigned long long)arg1;
- (BOOL)supportsKeyboardType:(unsigned long long)arg1;
@property(readonly, getter=isPrimary) BOOL primary;
- (void)dealloc;
- (void)_initIntendedStrings;
- (void)_initInexactSequences;
- (void)_initValidity;
- (void)_initKeyStates;
- (void)_initKeyOutputs;
- (void)_initModifiers;
- (void)_initKeyboardKeys;
- (id)initWithInputSource:(struct __TISInputSource *)arg1 layoutData:(id)arg2 index:(unsigned long long)arg3;
- (id)init;

@end

