@interface _XCNotificationExpectation : XCTestExpectation
{
    id _observedObject;
    NSString *_notificationName;
    CDUnknownBlockType _handler;
}

@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(retain) id observedObject; // @synthesize observedObject=_observedObject;
- (void)_observeExpectedNotification:(id)arg1;
- (void)cleanup;
- (void)startObserving;
- (void)dealloc;

@end
