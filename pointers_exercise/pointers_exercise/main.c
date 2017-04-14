
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "getLine.h"
#include "transaction.h"
#include "matchLine.h"
#include "getBalance.h"
#include "getWord.h"
#include "reverse.h"
#include "malloc.h"
#include "countChars.h"
#include "replaceLetters.h"


int main(int argc, const char * argv[]) {
    
    
    // Exercise1
    
    //testPointerFunction();
    //matchLine();


    // Exercise2:
    //getWord();
    
    
    // Exercise3:
    //reverse();
    
    //Exercise4:
    
//    checkNullPointer();
// 
//        int LEN = 100;
//        char str[LEN];
//        char ch = 'd'; // or 68 for ascii
//        getLine(str, LEN);
//        printf("%c appears in %s %d times\n", ch, str, countchars_pointer(str, ch));
//    
//        printf("%c appears in %s %d times\n", ch, str, countchars(str, ch));

    
    //Exercise5:
    //mallocPrac();
    
    
//    //Exercise6:
    
//        char * string = "I love you";
//        replace(string, "love", "hate");

    
    char *string = malloc(20 * sizeof(char));
    strcpy(string, "I love you");
    replace(string, "love", "hate");
    free(string);
    
//    string[0] = 'I';
//    string[1] = ' ';
//    string[2] = 'l';
//    string[3] = 'o';
//    string[4] = 'v';
//    string[5] = 'e';
//    string[6] = ' ';
//    string[7] = 'y';
//    string[8] = 'o';
//    string[9] = 'u';
//    string[10] = '\0';


//    char * string = "I love you";
//    replace_void(string, "love", "hate");

    
    //Exercise7:
    // i couldn't do this one
    
    return 0;
}


