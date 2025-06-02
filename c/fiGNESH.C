# include<stdio.h>
# include<conio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,ad;
	int x=0,y=-1,z=1;
	char s[30];
	// clrscr();
	printf("\t\tEnter My Password\n\t\t");
	gets (&s[0]);
	while (s[x]!='\0')
	{
		x++;
		y++;
	}
	x=0;
	while (s[z]!='\0')
	{
		if (s[x]==s[y])
		{
			x++;
			y--;
			z++;
		}
		else
		{
			z++;
		}
	}
	if (s[x]==s[y])
	{
	a=1;
	ad=0;
	printf("\n\n\n\n\n");
	while (a<=9)
	{
		printf("\t");
		c=9;
		while (c>=a)
		{
			printf("   ");
			c--;
		}
		b=1;
		while (b<=a)
		{
			printf("-%d-",b);
			b++;
		}
		d=ad;
		while (d>=1)
		{
			printf("-%d-",d);
			d--;
		}
		a++;
		ad++;
		printf("\n");
	}
	e=1;
	h=8;
	j=7;
	while (e<=8)
	{
		printf("\t");
		f=0;
		while (f<=e)
		{
			printf("   ");
			f++;
		}
		g=1;
		while (g<=h)
		{
			printf("-%d-",g);
			g++;
		}
		i=j;
		while (i>=1)
		{
			printf("-%d-",i);
			i--;
		}

		e++;
		h--;
		j--;
		printf("\n");
	}
	}
	else
	{
		printf("\n\t Please Try Again");
	}
	getchar();
}

