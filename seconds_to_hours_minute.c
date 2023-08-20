// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

#include <stdio.h>

int main(){
    int seconds, minutes, hours;

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;
    
    printf("There are:\nH:M:S - %d:%d:%d", hours, minutes, seconds);
    
    return 0;
}