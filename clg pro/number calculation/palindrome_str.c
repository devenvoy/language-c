#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char s1[20], s2[20];
    int cmp;
    printf(" enter a sting :");
    scanf("%s", &s1);

    strcpy(s2, s1);
    strrev(s2);
    cmp = strcmp(s1, s2);
    if (cmp == 0)
    {
        printf(" String is palindrome");
    }
    else
    {
        printf(" String is not a palindrome");
    }
    return 0;
}