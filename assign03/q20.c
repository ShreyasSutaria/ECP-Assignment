/*Write a program to display
a. Prime numbers between 1 to 100
b. Armstrong Numbers between 1 to 500 */


#include <stdio.h>

int main() {
    int i, j, num, sum, originalNum, digit, count, power;

    // Prime numbers between 1 and 100
    printf("Prime numbers between 1 and 100:\n");
    for (i = 2; i <= 100; i++) {
        int isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    // Armstrong numbers between 1 and 500
    printf("Armstrong numbers between 1 and 500:\n");
    for (i = 1; i <= 500; i++) {
        originalNum = i;
        sum = 0;
        count = 0;

        // Count the number of digits
        while (originalNum != 0) {
            originalNum /= 10;
            count++;
        }

        originalNum = i;

        // Calculate the sum of each digit raised to the power of count
        while (originalNum != 0) {
            digit = originalNum % 10;
            power = 1;
            for (int k = 0; k < count; k++) {
                power *= digit;
            }
            sum += power;
            originalNum /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

