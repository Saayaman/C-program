
#include <stdio.h>
int sumDigits(int num);
#define answer 0


//this will add all numbers together: if num = 12, answer is 3
int main(int argc, const char * argv[]) {
    
    printf("%d\n", sumDigits(12));
   
    return 0;
}


int sumDigits(int num){
    
    if (num < 10) {
        return num;
    }
    
    return num%10 + sumDigits(num / 10);
}
