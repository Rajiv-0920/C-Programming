// 19. Write a program to accept two numbers from user and compare them in C language

#include <stdio.h>

int main(){

    int num1, num2;

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("First Number is 'Largest'");
    } else if(num1 < num2){
        printf("Second number is 'Largest'");
    } else{
        printf("Both Number is 'Equal'");
    }
    
    return 0;
}