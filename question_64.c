    /*
    A B C D E E D C B A
    A B C D     D C B A
    A B C         C B A
    A B             B A
    A                 A
    */

#include <stdio.h>

int main(){

    int n;
    printf("Enter n Number: ");
    scanf("%d", &n);

    for(int i = n; i > 0;i--){
        for(int j = 0; j < i; j++){
            printf("%c ", 65 + j);
        }
        for(int k = 0; k < (n - i) * 2; k++){
            printf("  ");
        }
        for(int c = i; c > 0;c--){
            printf("%c ", 64 + c);
        }
        printf("\n");
    }
    return 0;
}