//

#include <stdio.h>

int main(){
    int hardness, tensile;
    float carbon;

    printf("Enter hardness, carbon and tensile:");
    scanf("%d %f %d", &hardness, &carbon, &tensile);

    if(hardness > 50 && carbon  < 0.7 && tensile > 5600)
        printf("Grade is 10");
    else if(hardness > 50 && carbon < 0.7 && tensile <= 5600)
        printf("Grade is 9");
    else if(hardness <= 50 && carbon < 0.7 && tensile > 5600)
        printf("Grade is 8");
    else if(hardness > 50 && carbon >= 0.7 && tensile > 5600)
        printf("Grade is 7");
    else if(hardness > 50 || carbon < 0.7 || tensile > 5600)
        printf("Grade is 6");
    else 
        printf("Grade is 5");
    
    return 0;
}