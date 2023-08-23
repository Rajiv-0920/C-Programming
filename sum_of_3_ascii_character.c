// Write a C program to accept 3 characters and print the sum of their ascii.

#include <stdio.h>

int main(){
    char a, b, c;
    int sum;

    printf("Enter 3 character: ");
    scanf("%c %c %c", &a, &b, &c);
    
    sum = (int)a + (int)b + (int)c;

    printf("Sum of the 3 character = %d", sum);

    return 0;
}