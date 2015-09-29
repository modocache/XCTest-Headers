@interface XCSymbolicationRecord : NSObject
{
    unsigned long long _lineNumber;
    NSString *_filePath;
    NSString *_symbolName;
}

+ (id)symbolicationRecordForAddress:(unsigned long long)arg1;
+ (id)failureRecord;
+ (BOOL)softLinkCoreSymbolication;
@property(copy) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(copy) NSString *filePath; // @synthesize filePath=_filePath;
@property unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
- (void)dealloc;

@end
