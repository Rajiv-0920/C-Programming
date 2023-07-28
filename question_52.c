// C Program to Check Whether a Number is Triangular or Not

#include <stdio.h>

int main(){

    int triangular = 0 , num;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++){
        triangular += i;
        if(triangular == num){
            printf("%d is Triangular Number", num);
            break;
        }
        if(i == num){
            printf("%d is not Triangular number: ", num);
        }
    }

    return 0;
}