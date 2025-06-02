/****************************************************************************
       Prog.10  Write a program to find Absolute value for given value.
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
void main()
{
  int a, v;
  // clrscr();
  printf("\nEnter Value:");
  scanf("%d", &a);
  if (a > -1)
  {
    v = a * 1;
  }
  else
  {
    v = a * -1;
  }
  printf("\n The Absolute Value |%d| = %d", a, v);
  getch();
  return 0;
}