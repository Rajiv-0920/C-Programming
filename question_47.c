// 47. Write A Program To Accept A Number From User And Print It’s Factorial In C Language

#include <stdio.h>

int main(){

    int n, i, fact = 1;

    printf("Enter Number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        fact *= i;
    }
    
    printf("Factorial %d", fact);
    
    return 0;
}