// While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. if quantity and price per item are input through the keyboard, write a program to calculate the total expenses.

#include <stdio.h>

int main(){
    int quantity, dis = 0;
    float rate, total;
    printf("Enter quantity and price per item:");
    scanf("%d %f", &quantity, &rate);

    if(quantity >= 1000)
        dis = 10;
        
    total = (quantity * rate) - quantity * rate * dis / 100;
    
    printf("Total expenses = %f", total);
    return 0;
}