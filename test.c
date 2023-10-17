#include <stdio.h>

int main(){
    void printTable(int, int);
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printTable(n, 1);
    return 0;
}

void printTable(int n, int t){
    if(t > 10){
        return;
    }
    printf("\n%d X %d = %d",n, t, n * t);
    printTable(n, t + 1);
}