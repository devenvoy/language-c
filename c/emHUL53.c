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
  a = 1;
  b = 0;
  do
  {
    printf("%d+", a);
    b = b + a;
    a = a + 2;
  } while (a <= 19);
  printf("\n Sum of Odd Nos.: %d", b);
  getch();
}