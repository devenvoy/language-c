*Write a Program to accept N number of Strings from the user and display
all palindrome words from that list*                                                                                                                                             #include<stdio.h>
#include<string.h>
void main()
{
	char lang[5][20],temp[20]; 
	int i=0;
	for(i=0;i<5;i++)
	{
		printf("\n Enter Strings=>");
		scanf("%s",lang[i]);
	}
	printf("\n ===> List of Palindrome String <===");
	for(i=0;i<5;i++)
	{
		strcpy(temp,lang[i]);
		strrev(lang[i]);
		if(strcmp(lang[i],temp)==0)
		{
			printf("\n %s is palindrome",temp);
		}
	}
}