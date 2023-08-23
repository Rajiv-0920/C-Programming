// WAP to calculate the remainder of 2 numbers without using % operator.

#include <stdio.h>

int main(){
    int divisor, dividend, remainder, quotient;

    printf("Enter 2 dividend and divisor: ");
    scanf("%d %d", &dividend, &divisor);

    remainder = dividend - divisor * (dividend / divisor);

    printf("\nRemainder = %d", remainder);
    
    return 0;
}