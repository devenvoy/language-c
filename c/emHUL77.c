/****************************************************************************
     Prog.3  Write a program to find No. of " a " is givem string.
*****************************************************************************/
#include "stdio.h"

#include "devuts.h"
int main()
{
  char a[30];
  int i, w = 0;
  clrscr();
  printf("Enter Any String:");
  gets(&a[0]);
  i = 0;
  while (a[i] != '\0')
  {
    if (a[i] == 'a')
    {
      w++;
    }
    i++;
  }
  printf("\n No. of  a :  %d", w);
  getchar();
  return 0;
}