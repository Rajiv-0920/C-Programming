/* Write A Program To Print Following Outputs In C Language
    *
    * *
    * * *
    * * * *
    * * * * *   */
    
#include <stdio.h>

int main(){

    int n;

    printf("Enter number of rows:");
    scanf("%d", &n);

    for(int row = 0; row < n; row++){
        for(int col = 0; col < row + 1; col++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}