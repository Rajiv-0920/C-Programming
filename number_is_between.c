// Print the range of a number. E.g. number 78 is between 70 and 79, 102 is between 100 and 109.

#include <stdio.h>

int main(){
    int num, x, y;

    printf("Enter a number:");
    scanf("%d", &num);

    x = num / 10 * 10;
    y = x + 9;

    printf("%d number is between %d and %d", num, x, y);
    
    return 0;
}