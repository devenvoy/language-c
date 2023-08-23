/*****************************************************************************
     Prog.12  Write a program to print following output.
	       * * * * *
	       * * * *
	       * * *
	       * *
	       *
******************************************************************************/
# include "stdio.h"
# include "conio.h"
void main()
{
 int a,b;
 clrscr();
 a=1;
 do
   {
   b=5;
   do
     {
      printf(" * ");
      b--;
      }
      while(b>=a);
    a++;
    printf("\n\n");
    }
    while(a<=5);
  getch();
 }
