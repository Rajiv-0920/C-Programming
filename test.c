#include <stdio.h>

int main(){
    int n, n1 = 1, n2 = 1, n3 = 0, temp;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i <= 2){
            printf("%d ", 1);
        } else {
            temp = n1 + n2 + n3;
            n3 = n2;
            n2 = n1;
            n1 = temp;
            
            printf("%d ", n1);
        }
    }
    return 0;
}