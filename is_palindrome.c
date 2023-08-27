//  WAP to check whether a 3 digit number is a magic number or not. (Palindrome) A number is a magic number if its reverse is same as the original number.

#include <stdio.h>

int main(){
    int num, palindrome = 0, originalNum;

    printf("Enter a 3 digit number:");
    scanf("%d", &num);

    originalNum = num;

    palindrome = palindrome * 10 + num % 10;
    num = num / 10;
    palindrome = palindrome * 10 + num % 10;
    palindrome = palindrome * 10 + num / 10;
    
    if(palindrome == originalNum)
        printf("Palindrome number:");
     else 
        printf("Not a Palindrome number:");

    return 0;
}