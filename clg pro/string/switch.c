/* MEnu Driven program for use appliences with switch ... case  */

#include <stdio.h>

int main()
{
    int a;

    printf("\n\n\t\t\t*******************************************************");
    printf("\n\t\t\t\t\t\t MENU");
    printf("\n\t\t\t*******************************************************");
    printf("\n\t\t\t 1.Light ");
    printf("\n\t\t\t 2. Fan ");
    printf("\n\t\t\t 3. AC ");
    printf("\n\t\t\tEnter your choice :");
    scanf("%d", &a);
    switch (a)
    {
    case 1:                                    /* constant-expression */
        printf(" \n\n\t\t\t Light turned on"); /* code */
        break;

    case 2:
        printf("\n\n\t\t\t Fan turned on");
        break;

    case 3:
        printf("\n\n\t\t\t AC turned on.... Chilll");
        break;

    default:
        printf("\n\n\t\t\t\t INVALID CHOICE");
        break;
    }
    getchar();
    return 0;
}