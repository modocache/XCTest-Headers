@interface _XCKVOExpectation : XCTestExpectation
{
    id _observedObject;
    NSString *_keyPath;
    id _expectedValue;
    CDUnknownBlockType _handler;
    BOOL _hasUnregistered;
}

@property BOOL hasUnregistered; // @synthesize hasUnregistered=_hasUnregistered;
@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain) id expectedValue; // @synthesize expectedValue=_expectedValue;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(retain) id observedObject; // @synthesize observedObject=_observedObject;
- (void)dealloc;
- (void)cleanup;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_safelyUnregister;
- (void)startObserving;

@end
