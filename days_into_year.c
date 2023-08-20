// 18. Write a C program to convert specified days into years, weeks and days.

#include <stdio.h>

int main(){
    int days, years, weeks;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    weeks = (days % 365) / 7;
    days = (days % 365) % 7;

    printf("Years = %d Weeks = %d Days = %d", years, weeks, days);
    
    return 0;
}