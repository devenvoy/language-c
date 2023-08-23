/* write a program to find student grade from the criteria */
#include <stdio.h>
#include <conio.h>
int main()
{
	float per;
	printf("Enter your percentage:");
	scanf("%f", &per);

	if (per <= 100)
	{
		if (per >= 90)
		{
			printf("\n congratulation... you got A+ grade");
		}
		else if (per >= 80)
		{
			printf("\n excellent ... you got A grade");
		}
		else if (per >= 70)
		{
			printf("\n good ... you got B grade");
		}
		else if (per >= 60)
		{
			printf("\n nice... you got c grade");
		}
		else if (per >= 50)
		{
			printf("\n poor ... you got D grade");
		}
		else if (per < 50)
		{
			printf("\n sorrow ... you have failed");
			printf("\n Try harder next time");
		}
	}
	else
	{
		printf("Invalid number \nYou can't get more than 100 ");
	}
	return 0;
}
