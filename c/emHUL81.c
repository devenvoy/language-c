/****************************************************************************
    Prog.7  Write a program to replace a world with any given world.
*****************************************************************************/
#include"stdio.h"
#include"conio.h"
void main()
{
 char a[90],b[90],c[90];
 int d=0,e=0,f=0,g=0,j=0;
 clrscr();
 printf(" ENTER YOUR STRINGS: ");gets (&a[0]);
 printf(" CHANGE WORD: "); gets (&b[0]);
 printf(" WITH WORD: "); gets (&c[0]);
 while (a[d]!='\0')
  {
   if(a[d]==b[e])
    {
      d++,e++;
      if(b[e]=='\0')
       {
	j=e;
	while (c[f]!='\0')
	 {
	  f++;
	 }
	g=f,d=d-e;
	if(e==f)
	 {
	  f=0;
	  while (c[f]!='\0')
	   {
	    a[d]=c[f];
	    f++,d++;
	   }
	  e=0,f=0;
	 }
	else
	 {
	  if(e<f)
	   {
	    e=0,f=0;
	    while (b[e]!='\0')
	     {
	      a[d]=c[f];
	      e++,f++,d++;
	     }
	    while (a[e]!='\0')
	     {
	      e++;
	     }
	    g=g-f,j=e,e=e+g;
	    while (d!=j)
	     {
	      a[e]=a[j];
	      e--,j--;
	     }
	    a[e]=a[j];
	    while (c[f]!='\0')
	     {
	      a[d]=c[f];
	      d++,f++;
	     }
	    e=0,f=0;
	   }
	  else
	   {
	    e=0,f=0;
	    while (c[f]!='\0')
	     {
	      a[d]=c[f];
	      d++,e++,f++;
	     }
	    e=d,f=j-g,j=e,d=d+f;
	    while (a[d]!='\0')
	     {
	      a[j]=a[d];
	      j++,d++;
	     }
	    a[j]=a[d];
	    d=e,e=0,f=0;
	   }
	 }
       }
    }
   else
    {
     d++,e=0;
    }
  }
 printf (" STRING IS:\n        %s ",&a[0]);
 getchar();
}
