/****************************************************************************
    Prog.1  Write a program to print Even No. series till 20.
*****************************************************************************/
#include "stdio.h"

void main()
{
  int n, a;
  // clrscr();
  a = 2;
  printf("enter number of element :");
  scanf("%d", &n);
  while (a <= n)
  {
    printf("%d ", a);
    a = a + 2;
  }
  getchar();
}