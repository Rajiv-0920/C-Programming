    /*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
    */

#include <stdio.h>

int main(){

  for(int row_1 = 0; row_1 < 5; row_1++){
    for(int col_1 = 0; col_1 < 5 - row_1; col_1++){
        printf("   ");
    }
    for(int col_2 = 0; col_2 < 1 + row_1 * 2; col_2++){
        printf(" * ");
    }
      printf("\n");
  }

  for(int row_2 = 0; row_2 < 4; row_2++){
    for(int col_1 = 0; col_1 < 2 + row_2; col_1++){
      printf("   ");
    }
    for(int col_2 = 0; col_2 < 7 - row_2 * 2; col_2++){
      printf(" * ");
    }
      printf("\n");
  }
    return 0;
}