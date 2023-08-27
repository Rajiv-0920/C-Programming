// Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.

#include <stdio.h>

int main(){
    int length, breadth, area, perimeter;

    printf("Enter the length and breadth of a rectangle:");
    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if(area > perimeter)
        printf("Area is greater than it's perimeter.");
    else
        printf("Area is not greater than it's perimeter.");
    
    return 0;
}