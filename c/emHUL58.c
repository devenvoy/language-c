/*****************************************************************************
     Prog.11  Write a program to print following output.
	      1
	      2 1
	      3 2 1
	      4 3 2 1
	      5 4 3 2 1
*****************************************************************************/
# include "stdio.h"
# include "conio.h"
void main()
{
 int a,b;
 clrscr();
 a=1;
 do
   {
   b=a;
   do
     {
      printf(" %d ",b);
      b--;
      }
      while(b>=1);
    a++;
    printf("\n\n");
    }
    while(a<=5);
  getch();
 }
