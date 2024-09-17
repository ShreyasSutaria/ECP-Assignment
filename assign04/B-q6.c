/*Write a function to print a given number in hexadecimal format. */ 

#include <stdio.h>

void printHexadecimal(int n) {
    if (n > 0) {
        printHexadecimal(n / 16);
        int remainder = n % 16;
        if (remainder < 10)
            printf("%d", remainder);
        else
            printf("%c", remainder - 10 + 'A');
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("0");
    } else {
        printf("Hexadecimal representation of %d is: ", num);
        printHexadecimal(num);
    }
    printf("\n");
    return 0;
}

