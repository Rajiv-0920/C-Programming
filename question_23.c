//   Write a Program to accept user’s marital status, gender and age to check if he/she is eligible for marriage or not.

#include <stdio.h>

int main(){

    int age;
    char maritalStatus, gender;

    printf("Enter MaritalStatus: m for Married/ u for unMarried: ");
    scanf(" %c", &maritalStatus);

    printf("Enter your gender: m for male/ f for female: ");
    scanf(" %c", &gender);
    
    printf("Enter your age: ");
    scanf(" %d", &age);

    if(maritalStatus == 'm'){
        printf("You can not marry!");
    } else if(maritalStatus == 'u'){
        if(gender == 'm'){
            if(age >= 21){
                printf("You can marry!");
            } else{
                printf("You can not marry!");
            }
        } else if(gender == 'f'){
            if(age >= 18){
                printf("You can marry!");
            } else{
                printf("You can not marry!");
            }
        } else{
            printf("Enter valid gender: ");
        }
    } else{
        printf("Enter valid Marital Status: ");
    }
    return 0;
}