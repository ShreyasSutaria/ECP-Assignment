/*Write a program to display n terms of Fibonacci series
Input: 6
Output: 1, 1, 2, 3, 5, 8 */

#include <stdio.h>

int main() {
    int n, first = 1, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n >= 1) {
        printf("Fibonacci series: ");
        printf("%d", first);

        if (n > 1) {
            printf(", %d", second);
        }

        for (int i = 3; i <= n; i++) {
            next = first + second;
            printf(", %d", next);
            first = second;
            second = next;
        }
        printf("\n");
    } else {
        printf("The number of terms should be at least 1.\n");
    }

    return 0;
}

