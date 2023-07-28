// 41. Denomination of an Amount Using While Loop

#include <stdio.h>

int main(){

    int n,coin_1 = 0, coin_2 = 0, coin_5 = 0, note_10 = 0, note_20 = 0, note_50 = 0, note_100 = 0, note_200 = 0, note_500 = 0, note_2000 = 0;

    printf("Enter a amount: ");
    scanf("%d", &n);
    
    while(n >= 2000){
        note_2000 = n / 2000;
        n %= 2000;
    }

    while(n >= 500){
        note_500 = n / 500;
        n %= 500;
    }

    while(n >= 200){
        note_200 = n / 200;
        n %= 200;
    }

    while(n >= 100){
        note_100 = n / 100;
        n %= 100;
    }

    while(n >= 50){
        note_50 = n / 50;
        n %= 50;
    }

    while(n >= 20){
        note_20 = n / 20;
        n %= 20;
    }

    while(n >= 10){
        note_10 = n / 10;
        n %= 10;
    }

    while(n >= 5){
        coin_5 = n / 5;
        n %= 5;
    }   

    while(n >= 2){
        coin_2 = n / 2;
        n %= 2;
    }

    while(n >= 1){
        coin_1 = n / 1;
        n %= 1;
    }

    printf("\nNumber of 2000 Notes: %d\n", note_2000);
    printf("\nNumber of 500 Notes: %d\n", note_500);
    printf("\nNumber of 200 Notes: %d\n", note_200);
    printf("\nNumber of 100 Notes: %d\n", note_100);
    printf("\nNumber of 50 Notes: %d\n", note_50);
    printf("\nNumber of 20 Notes: %d\n", note_20);
    printf("\nNumber of 10 Notes: %d\n", note_10);
    printf("\nNumber of 5 Coins: %d\n", coin_5);
    printf("\nNumber of 2 Coins: %d\n", coin_2);
    printf("\nNumber of 1 Coins: %d\n", coin_1);

    return 0;
}