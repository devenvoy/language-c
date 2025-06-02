/****************************************************************************
     Prog.9  Write a program to print following output.
        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  int a, b;
  clrscr();
  a = 1;
  while (a <= 5)
  {
    b = 1;
    while (b <= a)
    {
      printf(" %d ", b);
      b++;
    }
    a++;
    printf("\n");
  }
  getch();
  return 0;
}
