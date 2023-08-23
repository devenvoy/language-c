#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int cnt = 0;
struct vehicle
{
    int vid;
    int vnumber;
    char city[20];
} v[5];
void add_data(); // UDF
void disp();
void search();
void main()
{
    int ch;
    while (1)
    {
        system("color d");
        printf("\n:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:");
        printf("\n\t\t ==> Structure vehical <==");
        printf("\n\t\t1. ADD new vehical info ");
        printf("\n\t\t2. Display");
        printf("\n\t\t3. Search");
        printf("\n\t\t4. Exit");
        printf("\n:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:");
        printf("\n =====>Enter your choice :");
        scanf("%d", &ch);
        if (ch == 4)
        {
            break;
        }
        switch (ch)
        {
        case 1:
            add_data();
            break;

        case 2:
            disp();
            break;

        case 3:
            search();
            break;

        default:
            printf(" \t\t\t Invalid");
        }
    }
}

void add_data()
{
    system("cls");
    if (cnt == 5)
    {
        printf("\n  XX you cant insert more than five records XX ");
    }
    else
    {
        printf("Enter vehicle id :");
        scanf("%d", &v[cnt].vid);
        printf("Enter vehicle number :");
        scanf("%d", &v[cnt].vnumber);
        printf("Enter vehicle city :");
        scanf("%s",v[cnt].city);
        cnt++;
    }
    getch();
    system("cls");
}

void disp()
{
    int i;
    system("cls");
    printf("\n:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:");
    if (cnt == 0)
    {
        printf("\n No Data Found");
    }
    else
    {
        for (i = 0; i < cnt; i++)
        {
            printf(" \n\t\t%3d %3d  %10s", v[i].vid, v[i].vnumber, v[i].city);
        }
    }
    getch();
    system("cls");
}

void search()
{

    system("cls");
    int f = 0, i;
    char temp_city[20];
    printf("\n \t\t Enter your search value : ");
    scanf("%s",temp_city);
    for (i = 0; i < cnt; i++)
    {
        if (strcmp(temp_city, v[i].city) == 0)
        {
            printf(" \n\t\t%3d %3d  %10s", v[i].vid, v[i].vnumber, v[i].city);
            f=1;
        }
    }
    if (f == 0)
    {
        printf(" \n No data found");
    }
}
