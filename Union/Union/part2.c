//
//  part2.c
//  Union
//
//  Created by ayako_sayama on 2017-05-03.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include "part2.h"

//Part2:

union{
    int i;
    double d;
} Number;



struct{
    int i;
    double d;
} Number2;


void part2(void){
    
    //Part 2:
    
    Number.i = 7;
    Number.d = 10.00;
    printf("%d\n",Number.i);
    printf("%lf\n",Number.d);

    

    Number2.i = 7;
    Number2.d = 10.00;
    printf("%d\n",Number2.i);
    printf("%lf\n",Number2.d);

    
}
