// Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.

#include <stdio.h>

int main(){
    int amount, hundred, fifty, twenty, ten, five, two, one;

    printf("Enter amount: ");
    scanf("%d", &amount);

    hundred = amount / 100;
    fifty = (amount % 100) / 50;
    twenty = ((amount % 100) % 50) / 20;
    amount = ((amount % 100) % 50) % 20;
    ten = amount / 10;
    amount = amount % 10;
    five = amount / 5;
    amount = amount % 5;
    two = amount / 2;
    amount = amount % 2;
    one = amount;

    printf("\n%d Note(s) of 100.00", hundred);
    printf("\n%d Note(s) of 50.00", fifty);
    printf("\n%d Note(s) of 20.00", twenty);
    printf("\n%d Note(s) of 10.00", ten);
    printf("\n%d Note(s) of 5.00", five);
    printf("\n%d Note(s) of 2.00", two);
    printf("\n%d Note(s) of 1.00", one);

    return 0;
}