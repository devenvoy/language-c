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
 //clrscr();
 a=1;
 while (a<=5)
   {
   b=a;
   while(b>=1)
     {
      printf(" %d ",b);
      b--;
      }
    a++;
    printf("\n\n");
    }
  getch();
 }
