

#include <stdio.h>
#include <string.h>

int binary_search(int count, int middle,int low, int high, int key);


int main(int argc, const char * argv[]) {
    int count = 0;
    int key = 70;
    int low = 0;
    int high = 7;
    //    int high = sizeof(data) - 1;
    int middle = (low + high) / 2;
    binary_search(count,middle, low, high, key);
    return 0;
}


int binary_search(int count, int middle, int low, int high, int key){
    
    int data[] = {10,20,30,40,50,60,70,80};
//
//    
//    printf("The size of data is %d\n", high);
//
//    
//    while (high >= low) {
//        int middle = (low + high) / 2;
//        printf("The middle is %d\n", middle);
//        count++;
//        if(data[middle] == key){
//            printf("The count is %d\n", count);
//            return middle;
//        }
//        if (data[middle] < key) {
//            low = middle + 1;
//        }
//        if (data[middle] > key) {
//            high = middle - 1;
//        }
//    }
//    
    
    //recursion
    printf("The count is %d\n",count++);
    if (key == data[middle]) {
        printf("Fonund the KEY! %d\n",key);
        return middle;
    } else if (key < data[middle]){
        return binary_search(count,middle-1, low, high, key);
        
    } else {
        return binary_search(count,middle+1,low,high,key);
    }
    
    return -1;
}

