/*
C++ Program For Converting Temperature Celsius Into Fahrenheit
   
formula:-
    Fahrenheit = ((9/5) * Celsius) + 32; //or you can use 1.8 in place of 9/5
    celsius = (32°F − 32) × 5/9 = 0°C 
*/
#include <stdio.h>

int main(){
    float celsius, fahrenheit, calculation;
    char type;

    printf("Enter 'f' for Fahrenheit to celsius or 'c' for Celsius to Fahrenheit: ");
    scanf("%c", &type);

    switch(type){
        case 'c':printf("Enter Celsius: ");
                scanf("%f", &celsius);
                calculation = (1.8 * celsius) + 32;
                printf("Fahrenheit: %f", calculation);
                break;
        case 'f':printf("Enter Fahrenheit: ");
                scanf("%f", &fahrenheit);
                calculation = (fahrenheit - 32) * 5 / 9;
                printf("Celsius: %f", calculation);
                break;
        default: printf("Enter small f or c: ");
    }
    return 0;
}