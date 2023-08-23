#include <stdio.h>

struct Salesman
{
    int id;
    char name[20];
    float commission;
};

int main()
{
    struct Salesman salesmen[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter details of Salesman %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &salesmen[i].id);
        printf("Name: ");
        scanf("%s", salesmen[i].name);
        printf("Commission: ");
        scanf("%f", &salesmen[i].commission);
        printf("\n");
    }

    printf("\n\nSalesmen with commission less than 5000:\n");
    for (int i = 0; i < 5; i++)
    {
        if (salesmen[i].commission < 5000)
        {
            printf("ID: %d\n", salesmen[i].id);
            printf("Name: %s\n", salesmen[i].name);
            printf("Commission: %f\n", salesmen[i].commission);
            printf("\n");
        }
    }

    return 0;
}
