/*****************************************************************************
   Prog.6  Write a program to find out Total,Eaverage of an Arrays elements.
******************************************************************************/
# include "stdio.h"
# include "conio.h"
void main()
{
 int a[10],i,t=0;
 float p;
 clrscr();
 printf("Enter Ten Values:");
 for (i=0;i<=9;i++)
   {
    scanf("%d",&a[i]);
    t=t+a[i];
   }
   p=(float)t/10;
   printf("\nTotal : %d",t);
   printf("\nEaverage: %f",p);
  getch();
 }
