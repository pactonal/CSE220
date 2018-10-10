/*******************************************************************************
* Mitchell Crane | A55587424 | Section 2
*
* Lab 05 - Finding the weekday of a given date
*
* User inputs their birthday in mm/dd/yyyy format
* The date is checked for validity
*   If it is invalid the program displays an error and exits
*   If it is correct, the day of the week is calculated
* The corresponding month coefficient is stored
* The rank is computed based on the given formula
* The day of the week is output to the user to see
*******************************************************************************/
#include <stdio.h> // The stdio header is required for input/output to the user
#include <stdlib.h> // The stdlib header is required to use the exit function


// Main function
int main(void) {
    int month, day, year, mc; // Initialize variables as integers
    // Define a 2d array which holds the days of the week
    char weekdays[7][10] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };
    // Define an array which holds the month coefficients
    char mcValues[12] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

    printf("Enter your birthday (mm/dd/yyyy): "); // User inputs birthday

    scanf("%d/%d/%d", &month, &day, &year); /* The individual dates are stored
                                               in variables */
    // Month is greater than 12 or less than 1
    if (month > 12 || month < 1 ) { 
        printf("Invalid date!"); // Output error message
        exit(0); // Exit program - defined in stdlib.h
    }

    // Day is greater than 31 or less than 1
    if (day > 31 || day < 1) {
        printf("Invalid date!");
        exit(0);
    }

    // Day is 31 when month does not have 31 days
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31) {
        printf("Invalid date!");
        exit(0);
    }

    // Day is greater than 28 in February
    if (month == 2 && day > 28) {
        printf("Invalid date!");
        exit(0);
    }

    mc = mcValues[month - 1]; // Set month coefficient based on input month

    // If the month is January or February, decrement the year by 1
    if (month == 1 || month == 2)
        year--;

    // Define a pointer to an array of 10 characters from weekdays array
    char *dayOfWeek[10] = {*weekdays + (10 * ((year + year / 4 - year / 100
                             + year / 400 + mc + day) % 7))};
    /* The pointer dayOfWeek has the xth 10 characters from weekdays stored in
     * it.  For example.  If the calculation returns 1, that means that monday
     * is the day that the user was born, so 11th-20th characters from weekdays
     * is stored in dayOfWeek.*/


    // The day is output to the user
    printf("You were born on a %s", *dayOfWeek);

    return 0;
}
