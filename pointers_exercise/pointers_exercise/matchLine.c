//
//  matchLine.c
//  pointers_exercise
//
//  Created by ayako_sayama on 2017-04-11.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include "matchLine.h"
#include "getLine.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void testPointerFunction(void){
    char line[100];
    int (*functionPtr)(char[],int) = getLine;
    printf("%d\n", getLine(line, 100));
    printf("%d\n", functionPtr(line, 100));
    //these two lines do the same thing

}


//this is the same as below! Without pointer version

//void matchLine(void){
//
//char likes[][20] = {
//    "music is my life",
//    "food is fulfilling",
//    "running is tiring",
//    "skiing is wow"
//};
//
//char input[10];
//
//printf("Enter your hobby: \n");
//scanf("%9s", input);
//
//int i;
//int count =0;
//
//for(i = 0; i < 4; i++) {
//    if(strstr(likes[i], input)){
//        printf("%s\n", likes[i]);
//        count++;
//    }
//}
//
//if (count == 0) {
//    printf("There were no matches.\n");
//}
//   
//    
//}
//

void matchLine(void){
    
    char * likes[] = {
        "music is my life",
        "food is fulfilling",
        "running is tiring",
        "skiing is wow"
    };
    
    char input[10];
    
    char *p;
    p = *likes;
    
    
    printf("Enter your hobby: \n");
    scanf("%9s", input);
    
    int i;
    int count =0;
    
    //just for checking position
    for ( i = 0; i <= 4; i++ ) {
        
        if(strstr(p, input)){
            printf("%s\n", p);
            count++;
        }
        p = likes[i];
    }

    if (count == 0) {
        printf("There were no matches.\n");
    }
    
}
