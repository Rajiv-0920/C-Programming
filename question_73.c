/*
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
*/

#include <stdio.h>

int main(){
    int n;

    printf("Enter n number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        // Spaces
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }
        // Stars
        for(int j = 1; j <= i; j++){
            printf("%d ", i);
        }
        // Next line
        printf("\n");
    }
    
    return 0;
}