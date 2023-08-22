// Input a 5 digit number and calculate the sum of last and first digit number.

#include <stdio.h>

int main(){
    int num, sum = 0;

    printf("Enter a 5 digit number: ");
    scanf("%d", &num);

    sum = sum + (num % 10) + (num / 10000);

    printf("Sum = %d", sum); 
    
    return 0;
}