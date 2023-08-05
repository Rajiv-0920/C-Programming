/*
* - - - - - - *
* * - - - - * *
* * * - - * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *
*/

#include <stdio.h>

int main(){
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n;i++){
        // Stars
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        // Spaces
        for(int j = 1; j <= 2 * (n - i); j++){
            printf("  ");
        }
        // Stars
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        // Next Line
        printf("\n");
    }
    for(int i = n; i >= 1;i--){
        // Stars
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        // Spaces
        for(int j = 1; j <= 2 * (n - i); j++){
            printf("  ");
        }
        // Stars
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        // Next Line
        printf("\n");
    }
    return 0;
}