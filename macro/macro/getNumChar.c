//
//  getNumChar.c
//  macro
//
//  Created by ayako_sayama on 2017-04-10.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include "getNumChar.h"
#define LEN 100



int countchars(char string[], char character){
    
    int count = 0;
    for (int i = 0; i < LEN; i++) {
        if (string[i] == character) {
            count++;
        }
    }
    
    return count;
}
