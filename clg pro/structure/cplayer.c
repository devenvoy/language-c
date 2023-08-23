#include <stdio.h>
#include <stdlib.h>

struct cricket
{
    struct team
    {
        char pname[20];
        char tname[20];
        int bavg;
    };
};

int main()
{
    cricket p[20];
    team t[20];
    int i, n;
    printf("How many records you want add : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter player information :\n");
        printf("Player name:=> ");
        scanf("%s", &p[i].t[i]pname);
        printf("Player's Team name :=> ");
        scanf("%s", p[i].tname);
        printf("Batting average :=>");
        scanf("%f", &p[i].bavg);
        printf("\n");
    }
    for (int j = 0; j < n; j++)
        ;
    {
        printf("%10s %10s %3d", p[i].pname, p[i].tname, p[i].bavg);
        printf("\n");
    }
}