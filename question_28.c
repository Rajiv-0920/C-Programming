// 28. Given Date Month and the Year Is Correct or Not Using If-Else

#include <stdio.h>

int main(){

    int year, month, date;

    printf("Enter Date, Month, year respectively:");
    scanf("%d %d %d", &date, &month, &year);

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                if(month > 0 && month <= 12){
                    if(month == 2){
                        if(date > 0 && date <= 29){
                            printf("Valid Date, Month and Year");
                        } else{
                            printf("Invalid Date, Month and Year.");
                        }
                    }
                }
            } else{
                if(month > 0 && month <= 12){
                    if(month == 2){
                        if(date > 0 && date <= 28){
                            printf("Valid Date, Month and Year");
                        } else{
                            printf("Invalid Date, Month and Year.");
                        }
                    }     
                }
            }
        } else{
            if(month > 0 && month <= 12){
                if(month == 2){
                     if(date > 0 && date <= 29){
                        printf("Valid Date, Month and Year");
                   } else{
                    printf("Invalid Date, Month and Year.");
                   } 
                }
            }
        }
    } else{
        if(month > 0 && month <= 12){
            if(month == 2){
                if(date > 0 && date <= 28){
                    printf("Valid Date, Month and Year");
                } else{
                    printf("Invalid Date, Month and Year.");
                }
            }     
        }
     }

    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            if(date > 0 && date <= 31){
                printf("Valid Date, Month and Year");
            } else{
                printf("Invalid Date, Month and Year.");
            }
        } else if(month != 2){
            if(date > 0 && date <= 30){
                printf("Valid Date, Month and Year");
            } else{
                printf("Invalid Date, Month and Year.");
            }
        return 0;
    }
}