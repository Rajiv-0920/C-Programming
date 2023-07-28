// Leap Year Program in C Using IF-ELSE
#include <stdio.h>

int main(){

    int year;
    
    printf("Enter Year: ");
    scanf("%d", &year);

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                printf("This is a leap year: %d", year);
            } else{
                printf("This is not a leap year: %d", year);
            }
        } else{
            printf("This is a leap year: %d", year);
        }
    } else{
        printf("This is not a leap year: %d", year);
    }

    return 0;
}