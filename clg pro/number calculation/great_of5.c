// find gretest number amoung 5 number

#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5;
    // n1 = 1002;
    // n2 = 2366;
    // n3 = 2115;
    // n4 = 1545;
    // n5 = 5465;

    printf("enter number 1 :");
    scanf("%d", &n1);
    printf("\n enter number 2 :");
    scanf("%d", &n2);
    printf(" \n enter number 3 :");
    scanf("%d", &n3);

    printf(" \n enter number 4 :");
    scanf("%d", &n4);
    printf(" \n enter number 5 :");
    scanf("%d", &n5);

    if (n1, n2, n3, n4, n5 > 0)
    {
        if (n1 >= n2 && n2 >= n3 && n3 >= n4 && n4 >= n5)
        {
            printf(" %d is gretest number amoung five", n1);
        }
        else if (n2 >= n3 && n3 >= n4 && n4 >= n5)
        {
            printf(" %d is gretest number amoung five", n2);
        }
        else if (n3 >= n4 && n4 >= n5)
        {
            printf(" %d is gretest number amoung five", n3);
        }
        else if (n4 >= n5)
        {
            printf(" %d id gretest number amoung five", n4);
        }
        else
        {
            printf(" %d is gretest number amoung five ", n5);
        }
    }
    else
    {
        printf(" INVALID NUMBERS");
    }

    return 0;
}