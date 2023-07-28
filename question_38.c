// C Program For Find A Generic Root Of Number Using While Loop

#include <stdio.h>

int main(){

    int number, sum = 0, rem, totalSum = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    while(number > 0){
        rem = number % 10;
        sum += rem;
        number /= 10;
    }
    
    while(sum > 0){
        rem = sum % 10;
        totalSum += rem;
        sum /= 10;
    }

    printf("A Generic root of number: %d", totalSum);
    
    return 0;
}