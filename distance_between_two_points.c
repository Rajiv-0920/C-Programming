// 19. Write a C programs to calculate the distance between the two points.

#include <stdio.h>
#include <math.h>

int main(){
    float x1, x2, y1, y2, distance;

    printf("Enter x1, y1, x2 and y2 respectively:");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

    printf("The distance between the two points = Square root(%f)", distance);
    
    return 0;
}