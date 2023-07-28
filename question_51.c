// Program To Print Triangular Number Series Till n

#include <stdio.h>

int main(){

    int n, triangular = 0;

    printf("Enter n Number: ");
    scanf("%d", &n);

    printf("Triangular number: ");
    for(int i = 1;i <= n;i++){
        triangular += i;
        printf("%d\t", triangular);
    }
    
    return 0;
}