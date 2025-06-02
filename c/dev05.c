#include <stdio.h>
#include "devuts.h"

int main()
{
	char trueresult[] = "true";
	char falseresult[] = "false";
	float a, b;
	bool ab;

	printf("\nEnter Value A: ");
	scanf("%f", &a);
	printf("Enter Value B: ");
	scanf("%f", &b);

	ab = (a == b);

	if (ab)
	{
		printf("a is equal to b: %s\n", printBool(ab));
	}
	else if (a < b)
	{
		printf("a is less than b\n");
	}
	else if (a > b)
	{
		printf("a is greater than b\n");
	}

	if (a == 0 && b == 0)
	{
		printf("Both a and b are zero\n");
	}
	else if (a != 0 && b == 0)
	{
		printf("a is non-zero and b is zero\n");
	}

	getchar();
	return 0;
}
