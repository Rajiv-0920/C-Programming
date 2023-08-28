#include <stdio.h>

int main(){

    float area, circum, radius, pi = 3.141;

    printf("\nEnter Radius: ");
    scanf("%f", &radius);

    area = radius * radius * pi;
    circum = 2 * pi * radius;

    printf("Area of the circle: %f \n", area);
    printf("Circumference of the circle: %f \n", circum);

    return 0;
}