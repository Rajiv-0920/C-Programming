// 18. Write a program to accept a number from user and print if it is even or odd in C language

// Even number is divisible by 2 and generates a remainder of 0

#include <stdio.h>

int main(){

    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Even Number..!");
    } else{
        printf("Odd Number..!");
    }
    
    return 0;
}