#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Leap year
    } else {
        return 0; // Not a leap year
    }
}

// Function to calculate the day number in a year
int dayNumber(int day, int month, int year) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Adjust February days for leap years
    if (isLeapYear(year)) {
        daysInMonth[2] = 29;
    }

    int dayNum = day;

    // Add days from previous months in the year
    for (int i = 1; i < month; ++i) {
        dayNum += daysInMonth[i];
    }

    return dayNum;
}

int main() {
    int day, month, year;

    // Get user input
    printf("Enter the day: ");
    scanf("%d", &day);

    printf("Enter the month: ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    // Validate input
    if (day <= 0 || month <= 0 || month > 12 || year <= 0) {
        printf("Invalid input. Please enter a valid date.\n");
        return 1;
    }

    // Calculate and display the day number
    int result = dayNumber(day, month, year);
    printf("Day number in the year: %d\n", result);

    return 0;
}
