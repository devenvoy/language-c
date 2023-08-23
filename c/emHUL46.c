/****************************************************************************
     Prog.17  Write a program to print following output.
	      1 2 3 4 5
	      2 3 4 5
	      3 4 5
	      4 5
	      5
*****************************************************************************/
# include "stdio.h"
# include "conio.h"
void main()
{
 int a,b;
 clrscr();
 for(a=1;a<=5;a++)
   {
    for(b=a;b<=5;b++)
     {
      printf(" %d ",b);
     }
    printf("\n\n");
   }
  getch();
 }
