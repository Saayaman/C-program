//
//  main.c
//  pointers
//
//  Created by ayako_sayama on 2017-04-11.
//  Copyright © 2017 pt. All rights reserved.
//

#include <stdio.h>
#include "getLine.h"

int main(int argc, const char * argv[]) {

    
    int x,y;
    int *ptr_p;
    
    x = 5;
    ptr_p = &x;
    y = *ptr_p;
    y++;
    printf("This is x: %p\n", ptr_p);
    printf("This is y: %p\n", &y);

    
    
    //This is example of pointers
    char * b = "abcd";
    char * j = b;
    //j is pointing to the char 'a' at this point

    while(*j != '\0'){
        // \0 means end letter
        
        printf("%c\n", *j);
        j++;
    }
    
    //This is the same as the above, but without pointers
    char a[] = "hello";
    int i = 0;

    while (i < 6) {
        printf("%c\n", a[i]);
        i++;
    }

    
    char gi[] = "bye";
    char * c = gi;
    //c is pointing to character  'b' at this moment
    
    //prints the memory address
    printf("%p\n", (void *) &gi);
    printf("%c\n", *c);

    //this gives the memory address of the first letter,
    //which is the same as the whole memory address right now
    printf("%p\n", (void *) c);
    
    //this gives the memory address of the second letter
    printf("%p\n", (void *) ++c);
    printf("%p\n", c);
    c++;
    printf("%c\n", *c);
    
    
    
    //Constant Variable;
    
    char lion = 'j';
    char *const goat = &lion;
    printf("This is the constant string: %s\n", goat);
    
//    char mouse[100];
    //goat = mouse;
    // this will give error because goat is alraedy defined
    

    //Pointers of Pointers
    
    char **ptr = NULL;
    char *p = NULL;
    char kid  = 'd';
    
    p = &kid;
    ptr = &p;
    
    printf("\n c = [%c]\n", kid);
    printf("\n *p = [%c]\n",*p);
    printf("\n  **ptr= [%c]\n",**ptr);
    return 0;
}
