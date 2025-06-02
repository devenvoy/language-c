#include <stdio.h>

int romanToInt();
int getvalue();

int main()
{
    printf("\n\n\t\t\t\t****NOTICE**** ");
    printf("\n\t\t\t : Enter Value In UpperCase :\n");
    system("pause");
    system("cls");
    char s[13];
    int r;
    printf("Enter roman value :");
    scanf("%s", s);
    // getvalue();
    r = romanToInt(s);
    // r=result;
    printf(" Result : %d", r);
}

int getValue(const char *s)
{
    switch (*s)
    {
    case 'I':
        return (s[1] == 'V' || s[1] == 'X') ? -1 : 1;
    case 'X':
        return (s[1] == 'L' || s[1] == 'C') ? -10 : 10;
    case 'C':
        return (s[1] == 'D' || s[1] == 'M') ? -100 : 100;
    case 'V':
        return 5;
    case 'L':
        return 50;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    }
    return 0;
}

int romanToInt(char *s)
{
    int result = 0;

    int x = 0;
    for (; *s != '\0'; ++s)
    {
        // printf("%s \n",s);
        x = getValue(s);
        // printf("%d\n",x);
        result += x; // getValue(s);
    }
    return result;
}
