/* 
C Program to Convert a Person's Name in Abbreviated
    Example:- 
    Name:- Ghanendra Pratap Singh
    Abbreviated Name :- G. P. Singh
*/
#include<stdio.h>

int main() {

    char first_name[20], middle_name[20], last_name[20];

    printf("Enter First name, Middle name, Last name: ");
    scanf("%s %s %s", &first_name, &middle_name, &last_name);

    printf("%c. %c. %s", first_name[0], middle_name[0], last_name);
    return 0;

} 