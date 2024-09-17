#include <stdio.h>
#include <stddef.h> 

int* linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return &arr[i]; 
        }
    }
    return NULL; 
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 22, 35, 47, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    
    printf("Array elements:\n");
    printArray(arr, size);
    
    printf("Enter the number to search: ");
    scanf("%d", &target);

    int* address = linearSearch(arr, size, target);

    if (address != NULL) {
        printf("Element %d found at address %p.\n", target, (void*)address);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

