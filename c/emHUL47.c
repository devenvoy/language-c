/****************************************************************************
     Prog.18  Write a program to print following output.
        1
        2  3
        4  5  6
        7  8  9  10
        11 12 13 14 15
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  int a, b, c;
  clrscr();
  c = 1;
  for (a = 1; a <= 5; a++)
  {
    for (b = 1; b <= a; b++)
    {
      printf(" %d ", c);
      c++;
    }
    printf("\n\n");
  }
  getch();
}
