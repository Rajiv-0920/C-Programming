#include <stdio.h>

int main(){
    int n, temp, fact, sum, rem;

    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        temp = i;
        sum = 0;
        while(temp != 0){
            fact = 1;
            rem = temp % 10;
            for(int j = rem; j >= 1; j--)
                fact *= j;
            sum += fact;
            temp /= 10;
        }

        if(sum == i)
            printf("%d ", i);
    }
    return 0;
}