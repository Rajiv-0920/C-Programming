// Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.

#include <stdio.h>

int main(){
    float weight1, weight2, itemNum1, itemNum2, average;

    printf("Weight - Item1: ");
    scanf("%f", &weight1);

    printf("No. of Item1: ");
    scanf("%f", &itemNum1);

    printf("Weight - Item2: ");
    scanf("%f", &weight2);
    
    printf("No. of Item1: ");
    scanf("%f", &itemNum2);

    average = (weight1 * itemNum1 + weight2 * itemNum2) / (itemNum1 + itemNum2);

    printf("Average value of the item = %f", average);
    
    return 0;
}