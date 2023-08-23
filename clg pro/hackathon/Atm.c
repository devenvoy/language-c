
#include <stdio.h>
#include <conio.h>
#include <string.h>

void password(void);
void numtender(int);
int main()
{

    system("color B");
    password();
    return 0;
}

void numtender(int amount)
{
    int den[] = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
    int non, i;

    if (amount <= 0)
        return;
	
    printf("\n Denomination Details:");
	system("color A");
    for (i = 8; i >= 0; i--)
    {
        non = amount / den[i];
        if (non * den[i] != 0)
            printf("\n %d  X  %d = %d", den[i], non, non * den[i]);

        amount = amount % den[i];
        if (amount == 0)
            break;
    }
}

void password(void)
{
    char passw[20] = {"dev123"};
    char ch, pass[20];
    char w = '*';
    int i = 0, amount;

    printf(" \n Password : ");
    while (ch != 13)
    {
        ch = getch();
        if (ch != 13 && ch != 8)
        {
            printf("%c", w);
            pass[i] = ch;
            i++;
        }
    }
    pass[i] = '\0';
    if (strcmp(pass, passw) == 0)
    {
        printf(" \n CORRECT PASSWORD.\n\n\t");
        Sleep(1000);
        system("cls");
        printf("Enter a number to be tendered :");
        scanf("%d", &amount);
        system("cls");
        numtender(amount);
        
    }
    else
    {
        password();
    }
}
