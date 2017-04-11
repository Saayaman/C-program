
#include <stdio.h>

#include "exercise1.h"
#define MAX_NUM 10

void exerciseOne(void){
    
    int count = 0;
    int num;
    for (num = 0; num <= MAX_NUM; num = num+1) {
        if (num > 3) {
            count++;
        }
    }
    
    printf("there are %d numbers greater than 3.\n", count);
}


//what is the average number of square root numbers from 1 to 100?

void exerciseTwo(void){
    
    int x;
    int value = 0;
    int countTwo = 0;
    int answer;
    
    
    for (x = 1; (x*x) <= 100; x++) {
        int square = (x*x);
        value = value + square;
        countTwo++;
    }
    
    printf("%d\n", value);
    printf("%d\n", countTwo);
    
    answer = value / countTwo;
    printf("The average number of square numbers from 1 to 100 is %d.\n", answer);
    
}



