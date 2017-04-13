//
//  replaceLetters.c
//  pointers_exercise
//
//  Created by ayako_sayama on 2017-04-12.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include "replaceLetters.h"
#include <string.h>




int replace(char * string, char * from, char * to){
    
    printf("%s\n",string);
    
    size_t stringSize = strlen(string);
    size_t replaceSize = strlen(from);
    
    printf("size of word: %lu, size of replacing letters: %lu\n", stringSize, replaceSize);
    
    char * p = string;
//    char * toward = to;
    
    while (*p != '\0') {
        
        if(*p == *from){
            
            *p = to;
            to++;
            from++;
        }
        p++;
    }

    printf("%s\n",p);

    return 0;
}
