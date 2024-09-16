/*Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
b. Using logical operators */

#include <stdio.h>

int main() {
    int year;

    // Input the year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check for leap year using logical operators
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("The year %d has 366 days.\n", year);
    } else {
        printf("The year %d has 365 days.\n", year);
    }

    return 0;
}

