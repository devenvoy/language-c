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
 while (a<=5)
   {
   b=5;
   while(b>=a)
     {
      printf(" * ");
      b--;
      }
    a++;
    printf("\n\n");
    }
  getch();
 }
