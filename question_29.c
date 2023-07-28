// C Program to Reverse a Number Using FOR Loop | C Programs
#include <stdio.h>

int main(){

    int num, rem, rev = 0;

    printf("Enter the number to reverse: ");
    scanf("%d", &num);

    for(int i = num; i > 0; i /= 10){
        rem = i % 10;
        rev = rev * 10 + rem;
    }

    printf("Reversed Number: %d", rev);

    return 0;
}