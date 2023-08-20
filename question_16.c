// Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.

#include <stdio.h>

int main(){
    int length, width, area, perimeter;

    printf("Enter length and width of the rectangle respectively: ");
    scanf("%d %d", &length, &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area of a rectangle = %d square inches \nPerimeter of a rectangle = %d inches", area, perimeter);

    return 0;
}