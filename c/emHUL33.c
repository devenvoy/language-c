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
  clrscr();
  printf("\nEnter Value of X & Y :");
  scanf("%d%d", &x, &y);
  for (p = 1; y >= 1; y--)
  {
    p = p * x;
  }
  printf("\n Power is %d", p);
  getch();
}
