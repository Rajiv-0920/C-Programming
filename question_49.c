// 49. Write a program to print digits, alphabets in capital and lower case in C language

#include <stdio.h>

int main(){

    printf("\n\nDigits\n\n");
    for(int i = 48; i <= 57;i++){
        printf("%c  ", i);
    }

    printf("\n\nUppercase Alphabets\n\n");
    for(int i = 65; i <= 90;i++){
        printf("%c  ", i);
    }

    printf("\n\nLowercase Alphabets\n\n");
    for(int i = 97; i <= 122;i++){
        printf("%c  ", i);
    }
    
    return 0;
}