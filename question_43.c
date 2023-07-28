// Write a Program to print first n even numbers in C language

#include <stdio.h>

int main(){

    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    i = 2;

    while(i <= n){
        if(i % 2 == 0){
            printf("Even No: %d \n", i);
        }
        i++;
    }
    
    return 0;
}