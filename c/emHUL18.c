/*****************************************************************************
   Prog.7  Write a program to calculate Sum of Natural Nos. serige till 10.
******************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  int a, b;
  clrscr();
  a = 1;
  b = 0;
  while (a <= 10)
  {
    printf("%d + ", a);
    b = b + a;
    a = a + 1;
  }
  printf("\nSum of Natural Nos.: %d", b);
  getch();
  return 0;
}