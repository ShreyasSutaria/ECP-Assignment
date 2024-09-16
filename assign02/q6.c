/*Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome). */ 

#include <stdio.h>

int main() {
    int num, originalNum, firstDigit, lastDigit, digits, divisor;
    int isPalindrome = 1;  // Assume the number is a palindrome initially

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) num = -num;  // Handle negative numbers by converting them to positive
    originalNum = num;  // Save the original number for later comparison

    // Calculate number of digits manually
    digits = 0;
    int tempNum = num;
    while (tempNum > 0) {
        tempNum /= 10;
        digits++;
    }
    if (num == 0) digits = 1;  // Special case for 0

    // Check if the number is a palindrome without using functions
    while (digits > 1 && isPalindrome) {
        divisor = 1;
        for (int i = 1; i < digits - 1; i++) {
            divisor *= 10;  // Calculate the divisor manually
        }
        firstDigit = num / divisor;  // Extract the first digit
        lastDigit = num % 10;  // Extract the last digit

        if (firstDigit != lastDigit) {
            isPalindrome = 0;  // Set to false if the digits don't match
        }

        // Remove the first and last digits from the number
        num = (num % divisor) / 10;
        digits -= 2;  // Reduce the digit count by 2
    }

    // Output the result
    if (isPalindrome) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}

