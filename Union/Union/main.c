//
//  main.c
//  Union
//
//  Created by ayako_sayama on 2017-04-13.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "part1.h"
#include "part2.h"
#include "part3.h"
#include "part4.h"
#include "part5.h"
#include "part6.h"



int main(int argc, const char * argv[]) {
    
    printf("part1:unions \n");
    part1();
    printf("part2:union and struct \n");
    part2();
    printf("part3:enum \n");
    part3();
    printf("part4:typdef union and struct \n");
    part4();
    printf("part5:pointer of struct \n");
    part5();
    printf("part6:pointer of pointer \n");
    part6();


    return 0;
}
