/*****************************************************************************
     Prog.15  Write a program to print following output.
        1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2
        1
*****************************************************************************/
#include "stdio.h"

#include "devuts.h"
int main()
{
  int a, b;
  clrscr();
  a = 5;
  do
  {
    b = 1;
    do
    {
      printf(" %d ", b);
      b++;
    } while (b <= a);
    a--;
    printf("\n\n");
  } while (a >= 1);
  getchar();
  return 0;
}