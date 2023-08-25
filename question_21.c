// 21. Write a program to calculate roots of a quadratic equations in C language

#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d, x, y;

    printf("Enter a, b and c:");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if(d < 0){
        printf("\nBoth roots are imaginary..");
    } else if(d > 0){
        printf("Roots are real and distinct..\n");
        x = (-b + sqrt(d)) / (2 * a);
        y = (-b - sqrt(d)) / (2 * a);
        printf("Roots are %f %f\n",x, y);
    } else {
        printf("Both Roots are equal..\n");
        x = -b / (2 * a);
    }
    
    return 0;
}