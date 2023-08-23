/*****************************************************************************
     Prog.16  Write a program to print following output.
	      5 4 3 2 1
	      4 3 2 1
	      3 2 1
	      2 1
	      1
*****************************************************************************/
# include "stdio.h"
# include "conio.h"
void main()
{
 int a,b;
 clrscr();
 for(a=5;a>=1;a--)
   {
    for(b=a;b>=1;b--)
     {
      printf(" %d ",b);
     }
    printf("\n\n");
   }
  getch();
 }
