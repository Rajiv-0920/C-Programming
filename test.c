#include <stdio.h>

int main(){
    int calls, totalBill;

    printf("\nEnter numbers of call:");
    scanf("%d", &calls);

    if(calls <= 50)
        totalBill = 0;
    else if(calls > 50 && calls < 150)
        totalBill = (calls - 50) * 3;
    else if(calls > 150 && calls < 350)
        totalBill = 300 + (calls - 150) * 5;
    else 
        totalBill = 1300 + (calls - 350) * 7;

    printf("\nTotal Telephone Bill = %d", totalBill);
    
    return 0;
}