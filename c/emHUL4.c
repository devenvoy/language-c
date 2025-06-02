/****************************************************************************
	 Prog.4  Write a program to chake whether given No. is Zero,
		 Positive and Nagetive.
*****************************************************************************/
# include "stdio.h"
# include "conio.h"
# include "devuts.h"
 int main()
{
   int n;
   clrscr();
   printf("\nEnter Any No.:");
   scanf ("%d",&n);
   if (n == 0)
    {
    printf("\n No. is Zero");
    }
  else
   {
    if(n > 0)
    {
      printf("\n No. is Positive");
    }
    else
     {
       printf("\n No. is Negative");
     }
   }
   getch();
   return 0;
}
