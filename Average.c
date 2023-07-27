// Write a program to accept roll no and marks of 3 subjects of a student, Calculate total of 3 subjects and average in C language
    
#include <stdio.h>

int main(){

    int roll, sanskrit, hindi, math, average, total;

    printf("Enter Roll No: ");
    scanf("%d", &roll);

    printf("Enter Sanskrit marks: ");
    scanf("%d", &sanskrit);

    printf("Enter Hindi marks: ");
    scanf("%d", &hindi);

    printf("Enter Math marks: ");
    scanf("%d", &math);

    total = (sanskrit + hindi + math);
    average =  total / 3;

    printf("\n\nStudent Roll No: %d", roll);
    printf("\n\nTotal marks: %d", total);
    printf("\n\nAverage marks: %d", average);

    return 0;
}