// C Program to Print a Calendar With Start With Input Day
#include <stdio.h>

int main(){

    int numberOfDays, day, count = 0, space = 0;

    printf("\nEnter Total Numbers of Days in a Month:");
    scanf("%d", &numberOfDays);

    printf("\nEnter 0 for Monday:\nEnter 1 for Tuesday:\nEnter 2 for Wednesday:\nEnter 3 for Thursday:\nEnter 4 for Friday:\nEnter 5 for Saturday:\nEnter 6 for Sunday:\n");

    printf("\nEnter First Day of the month 0 to 6:");
    scanf("%d", &day);

    if(day > 6){
        printf("\nRerun and enter a valid Day..!\n");
    } else if(numberOfDays <= 31){    
    printf("\n\nMon\tTue\tWed\tThu\tFri\tSat\tSun\n");
    printf("_________________________________________________\n");

        for(int date = 1; date <= numberOfDays; date++){
            if(space < day){
                printf("-\t");
                space++;
                date = 0;
            } else if(space >= day){
                printf("%d\t", date);
            }

            count++;

            if(count == 7){
                count = 0;
                printf("\n");
            }
        }
   
    }

    return 0;
}