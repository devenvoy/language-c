#include <stdio.h>
#include <conio.h>
#include <string.h>
int strlen_function(char str[]);
int main()
{

    char str[20];

    printf("Enter the string:-");
    scanf("%s", &str); // for single word string
    // gets(str);             // for multi word string

    int length = strlen_function(str);

    printf("The length of the string is :%d ", length);

    return 0;
}
int strlen_function(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}