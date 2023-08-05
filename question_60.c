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
  int n;

  printf("Enter n number: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    // Spaces 
    for(int j = 1; j <= n - i; j++){
      printf("  ");
    }
    // Starts
    for(int j = 1; j <= i * 2 - 1; j++){
      printf("* ");
    }
    // Next line
    printf("\n");
  }

  for(int i = n - 1; i >= 1; i--){
    // Spaces 
    for(int j = 1; j <= n - i; j++){
      printf("  ");
    }
    // Starts
    for(int j = 1; j <= i * 2 - 1; j++){
      printf("* ");
    }
    // Next line
    printf("\n");
  }
  return 0;
}