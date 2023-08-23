/*****************************************************************************
     Prog.6  Write a program to calculate Sum of Odd Nos. serige till 19.
******************************************************************************/
#include "stdio.h"
#include "conio.h"
void main()
{
  int n, a, b;
  // clrscr();
  a = 1;
  b = 0;
  printf("enter number of element :");
  scanf("%d", &n);
  while (a <= n)
  {
    printf("%d+", a);
    b = b + a;
    a = a + 2;
  }
  printf("\n Sum of Odd Nos.: %d", b);
  getch();
}