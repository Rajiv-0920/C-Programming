// Write a program to display last digit of a number. Number is entered through keyboard.

#include <stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = num % 10;

    printf("Last digit = %d", num);
    
    return 0;
}