// sum of n value

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,sum=0;
    // clrscr();

    printf("Enter last  number :-");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        printf(" %d +",i);
        sum=sum+i;
    }
    printf(" sum of all numbers is %d." ,sum);

    getchar();

}