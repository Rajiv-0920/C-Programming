// 22. Write a program to accept roll number ,and marks for three subjects, print total marks and average, also print grade by considering following conditions

// Avg>=60 Grade A

// Avg<60, Avg>=50 Grade B

// Avg<50, Avg>=40 Grade C Grade F.

#include <stdio.h>

int main(){

    int roll, sanskrit, hindi, math, total, average;

    printf("Enter Marks of Sanskrit, Hindi, Math: ");
    scanf("%d %d %d", &sanskrit, &hindi, &math);

    total = sanskrit + hindi + math;
    average = total / 3;

    printf("\nTotal Marks: %d", total);
    printf("\nAverage: %d", average);

    if(average >= 60){
        printf("\nGrade 'A'");
    } else if(average < 60 && average >= 50){
        printf("\nGrade 'B'");
    } else if(average < 50 && average >= 40){
        printf("\nGrade 'C'");
    }else {
        printf("\nGrade 'F'");
    }
    
    return 0;
}

