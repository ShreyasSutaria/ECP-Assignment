/*Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
****** */

#include <stdio.h>

int main() {
    char character;
    int number;

    printf("Enter a character: ");
    scanf(" %c", &character);  
    printf("Enter a number: ");
    scanf("%d", &number);

 
    for (int i = 0; i < number; i++) {
        printf("%c", character);
    }

    printf("\n");

    return 0;
}

