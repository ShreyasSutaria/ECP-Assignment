#include <stdio.h>
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
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
    int index = linearSearch(arr, size, target);

    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

