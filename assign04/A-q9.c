/*Write a function to indicate whether given number is prime or not. Write another function to
print prime numbers in the given range.  */


#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Function to print prime numbers in a given range
void printPrimesInRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    // Input range from the user
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Print prime numbers in the given range
    printf("Prime numbers between %d and %d are: ", start, end);
    printPrimesInRange(start, end);

    return 0;
}

