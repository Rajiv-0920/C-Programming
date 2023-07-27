// Write a program to accept values of two numbers and print their addition, subtraction, multiplication, division.

#include <stdio.h>

int main(){

    int add, mul, sub, div, num1, num2;

    printf("Enter First Number: \n");
    scanf("%d", &num1);

    printf("Enter Second Number: \n");
    scanf("%d", &num2);

    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("Addition: %d \n", add);
    printf("Subtraction: %d \n", sub);
    printf("Multiplicatin: %d \n", mul);
    printf("Division: %d \n", div);

    return 0;
}