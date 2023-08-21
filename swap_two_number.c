// Program to swap two number without using third variable.

#include <stdio.h>

int main(){
    int a, b, temp;

    printf("Enter two number a and b:");
    scanf("%d %d", &a, &b);

    // swap two number using third variable.
    // temp = a;
    // a = b;
    // b = temp;

    // Swap two number without using third variable.
    // a = a + b;
    // b = a - b;
    // a = a - b;

    // Swap two number within single line.
    b = a + b - (a = b);

    printf("a = %d and b = %d", a, b);
    
    return 0;
}