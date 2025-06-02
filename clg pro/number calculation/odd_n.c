/****************************************************************************
    Prog.2  Write a program to print Odd No. series till 19.
*****************************************************************************/
#include "stdio.h"

void main()
{
  int n, a;
  // clrscr();
  a = 1;
  printf("enter number of element :");
  scanf("%d", &n);
  while (a <= n)
  {
    printf("%d ", a);
    a = a + 2;
  }
  getchar();
}