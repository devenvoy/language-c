#include <stdio.h>


int main()
{
    int i = 0, k = 0, h = 0;
    int j, no, temp;
    int arr[20];

    printf("Enter  a number :");
    scanf("%d", &no);
    temp = no;

    while (temp != 0)
    {
        arr[i] = temp % 10;
        temp = temp / 10;
        i++;
    }

    for (j = 0; j < i - 1; j++)
    {
        if (arr[j] < arr[j + 1])
        {
            k = 1;
        }
        else
        {
            h = 1;
        }
    }
    if (k == 1 && h == 1)
    {
        printf("bouncy number");
    }
    else
    {
        printf("not ");
    }
}
