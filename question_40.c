// 40. Check Whether a Number Is Divisible by 11 Using (Vedic Maths)

#include <stdio.h>

int main(){

    int number, temp, rem, odd = 0, even = 0, count = 1, diff;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;

    while(temp > 0){
        rem = temp % 10;
        if(count % 2 == 0){
            even += rem;
            count++;
        } else{
            odd += rem;
            count++;
        }
        temp /= 10;
    }

    diff = even - odd;
    
    if(diff == 0 || diff == 11|| diff == -11){
        printf("%d is Divisible by 11", number);
    } else{
        printf("%d is Not Divisible by 11", number);
    }

    return 0;
}