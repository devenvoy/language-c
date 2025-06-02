/*Arithmetic operatins    */

#include <stdio.h>

void main()
{
	int a, b, c;
	a = 20;
	b = 40;
	c = a + b;
	printf("value of a:%d and b:%d ", a, b);
	printf("\n sum of a and b is :%d", c);
	c = a - b;
	printf("\n sub of a and b is :%d", c);
	c = a * b;
	printf("\n multiplication of a and b is :%d", c);
	c = a / b;
	printf("\n division of a and b is :%d", c);
	c = a % b;
	printf("\n module of a and b is :%d", c);
	c = a++;
	printf("\n adision(++) of a and b is :%d", c);
	c = a--;
	printf("\n subtraction(--) of a and b is :%d", c);

	getchar();
}
