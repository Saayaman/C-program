//
//  main.c
//  Union
//
//  Created by ayako_sayama on 2017-04-13.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include <stdio.h>
#include <string.h>
typedef char* string;
typedef struct Num num;

#define DOUBLE_TYPE 1
#define INT_TYPE 0


//Part1:

union Data {
    int i;
    float f;
    char str[20];
};


//Part2:

union{
    int i;
    double d;
} Number;


//Part3:

struct{
    int i;
    double d;
} Number2;


//Part4:
enum Suit {HEART, SPADE, DIAMOND, CLUB};

typedef union Data Data;
typedef struct {
    int kind;
    //memory is 4 bytes
    union{
        int k;
        double j;
        
    } Number4;
} Number3;


//void print_number(struct Num num){
//    if (num.kind == INT_TYPE) {
//        printf("%d\n", number4.ui.i);
//    } else {
//        printf("%lf\n", number4.u.d);
//    }
//}



//struct Number {int i; double d;};
//this is the same thing



int main(int argc, const char * argv[]) {
    
    Data data;
    printf( "Memory size occupied by data : %lu\n", sizeof(data));
    
    //Part 1:
    
    data.i = 10;
    data.f = 220.5;
    strcpy( data.str, "C Programming");
    
    printf( "data.i : %d\n", data.i);
    printf( "data.f : %f\n", data.f);
    printf( "data.str : %s\n", data.str);

    
    //Part 2:
    
    Number.i = 10;
    Number.d = 10.00;
    printf("%lf\n",Number.d);
    printf("%d\n",Number.i);
    
    Number2.d = 10.00;
    Number2.i = 7;
    printf("%lf\n",Number2.d);
    printf("%d\n",Number2.i);
    
//    
//    char * string = "abcd";
//    string str_1 = "abcd";
 
    enum Suit a = HEART;
    enum Suit b = SPADE;

    printf("The type of card is : %u\n", a);
    printf("The type of card is : %u\n", *b);


    return 0;
}
