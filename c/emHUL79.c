/****************************************************************************
    Prog.5  Write a program to print Reverse string for a given string.
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  char a[30];
  int i;
  clrscr();
  printf("Enter Any String:");
  gets(&a[0]);
  i = 0;
  while (a[i] != '\0')
  {
    i++;
  }
  while (i >= 0)
  {
    printf("%c", a[i]);
    i--;
  }
  getch();
}
