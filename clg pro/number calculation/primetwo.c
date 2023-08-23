#include <stdio.h>
#include <conio.h>

int prime(int);
int prime2(int);

void main()
{
    int no1, i, n = 0, c = 0;
    printf("Enter a number :");
    scanf("%d", &no1);
    for (i = 2; i <= no1; i++)
    {
        if (no1 % i == 0)
        {
            n++;
        }
    }
    if (n == 1)
    {
        printf("%d ", no1);
        prime(no1);
    }
    else if (n > 1)
    {
        printf("%d ", no1);
        prime2(no1);
    }
    printf("\n");
    system("pause");
}

int prime(int x)
{
    int high = x + 1;
    int flag = 0;
    int count = 0;
    while (count != 2)
    {
        for (int i = 1; i <= high; i++)
        {
            if (high % i == 0)
            {
                flag++;
            }
        }
        if (flag == 2)
        {
            printf("%d ", high);
            count++;
        }
        flag = 0;
        high++;
    }
}

int prime2(int x)
{
    int high = x - 1;
    int flag = 0;
    int count = 0;
    while (count != 2)
    {
        for (int i = 1; i <= high; i++)
        {
            if (high % i == 0)
            {
                flag++;
            }
        }
        if (flag == 2)
        {
            printf("%d ", high);
            count++;
        }
        flag = 0;
        high--;
    }
}

// (5),6,(7),8,9,10,(11),12,(13),14,(15)
