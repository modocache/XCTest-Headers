@protocol XCTestManager_ManagerInterface
- (void)_XCT_requestNSXPListenerEndpointFromAuxiliaryFrameworkWithReply:(void (^)(NSXPCListenerEndpoint *, NSString *))arg1;
- (void)_XCT_requestSocketForSessionIdentifier:(NSUUID *)arg1 reply:(void (^)(NSFileHandle *))arg2;
@end
