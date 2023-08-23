// Write a C program to sort elements in Lexicographical order (dictionary order).
#include <stdio.h>
#include <string.h>

int compare(const void *a, const void *b) {
  return strcmp((char *)a, (char *)b);
}

int main() {
  char arr[][10] = {"apple", "banana", "cherry", "dates"};
  int n = sizeof(arr) / sizeof(arr[0]);

  qsort(arr, n, sizeof(arr[0]), compare);

  printf("Sorted elements in lexicographical order: \n");
  for (int i = 0; i < n; i++)
    printf("%s\n", arr[i]);

  return 0;
}