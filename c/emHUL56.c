/*****************************************************************************
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
  do
  {
    b = 1;
    do
    {
      printf(" %d  ", b);
      b++;
    } while (b <= a);
    a++;
    printf("\n\n");
  } while (b <= 5);
  getch();
}
