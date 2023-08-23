/****************************************************************************
      Prog.7  Write a program to find Bigger number from given two Nos..
*****************************************************************************/
# include "stdio.h"
# include "conio.h"
void main()
{
   int a,b;
   //clrscr();
   printf("\nEnter Any Two Nos.:");
   scanf ("%d%d",&a,&b);
   if (a > b)
     {
	printf ("\n Bigger No. is %d",a);
     }
   else
     {
	printf ("\n Bigger No. is %d",b);
     }
   getch();
}