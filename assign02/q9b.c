/*Write a program to display number of days in the given month and year using
b. Using logical operators. */

#include <stdio.h>

int main() {
    int month, year, days;

    // Input the month and year from the user
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    // Using logical operators
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) {
        days = 29;  
    } else if (month == 2) {
        days = 28;  
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30; 
    } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31;
    } else {
        printf("Invalid month!\n");
        return 1; 
    }

    // Output 
    printf("Number of days in month %d of year %d: %d\n", month, year, days);

    return 0;
}

