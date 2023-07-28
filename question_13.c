// 13. Calculate Percentage of 5 Subjects

#include <stdio.h>

int main(){

    int sanskrit, math, eng, hin, accounts;
    float percentage;

    printf("Enter Sanskrit Marks:");
    scanf("%d", &sanskrit);
    printf("Enter Hindi Marks:");
    scanf("%d", &hin);
    printf("Enter English Marks:");
    scanf("%d", &eng);
    printf("Enter Math Marks:");
    scanf("%d", &math);
    printf("Enter Accountancy Marks:");
    scanf("%d", &accounts);
    
    percentage = ((float)(sanskrit + hin + eng + math + accounts) / 500 ) * 100;

    printf("\nYour Overall Percentage: %2f", percentage);

    return 0;
}