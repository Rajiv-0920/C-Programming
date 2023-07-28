// 37. Count the Number of Digits of an Integer Using the While Loop

#include <stdio.h>

int main(){

    int n, i = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    
    while(temp > 0){
        i++;
        temp /= 10;
    }

    printf("Total digit in %d is : %d", n, i);

    return 0;
}