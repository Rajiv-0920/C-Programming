// If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater than the largest of the three sides.

#include <stdio.h>

int main(){
    int a, b, c, sum;

    printf("Enter 3 side of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a)
        printf("Valid Triangle.");
    else 
        printf("Invalid Triangle.");
    
    return 0;
}