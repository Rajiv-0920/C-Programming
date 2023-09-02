
#include <stdio.h>

int main(){
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    ch >= 65 && ch <= 90 ? printf("Character is Uppercase.") :
    ch >= 97 && ch <= 121 ? printf("Character is Lowercase.") :
    printf("Not a character.");
    
    return 0;
}