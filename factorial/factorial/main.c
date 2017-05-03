
#include <stdio.h>
int sumDigits(int num);
int factorial(int number);

int main(int argc, const char * argv[]) {
    
    //1. Calculate Factorial
    int number = 5;
    
    int answer = factorial(number);
    //2.Calculate Sum of digits
    //printf("%d\n", sumDigits(12));
    printf("The factorial of %d is %d!\n",number,answer);

    return 0;
}


int factorial(int number){

    //int fact = 1;
    //1. factorial for loop
//    for (int i = 1; i <= number; i++) {
//        fact = fact*i;
//    }
//    
    //2. recursion
    if (number >= 1) {
        return number*factorial(number-1);
    } else{
        return 1;
    }
    
}



//this will add all numbers together: if num = 12, answer is 3
int sumDigits(int num){
    if (num < 10) {
        return num;
    }

    return num%10 + sumDigits(num / 10);
}
