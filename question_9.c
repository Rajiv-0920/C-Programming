// ## 9. Write a program to print area of a triangle
// **Triangle =** 0.5 \* Base \* Height

#include <stdio.h>

int main(){

    float area, base, height;

    printf("Enter BASE and HEIGHT: ");
    scanf("%f %f", &base, &height);

    area = 0.5 * base * height;

    printf("Area of Triangle : %f", area);
    
    return 0;
}