#include <stdio.h>
#include "main.h"

/**
* convert_day - converts a day in month format to a day in year format
* @month: month in number format
* @day: day of month
*
* Return: converted day in year format
*/
int convert_day(int month, int day)
{
static int day_of_year[] = {
0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334
};

return (day + day_of_year[month - 1]);
}

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
*
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
{
if (month >= 2 && day >= 60)
{
 day++;
}
printf("Day of the year: %d\n", convert_day(month, day));
printf("Remaining days: %d\n", 366 - convert_day(month, day));
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n", convert_day(month, day));
printf("Remaining days: %d\n", 365 - convert_day(month, day));
}
}
}

/**
* main - Entry point of the program
*
* This program demonstrates the usage of the print_remaining_days function.
*
* Return: Always 0 (success)
*/
int main(void)
{
int month, day, year;

printf("Enter a date (mm/dd/yyyy): ");
scanf("%d/%d/%d", &month, &day, &year);

printf("Date entered: %02d/%02d/%04d\n", month, day, year);
print_remaining_days(month, day, year);

return (0);
}

