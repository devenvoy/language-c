#include <stdio.h>

#include <string.h>
struct name
{
    char a[20];
};
int main()
{
    struct name s[20];
    int i, j, n, x, ch = 0, sum = 0;
    char ch1;

    printf("how many value you want to add :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter your value %d:  ", i);
        scanf("%s", s[i].a);
    }
    for (j = 1; j <= n; j++)
    {
        x = strlen(s[j].a);
        for (i = 0; i < x; i++)
        {
            if (i % 2 == 0)
            {
                ch += s[j].a[i];
                printf("%c", s[j].a[i]);
            }
            else
            {
                ch1 = (char)s[j].a[i];
                printf("%c", ch1 - 32);
            }
        }
        printf(" = %d \n", ch);
    }
}