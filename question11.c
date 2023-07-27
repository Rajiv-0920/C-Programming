/*
C Program For Calculate Simple Interest
    formula:-
    Simple Interest = ( Principal Amount * intrest of Interest * Time ) / 100;
*/
#include <stdio.h>

int main(){

    int si, amount, intrest, time;

    printf("Enter Principal Amount: ");
    scanf("%d", &amount);
    
    printf("Enter Rate of Intrest: ");
    scanf("%d", &intrest);

    printf("Enter Time: ");
    scanf("%d", &time);

    si = (amount * intrest * time) / 100;

    printf("Simple intrest: %d", si);
    
    return 0;
}