/*Write a program to accept a number and print unique pairs of numbers such that multiplication of
the pair is given number
Input: 24
Output:
1 * 24 = 24
2 * 12 = 24
3 * 8 = 24
4 * 6 = 24
*/

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

