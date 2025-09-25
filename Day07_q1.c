// Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main()
{
    int year;

    printf("Enter year to check: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("%d year is leap year", year);
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    return 0;
}
