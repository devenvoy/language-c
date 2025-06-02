/****************************************************************************
   Prog.4  Write a program to replace all " a " with " x ".
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
    if (a[i] == 'a')
    {
      a[i] = 'x';
    }
    i++;
  }
  i = 0;
  while (a[i] != '\0')
  {
    printf("%c", a[i]);
    i++;
  }
  getch();
  return 0;
}