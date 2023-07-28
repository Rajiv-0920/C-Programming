/* Write A Program To Accept A Number And Print Prime Numbers Between 2 And N In C Language */

#include <stdio.h>

int main(){

    int n, flag = 0;
    
    printf("Enter number: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++){
        flag = 1;

        for(int j = 2; j <= i / 2; j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }  

        if(flag == 1){
                printf("%d ", i);
            }
    }
    return 0;
}