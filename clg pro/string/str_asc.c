#include <stdio.h>

#include <ctype.h>
void main()
{

    int n;
    int sum = 0;
    int j = 20;
    printf("How many records you want add : ");
    scanf("%d", &n);

    n = n + 1;
    char a[n][j], b;

    int i;
    for (i = 0; i < n; i++)
    {
        // printf("Enter values in a[%d] :", i);
        gets(a[i]);
    }
    for (i = 0; i < n; i++)
    {
        int k;
        sum=0;
        for (k = 1; k <= j; k++)
        {
            if (k % 2 == 0)
            {
                a[i][k - 1] = toupper(a[i][k - 1]);
            }
            if (k % 2 != 0)
            {
                b = a[i][k - 1];
                if (b >= 97 && b <= 122)
                {
                    // printf("%c", a[i][k - 1]);
                    sum += b;
                    b = 0;
                }
            }
        }
        // puts(a[i]);

        printf("%s = %d \n", a[i], sum);

    }
    // getchar();
}
