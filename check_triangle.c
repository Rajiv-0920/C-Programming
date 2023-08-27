//  If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is isosceles, equilateral, scalene or right-angled triangle.

#include <stdio.h>

int main(){
    int s1, s2, s3, a, b, c;

    printf("\nEnter 3 sides of a triangle:");
    scanf("%d %d %d", &s1, &s2, &s3);

    if(s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1){
        a = s1 * s1 == s2 * s2 + s3 * s3;
        b = s2 * s2 == s1 * s1 + s3 * s3;
        c = s3 * s3 == s2 * s2 + s1 * s1;

        if(a || b || c){
            printf("\nRight angle Triangle.");
        }else if(s1 != s2 && s2 != s3 && s3 != s1){
            printf("\nScalene Triangle.");
        } else if(s1 == s2 && s2 == s3){
            printf("\nEquilateral Triangle.");
        } else{
            printf("\nIsosceles Triangle.");
        }
        
    } else{
        printf("\nInvalid Triangle.");
    }
    
    return 0;
}