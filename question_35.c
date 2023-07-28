// Program to Find LCM of Two Numbers in C Using While Loop

#include <stdio.h>

int main(){
    
    int num1, num2, temp, lcm;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    for(int i = num1; i > 0; i--){
        if(num1 % i == 0 && num2  % i == 0){
            lcm = i * num1 / i * num2 / i;
            break;
        }
    }
    
    printf("Least Common Multiple (lcm): %d", lcm);
    return 0;
}