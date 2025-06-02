/****************************************************************************
     Prog.8  Write a program to print following output.
        *
        * *
        * * *
        * * * *
        * * * * *
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
      printf(" * ");
      b++;
    } while (b <= a);
    a++;
    printf("\n\n");
  } while (b <= 5);
  getch();
}
