/*Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12 */

#include <stdio.h>

int main() {
    int number, i = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("All factors: ");
    while (i < number) {
        if (number % i == 0) {
            printf("%d", i);
            if (i < number / 2) {
                printf(", ");
            }
        }
        i++;
    }

    printf("\n");

    return 0;
}

