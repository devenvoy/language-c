/*
Write a Menu base C program with following options.
•	Addition of two Matrices.
•	Subtraction of two Matrices.
•	Multiplication of two Matrices.
•	Transpose of Single Matrix.
•	Exit.
*/
#include <stdio.h>
void input(int *r1, int *r2, int *c1, int *c2)
{
    int row1, row2, col1, col2;
    printf("\nEnter the #rows and #cols for matrix A: ");
    scanf("%d%d", &row1, &col1);

    printf("Enter the #rows and #cols for matrix B: ");
    scanf("%d%d", &row2, &col2);
    *r1 = row1;
    *c1 = col1;
    *r2 = row2;
    *c2 = col2;
}
void print(int r1, int c1, int arr[r1][c1])
{
    int i, j;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("\t %d", arr[i][j]);
        }
        printf("\n");
    }
}
void scan(int r1, int c1, int mat[r1][c1])
{
    int i, j;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("m[%d][%d]", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}
void main()
{
    int m1[3][3], m2[3][3], m3[3][3];
    int ch = 0, r1 = 0, r2 = 0, c1 = 0, c2 = 0, i = 0, j = 0, k = 0;
    while (1)
    {
        printf("\n 1.Addition");
        printf("\n 2.Subtraction");
        printf("\n 3.Multiplication");
        printf("\n 4.Transpose");
        printf("\n 5.Exit");
        printf("\n Enter your choice : ");
        scanf("%d", &ch);

        if (ch == 5)
        {
            break;
        }
        switch (ch)
        {
        case 1:

            input(&r1, &r2, &c1, &c2);

            if (r1 == r2 && c1 == c2)
            {
                printf("\n Enter 1st Matrix elements : \n");
                scan(r1, c1, m1);
                printf("\n 1st Matrix is \n");
                print(r1, c1, m1);
                printf("\n Enter 2nd Matrix elements : \n");
                scan(r2, c2, m2);
                printf("\n 2nd Matrix is \n");
                print(r2, c2, m2);
                printf("\n Addition of two Matrix  :\n");

                for (i = 0; i < r2; i++)
                {
                    for (j = 0; j < r2; j++)
                    {
                        printf("\t %d", m1[i][j] + m2[i][j]);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("\n Not possible");
            }
            break;

        case 2:
            input(&r1, &r2, &c1, &c2);

            if (r1 == r2 && c1 == c2)
            {
                printf("\n Enter 1st Matrix elements : \n");
                scan(r1, c1, m1);
                printf("\n 1st Matrix is \n");
                print(r1, c1, m1);
                printf("\n Enter 2nd Matrix elements : \n");
                scan(r2, c2, m2);
                printf("\n 2nd Matrix is \n");
                print(r2, c2, m2);
                printf("\n Subtraction of two Matrix  :\n");
                for (i = 0; i < r2; i++)
                {
                    for (j = 0; j < c2; j++)
                    {
                        printf("\t %d", m1[i][j] - m2[i][j]);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("\n Not possible");
            }
            break;

        case 3:
            input(&r1, &r2, &c1, &c2);

            if (r1 == r2 && c1 == c2)
            {
                printf("\n Enter 1st Matrix elements : \n");
                scan(r1, c1, m1);
                printf("\n 1st Matrix is \n");
                print(r1, c1, m1);
                printf("\n Enter 2nd Matrix elements : \n");
                scan(r2, c2, m2);
                printf("\n 2nd Matrix is \n");
                print(r2, c2, m2);
                printf(" \n Multiplication of two Matrix is :\n");
                for (i = 0; i < r2; i++)
                {
                    for (j = 0; j < c2; j++)
                    {
                        m3[i][j] = 0;
                        for (k = 0; k < 3; k++)
                        {
                            m3[i][j] = m3[i][j] + m1[i][k] * m2[k][j];
                        }
                    }
                }
                print(r1, c1, m3);
            }
            else
            {
                printf("\n Not possible");
            }
            break;

        case 4:
            input(&r1, &r2, &c1, &c2);
            if (r1 == c1)
            {
                printf("\n Enter Matrix elements : \n");
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c1; j++)
                    {
                        scanf("%d", &m1[i][j]);
                    }
                }
                printf("Transpose of matrix :\n");
                // printf("*******\n");
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c1; j++)
                    {
                        printf("%d\t", m1[j][i]);
                    }
                    printf("\n");
                }
            }
            else
            {

                printf("\n Matrix should not allow...");
            }
        }
    }
    // getch();
}
