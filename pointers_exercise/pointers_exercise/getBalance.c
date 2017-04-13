//
//  getBalance.c
//  pointers_exercise
//
//  Created by ayako_sayama on 2017-04-11.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include "getBalance.h"
#include "getLine.h"
#include <stdlib.h>
int another(int balance);

int transaction(int balance)
{
    char check[100];
    char amount[100];
    
    printf("check[c] or deposit?[d]: \n");
    char getcheck = getLine(check, 100);
    putchar(getcheck);
    
    printf("How much is the amount?: $\n");
    char getamount = getLine(amount, 100);
    int d = atoi(amount);
    putchar(getamount);
    
    
    if (check[0] == 'c') {
        balance = balance - d;
    } else if(check[0] == 'd'){
        balance = balance + d;
    } else{
        printf("Try Again\n");
    }
    
    another(balance);
    
    return balance;
    
}

int another(int balance){
    
    printf("The balance now(another) is $%d\n",balance);
    
    printf("Do you want another transaction? enter:  y/n\n");
    char yesno;
    yesno = getchar();
    
    if (yesno == 'y') {
        transaction(balance);
    } else if(yesno == 'n'){
        printf("Finish Transaction: \n");
    } else{
        printf("Wrong input: \n");
    }
    
    return balance;
    
}
