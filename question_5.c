// Write a program to accept roll no and marks of 3 subjects of a student, Calculate total of 3 subjects and average in C language
    
#include <stdio.h>

int main(){

    float sub1, sub2, sub3, average, total;

    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);

    total = (sub1 + sub2 + sub3);
    average =  total / 3;
    
    printf("\nTotal marks: %f", total);
    printf("\nAverage marks: %f", average);

    return 0;
}