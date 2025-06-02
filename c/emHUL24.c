/*****************************************************************************
     Prog.13  Write a program to print following output.
        5 4 3 2 1
        5 4 3 2
        5 4 3
        5 4
        5
*****************************************************************************/
#include "stdio.h"

#include "devuts.h"
int main()
{
  int a, b;
  clrscr();
  a = 1;
  while (a <= 5)
  {
    b = 5;
    while (b >= a)
    {
      printf(" %d ", b);
      b--;
    }
    a++;
    printf("\n\n");
  }
  getchar();
  return 0;
}