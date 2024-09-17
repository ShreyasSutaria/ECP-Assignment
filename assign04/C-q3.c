/*Write a function to implement four function calculator. The return value indicates the error (due
to zero denominator in case of division). The result is returned via out-parameter. */

#include <stdio.h>

int calculator(char operator, int a, int b, int *result) {
    switch (operator) {
        case '+':
            *result = a + b;
            return 0;
        case '-':
            *result = a - b;
            return 0;
        case '*':
            *result = a * b;
            return 0;
        case '/':
            if (b == 0)
                return -1;  // Error: Division by zero
            *result = a / b;
            return 0;
        default:
            return -2;  // Error: Invalid operator
    }
}

int main() {
    int a, b, result, status;
    char operator;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    status = calculator(operator, a, b, &result);

    if (status == 0) {
        printf("Result: %d\n", result);
    } else if (status == -1) {
        printf("Error: Division by zero\n");
    } else if (status == -2) {
        printf("Error: Invalid operator\n");
    }

    return 0;
}

