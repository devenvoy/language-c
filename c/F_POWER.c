/****************************************************************************
             y
    Prog.4  Write a program to calculate  X .
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  int x, y, p;
  // clrscr();
  printf("\nEnter Value of X & Y :");
  scanf("%d%d", &x, &y);
  p = 1;
  while (y >= 1)
  {
    p = p * x;
    y--;
  }
  printf("\n Power is %d", p);
  getch();
  return 0;
}