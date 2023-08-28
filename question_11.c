/*
C Program For Calculate Simple Interest
    formula:-
    Simple Interest = ( Principal Amount * intrest of Interest * Time ) / 100;
*/
#include <stdio.h>

int main(){

    float si, amount, interest, time;

    printf("Enter Principal Amount: ");
    scanf("%f", &amount);
    
    printf("Enter Rate of Interest: ");
    scanf("%f", &interest);

    printf("Enter Time: ");
    scanf("%f", &time);

    si = (amount * interest * time) / 100;

    printf("Simple interest: %f", si);
    
    return 0;
}