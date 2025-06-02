/*****************************************************************************
     Prog.5  Write a program to calculate Sum of Even Nos. serige till 20.
******************************************************************************/
#include "stdio.h"

void main()
{
  int n, a, b;
  // clrscr();
  a = 2;
  b = 0;
  printf("enter number of element :");
  scanf("%d", &n);
  while (a <= n)
  {
    printf("%d+", a);
    b = b + a;
    a = a + 2;
  }
  printf("\n Sum of Even Nos.: %d", b);
  getchar();
}