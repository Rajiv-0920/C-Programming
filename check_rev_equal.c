// A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.

#include <stdio.h>

int main(){
    int num, rev, temp;

    printf("Enter a 5 digit number: ");
    scanf("%d", &num);

    temp = num;

    rev = rev * 10 + temp % 10;
    temp = temp / 10;
    rev = rev * 10 + temp % 10;
    temp = temp / 10;    
    rev = rev * 10 + temp % 10;
    temp = temp / 10;    
    rev = rev * 10 + temp % 10;
    rev = rev * 10 + temp / 10;

    if(rev == num){
        printf("Reverse number %d is equal to original number %d.", rev, num);
    }
    else 
        printf("Reverse number %d is not equal to original number %d.", rev, num);
    
    return 0;
}