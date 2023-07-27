// ## 9. Write a program to print area of a triangle
// **Triangle =** 0.5 \* Base \* Height

#include <stdio.h>

int main(){

    int area, base, height;

    printf("Enter Base: ");
    scanf("%d",&base);

    printf("Enter Height: ");
    scanf("%d", &height);

    area = 0.5 * base * height;

    printf("Area of Triangle : %d", area);
    
    return 0;
}