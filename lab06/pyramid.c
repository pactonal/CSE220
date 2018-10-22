/*******************************************************************************
* Mitchell Crane | A55587424 | Section 2
*
* Lab 06 pyramid.c
*
* Prints out a pyramid of asterisks based on the user's input
* User inputs the size of the base of the pyrimid
* Space is calculated and pyramid is printed
*******************************************************************************/
#include <stdio.h> // Include standard io header


int main(void) {
    int base;

    // User inputs base size
    printf("Enter an odd integer: ");
    scanf("%d", &base);

    // Print error and exit if input is even
    if (base % 2 == 0) {
        printf("Error.  Input must be odd");
        return 0;
    }
    
    if (base % 2 != 0) {
        // Iterate through all odd numbers less than the input
        for (int k = 1; k <= base ; k += 2) {

            // Set the number of asterisks to the iteration
            int num = k;

            // Calculate the amount of space before the asterisks printed
            int space = ((base - k) / 2);

            // Print the space out
            for (;space > 0; space--)
                printf(" ");

            // Print the asterisks
            for (; num > 0; num--)
                printf("*");

            // Print a new line after each iteration
            printf("\n");
        }
    }        

    return 0;
}
