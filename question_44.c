// Write a Program to print first n odd numbers in C language

#include <stdio.h>

int main(){

    int n, i = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    while(i <= n){
        if(i % 2 != 0){
            printf("Odd no: %d \n", i);
        }
        i++;
    }
    return 0;
}