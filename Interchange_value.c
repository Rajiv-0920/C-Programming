// Write a program to accept two values a & b and interchange their values in C language

#include <stdio.h>

int main(){

    int a, b, temp;

    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);
    
    temp = b;
    b = a;
    a = temp;

    printf("Swap A: %d B: %d", a, b);
    
    return 0;
}