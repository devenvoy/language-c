/*Write a program to find a given string from the list of strings.
 */
#include <stdio.h>

#include <string.h>

void main()
{
    char line[200], find[200];
    int i, j = 0, n;
    int k[20];
    printf(" Enter your string line here :\n ");
    gets(line);

    printf(" Enter your  sub string line here :\n ");
    gets(find);
    n = strlen(find);

    for (i = 0; i < strlen(line); i++)
    {
        if (line[i] == find[j])
        {
            k[j] = j;
            j++;
        }
    }

    if (j == n)
    {
        printf(" Found sub string ");
    }
    else
    {
        printf(" not found sub string ");
    }
}
