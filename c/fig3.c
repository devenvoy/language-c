#include"stdio.h"
#include"conio.h"

void main()
{
	float p,x,y;
	int a,m;
	clrscr();
	a=0;
	m=90;
	p=3.1416;
	while (a<=m)
	{
		x=(p/m)*a;
		y=x;
		printf("%15d%13.4f\n",a,y);
		a=a+10;
	}
	getchar();
}