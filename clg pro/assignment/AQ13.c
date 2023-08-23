/*
WRITE A PROGRAM THAT WILL MERGE TWO 1-D ARRAY INTO SINGLE ARREY
AND DISPLAY THE RESULTANCE ARRAY IN ASCENDING ORDER.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n, j, k;

    int arr1[50], arr2[50], arr3[50], in, ab;
    // clrscr();

    printf("\nEnter the Size of the first array: ");

    scanf("%d", &n); // first annoy Size
    arr1[n];
    printf("\nEnter the elements of first array: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    } // input element of I 0

    printf("\nEnter the size of the Second array: ");

    scanf("%d", &k); // Second

    arr2[k];

    printf("\nEnter the element of the second array:");
    for (j = 0; j < k; j++)
    { // input element of 2nd array
        scanf("%d", &arr2[j]);
    }

    ab = n + k;
    arr3[ab];
    i = j = 0;

    for (in = 0; in < n + k; in++)
    {
        if (i < n && j < k)
        {
            if (arr1[i] < arr2[j])
            {
                arr3[in] = arr1[i];
                i++;
            }
            else
            {
                arr3[in] = arr2[j];
                j++;
            }
        }
        else if (i < n)
        {
            arr3[in] = arr1[i];
            i++;
        }
        else
        {
            arr3[in] = arr2[j];
            j++;
        }
    }
    printf("  \nThe merge array is : %d \n ", ab);
    for (in = 0; in < n + k; in++)
    {
        printf("%d ", arr3[in]);
    }

    getch();
    return 0;
}
