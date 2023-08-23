// 26. Write a program to calculate sum of the digits of three digit number.

#include <stdio.h>

int main(){
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum = sum + num % 10;
    num = num / 10;
    sum = sum + num % 10;
    sum = sum + num / 10;

    printf("Sum = %d", sum);
    
    return 0;
}