#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float r1, r2, dis, real, image, a, b, c;

    printf("Enter value of A , B , C : ");
    scanf("%f %f %f", &a, &b, &c);

    dis = b * b - 4 * a * c;

    if (dis > 0)
    {
        r1 = -b + sqrt(dis) / (2 * a);
        r2 = -b - sqrt(dis) / (2 * a);
        printf(" ROOT 1 = %.2f \n", r1);
        printf(" ROOT 2 = %.2f \n", r2);
    }
    else if (dis == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf(" ROOT 1 = ROOT 2 = %.2f \n", r1);
    }
    else
    {
        real = -b / (2 * a);
        image = sqrt(-dis) / (2 * a);
        printf(" ROOT 1 = %.2f + %.2f  \n", real, image);
        printf(" ROOT 2 = %.2f + %.2f \n", real, image);
    }
    getch();
}