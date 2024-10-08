/*Write a program to accept two numbers and find its GCD (greatest common divisor) using
Euclidean algorithm. The following example explains the algorithm. GCD of 123 and 36 is 3
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
6 % 3 = 0
GCD = 3
Input:
no1: 123
no2:36
Output:
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
GCD of 123 and 36 is 3 */

#include <stdio.h>

int main() {
    int num1, num2, remainder;

    printf("Enter two numbers:\n");
    printf("no1: ");
    scanf("%d", &num1);
    printf("no2: ");
    scanf("%d", &num2);

    printf("Steps:\n");
    while (num2 != 0) {
        remainder = num1 % num2;
        printf("%d %% %d = %d\n", num1, num2, remainder);
        num1 = num2;
        num2 = remainder;
    }

    printf("GCD is %d\n", num1);

    return 0;
}

