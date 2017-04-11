
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "getLine.h"
#include "transaction.h"

int main(int argc, const char * argv[]) {
    
    
//    Write a program to read lines and print only those containing a certain word. (For now, the word can be a constant string in the program.) The basic pattern (which I have to confess I have parroted exactly from K&R(Textbook file) Sec. 4.1) is

    
    char * paragraph = "I love the sea. \nI love music.\nI hate onions. \nI detest to go out and play in the rain.";
    char * p = paragraph;
    
    char * word = "music";
    
    while(*p != '\n')
          {
              if(strstr(paragraph, word)){
                  printf("%s\n", paragraph);
              }
            p++;
          }
    
    
    
//    Rewrite the checkbook-balancing program from assignment #4 (exercise 6) to use the getwords function (check the bottom of this page) to make it easy to take the word ``check'' or ``deposit'', and the amount, from a single line.

    
    return 0;
}
