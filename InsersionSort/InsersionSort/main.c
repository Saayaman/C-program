//
//  main.c
//  InsersionSort
//
//  Created by ayako_sayama on 2017-04-11.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[] = {8,1,9,2,7,6,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", n);
    printf("%lu\n", sizeof(arr));
    printf("%lu\n", sizeof(arr[0]));
    
    
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i-1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j-1;
            printf("J's Position is: %d\n", j);
            
        }
        arr[j+1] = key;
        
    }
    
    
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    

    return 0;
}
