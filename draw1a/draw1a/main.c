//
//  main.c
//  draw1a
//
//  Created by ayako_sayama on 2017-04-17.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(int argc, const char * argv[]) {
    


    //0. Get file and fopen.
    FILE *fp;
    char fileAddress[] = "/Users/ayako_sayama/Desktop/Github/C-program/draw1a/draw1a/inputfile.txt";
    fp = fopen( fileAddress, "r" );
    
    //1. Check if file is Read.
    if( fp == NULL ){
        fprintf( stdout, "There is no file. You fail! \n");
        return -1;
    } else {
        fprintf( stdout, "File has been read! Yahhooo! \n");
    }
    
    //2. Write the two lines
    //./draw1a started on Wed Jul 2 21:08:40 MST 2010
    //Input file: ./inputfile.1
    
    fprintf(stdout, "");
    time_t timer;
    char buffer[30];
    struct tm* tm_info;
    char inputstr[100];
    
    time(&timer);
    tm_info = localtime(&timer);
    
    printf("./draw1a started on ");
    strftime(buffer, 30, "%a %b %d %H:%M:%S %Z %Y", tm_info);
    puts(buffer);
    
    //fputs doesn't seem to work.
    fputs(buffer,fp);
    printf("Input file: ./inputfile.1\n");
    
    
    //3. read the input one line at a time, identify the keyword at the start of the line, and count how often each keyword occurs in the input file.
    
    
    //**something is w  rong here! I have to input 2 times
    printf( "Enter a texthere: \n");
    scanf("%s[^\n]", inputstr);
//    gets(inputstr);
    printf("This is the input string: %s\n", inputstr);

    
    char word[100];
    fscanf(fp, "%s",word);
    int count = 0;
    
    while(!feof(fp))
    {
        fscanf(fp,"%s%*[^\n]", word);
        
        //↓ This Print everything inside the textfile.
        //printf("%s\n",word);
        if((strcmp(word, inputstr))==0){
            count++;
        }
      
    }

    printf("There are a total of %d words for %s\n", count, inputstr);
    

//↓ This counts the num of words
    
//    char ch;
//    int w = 1;
//    ch=fgetc(fp);
//    
//    while(ch!=EOF)
//    {
//        if(ch==' '||ch=='\n')
//        {
//            w++;
//        }
//        ch=fgetc(fp);
//    }
//    printf("\nWords in a file are=%d\n",w);
//    
    

    fclose( fp );
    return 0;

}


