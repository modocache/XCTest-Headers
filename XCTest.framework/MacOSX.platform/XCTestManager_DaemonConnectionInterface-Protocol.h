//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDictionary, NSNumber, NSString, NSUUID;

@protocol XCTestManager_DaemonConnectionInterface
- (id)_IDE_stopRecording;
- (id)_IDE_startRecordingProcessPID:(NSNumber *)arg1 applicationSnapshotAttributes:(NSArray *)arg2 applicationSnapshotParameters:(NSDictionary *)arg3 elementSnapshotAttributes:(NSArray *)arg4 elementSnapshotParameters:(NSDictionary *)arg5 simpleTargetGestureNames:(NSArray *)arg6;
- (id)_IDE_startRecordingProcessPID:(NSNumber *)arg1 snapshotAttributes:(NSArray *)arg2 snapshotParameters:(NSDictionary *)arg3 simpleTargetGestureNames:(NSArray *)arg4;
- (id)_IDE_startRecordingProcessPID:(NSNumber *)arg1;
- (id)_IDE_startRecording;
- (id)_IDE_beginSessionWithIdentifier:(NSUUID *)arg1 forClient:(NSString *)arg2 atPath:(NSString *)arg3;
- (id)_IDE_initiateControlSessionForTestProcessID:(NSNumber *)arg1;
- (id)_IDE_initiateSessionWithIdentifier:(NSUUID *)arg1 forClient:(NSString *)arg2 atPath:(NSString *)arg3 protocolVersion:(NSNumber *)arg4;
@end

