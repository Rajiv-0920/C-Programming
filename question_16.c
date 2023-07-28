// First Three Powers (N^1, N^2, N^3) Without Using Power Function
#include <stdio.h>

int main(){

    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    printf("First Three Powers %d, %d, %d", num, num * num, num * num * num);
    
    return 0;
}