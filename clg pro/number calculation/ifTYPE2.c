/* find number is odd or even usinfg if(sencond type)



	####(condision)?statement1 :statement2;###


	  */

#include <stdio.h>
#include <conio.h>
void main()
{
	int num;
	printf("Enter A number :");
	scanf("%d", &num);
	(num % 2 == 0) ? printf("EVEN") : printf("ODD");

	getch();
}
