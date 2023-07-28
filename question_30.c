// Write a c program to check whether a given number is an Armstrong number or not.

#include <stdio.h>

int main(){

    int num, temp, sum = 0, rem;

    printf("Enter a Number:");
    scanf("%d", &num);

    temp = num;

    while(temp > 0){
        rem = temp % 10;
        sum += (rem * rem * rem);
        temp = temp / 10;
    }

    if(sum == num){
        printf("Given number %d is an Armstrong number: %d \n", num, sum);
    } else{
        printf("Given number %d is not an Armstrong number: %d \n", num, sum);
    }

    return 0;
}