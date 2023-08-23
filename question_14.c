/*
C++ Program For Converting Temperature Celsius Into Fahrenheit
   
formula:-
    Fahrenheit = ((9/5) * Celsius) + 32; //or you can use 1.8 in place of 9/5
    celsius = (32°F − 32) × 5/9 = 0°C 
*/
#include <stdio.h>

int main(){
    float celsius, fahrenheit, calculation;

    printf("\nEnter Celsius: ");
    scanf("%f", &celsius);
    calculation = (1.8 * celsius) + 32;
    printf("\nFahrenheit: %f", calculation);

    printf("\nEnter Fahrenheit: ");
    scanf("%f", &fahrenheit);
    calculation = (fahrenheit - 32) * 5 / 9;
    printf("\nCelsius: %f", calculation);

    return 0;
}