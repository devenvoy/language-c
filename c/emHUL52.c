/*****************************************************************************
     Prog.5  Write a program to calculate Sum of Even Nos. serige till 20.
******************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  int a, b;
  clrscr();
  a = 2;
  b = 0;
  do
  {
    printf("%d+", a);
    b = b + a;
    a = a + 2;
  } while (a <= 20);
  printf("\n Sum of Even Nos.: %d", b);
  getch();
  return 0;
}