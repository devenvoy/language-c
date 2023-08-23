/*
WRITE A PROGRAM TO TAKE THE VALUE FROM USER AS INPUT ANY CHARACTER 
AND CHECK IT IS ALPHABET , DIGIT OR SPECIAL CHARACTER USING SWITCH 
STATEMENT

ALPHABET - "A - Z" "a - z"
DIGIT - 0 - 9
SPECIAL CHAR - OTHER THAN UPPER TWO TYPE

*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
    char ch;
    int rank = 0;
    //clrscr();
    printf("\n Enter single char : ");
    ch = getchar();
    if(isdigit(ch))
    {
        rank = 1;
    }
    else if(isalpha(ch))
    {
        rank=2;
    }
    else
    {
        rank=3;
    }

    switch (rank)
    {
    case 1:
    printf(" \n IT IS DIGIT ");
        break;
    case 2:
    printf("\n IT IS ALPHABET ");
    break;
    case 3:
    printf(" \n IT IS SPECIAL CHARACTER ");
    break;
    }

    getch();
    

}