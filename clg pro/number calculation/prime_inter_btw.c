#include <stdio.h>

#include <math.h>

void main()
{

    int low, high, flag = 0;

    printf("Enter the lower limit:\n");
    scanf("%d", &low);
    printf("Enter the higher limit:\n");
    scanf("%d", &high);

    printf("The prime number between %d and %d are : \n", low, high);

    while (low < high)
    {
        if (low <= 1)
        {
            low++;
            continue;
        }

        for (int i = 2; i <= sqrt(low); i++)
        {
            if (low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", low);
        }
        flag = 0;
        low++;
    }

    getchar();
    return 0;
}