/*******************************************************************************
* Mitchell Crane | Section 2 | A55587424
*
* Lab 10 | finance.c
*
* Allows user to store expenses and revenues for up to 250 weeks
* Provides user with options to view certain pieces of data and enter data
*   Print total expenses starting at inputted week
*   Record data into arrays
*   Print number of weeks with data
*   Print all data
*   Print largest revenue value
* User can quit by entering 'q'
*******************************************************************************/
#include <stdio.h>


double expense[250];
double revenue[250];
int week = 0;

// Prints the menu of options to the user
void printOptions(void);

// Calculates the total expenses starting at week w
double expensesStartingAt(int w);

// Allows the user to input expense and revenue data
void recordWeekData(void);

// Prints the number of weeks that data is stored for
void printNumberOfWeeks(void);

// Prints all data currently stored
void printAllData(void);

// Returns a pointer to the largest revenue value
double * largestRevenue(void);

// Checks that the user's choice is a valid option
int checkOpt(char opt);


int main(void) {
    char choice = '\0'; // Initialize choice as null character
    int wk; // Initialize starting week variable for expensesStartingAt

    // Loop until user chooses to quit
    while (1) {
        printOptions(); // Print options to user
        printf("Enter an option: ");
        scanf(" %c", &choice); // User inputs choice

        // If choice is invalid, print error and reprompt
        if (!(checkOpt(choice))) {
            while (!(checkOpt(choice))) {
                printOptions();
                printf("Invalid option. Please enter an option: ");
                scanf(" %c", &choice);
            }
        }

        switch (choice) {
            case 'e':
                // If no data exists, print error
                if (!week) {
                    printf("\n");
                    printf("No data found\n");
                    printf("-------------\n");
                    printf("\n");
                    break;
                }
                printf("Enter starting week: ");
                scanf("%d", &wk); // User inputs starting week for data
                printf("\n");
                printf("Total expenses starting from Week %d: %c%15.2lf\n", wk,
                        '$', expensesStartingAt(wk)); // Print expenses
                printf("-----------------------------------------------------");
                printf("----\n");
                printf("\n");
                break;
            case 'r':
                recordWeekData(); // User inputs data to global arrays
                break;
            case 'w':
                printNumberOfWeeks(); // Prints number of weeks that have data
                break;
            case 'a':
                // If no data exists, print error
                if (!week) {
                    printf("\n");
                    printf("No data found\n");
                    printf("-------------\n");
                    printf("\n");
                    break;
                }
                printAllData(); // Print all data stored
                break;
            case 'l':
                // If no data exists, print error
                if (!week) {
                    printf("\n");
                    printf("No data found\n");
                    printf("-------------\n");
                    printf("\n");
                    break;
                }
                printf("\n");
                // Print largest revenue
                printf("Largest Revenue: %c%15.2lf\n", '$', *largestRevenue());
                printf("---------------------------------\n");
                printf("\n");
                break;
            case 'q':
                return 0; // Quit when user chooses 'q'
        }
    }
}


void printOptions(void) {
    // Options for user
    printf("%9s%16s\n"," ", "Financial Records");
    printf("\n");
    printf("Enter \'e\' to view total expenses\n");
    printf("Enter \'r\' to enter records\n");
    printf("Enter \'w\' to see number of weeks in record\n");
    printf("Enter \'a\' to view all data\n");
    printf("Enter \'l\' to view largest revenue\n");
    printf("Enter \'q\' to quit\n");
    printf("\n");
}


double expensesStartingAt(int w) {
    double total = 0; // Initialize total variable

    // Calculate when w week has data
    if (w <= week) {
        for (w -= 1; w < week; w++) {
            total += expense[w]; // Add every expense to the total
        }
        return total;
    } else {
        // If w week does not have data, print error
        printf("\n");
        printf("No data found\n");
        printf("--------------\n");
        printf("\n");
        return 0;
    }
}


void recordWeekData(void) {
    week++; // Increment the week every run

    if (week < 251) { // If array has empty space
        printf("Enter expense for Week %d: ", week);
        scanf("%lf", &expense[week - 1]); // Expense stored into global array
        printf("Enter revenue for Week %d: ", week);
        scanf("%lf", &revenue[week - 1]); // Revenue stored into global array
    } else {
        // If array is full, print error
        printf("\n");
        printf("The array is full\n");
        printf("-----------------\n");
        printf("\n");
    }
}


void printNumberOfWeeks(void) {
    char s = 's'; // Initialize variables
    char ve[3] = "ve";

    // Check if week value is 1 and adjust message
    if (week == 1) {
        s = '\0';
        ve[0] = 's';
        ve[1] = '\0';
    }   
    printf("\n");
    // Print how many weeks have data
    printf("%d week%c ha%c%c been recorded\n", week, s, ve[0], ve[1]);
    printf("-------------------------------\n");
    printf("\n");
}


void printAllData(void) {
    printf("\n");
    for (int idx = 0; idx < week; idx++) {
        // Print all data from weeks 1-9
        if (week < 10) {
            printf("Week %d Expenses: %c%15.2lf\n", idx + 1, '$', expense[idx]);
            printf("Week %d Revenues: %c%15.2lf\n", idx + 1, '$', revenue[idx]);
            printf("---------------------------------\n");
        // Print all data from weeks 10-99
        } else if (week >= 10 && week < 100) {
            printf("Week %d Expenses: %c%14.2lf\n", idx + 1, '$', expense[idx]);
            printf("Week %d Revenues: %c%14.2lf\n", idx + 1, '$', revenue[idx]);
            printf("---------------------------------\n");
        // Print all data from weeks 100-250
        } else if (week >= 100) {
            printf("Week %d Expenses: %c%13.2lf\n", idx + 1, '$', expense[idx]);
            printf("Week %d Revenues: %c%13.2lf\n", idx + 1, '$', revenue[idx]);
            printf("---------------------------------\n");
        }
    }
    printf("\n");
}


double * largestRevenue(void) {
    double *qtr = revenue; // Declare pointer to revenue array
    double *ptr; // Initialize return pointer
    double max = 0.0; // Initialize max value
    for (; qtr <= &revenue[week - 1]; qtr++) { // Iterate through all values
        // If value is greater than max
        if (*qtr > max) { 
            max = *qtr; // Store current iteration value in max
            ptr = qtr; // Store memory address in ptr
        }
    }
    return ptr;
}


int checkOpt(char opt) {
    // Define valid options in array
    char options[6] = {'e', 'r', 'w', 'a', 'l', 'q'};
    int valid; // Initialize return value

    // Iterate through all options
    for (int idx = 0; idx < 6; idx++) {
        if (options[idx] == opt) { // Check if inputted option is valid
            valid = 1;
            idx = 6; // End iteration if valid
        } else {
            valid = 0;
        }
    }
    return valid;
}
