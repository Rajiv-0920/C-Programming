// GCD of Two Numbers in C | Greatest Common Divisor Program
#include <stdio.h>

int main(){
    
    int num1, num2, temp, div = 0;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    for(int i = num2; i > 0; i--){
        if(num1 % i == 0 && num2 % i == 0){
            div = i;
            break;
        }
    }
  
    printf("GCD(Greatest Common Divisor) of %d and %d is: %d",num1, num2, div);

    return 0;
}