// 26. C Program to Check Uppercase or Lowercase or Digit or Special Character

// Hint: ASCII value of the digit is between 48 to 58 and lowercase characters have ASCII values in the range of 97 to122, and uppercase is between 65 and 90.

#include <stdio.h>

int main(){

    char ch;

    printf("Enter Any Key to Check Whether the Given Character Is an Uppercase Letter or Lowercase Letter or a Digit or a Special Character.: ");
    scanf("%c", &ch);

    if(ch >= 48 && ch < 58){
        printf("Character is 'Digit'.");
    } else if(ch >= 32 && ch <= 47 || ch >= 58 && ch <= 64 ||ch >= 91 && ch <= 96 ||ch >= 123 && ch <= 127){
        printf("Character is 'Special Character'.");
    } else if(ch >= 65 && ch <= 90){
        printf("Character is 'UpperCase'.");
    } else if(ch >= 97 && ch <= 121){
        printf("Character is 'Lowercase'.");
    }
    
    return 0;
}