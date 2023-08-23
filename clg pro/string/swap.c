#include<stdio.h>
#include<string.h>

void main()
{
	char a[5];
	char b;
	int i,j;
	
	system("color A");
	printf("Enter a name to swap :");
	scanf("%s",a);
	
	for( i=5;i>0;i--)
	{
		if(i%4== 0 )
		{
			b=a[i];
			a[i]=a[i+1];
			a[i+1]=b;
						
		}
	}
	
	printf("Result with swap values: %s",a);
//	for(j=0;j<5;j++)
//	{
//		printf("%c",a[j]);
//	}	
//	getch();
}
