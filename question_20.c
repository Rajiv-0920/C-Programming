// Write a program to accept three numbers from user and print them in ascending and descending order in C language
#include <stdio.h>

int main(){

    int num1, num2, num3;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("Enter num3: ");
    scanf("%d", &num3);

    if(num1 >= num2 && num2 >= num3){
        printf("Ascending order: %d %d %d \n", num1, num2, num3);
        printf("Descending order: %d %d %d \n", num3, num2, num1);
    } else if(num1 >= num3 && num3 >= num2){
        printf("Ascending order: %d %d %d \n", num1, num3 , num2);
        printf("Descending order: %d %d %d \n", num2, num3, num1);
    } else if(num1 <= num3 && num2 >= num3){
        printf("Ascending order: %d %d %d \n", num2, num3 , num1);
        printf("Descending order: %d %d %d \n",num1, num3, num2);
    } else if(num1 >= num3 && num2 >= num1){
        printf("Ascending order: %d %d %d \n", num2, num1 , num3);
        printf("Descending order: %d %d %d \n",num3, num1, num2);
    } else if(num1 <= num2 && num2 <= num3){
        printf("Ascending order: %d %d %d \n", num3, num2, num1);
        printf("Descending order: %d %d %d \n",num1, num2, num3);
    } else if(num1 >= num2 && num1 <= num3){
        printf("Ascending order: %d %d %d \n", num3, num1, num2);
        printf("Descending order: %d %d %d \n", num2, num1, num3);
    }

    return 0;
}