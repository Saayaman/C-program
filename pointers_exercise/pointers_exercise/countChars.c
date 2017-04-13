//
//  countChars.c
//  pointers_exercise
//
//  Created by ayako_sayama on 2017-04-12.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include "countChars.h"

int countchars(char string[], char character){
    int LEN = 100;
    int count = 0;
    for (int i = 0; i < LEN; i++) {
        if (string[i] == character) {
            count++;
        }
    }
    
    return count;
}




int countchars_pointer(char * string, char character){
    int count = 0;
    while(*string != '\0') {
        if (*string == character) {
            count++;
        }
        string++;
    }
    
    return count;
}


int checkNullPointer(void){

    
    //I havent put '\0' null pointer in the end, so this will always put
    // weird characters for a[10], because I haven't stated a[10]
    
    char a[10];
    a[0] = 'a';
    a[1] = 'b';
    a[2] = 'c';
    a[3] = 'd';
    a[4] = 'e';
    a[5] = 'f';
    a[6] = 'g';
    a[7] = 'h';
    a[8] = 'i';
    a[9] = 'j';
    printf("%s\n", a);
    
//    char *b = a;
//    while(*b != '\0') {
//        printf("%c\n", *b);
//        b++;
//    }
    return 0;
}


