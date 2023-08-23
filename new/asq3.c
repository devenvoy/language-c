/*
Write a C structure volume with fields: litter and milli littre.
 Read the value of two volumes and add them,
 if the value of milli litre is more than 1000 then add it to litter value.
*/
#include <stdio.h>
#include <conio.h>

struct volume
{
    float liter;
    float mililiter;
    float total;
} m[2];

int main()
{
    float i, j;
    int n = 0;
    while (n != 2)
    {
        printf("\nEnter volume of %d in liter:", n + 1);
        scanf("%f", &i);
        m[n].liter = i;

        printf("\nEnter volume of %d in mililiter:", n + 1);
        scanf("%f", &j);
        m[n].mililiter = j / 1000;

        m[n].total = m[n].liter + m[n].mililiter;
        n++;
    }

    printf("\n Total volume of Two container is %.3f liter", m[0].total + m[1].total);
    return 0;
}