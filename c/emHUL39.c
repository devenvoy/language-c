/****************************************************************************
     Prog.10  Write a program to print following output.
       1
       2 2
       3 3 3
       4 4 4 4
       5 5 5 5 5
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  int a, b;
  clrscr();
  for (a = 1; a <= 5; a++)
  {
    for (b = 1; b <= a; b++)
    {
      printf(" %d ", a);
    }
    printf("\n\n");
  }
  getch();
  return 0;
}
