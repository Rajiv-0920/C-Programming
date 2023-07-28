// Fibonacci Series Program in C Using DO While Loop

#include <stdio.h>

int main(){

    int num, i = 0, n1 = 0, n2 = 1, sum;
    
    printf("Enter num: ");
    scanf("%d", &num);

    do{
        if(i < 2){
            printf("%d \t", i);
        } else{
            sum = n1 + n2;
            printf("%d \t", sum);
            n1 = n2;
            n2 = sum;
        }
        i++;
    } while(i < num);

    return 0;
}