/*****************************************************************************
     Prog.6  Write a program to calculate Sum of Odd Nos. serige till 19.
******************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  int a, b;
  clrscr();
  b = 0;
  for (a = 1; a <= 19; a = a + 2)
  {
    printf("%d + ", a);
    b = b + a;
  }
  printf("\n Sum of Odd Nos.: %d", b);
  getch();
  return 0;
}