#include "core/NpVec.h"
#include <stdio.h>
#include <string.h>

typedef struct Strnp{
    const Vec(u8_np);
}Strnp;

typedef struct Strnp_list{
    const Vec(Strnp);
}Strnp_list;


Strnp *strnp_new(){
    Strnp * x = AllocVec(sizeof(Strnp));
    return x;
}


const Strnp *strnp_from(const char* source){
    unsigned long size = strlen(source);
    Strnp *const x = DefinedAllocVec(sizeof(Strnp), 1, size);
    for (unsigned int i = 0; i < x->capacity; i++) {
        x->buffer[x->size++] = source[i];
    }
    return x;
}

void push_strnp(Strnp* str, const char key){    
    ReallocBuffer((RawVec*)str, 1);
    str->buffer[str->size++]=key;
}



Strnp_list* split_strnp(const Strnp *const src, const char key);
u8_np match_strnp(const Strnp *const src, const char* key);