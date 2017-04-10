//
//  replaceLetters.c
//  macro
//
//  Created by ayako_sayama on 2017-04-10.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include "replaceLetters.h"
#include <string.h>

int replace(char string[], char from[], char to[]){
    
    printf("%s\n",string);
    
    size_t stringSize = strlen(string);
    size_t replaceSize = strlen(from);
    int count = 0;
    
    printf("size of word: %lu, size of replacing letters: %lu\n", stringSize, replaceSize);
    
    int jk;
    for (jk = 0; jk < stringSize; jk++) {
        
        if(string[jk] == from[count]){
            
            char replaceWord = to[count];
            string[jk] = replaceWord;
            count++;
        }
        
    }
    printf("%s\n",string);
    
    return 0;
}
