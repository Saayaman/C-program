//
//  part1.c
//  Union
//
//  Created by ayako_sayama on 2017-05-03.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include "part1.h"
#include <string.h>
//Part1:

union Data {
    int i;
    float f;
    char str[20];
};



void part1(void){
    
    union Data data;
    printf( "Memory size occupied by data : %lu\n", sizeof(data));
    
    //Part 1:
    
    data.i = 10;
    data.f = 220.5;
    strcpy( data.str, "C Programming");
    
    printf( "data.i : %d\n", data.i);
    printf( "data.f : %f\n", data.f);
    printf( "data.str : %s\n", data.str);

    
}

