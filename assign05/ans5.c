#include <stdio.h>


int findMax(int arr[], int size) {
    int max = arr[0]; 

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }

    return max;
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 22, 5, 75, 64};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements:\n");
    printArray(arr, size);

    int max = findMax(arr, size);


    printf("Maximum value: %d\n", max);
  

    return 0;
}

