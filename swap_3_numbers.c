// WAP to SWAP (interchange) three numbers.

#include <stdio.h>

int main(){
    int a, b, c, temp;

    printf("Enter 3 number a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    // using four variable
    // temp = a;
    // a = b;
    // b = c;
    // c = temp;

    // Without using four variable.
    // a = a + b + c;
    // b = a - b - c;
    // c = a - b - c;
    // a = a - b - c;

    // Swap numbers within a single line.
    a = (temp = a + b + c) - (b = temp - b - c) - (c = temp - b - c);

    printf("Changed number = %d %d %d", a, b , c);

    return 0;
}