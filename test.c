#include <stdio.h>
#include <string.h>

int main()
{
    int findOccurrence(char *, char *);
    char str[100];
    char fw[50];
    int idx;

    printf("Enter the string: ");
    gets(str);

    printf("Enter word to be searched: ");
    gets(fw);

    idx = findOccurrence(str, fw);

    printf("Word '%s' is first occurrence at location %d", fw, idx);
    return 0;
}

int findOccurrence(char *str, char *fw)
{
    int i, j, sl, wl, temp;
    int findAt = -1;
    sl = strlen(str);
    wl = strlen(fw);
    for (i = 0; i < sl; i++)
    {
        j = 0;
        temp = i;
        while (j < wl)
        {
            if (str[temp] == fw[j])
            {
                j++;
                temp++;
            }
            else
                break;
        }
        if (j == wl)
        {
            findAt = i + 1;
            break;
        }
    }
    return findAt;
}