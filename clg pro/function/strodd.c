#include <stdio.h>
#include <string.h>

void modifyString(char str[])
{
    int len, i;
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i + 1);
        }
        else
        {
            printf("%c", str[i]);
        }
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    modifyString(str);
    return 0;
}
