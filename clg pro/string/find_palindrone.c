/* Write a Program to accept N number of Strings from the user and display
all palindrome words from that list.*/

#include <stdio.h>

#include <string.h>

int main()
{
    char original[20][50], copy[20][50], rev[20][50];
    int i, j, k, n;

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t Enter size : ");
    scanf("%d", &n);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n Enter word list :\n");

    for (i = 0; i < n; i++)
    {

        scanf("%s", original[i]);

        strcpy(rev[i], original[i]);

        strrev(rev[i]);
        strcpy(copy[i], rev[i]);
    }

    system("cls");    
    printf(" \n\t\tOutput\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf(" \n all palindrome words from the list are : \n");

    for (i = 0; i < n; i++)
    {

        if (strcmp(original[i], copy[i]) == 0)
        {
            printf("\n\t\t%s", original[i]);
        }
    }
}
