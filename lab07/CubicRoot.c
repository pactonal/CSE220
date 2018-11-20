/*******************************************************************************
* Mitchell Crane | A55587424 | Section 2
*
* Lab 7 | CubicRoot.c
*
* Takes user input cubic polynomial and returns roots
* Checks x values in between -100 and 100
* Prints out x values with a y value close to zero
*******************************************************************************/
#include <stdio.h>

// Define function to calculate the result of the function
double calcfunction(double a, double b, double c, double d, double x) {
    double func = (a * (x * x * x) + b * (x * x) + c * x + d);
    return func;
}


int main(void) {
    // Initialize coefficients as doubles
    double a, b, c, d;

    // Get user input polynomial
    printf("Enter a cubic polynomial: ");
    scanf("%lfx^3+%lfx^2+%lfx+%lf", &a, &b, &c, &d); 
    
    // Iterate through [-100, 100] for x and print values close to zero
    for (double x = -100.0; x <= 100.0; x = x + .001) {
        double f = calcfunction(a, b, c, d, x);
        if ((f < 0.000001 && f > -0.000001 )) {
            // Print value if it is small
            printf("eq(%lf) = %lf\n", x, f);
        }
    }
}
