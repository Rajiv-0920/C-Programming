// Write a C program input a number to compute the perimeter and area of a rectangle.

#include <stdio.h>

int main(){
    int height, width, area, perimeter;

    printf("Enter height and width of the rectangle respectively: ");
    scanf("%d %d", &height, &width);

    area = height * width;
    perimeter = 2 * (height + width);

    printf("Area of a rectangle = %d square inches \nPerimeter of a rectangle = %d inches", area, perimeter);

    return 0;
}