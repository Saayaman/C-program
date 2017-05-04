
//part5: pointer of structures

#include "part5.h"

typedef struct telephone
{
    char *name;
    int number;
}TELEPHONE;


void part5(void){
    
    TELEPHONE index;
    TELEPHONE *ptr_myindex;
    
    ptr_myindex = &index;
    
    ptr_myindex->name = "Jane Doe";
    ptr_myindex->number = 12345;
    printf("Name: %s\n", ptr_myindex->name);
    printf("Telephone number: %d\n", ptr_myindex->number);
    
    
}
