//
//  part4.c
//  Union
//
//  Created by ayako_sayama on 2017-05-03.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include "part4.h"
//Part4: How to access typedef union and struct

//in this case, memory is 4 byes for int kind, and 4 bytes for union.
typedef struct {
    int kind;
    union{
        int k;
        double j;
        
    } Number4;
} Number3;


typedef struct telephone
{
    char *name;
    int number;
}TELEPHONE;


void part4(void){
    
    
    Number3 number3;
    number3.kind = 10;
    
    //access inside union!!
    number3.Number4.k = 10;
    number3.Number4.j = 20.00000;
    
    printf( "Memory size of struct : %lu\n", sizeof(number3));
    printf( "Memory size of kind : %lu\n", sizeof(number3.kind));
    printf( "Memory size of k : %lu\n", sizeof(number3.Number4.k));
    printf( "Memory size of j : %lu\n", sizeof(number3.Number4.j));

    
    
    TELEPHONE index;
    
    index.name = "Jane Doe";
    index.number = 12345;
    printf("Name: %s\n", index.name);
    printf("Telephone number: %d\n", index.number);

    

    
    
}
