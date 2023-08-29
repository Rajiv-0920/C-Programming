#include <stdio.h>

int main(){
    int num, sum;

    printf("Enter a 5 digit number: ");
    scanf("%d", &num);

    sum = (num % 10) + (num / 10000);

    printf("Sum = %d", sum);

    return 0;
}