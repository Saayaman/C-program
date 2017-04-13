//
//  reverse.c
//  pointers_exercise
//
//  Created by ayako_sayama on 2017-04-12.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include "reverse.h"
#include <string.h>
#include <stdlib.h>


void reverse(void){
    
char * frog = "froghouse";
int length = (int)strlen(frog);
char * frog2 = frog+length;

//    char frog3[100];
//    int i = 0;
//
for (int l = length; l >= 0; l--) {
    printf("%c\n", *frog2);
    frog2++;
    
}
printf("%s\n",frog2);
    
    
}


