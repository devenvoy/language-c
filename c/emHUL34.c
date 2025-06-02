/*****************************************************************************
     Prog.5  Write a program to calculate Sum of Even Nos. serige till 20.
******************************************************************************/
#include "stdio.h"

#include "devuts.h"
int main()
{
  int a, b;
  clrscr();
  b = 0;
  for (a = 2; a <= 20; a = a + 2)
  {
    printf("%d + ", a);
    b = b + a;
  }
  printf("\n Sum of Even Nos.: %d", b);
  getchar();
  return 0;
}