
#include "getWord.h"
#include <string.h>

char getWord(void)

{
//    char c;
//    char * string;
//
    
    int flag = 0;

    char * options[] = {
        "deposit","check"
    };
    
    char input[10];
    
    char *p;
    p = *options;
    
    printf("Deposit or Check?: \n");
    scanf("%9s", input);
    
    for(int i = 0; i <= 2; i++) {
        if(strcasestr(p, input)){
            printf("You chose: %s\n", p);
            if (i == 1) {
                flag = 1;
            }
        }
        p = options[i];
    }
    
    //flag = 0 is check, flag = 1 is deposit
    printf("Flag is: %d\n", flag);
    
    return flag;

}
