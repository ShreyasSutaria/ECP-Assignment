/*Write a function to calculate sum and product into a single function.
b. Without using global variables */


#include <stdio.h>

void calculate(int a, int b, int *sum, int *product) {
    *sum = a + b;
    *product = a * b;
}

int main() {
    int a, b, sum, product;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    calculate(a, b, &sum, &product);
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    return 0;
}

