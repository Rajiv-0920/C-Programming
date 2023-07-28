// Write a Program to print numbers 1 to n using while loop in C language

#include <stdio.h>

int main(){

    int n, i = 1;

    printf("Enter n number: ");
    scanf(" %d", &n);

    while(i <= n){
        printf("%d \n", i);
        i++;
    }
    
    return 0;
}