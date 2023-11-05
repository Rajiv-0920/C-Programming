#include <stdio.h>

int main ()
{
    int sum (int n);
    int n;
    printf ("\nEnter the value of n: ");
    scanf ("%d",&n);
    n =sum(n);
    printf ("%d",n);
    
}
int sum (int n)
{
    if (n==0)
    return 0;
     else 
    return n + sum(n-1);
}