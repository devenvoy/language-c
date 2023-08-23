/****************************************************************************
     Prog.9  Write a program to print following output.
	      1
	      1 2
	      1 2 3
	      1 2 3 4
	      1 2 3 4 5
*****************************************************************************/
# include "stdio.h"
# include "conio.h"
void main()
{
 int a,b;
 clrscr();
 for(a=1;a<=5;a++)
   {
    for(b=1;b<=a;b++)
     {
      printf(" %d ",b);
     }
    printf("\n\n");
   }
  getch();
 }
