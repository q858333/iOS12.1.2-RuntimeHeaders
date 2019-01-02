/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAFrameKCDataIterator : NSObject <SAFrameIterator> {
    unsigned long long  _continuation;
    bool  _hideKernelFrames;
    bool  _hideUserFrames;
    bool  _isUserStackTruncated;
    SAKernelFrame * _kernel;
    struct stack_snapshot_frame32 { unsigned int x1; unsigned int x2; } * _kernel32Frames;
    unsigned int * _kernel32LRs;
    struct stack_snapshot_frame64 { unsigned long long x1; unsigned long long x2; } * _kernel64Frames;
    unsigned long long * _kernel64LRs;
    NSArray * _kernelBinaryLoadInfos;
    SAKernelLeafFrame * _kernelLeaf;
    int  _numKernel32Frames;
    int  _numKernel32LRs;
    int  _numKernel64Frames;
    int  _numKernel64LRs;
    int  _numUser32Frames;
    int  _numUser32LRs;
    int  _numUser64Frames;
    int  _numUser64LRs;
    SASharedCache * _sharedCache;
    SAUserTruncatedBacktrace * _truncatedBacktrace;
    SAFrame * _user;
    struct stack_snapshot_frame32 { unsigned int x1; unsigned int x2; } * _user32Frames;
    unsigned int * _user32LRs;
    struct stack_snapshot_frame64 { unsigned long long x1; unsigned long long x2; } * _user64Frames;
    unsigned long long * _user64LRs;
    NSArray * _userBinaryLoadInfos;
    SALeafFrame * _userLeaf;
}

@property unsigned long long continuation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isUserStackTruncated;
@property struct stack_snapshot_frame32 { unsigned int x1; unsigned int x2; }*kernel32Frames;
@property unsigned int*kernel32LRs;
@property struct stack_snapshot_frame64 { unsigned long long x1; unsigned long long x2; }*kernel64Frames;
@property unsigned long long*kernel64LRs;
@property (retain) NSArray *kernelBinaryLoadInfos;
@property int numKernel32Frames;
@property int numKernel32LRs;
@property int numKernel64Frames;
@property int numKernel64LRs;
@property int numUser32Frames;
@property int numUser32LRs;
@property int numUser64Frames;
@property int numUser64LRs;
@property (retain) SASharedCache *sharedCache;
@property (readonly) Class superclass;
@property struct stack_snapshot_frame32 { unsigned int x1; unsigned int x2; }*user32Frames;
@property unsigned int*user32LRs;
@property struct stack_snapshot_frame64 { unsigned long long x1; unsigned long long x2; }*user64Frames;
@property unsigned long long*user64LRs;
@property (retain) NSArray *userBinaryLoadInfos;

- (void).cxx_destruct;
- (void)clearTaskData;
- (void)clearThreadData;
- (unsigned long long)continuation;
- (void)dealloc;
- (void)exposeAllFrames;
- (void)exposeKernelFramesOnly;
- (void)exposeUserFramesOnly;
- (bool)hasStack;
- (bool)hasUserStack;
- (id)instructionForKernelAddress:(unsigned long long)arg1 symbolicationOffByOne:(bool)arg2;
- (id)instructionForUserAddress:(unsigned long long)arg1 symbolicationOffByOne:(bool)arg2;
- (bool)isUserStackTruncated;
- (void)iterateFrames:(id /* block */)arg1;
- (struct stack_snapshot_frame32 { unsigned int x1; unsigned int x2; }*)kernel32Frames;
- (unsigned int*)kernel32LRs;
- (struct stack_snapshot_frame64 { unsigned long long x1; unsigned long long x2; }*)kernel64Frames;
- (unsigned long long*)kernel64LRs;
- (id)kernelBinaryLoadInfos;
- (int)numKernel32Frames;
- (int)numKernel32LRs;
- (int)numKernel64Frames;
- (int)numKernel64LRs;
- (int)numUser32Frames;
- (int)numUser32LRs;
- (int)numUser64Frames;
- (int)numUser64LRs;
- (void)setContinuation:(unsigned long long)arg1;
- (void)setIsUserStackTruncated:(bool)arg1;
- (void)setKernel32Frames:(struct stack_snapshot_frame32 { unsigned int x1; unsigned int x2; }*)arg1;
- (void)setKernel32LRs:(unsigned int*)arg1;
- (void)setKernel64Frames:(struct stack_snapshot_frame64 { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)setKernel64LRs:(unsigned long long*)arg1;
- (void)setKernelBinaryLoadInfos:(id)arg1;
- (void)setNumKernel32Frames:(int)arg1;
- (void)setNumKernel32LRs:(int)arg1;
- (void)setNumKernel64Frames:(int)arg1;
- (void)setNumKernel64LRs:(int)arg1;
- (void)setNumUser32Frames:(int)arg1;
- (void)setNumUser32LRs:(int)arg1;
- (void)setNumUser64Frames:(int)arg1;
- (void)setNumUser64LRs:(int)arg1;
- (void)setSharedCache:(id)arg1;
- (void)setUser32Frames:(struct stack_snapshot_frame32 { unsigned int x1; unsigned int x2; }*)arg1;
- (void)setUser32LRs:(unsigned int*)arg1;
- (void)setUser64Frames:(struct stack_snapshot_frame64 { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)setUser64LRs:(unsigned long long*)arg1;
- (void)setUserBinaryLoadInfos:(id)arg1;
- (id)sharedCache;
- (struct stack_snapshot_frame32 { unsigned int x1; unsigned int x2; }*)user32Frames;
- (unsigned int*)user32LRs;
- (struct stack_snapshot_frame64 { unsigned long long x1; unsigned long long x2; }*)user64Frames;
- (unsigned long long*)user64LRs;
- (id)userBinaryLoadInfos;

@end