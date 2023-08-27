// If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.

#include <stdio.h>

int main(){
    int costPrice, sellingPrice, profit, loss;

    printf("Enter cost price and selling price: ");
    scanf("%d %d", &costPrice, &sellingPrice);

    if(costPrice > sellingPrice){
        loss = costPrice - sellingPrice;
        printf("The seller is in loss by Rs.%d", loss);
    } else if(costPrice < sellingPrice){
        profit = sellingPrice - costPrice;
        printf("The seller is made a profit of Rs.%d", profit);
    } else {
        printf("There is no profit or no loss:");
    }
    
    return 0;
}