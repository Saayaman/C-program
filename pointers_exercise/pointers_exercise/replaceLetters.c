//
//  replaceLetters.c
//  pointers_exercise
//
//  Created by ayako_sayama on 2017-04-12.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include "replaceLetters.h"
#include <string.h>

int replace(char *string, char from[], char to[]){
    
    printf("%s\n",string);
    
    size_t stringSize = strlen(string);
    size_t replaceSize = strlen(from);
    
    printf("size of word: %lu, size of replacing letters: %lu\n", stringSize, replaceSize);
    
    int jk;
    char* p1 = from;
    char* p2 = to;
    for (jk = 0; jk < stringSize; jk++) {
        if(*(string+jk) == *p1){
            
            
            *(string+jk) = *p2;
            p1++;
            p2++;
        }
        
    }
    printf("%s\n",string);
    
    return 0;
}


void replace_void(char string[], char * from, char * to){
    
    char* start;
    char* p1;
    char* p2;
    
    for(start = string; *start != '\0'; start++ ) {
        p1 = from;
        p2 = start;
        while (*p1 != '\0') {
            if (*p1 != *p2) {
                break;
            }
            p1++;
            p2++;
        
        }
        
        if(*p1 == '\0') {

        
            for(p1 = to; *p1 != '\0'; p1++) {
                
                *start++ = *p1;

                
            }
            
            printf("%s\n",string);
            return;
        }
    }
    
}
