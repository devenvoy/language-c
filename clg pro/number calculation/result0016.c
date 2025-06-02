/* ASK USERS NAME AND GIVE EM CODE AND ASK  MARKS OF SUBJECT AND GIVE RESULT  */

#include <stdio.h>

void main()
{
	int n1, n2, n3, n4, n5, sum;
	float per;
	char dev[30];

	printf("Enter your name :");
	scanf("%s", &dev);
	printf("Hello!.. %s good afternoon your code is 0016", dev);
	printf("\nEnter your subjects marks:");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

	if (n1 > 100 || n2 > 100 || n3 > 100 || n4 > 100 || n5 > 100)
	{
		printf("INVALID NUMBER");
	}
	else
	{
		sum = n1 + n2 + n3 + n4 + n5;
		per = sum / 5;
		printf("\n%s you got total %d marks and %f percentage and ", dev, sum, per);
		if (per < 100)
			if (per > 90)
				printf("A+ grade");
			else if (per > 80)
				printf("A grade");
			else if (per > 70)
				printf("B grade");
			else if (per > 60)
				printf("C grade");
			else if (per > 50)
				printf("D grade");
			else if (per > 40)
				printf("E grade");
			else
				printf("you have failed");
		else
			printf("INVALID PERCENTAGE");
	}

	getchar();
}
