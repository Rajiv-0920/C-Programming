// Write a C program that read 5 numbers and sum of all odd values between them.

#include <stdio.h>

int main(){
    int num, sum = 0;

    printf("Enter 5 number: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &num);
        if(num % 2 != 0){
            sum += num;
        }
    }
    printf("Sum of all odd number = %d", sum);
    
    return 0;
}