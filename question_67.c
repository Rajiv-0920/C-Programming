/*
    * * * * * *
    *         *
    *         *
    * * * * * *
*/

#include <stdio.h>

int main(){
    int row, col;

    printf("\nEnter row number: ");
    scanf("%d", &row);

    printf("\nEnter number of Column: ");
    scanf("%d", &col);

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++){
            if(i == 1 || j == 1 || i == row || j == col){
                printf("* ");
            } else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}