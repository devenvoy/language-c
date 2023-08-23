/*****************************************************************************
   Prog.7  Write a program to calculate Sum of Natural Nos. serige till 10.
******************************************************************************/
# include "stdio.h"
# include "conio.h"
void main()
{
 int a,b;
 clrscr();
 b=0;
 for (a=1;a<=10;a=a+1)
   {
    printf("%d+",a);
    b=b+a;
   }
 printf("\n Sum of Natural Nos.: %d",b);
 getch();
}