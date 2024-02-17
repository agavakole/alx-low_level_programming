#include <stdio.h>
#include "holberton.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 */
void print_remaining_days(int month, int day, int year)
{
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days_remaining = 0;
    int i;

    // Check for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        days_in_month[2] = 29; // February has 29 days in a leap year
    }

    // Calculate the total days remaining
    for (i = month + 1; i <= 12; i++)
    {
        days_remaining += days_in_month[i];
    }
    days_remaining += days_in_month[month] - day;

    // Print the results
    printf("Day of the year: %d\n", convert_day(month, day));
    printf("Remaining days: %d\n", days_remaining);
}
