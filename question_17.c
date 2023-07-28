// 17. Write a program to accept a number and print if the number is Positive/Negative in C language

#include <stdio.h>

int main(){

    int n;

    printf("Enter n Number: ");
    scanf("%d", &n);

    if(n > 0){
        printf("Number is 'POSITIVE'");
    } else if (n < 0){
        printf("Number is 'NEGATIVE'");
    } else{
        printf("Number is 'ZERO'");
    }
    
    return 0;
}