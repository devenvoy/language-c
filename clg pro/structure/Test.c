#include <stdio.h>
double sum(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);
void main()
{
    double a, b;
    int n, ch;
    do
    {
        printf("\t MENU ");
        printf("\n- - - - - - - - -");
        printf("\n 1. SUM \n 2. SUB \n 3. MUL \n 4. Div \n5. EXIT\n");
        printf("Enter no1 : ");
        scanf("%lf", &a);
        printf("Enter no2 : ");
        scanf("%lf", &b);
        printf("\n\n Enter Your Choice  : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            sum(a, b);
            break;
        case 2:
            sub(a, b);
            break;
        case 3:
            mul(a, b);
            break;
        case 4:
            div(a, b);
            break;
        case 5:
            break;
        default:
            printf("Invaild Choice......");
            break;

            printf("- - - - - - - - - - - - ");
            printf("\n\nDo You Want To Continue ?");
            printf("\n1. YES \n 2. NO\n");
            printf("\nEnter Your Choice : ");
            scanf("%d", &ch);
        }
        while (ch == 1);
    }
    double sum(double x, double y)
    {
        printf("%lf", x + y);
    }
    double sub(double x, double y)
    {
        printf("%lf", x - y);
    }
    double mul(double x, double y)
    {
        printf("%lf", x * y);
    }
    double div(double x, double y)
    {
        printf("%lf", x / y);
    }