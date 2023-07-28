/*Write A Program To Accept A Number From User And Print If It Is Prime Or Not In C Language  */

#include <stdio.h>

int main(){

    int num, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 2; i <= num / 2; i++){
        if(num % i == 0){
            flag = 1;
            break;
        }
    }

    if(flag){
        printf("Is not a Prime Number %d", num);
    } else{
        printf("Prime Number %d", num);
    }
    
    return 0;
}