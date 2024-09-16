/*Write a program to display First 5 prime numbers after a given number.
Input: 7
Output: 11 13 17 19 23 */

#include <stdio.h>

int main() {
    int givenNumber, num, count, isPrime;

    printf("Enter a number: ");
    scanf("%d", &givenNumber);

    count = 0;
    num = givenNumber + 1;

    printf("First 5 prime numbers after %d:\n", givenNumber);

    while (count < 5) {
        isPrime = 1;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
            count++;
        }

        num++;
    }

    printf("\n");

    return 0;
}

