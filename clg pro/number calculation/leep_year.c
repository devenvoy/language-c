// find the given year is leep year or not
#include <stdio.h>

void main()
{
   int year;
   printf("\n\t\t\t Enter a year to check if it leep year or not\n\n\t\t\t\t");
   scanf("%d", &year);
   if (year % 400 == 0)
      printf("\n\n\t\t\tYes ..... %d  is LEEP YEAR ..... ", year);
   else if (year % 100 == 0)
      printf("\n\n\t\t\tYes ..... %d  is LEEP YEAR ..... ", year);
   else if (year % 4 == 0)
      printf("\n\n\t\t\tYes ..... %d  is LEEP YEAR ..... ", year);
   else
      printf("\n\n\t\t\t NO ... %d  is not LEEP YEAR ..... ", year);
 
   getchar();
 
 //  return 0;
}