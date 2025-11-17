/*------------------------------------------------------
* Filename: print_chars.c
* Description: Print matrix of chars.
* Author: Gershon Levy
-------------------------------------------------------*/

#include<stdio.h>
#define FIRST_DIVISOR (5)
#define SECOND_DIVISOR (3)
#define THIRD_DIVISOR (2)

int main(){
    
    char char_to_print='@';
    int num;
    int i,j;

    scanf("%d",&num);

    //do lowest priority first so we could overwrite it if we need
    if(num%FIRST_DIVISOR==0){
        char_to_print='%';
    }

    if(num%SECOND_DIVISOR==0){
        char_to_print='^';
    }

    if(num%THIRD_DIVISOR==0){
        char_to_print='*';
    }

    //for inside of for to print square
    for(i=0;i<num;++i){
        for(j=0;j<num;++j){
            printf("%c",char_to_print);
        }
        printf("\n"); //to get new line in square
    }

    return 0;
}