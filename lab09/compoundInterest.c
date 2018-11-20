/*******************************************************************************
* Mitchell Crane | Section 2 | A55587424
* 
* Lab 9 | compoundInterest.c
*
* Recursively calculates compound itnterest based on user inputted values
*
* User inputs initial deposit, regular deposit, interest rate, and time period
* interest function recursively calculates interest gained for each year
* The total amount after interest is printed to the user 
*******************************************************************************/
#include <stdio.h>

// Recursively calculates the interest for each year
double interest(double initialDeposit, double regularDeposit, double percent,
                int period)
{
    if (period > 0) { // return interest for current period
        return (((1 + percent) * interest(initialDeposit, regularDeposit,
                                      percent, (period - 1))) + regularDeposit);
    } else {
        return initialDeposit; // When period is zero, return initial deposit
    }
}


int main(void) {
    // Initialize variables
    double deposit, regdeposit, percent;
    int period;

    // User inputs values
    printf("Enter initial deposit: ");
    scanf("%lf", &deposit);
    printf("Enter regular deposit: ");
    scanf("%lf", &regdeposit);
    printf("Enter interest as decimal: ");
    scanf("%lf", &percent);
    printf("Enter period: ");
    scanf("%d", &period);

    // Function value is printed to user
    printf("$%.2lf", interest(deposit, regdeposit, percent, period));

    return 0;
}
