    /*
    Write A Program To Accept A Number From User And Print It’s Factorial In C Language
    Eg: factorial of 5 is:-
    5! = 5 x 4 x 3 x 2 x 1=120  */
  
// First Three Powers (N^1, N^2, N^3) Without Using Power Function
#include <stdio.h>

int main(){

    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    printf("First Three Powers %d, %d, %d", num, num * num, num * num * num);
    
    return 0;
}