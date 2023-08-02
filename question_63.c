    /*
         A
       B B B
      C C C C C
    D D D D D D D
    */

#include <stdio.h>

int main(){

    int n;

    printf("Enter number of rows:");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            printf("  ");
        }
        for(int k = 0; k < 1 + i * 2;k++){
            printf("%c ", 65 + i);
        }
        printf("\n");
    }
    return 0;
}