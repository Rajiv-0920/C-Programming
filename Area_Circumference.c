// C Program to Find Area And Circumference of Circle
//  Area of the Circle is π * r * r
//  Circumference of the Circle are 2 * π * r.

#include <stdio.h>
#define PI 3.14153

int main(){

    float area, circum, radius;

    printf("\nEnter Radius: ");
    scanf("%f", &radius);

    area = radius * radius * PI;
    circum = 2 * PI * radius;

    printf("Area of the circle: %f \n", area);
    printf("Circumference of the circle: %f \n", circum);

    return 0;
}