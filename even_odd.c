#include <stdio.h>

int main(){
    int num, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    rem = num - num / 2 * 2;

    rem == 0 ? printf("\nEven number") : printf("\nOdd number");
    
    return 0;
}