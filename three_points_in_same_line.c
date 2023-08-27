// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

#include <stdio.h>

int main(){
    int x1, y1, x2, y2, x3, y3, m, n;

    printf("Enter points (x1, y1):");
    scanf("%d %d", &x1, &y1);

    printf("Enter points (x2, y2):");
    scanf("%d %d", &x2, &y2);

    printf("Enter points (x3, y3):");
    scanf("%d %d", &x3, &y3);

    m = (y2 - y1) / (x2 - x1);
    n = (y3 - y2) / (x3 - x2);

    if(m == n)
        printf("All the three points fall on the straight line:");
    else 
        printf("All 3 points do not lie on the same line\n");

    return 0;
}