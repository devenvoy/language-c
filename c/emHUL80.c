/*****************************************************************************
    Prog.6  Write a program to chake whether given string is PALINDROM  OR
      NOT PALINDROM.
******************************************************************************/
#include "stdio.h"

void main()
{
  char a[30];
  int i = 0, j = -1, k = 1;
  clrscr();
  printf("Enter Any String:");
  gets(&a[0]);
  while (a[i] != '\0')
  {
    i++;
    j++;
  }
  i = 0;
  while (a[k] != '\0')
  {
    if (a[i] == a[j])
    {
      i++;
      j--;
      k++;
    }
    else
    {
      k++;
    }
  }
  if (a[i] == a[j])
  {
    printf("\n PALINDROM ");
  }
  else
  {
    printf("\n NOT PALINDROM ");
  }
  getchar();
  return 0;
}