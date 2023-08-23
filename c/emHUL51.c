/****************************************************************************
						 y
	  Prog.4  Write a program to calculate  X .
*****************************************************************************/
# include "stdio.h"
# include "conio.h"
void main()
{
   int x,y,p;
   clrscr();
   printf("\nEnter Value of X & Y :");
   scanf ("%d%d",&x,&y);
   p=1;
   do
    {
    p= p*x;
    y--;
    }
    while (y>=1);
   printf("\n Power is %d",p);
   getch();
 }
