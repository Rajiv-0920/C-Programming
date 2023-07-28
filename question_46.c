// Write a Program to accept a number and print sum of it’s digits in C language

#include <stdio.h>

int main(){

    int no, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &no);
    
    while(no != 0){
        sum += no % 10;
        no /= 10;
    }

    printf("Sum of it's digit: %d\n", sum);

    return 0;
}