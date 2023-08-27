//  Calculate Telephone Bill:-
// calls	        Rate/call
// First 50 calls	free
// next 100 calls	Rs.3/call
// next 200 calls	Rs.5/call
// next 350 calls	Rs.7/call

#include <stdio.h>

int main(){
    int calls, rate;

    printf("Enter number of calls:");
    scanf("%d", &calls);

    if(calls <= 50)
        rate = 0;
    else if(calls > 50 && calls <= 150)
        rate = (calls - 50) * 3;
    else if(calls > 150 && calls <= 350)
        rate = 300 + (calls - 150) * 5;
    else
        rate =  1300 + (calls - 350) * 7;

    printf("Total Telephone Bill = %d", rate);
    
    return 0;
}