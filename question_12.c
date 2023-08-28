/*

WAP. to Calculate Gross Salary of an Employee whose dearness allowance is 40% of basic salary and house rent allowance is 20% of basic salary.

Formula:-
    Gross Salary = Basic_Salary + HRA + Other_Allowance.
*/
#include <stdio.h>

int main(){

    int gs, bs, da, hra;

    printf("Enter Basic salary: ");
    scanf("%d", &bs);

    da = bs *  40 / 100;
    hra = bs * 20 / 100;
    gs = bs + da + hra;

    printf("Gross Salary: %d \n", gs);

    return 0;
}