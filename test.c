#include <stdio.h>

int main(){
    int isPalindrome(int, int);
    int num, rev = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    if(isPalindrome(num, rev) == num)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}

int isPalindrome(int num, int rev){
    if(num == 0)
        return rev;
    isPalindrome(num / 10, rev * 10 + (num % 10));
}