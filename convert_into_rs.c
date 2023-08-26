// WAP. to input paisa and convert it into rs. and paisa

#include <stdio.h>

int main(){
    int paisa, rs;

    printf("Enter paisa:");
    scanf("%d", &paisa);

    rs = paisa / 100;
    paisa = paisa % 100;

    printf("Total %d Rs. and %d Paisa", rs, paisa);
    
    return 0;
}