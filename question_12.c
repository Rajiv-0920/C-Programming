/*
Write a program to accept a name and basic salary of an employee calculate and display the gross salary Program in C.

Formula:-
    Gross Salary = Basic_Salary + HRA + Other_Allowance.
*/
#include <stdio.h>

int main(){

    char name[20];
    int grossSalary, basicSalary, da, hra;

    printf("Enter Employee Name: ");
    scanf(" %s", &name);

    printf("Enter Basic salary: ");
    scanf(" %d", &basicSalary);

    printf("Enter House Rent Allowance: ");
    scanf(" %d", &hra);

    printf("Enter Other Allowance: ");
    scanf(" %d", &da);

    grossSalary = basicSalary + da + hra;

    printf("Name: %s \n", name);
    printf("Gross Salary: %d \n", grossSalary);

    return 0;
}