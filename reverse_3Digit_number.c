//  Input a 3 digit number and reverse it.

#include <stdio.h>

int main(){
    int num, rev, rem;

    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    rem = num % 10;
    num = num / 10;
    rev = rev * 10 + rem; 
    rem = num % 10;
    num = num / 10;
    rev = rev * 10 + rem;
    rem = num % 10;
    num = num / 10;
    rev = rev * 10 + rem; 
    
    printf("Reverse number = %d\n", rev);

    return 0;
}