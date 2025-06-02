/****************************************************************************
      Prog.1  Write a program to calculate Sum of any two Nos..
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
void main()
{
   int a, b, c;
   // clrscr();
   printf("\nEnter Any Two Nos.:");
   scanf("%d%d", &a, &b);
   c = a + b;
   printf("\n Sum is %d", c);
   getch();
   return 0;
}
