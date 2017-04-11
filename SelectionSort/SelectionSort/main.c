//
//  main.c
//  SelectionSort
//
//  Created by ayako_sayama on 2017-04-11.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include <stdio.h>
#define SIZE 10


int main(int argc, const char * argv[]) {
    
        //Selection Sort
    
        int array[] = {1,50,8,9,3,5,19,20,4,6};
        int min, c, d;
    
        for(c = 0; c < SIZE - 1; c++){
            min = c;
    
            for (d = c+1; d < SIZE ; d++) {
                if (array[min] > array[d]) {
                    min = d;
                }
    
            }
            int temp = array[c];
            array[c] = array[min];
            array[min] = temp;
    
    
         }
    
    
        for ( c = 0 ; c < SIZE ; c++ ){
            printf("%d", array[c]);
            printf(", ");
        }
    
    // getting the size
        
//        int a[] = {1, 2};
//        printf("%lu\n", sizeof(a) / sizeof(a[0]));
        return 0;
    
}
