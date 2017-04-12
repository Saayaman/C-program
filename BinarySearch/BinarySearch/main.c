

#include <stdio.h>
#include <string.h>
int binary_search(int data[], int key);


int main(int argc, const char * argv[]) {
    int key = 70;
    int data[] = {10,20,30,40,50,60,70,80};
    binary_search(data, key);
    return 0;
}


int binary_search(int data[], int key){
    
    int low = 0;

    int high = sizeof(data) - 1;
    printf("The size of data is %d\n", high);
    //sizeof will give back the integers in binary size,
    // in this case the sizeof(data) is 8*4 = 32, size of data[0] is 4 so the high = 8
    
    int count = 0;
    
    while (high >= low) {
        int middle = (low + high) / 2;
        printf("The middle is %d\n", middle);
        count++;
        if(data[middle] == key){
            printf("The count is %d\n", count);
            return middle;
        }
        if (data[middle] < key) {
            low = middle + 1;
        }
        if (data[middle] > key) {
            high = middle - 1;
        }
    }
    return -1;
}

