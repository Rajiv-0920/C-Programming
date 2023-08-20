// Write a C program to convert a given integer (in millimeters) to kilometers, meters and centimeters.

#include <stdio.h>

int main(){
    float millimeters, kilometers, meters, centimeters;

    printf("Enter millimeters:");
    scanf("%f", &millimeters);

    centimeters = millimeters / 10;
    meters = centimeters / 100;
    kilometers = meters / 1000;

    printf("Kilometers = %f Meters = %f Centimeters = %f", kilometers, meters, centimeters);
    
    return 0;
}