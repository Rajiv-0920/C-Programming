// Write a program to find the greatest of three numbers entered through the keyboard. Use conditional operators.

#include <stdio.h>

int main(){
    int num1, num2, num3, great;

    printf("Enter 3 numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);

    great = num1 > num2 ? (num1 > num3) ? num1: num3 : (num2 > num3) ? num2 : num3;

    printf("Greatest number is %d", great);
    
    return 0;
}