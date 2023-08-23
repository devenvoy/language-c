#include <stdio.h>

void sort_array(int arr[], int n, int order);

int main() {
    int arr[] = {5, 2, 8, 4, 9, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    int order;
    printf("Enter 1 to sort in ascending order, 2 to sort in descending order: ");
    scanf("%d", &order);
    sort_array(arr, n, order);
    printf("Sorted array: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void sort_array(int arr[], int n, int order) {
    int temp;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if((order == 1 && arr[i] > arr[j]) || (order == 2 && arr[i] < arr[j])) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
