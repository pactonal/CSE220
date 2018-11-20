/*******************************************************************************
* Mitchell Crane | A55587424 | Section 2
*
* Lab 7 | WeeklyPay.c
*
* Takes user inputted hourly wage and hours worked
*   Hours over 40 are counted as overtime
* Asks user if they would like to calculate another pay
*******************************************************************************/
#include <stdio.h>

int main(void) {
    while (1 == 1) {
        // Init variables every run
        char answer;
        int hours, overtime = 0;
        float wage, otwage = 0;

        printf("Enter the hourly wage ($): ");
        scanf("%f", &wage); // Get user input wage
        printf("Enter the number of hours worked: ");
        scanf("%d", &hours); // Get user input hours

        if (hours > 40) {
            overtime = hours - 40; // Calculates overtime pay
            otwage = 1.5 * wage;
        }

        float pay = ((hours * wage) + (overtime * otwage)); // Total pay
        printf("*** Weekly earnings ($): %.2f\n\n", pay); // Output

        printf("Do you want to compute another pay? ");
        scanf(" %c", &answer); // Ask if user wants to calculate another

        if (answer == 78 || answer == 110)
            return 0; 
    }
}
