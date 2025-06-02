/*****************************************************************************
     Prog.14  Write a program to print following output.
        5 5 5 5 5
        4 4 4 4
        3 3 3
        2 2
        1
*****************************************************************************/
#include "stdio.h"

#include "devuts.h"
int main()
{
  int a, b;
  clrscr();
  for (a = 5; a >= 1; a--)
  {
    for (b = 1; b <= a; b++)
    {
      printf(" %d ", a);
    }
    printf("\n\n");
  }
  getchar();
  return 0;
}
