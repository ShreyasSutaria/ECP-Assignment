/*Write a program to accept integer values of base and index and calculate power of base to
index.
Input:
base: 2
Output: 32
Input:
base: 8
Output: 512
index: 5
index: 3
13. Write a program to display n terms of Fibonacci serie */

#include <stdio.h>

int main() {
    int base, index, result = 1;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the index: ");
    scanf("%d", &index);

    for (int i = 1; i <= index; i++) {
        result *= base;
    }

    printf("%d^%d = %d\n", base, index, result);

    return 0;
}

