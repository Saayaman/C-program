//
//  malloc.c
//  pointers_exercise
//
//  Created by ayako_sayama on 2017-04-12.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include "malloc.h"
#include <string.h>
#include <stdlib.h>

void mallocPrac(void){
    
    
    /* Initial memory allocation */
    char *str;
    
    str = (char *) malloc(15);
    strcpy(str, "This is ");
    printf("String = %s\n", str);
    
    /* Reallocating memory */
    str = (char *) realloc(str, 25);
    strcat(str, "my life.");
    printf("String = %s\n", str);
    printf("Size of str is: %d\n", (int)strlen(str));
    
    free(str);
    printf("Size of str is: %d\n", (int)strlen(str));
    
    
}
