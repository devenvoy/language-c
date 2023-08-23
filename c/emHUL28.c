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
 a=1;
 while (a<=5)
   {
   b=a;
   while(b<=5)
     {
      printf(" %d ",b);
      b++;
      }
    a++;
    printf("\n\n");
    }
  getch();
 }
