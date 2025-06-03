#include <stdio.h>
#include <time.h>

void swap(int *a, int *b);
int partition(int arr[], int low, int high);
int quick_sort(int arr[], int low, int high);

int main()
{
    clock_t t;
    t = clock();

    int arr[] = {10, 7, 8, 9, 1, 5, 99, 78, 56, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr, 0, size - 1);

    printf("Sorted array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    t = clock() - t;
    double time_taken = ((double)t) / CLOCKS_PER_SEC;
    printf("took %f seconds to execute \n", time_taken);
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

int quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

