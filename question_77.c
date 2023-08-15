/*
* * * * * * * * * 
* * * * * * *  
* * * * *    
* * *             
*                
* * *
* * * * *
* * * * * * *
* * * * * * * * *
*/
#include <stdio.h>

int main(){
    int n;

    printf("Enter n number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (n - i) * 2 + 1; j++){
            printf("* ");
        }
        printf("\n");
    } 
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= i * 2 - 1; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}