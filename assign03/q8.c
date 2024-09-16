/*Write a program to accept a number and print its prime factors.
Input: 180
Output: 180 = 2 * 2 * 3 * 3 * 5 */

#include <stdio.h>

int main() {
    int number, i = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Unique pairs:\n");
    while (i * i <= number) {
        if (number % i == 0) {
            printf("%d * %d = %d\n", i, number / i, number);
        }
        i++;
    }

    return 0;
}

