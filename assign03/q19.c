/*Modify above program (18) to accept a range i.e. two numbers and print tables of numbers
within the range.
Input: 3 6
Output:
3
4 5 6
6
8 10 12
9 12 15 18
12 16 20 24
15 20 25 30
18 24 30 36
21 28 35 41
24 32 40 48
27 36 45 54
30 40 50 60
*/

#include <stdio.h>

int main() {
    int start, end;

    // Accept the range from the user
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    // Validate the input range
    if (start > end) {
        printf("Invalid range. The start should be less than or equal to end.\n");
        return 1;
    }

    // Loop through each number in the range
    for (int i = start; i <= end; i++) {
        printf("Table of %d:\n", i);
        // Print the multiplication table for the current number
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Print a blank line after each table
    }

    return 0;
}

