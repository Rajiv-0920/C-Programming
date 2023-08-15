/*
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/
#include <stdio.h>

int main(){
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        // Spaces
        for(int j = 1; j <= n - i; j++){
            printf("  ");
        }
        // 1 to n Descending Numbers
        for(int j = i ; j >= 1; j--){
            printf("%d ", j);
        }
        // 2 to n Ascending Numbers
        for(int j = 2; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}