// Write a Program to Check Whether a Number is Palindrome or Not or Palindrome Program in C Using While Loop.

#include <stdio.h>

int main(){

    int num, temp, rem, rev;

    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0){
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if(rev == num){
        printf("Palindrome Number: ");
    } else {
        printf("Not an Palindrome Number: ");
    }
    return 0;
}