/*------------------------------------------------------
* Filename: print_chars.c
* Description: Print matrix of chars.
* Author: Gershon Levy
-------------------------------------------------------*/

#include<stdio.h>
#define FIVE_DIVISOR (5)
#define THREE_DIVISOR (3)
#define TWO_DIVISOR (2)
#define BAD_INPUT_ERR (1)

int main(){
    
    char char_to_print='@';
    int num=0;
    int i,j;

    int temp = fgetc(stdin);

    while (temp!='\n'){

        if(temp-'0'<0||temp-'0'>9){
            printf("Bad input\n");
            return BAD_INPUT_ERR;
        }

        num*=10;
        num+=temp-'0';
        temp = fgetc(stdin);
    }

    //do lowest priority first so we could overwrite it if we need
    if(num % TWO_DIVISOR == 0){
        char_to_print='*';
    }

    else if(num % THREE_DIVISOR == 0){
        char_to_print='^';
    }

    else if(num % FIVE_DIVISOR == 0){
        char_to_print='%';
    }


    //for inside of for to print square
    for(i=0; i < num; ++i){
        for(j=0; j < num; ++j){
            printf("%c",char_to_print);
        }
        printf("\n"); //to get new line in square
    }

    return 0;
}