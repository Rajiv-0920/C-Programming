 /*
    1
    1 1
    1 2 1
    1 2 3 1
    1 2 3 4 1
    1 2 3 4 5 1
    */

#include <stdio.h>

int main(){
   
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 1; j < i + 1;j++){
            printf("%d ",j);
        }
        printf("1\n");
    }
    return 0;
}