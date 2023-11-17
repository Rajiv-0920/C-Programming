#include <stdio.h>

int main()
{
        int reverse(int);
        int totalDigit(int);
        int num, n;
        printf("Enter a number: ");
        scanf("%d", &num);

        n = reverse(num);
        printf("Digit = %d", totalDigit(num));

        while (n != 0)
        {
                int temp = n % 10;
                switch (temp)
                {
                case 0:
                        printf("Zero ");
                        break;
                case 1:
                        printf("One ");
                        break;
                case 2:
                        printf("Two ");
                        break;
                case 3:
                        printf("Three ");
                        break;
                case 4:
                        printf("Four ");
                        break;
                case 5:
                        printf("Five ");
                        break;
                case 6:
                        printf("Six ");
                        break;
                case 7:
                        printf("Seven ");
                        break;
                case 8:
                        printf("Eight ");
                        break;
                case 9:
                        printf("Nine ");
                        break;
                default:
                        printf("Not in the list");
                }
                n /= 10;
        }
        return 0;
}

int reverse(int num)
{
        int rev = 0, rem;
        while (num != 0)
        {
                rem = num % 10;
                rev = rev * 10 + rem;
                num /= 10;
        }
        return rev;
}
int totalDigit(int num)
{
        int count = 0;
        while (num)
        {
                count++;
                num /= 10;
        }
        return count;
}