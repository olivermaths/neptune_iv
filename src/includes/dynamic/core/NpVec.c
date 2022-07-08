
#include "NpVec.h"
#include <stdlib.h>


void *np_malloc(int size){
    void* ptr = malloc(size);
    if(ptr==NULL){
        printf("Error: Coudn't realloc memory");
        exit(1);
    }
    return ptr;
}

 void *AllocVec(unsigned long size){
    RawVec *const x = np_malloc(size);
    x->buffer = NULL;
    x->capacity = 0;
    x->size = 0;
    return x;
}

 void *DefinedAllocVec(unsigned long str_size, unsigned long buff_size, unsigned long capacity){
    RawVec *const x = np_malloc(str_size);
    x->capacity = capacity;
    x->buffer = np_malloc(x->capacity * buff_size);
    x->size = 0;
    return x;
}

 void ReallocBuffer(RawVec *x, unsigned long buffer_size){
    void *ptr;
    if(x->capacity == 0){
        x->capacity = 1;
        ptr  = malloc(x->capacity * buffer_size);
    }
    else {
        x->capacity *=2;
        ptr = realloc(x->buffer, x->capacity * buffer_size); 
    }
    if(ptr==NULL){
        printf("Error: Coudn't realloc memory");
        exit(1);
    }
    x->buffer = ptr;
}



void DestroyVec(RawVec *vec){
    free(vec->buffer);
    vec->buffer = NULL;
    free(vec);
    vec = NULL;
}
