/****************************************************************************
    Prog.4  Write a program to calculate  X ^ Y
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  int x, y, p =1, i;
  clrscr();
  printf("Enter value of X (base) and Y (exponent): ");
  scanf("%d%d", &x, &y);
  for (i = 1; i <= y; i++)
  {
    p = p * x;
  }
  printf("\n Power is %d", p);
  getch();
  return 0;
}