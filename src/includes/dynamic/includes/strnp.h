#ifndef __STRNP__
#define __STRNP__
#include <string.h>


typedef struct Strnp Strnp;

// create a new or from a string
extern  Strnp* const strnp_new();
extern  Strnp* const strnp_from();

extern unsigned int strnp_capacity(Strnp* str);

extern const char* const strnp_data(Strnp* str);

void destroy_strnp(Strnp *str);

#endif