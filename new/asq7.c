// Write a C program to check the given string is palindrome or not using UDF.
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end)
{
    if (start >= end)
        return 1;
    if (str[start] != str[end])
        return 0;
    return isPalindrome(str, start + 1, end - 1);
}

int main()
{
    char str[100];
    int flag;
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    flag = isPalindrome(str, 0, n - 1);
    if (flag == 1)
        printf("The string %s is a palindrome\n", str);
    else
        printf("The string %s is not a palindrome\n", str);
    return 0;
}