/*Write a function to calculate nth term of the Fibonacci series using recursion. Write another
function to print given number of terms of Fibonacci series. */

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void printFibonacciSeries(int terms) {
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series up to %d terms: ", n);
    printFibonacciSeries(n);
    return 0;
}

