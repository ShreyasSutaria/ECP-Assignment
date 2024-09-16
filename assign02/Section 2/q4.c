/*Write a program to display day of week from given date (day, month and year). */

#include <stdio.h>

int dayOfWeek(int day, int month, int year) {
    if (month == 1 || month == 2) {
        month += 12;
        year -= 1;
    }

    int k = year % 100;    
    int j = year / 100;    

    int dayOfWeek = (day + (13 * (month + 1)) / 5 + k + (k / 4) + (j / 4) + 5 * j) % 7;

    return dayOfWeek;
}
const char* getDayName(int dayOfWeek) {
    switch (dayOfWeek) {
        case 0: return "Saturday";
        case 1: return "Sunday";
        case 2: return "Monday";
        case 3: return "Tuesday";
        case 4: return "Wednesday";
        case 5: return "Thursday";
        case 6: return "Friday";
        default: return "Invalid";
    }
}

int main() {
    int day, month, year;

    printf("Enter day (1-31): ");
    scanf("%d", &day);
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    int dayNum = dayOfWeek(day, month, year);
    printf("The day of the week is: %s\n", getDayName(dayNum));

    return 0;
}

