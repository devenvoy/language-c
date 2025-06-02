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
  a = 1;
  c = 1;
  do
  {
    b = 1;
    do
    {
      printf(" %d ", c);
      b++;
      c++;
    } while (b <= a);
    a++;
    printf("\n\n");
  } while (a <= 5);
  getch();
  return 0;
}