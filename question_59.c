/*
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *   */

#include <stdio.h>

int main(){

  int n;

  printf("Enter number of rows:");
  scanf("%d", &n);

  for(int row = 0; row < n; row++){
    for(int col_1 = 0; col_1 < row; col_1++){
      printf("  ");
    }
    for(int col_2 = 0; col_2 < (n * 2 - 1) - (row * 2); col_2++){
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}