/****************************************************************************
    Prog.2  Write a program to count No. of Words, No. of Digits, NO. of
      Centensies from a givem string.
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
void main()
{
  char a[50];
  int i, w = 1, d = 0, c = 0;
  // clrscr();
  printf("Enter Any String:");
  gets(a);
  i = 0;
  while (a[i] != '\0')
  {
    if (a[i] == ' ')
    {
      w++;
    }
    if (a[i] == '0' || a[i] == '1' || a[i] == '2' || a[i] == '3' || a[i] == '4' || a[i] == '5' || a[i] == '6' || a[i] == '7' || a[i] == '8' || a[i] == '9')
    {
      d++;
    }
    if (a[i] == '.')
    {
      c++;
    }
    i++;
  }
  printf("\n No. Of Words Are:  %d", w);
  printf("\n No. Of Digits Are:  %d", d);
  printf("\n No. Of Centensies Are:  %d", c);
  getch();
}
