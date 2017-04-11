//
//  getLine.c
//  pointers
//
//  Created by ayako_sayama on 2017-04-11.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include "getLine.h"
int getLine(char line[], int max){
    
    int nch = 0;
    int a;
    
    max = max - 1;
    /* leave room for '\0' */
    
    while((a = getchar()) != EOF)
    {
        if(a == '\n')
            break;
        
        if(nch < max)
        {
            line[nch] = a;
            nch++;
        }
    }
    
    if(a == EOF && nch == 0)
        return EOF;
    
    //if it is the end of line and there is NO input, return EOF
    
    line[nch] = '\0';
    return nch;
    
}
