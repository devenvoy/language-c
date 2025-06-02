/*****************************************************************************
     Prog.17  Write a program to print following output.
        1 2 3 4 5
        2 3 4 5
        3 4 5
        4 5
        5
*****************************************************************************/
#include "stdio.h"

#include "devuts.h"
int main()
{
  int a, b;
  clrscr();
  a = 1;
  do
  {
    b = a;
    do
    {
      printf(" %d ", b);
      b++;
    } while (b <= 5);
    a++;
    printf("\n\n");
  } while (a <= 5);
  getchar();
  return 0;
}