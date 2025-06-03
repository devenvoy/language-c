#include <stdio.h>
#include <stdlib.h>

void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    
    for(int j = 0; j < num/2; j++){
        swap(arr + j, arr + num-1-j);
    }
    

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}


