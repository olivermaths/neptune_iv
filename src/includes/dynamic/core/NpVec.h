#ifndef _ARCVEC_
#define _ARCVEC_
#include <stdlib.h>
#include <stdio.h>

//
typedef unsigned char   u8_np;
typedef unsigned short  u16_np;
typedef unsigned int    u32_np;
typedef unsigned long   u64_np;

typedef signed   char   i8_np;
typedef signed   short  i16_np;
typedef signed   int    i32_np;
typedef signed   long   i64_np;

typedef          float  f32_np;
typedef          double f64_np;

#define Vec(TYPE) struct{ TYPE * buffer; unsigned int size; unsigned int capacity;}
typedef struct RawVec{
    Vec(void);
}RawVec;

extern void *np_malloc(int size);
extern void *AllocVec(unsigned long size);
extern void *DefinedAllocVec(unsigned long str_size, unsigned long buff_size, unsigned long capacity);
extern void DestroyVec(RawVec *vec);
extern void ReallocBuffer(RawVec *x, unsigned long buffer_size);




#endif