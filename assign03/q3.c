/*Write a program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20
b. Reverse the number
Input: 9362
Output: 2639
c. Check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome
Input: 36963
Output: 36963 is a numeric palindrome
d. Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
then the number is called as Armstrong number)
Example: 153
(1 * 1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) = 1 + 125 + 27 = 153
Input: 936
Output: 936 is not an Armstrong number
Input: 153
Output: 153 is an Armstrong number
*/

#include <stdio.h>
#include <math.h>

int main() {
    int number, temp, original, sum = 0, reversed = 0, digits = 0, armstrongSum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    temp = number;
    printf("Sum of digits: ");
    int first = 1;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        if (!first) {
            printf(" + ");
        }
        printf("%d", digit);
        temp /= 10;
        first = 0;
    }
    printf(" = %d\n", sum);

    temp = number;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    printf("Reversed number: %d\n", reversed);

    if (original == reversed) {
        printf("%d is a numeric palindrome\n", original);
    } else {
        printf("%d is not a numeric palindrome\n", original);
    }

    temp = number;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        armstrongSum += pow(digit, 3);
        temp /= 10;
    }

    if (armstrongSum == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }

    return 0;
}

