// ## 17. Write a Program to print table of a given number n in c language.
#include <stdio.h>

int main(){
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    int i = 1;

    while(i <= 10){
        printf("%d X %d = %d \n", n, i, n * i);
        i++;
    }
    
    return 0;
}