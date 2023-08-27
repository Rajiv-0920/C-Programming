// WAP to print the second maximum out of three numbers.

#include <stdio.h>

int main(){
    int num1, num2, num3, max;

    printf("Enter 3 numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2 && num1 < num3)
        max = num1;
    else if(num1 > num3 && num1 < num2)
        max = num1;
    else if(num2 > num1 && num2 < num3)
        max = num2;
    else if(num2 > num3 && num2 < num1)
        max = num2;
    else 
        max = num3;
    
    printf("Second maximum number is %d", max);
    
    return 0;
}