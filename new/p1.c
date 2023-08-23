#include <stdio.h>

void get_array(int[][], int, int);
void print_array(int[][], int, int);
void add_matrix(int[][], int[][], int, int);

void main()
{
    int row1, col1, row2, col2, m1[5][5], m2[5][5];
    printf("\n How many row in 1st Matrix=>");
    scanf("%d", &row1);

    printf("\n How many column in 1st Matrix=>");
    scanf("%d", &col1);

    printf("\n How many row in 1st Matrix=>");
    scanf("%d", &row2);

    printf("\n How many column in 1st Matrix=>");
    scanf("%d", &col2);

    printf("\n Enter element is 1st Matrix\n");
    get_array(m1, row1, col1);
    get_array(m2, row2, col2);
    print_array(m1, row1, col1);
    print_array(m2, row2, col2);
    add_matrix(m1, m2, row1, col2);
}
void get_array(int a[][5], int x, int y)
{
    int i, j;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void print_array(int a[][5], int x, int y)
{
    int i, j;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("\t %d", a[i][j]);
        }
        printf("\n");
    }
}
void add_matrix(int a[][5], int b[][5], int x, int y)
{
    int i, j;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("\n %d", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}