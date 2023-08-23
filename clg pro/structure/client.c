#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int cnt = 0;
struct client
{
    int cno;
    char cname[20];
    char inv_type[20]; // real-estate ,ppf,bonds ,fd, stocks
    int iamt;
    int dur;
} c[5];

void add_data();
void disp();
void search();
int main()
{
    int ch;
    while (1)
    {
        system("color 5a");
        printf("\n:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:");
        printf("\n\t\t ==> Client Details <==");
        printf("\n\t\t 1. ADD new client info ");
        printf("\n\t\t 2. Display");
        printf("\n\t\t 3. Search");
        printf("\n\t\t 4. Exit");
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
    return 0;
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
        printf("\n Enter client no. :");
        scanf("%d", &c[cnt].cno);
        printf("\n Enter client name :");
        scanf("%s", c[cnt].cname);
        printf("\n Enter investment type : ");
        scanf("%s", c[cnt].inv_type);
        printf("\n Invested amount :");
        scanf("%d", &c[cnt].iamt);
        printf("\n Duration :");
        scanf("%d", &c[cnt].dur);
        cnt++;
    }
    system("cls");

}

void disp()
{
    system("cls");

    int i;
    if (cnt == 0)
        printf("\n No data found");
    else
    {
        for (i = 0; i < cnt; i++)
        {
            printf("\n %d ,%s ,%s , %d ,%d", c[i].cno, c[i].cname, c[i].inv_type, c[i].iamt, c[i].dur);
        }
    }
    system("cls");

}

void search()
{
    int i;
    int max = 0;
    printf("\n Highest Amount in data :");
    for (i = 0; i < cnt; i++)
    {
        if (c[i].iamt > c[i + 1].iamt)
        {
            max = i;
        }
    }
    printf("\n %d ,%s ,%s , %d ,%d", c[max].cno, c[max].cname, c[max].inv_type, c[max].iamt, c[max].dur);
}
