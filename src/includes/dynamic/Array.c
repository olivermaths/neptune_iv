#include "core/NpVec.h"
#include "includes/arrays.h"
#include <stdio.h>

typedef struct Array_u8 {
    Vec(u8_np);
} Array_u8;


void *createArray(unsigned long size){
    RawVec *x = AllocVec(size);
    return x;
};

void push_array_u8(Array_u8* str, u8_np key){    
    ReallocBuffer((RawVec*)str, 1);
    str->buffer[str->size++]=key;
}

