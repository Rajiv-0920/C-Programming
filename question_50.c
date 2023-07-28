//  Write a program to print out ASCII chart on a single screen (all 256 characters from 0 to 255) in a tabular form. The ASCII code should be followed by the corresponding character in C language

#include <stdio.h>

int main(){

    printf("\n\nASCII Chart\n\n");
    for(int i = 1; i < 255; i++){
        printf("%d %c\n",i, i);
    }
    
    return 0;
}