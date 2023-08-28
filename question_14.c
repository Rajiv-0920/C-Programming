/*
C++ Program For Converting Temperature Celsius Into Fahrenheit
   
formula:-
    Fahrenheit = ((9/5) * Celsius) + 32; //or you can use 1.8 in place of 9/5
    celsius = (32°F − 32) × 5/9 = 0°C 
*/
#include <stdio.h>

int main(){
    float celFah, fahrenheit, celsius;

    printf("\nEnter Celsius or Fahrenheit: ");
    scanf("%f", &celFah);

    fahrenheit = (9.0 / 5.0 * celFah) + 32.0;
    celsius = (celFah - 32.0) * (5.0 / 9.0);

    printf("\nCelsius to Fahrenheit: %f", fahrenheit);
    printf("\nFahrenheit to Celsius: %f", celsius);

    return 0;
}