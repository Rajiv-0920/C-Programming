// WAP to compute the pension of an employee.

// If the person is male.
// Age >= 90 pension is 4000
// Age >= 60 pension is 6000
// Age < 60 pension is 0

// if the person is female.
// Age >= 90 pension is 3000
// Age >= 60 pension is 5000
// Age < 60 pension is 0

#include <stdio.h>

int main(){
    int age, pension;
    char gender;

    printf("Enter Age and Gender (male = m or female = f):");
    scanf("%d %c", &age, &gender);

    if(age >= 90){
        if(gender == 'm')
            pension = 4000;
        else 
            pension = 3000;
    } else if(age >= 60){
        if(gender == 'm')
            pension = 6000;
        else 
            pension = 5000;
    } else{
        pension = 0;
    }

    printf("Pension is Rs.%d", pension);
    
    return 0;
}