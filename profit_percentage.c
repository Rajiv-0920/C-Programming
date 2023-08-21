// 27. Write a program to print profit and profit percentage. Selling price and cost price is given by user.

#include <stdio.h>

int main(){
    int profit, profitPercentage, sellingPrice, costPrice;

    printf("Enter Selling price and Cost price respectively: ");
    scanf("%d %d", &sellingPrice, &costPrice);

    profit = sellingPrice - costPrice;
    profitPercentage = (profit * 100) / costPrice;

    printf("Total Profit = %d and Profit percentage = %d", profit, profitPercentage);
    
    return 0;
}