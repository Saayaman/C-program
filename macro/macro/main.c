//
//  main.c
//  macro
//
//  Created by ayako_sayama on 2017-04-10.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "getLine.h"
#include "getNumChar.h"
#include "replaceLetters.h"
#define LEN 100


int main(int argc, const char * argv[]) {

    //Exercise1: done at exercise 5
    
    
    //Exercise2:
//    getCharacter();
    

    //Exercise3:
    
//    char str[LEN];
//    char ch = 'd'; // or 68 for ascii
//    getLine(str, LEN);
//    printf("%c appears in %s %d times\n", ch, str, countchars(str, ch));
    
    
    //Exercise4:
    
    //example1: for some reason strcopy does not work
//    char src[50], dest[50];
//    
//    strcpy(src,  "This is source");
//    strcpy(dest, "This is destination. ");
//    
//    printf("%s\n",strcat(dest, src));
//    
//    strcat(dest, src);
//    printf("Final destination string : |%s|", dest);
    
    
    //example2: in this case you don't need strcopy to input in destination
//    char str1[100] = "This is ", str2[100] = "programiz.com";
//    
//    //concatenates str1 and str2 and resultant string is stored in str1.
//    strcat(str1,str2);
//    
//    puts(str1);
//    printf(" ");
//    puts(str2);

    //Exsercies5:
    
    char string[] = "I love you";
    replace(string, "love", "hate");
    
    return 0;
}






