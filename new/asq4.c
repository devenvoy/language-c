// Write a C program to sort numeric array in ascending or descending order using UDF.
#include <stdio.h>

void sort(int arr[], int size, int ascending) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (ascending) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            } else {
                if (arr[j] < arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

int main(void)
{
    int arr[100], size, i, ascending;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sort the array in (1) ascending or (0) descending order: ");
    scanf("%d", &ascending);

    sort(arr, size, ascending);

    printf("The sorted array is:\n");
    for (i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
