#include <stdio.h>
#include <string.h>

int main()
{
    char name[5][10], item[10];
    int i, x;
   // clrscr();
    for (i = 0; i < 5; i++)
    {
        printf("Enter %d strings: ", i + 1);
        scanf("%s", &name[i][0]);
    }
    /* entering the item to be found in the string array*/
    printf("Enter the string to be searched: ");
    scanf("%s", &item);
    /* process for finding the item in the string array*/
    for (i = 0; i < 5; i++)
    {
        x = strcmp(name[i], item);
        if (x == 0)
        {
            printf("\n Searched string %s is at position %d ", item, i + 1);
            break;
        }
    }
    if (i > 4)
    {
        printf("\n The searched string does not match any name in the list...");
    }
    getchar();
    return 0;
}