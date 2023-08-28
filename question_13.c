// 13. Calculate Percentage of 5 Subjects

#include <stdio.h>

int main(){

    float sanskrit, math, eng, hin, accounts, percentage, total;

    printf("Enter marks of 5 subjects:");
    scanf("%f %f %f %f %f", &sanskrit, &hin, &eng, &math, &accounts);

    total = sanskrit + hin + eng + math + accounts;
    percentage = total / 500 * 100;

    printf("\nTotal Marks = %f \nYour Overall Percentage: %f", total,
    percentage);

    return 0;
}