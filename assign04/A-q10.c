/*Write function to check whether given year is leap or not. Write another function to print
number of days in given month */


#include <stdio.h>

int isLeapYear(int year) {
    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
        return 1;
    }
    return 0;
}

int daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (isLeapYear(year)) {
                return 29;
            } else {
                return 28;
            }
        default:
            return -1;
    }
}

int main() {
    int year, month;
    printf("Enter a year: ");
    scanf("%d", &year);
    printf("Enter a month (1-12): ");
    scanf("%d", &month);
    int days = daysInMonth(month, year);
    if (days != -1) {
        printf("The number of days in month %d of year %d is: %d\n", month, year, days);
    } else {
        printf("Invalid month input!\n");
    }
    return 0;
}
