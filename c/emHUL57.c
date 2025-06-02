/****************************************************************************
     Prog.10  Write a program to print following output.
       1
       2 2
       3 3 3
       4 4 4 4
       5 5 5 5 5
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
    b = 1;
    do
    {
      printf(" %d ", a);
      b++;
    } while (b <= a);
    a++;
    printf("\n\n");
  } while (a <= 5);
  getchar();
  return 0;
}