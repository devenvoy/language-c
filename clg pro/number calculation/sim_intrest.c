/* find simple intrest
si = (p*r*t)/100
p = (100*si)/(r*t)
r=(100*si)/(p*t)
t=(100*si)/(p*r)
total amount = p+si */
#include <stdio.h>

int main()
{
    float si, p, r, t;
    int ch;

    printf("\n\n\t\t\t*******************************************************");
    printf("\n\t\t\t\t\t what you want to calculate");
    printf("\n\t\t\t*******************************************************");
    printf("\n\t\t\t 1.simple intrest ");
    printf("\n\t\t\t 2.principal ");
    printf("\n\t\t\t 3. rate of intrest ");
    printf("\n\t\t\t 4.period of time in year ");
    printf("\n\t\t\tEnter your choice :");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Enter principal(amount): ");
        scanf("%f", &p);
        printf("Enter Rate of intrest: ");
        scanf("%f", &r);
        printf("Enter period of time in year ");
        scanf("%f", &t);
        si = (p * r * t) / 100;
        printf(" \n\non %f amount ,Intrest is= %f ", p, si);
        printf("\nTotal Amount is :%f", si + p);

        break;
    case 2:
        printf("Enter simple intrest amount: ");
        scanf("%f", &si);
        printf("Enter Rate of intrest: ");
        scanf("%f", &r);
        printf("Enter period of time in year ");
        scanf("%f", &t);

        p = (100 * si) / (r * t);
        printf("\nyour principal is :%f ", p);
        printf("\nTotal Amount is :%f", si + p);
        break;

    case 3:
        printf("Enter principal(amount): ");
        scanf("%f", &p);
        printf("Enter simple intrest amount: ");
        scanf("%f", &si);
        printf("Enter period of time in year ");
        scanf("%f", &t);
        r = (100 * si) / (p * t);
        printf("\nyour rate of intrest is :%f", r);
        printf("\nTotal Amount is :%f", si + p);

        break;
    case 4:
        printf("Enter principal(amount): ");
        scanf("%f", &p);
        printf("Enter simple intrest amount: ");
        scanf("%f", &si);
        printf("Enter Rate of intrest: ");
        scanf("%f", &r);
        t = (100 * si) / (p * r);
        printf("\n period of time in year is:%f ", t);
        printf("\nTotal Amount is :%f" ,si + p);

        break;

    default:
        printf("\n\t\t\t INVALID CHOICE");
    }
    return 0;
}