// Write a program to accept a number from user and print it’s square & cube in C language
#include <stdio.h>

int main(){

    int num, cube, square;

    printf("Enter a number: ");
    scanf("%d", &num);

    cube = num * num * num;
    square = num * num;

    printf("Square: %d cube: %d \n", square, cube);

    return 0;
}