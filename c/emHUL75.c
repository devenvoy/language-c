/****************************************************************************
    Prog.1  Write a program to find length of string.
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
void main()
{
  char a[30];
  int i, l;
  // clrscr();
  printf("Enter Any String:");
  gets(&a[0]);
  i = 0;
  l = 0;
  while (a[i] != '\0')
  {
    i++;
    if (a[i] != ' ')
    {
      l++;
    }
  }
  printf("\n Length is %d", l);
  getch();
  return 0;
}