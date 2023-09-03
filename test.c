#include <stdio.h>

int main(){
    int num1, num2, greater, lcm;

    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);

    greater = num1;

    if(num1 < num2)
        greater = num2;

    while(1){
        if(greater % num1 == 0 && greater % num2 == 0){
            lcm = greater;
            break;
        }
        greater++;
    }

    printf("LCM = %d", lcm);

    return 0;
}