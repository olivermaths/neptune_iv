#ifndef __STRARRAYS__
#define __STRARRAYS__
#include <stdlib.h>

extern void *createArray(unsigned long size);
typedef struct Array_u8 Array_u8;

#define createArray_u8() (Array_u8*)createArray(sizeof(Array_u8));



extern void push_array_u8(Array_u8* str, unsigned char key);
#endif