/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCERegionAllocator : NSObject {
    unsigned int  _blockOffset;
    struct TSCERegionNode { unsigned long long x1; struct TSCERegionNode {} *x2; void *x3; } * _curBlock;
    struct TSCERegionNode { unsigned long long x1; struct TSCERegionNode {} *x2; void *x3; } * _head;
    struct vector<TSCEASTNodeArrayChunk *, std::__1::allocator<TSCEASTNodeArrayChunk *> > { 
        struct TSCEASTNodeArrayChunk {} **__begin_; 
        struct TSCEASTNodeArrayChunk {} **__end_; 
        struct __compressed_pair<TSCEASTNodeArrayChunk **, std::__1::allocator<TSCEASTNodeArrayChunk *> > { 
            struct TSCEASTNodeArrayChunk {} **__value_; 
        } __end_cap_; 
    }  _nodeArrayChunks;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void*)calloc:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithInitialCapacity:(unsigned long long)arg1;
- (void*)malloc:(unsigned long long)arg1;
- (struct TSCEASTNodeArray { char *x1; unsigned long long x2; unsigned long long x3; id x4; }*)managedNodeArrayWithCapacity:(unsigned long long)arg1;
- (void)reset;

@end