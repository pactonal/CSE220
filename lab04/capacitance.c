/*******************************************************************************
* Mitchell Crane | A55587424 | Section 2
* 
* Lab 04 - Calculating capacitance of a parallel plate capacitor
*
* Constants are defined at the top of the program
* Two functions are created
*   One calculates area of a circle given its radius
*   The other calculates the capacitance based on the given formula
* The user inputs the radius of the plates in cm and the distance in mm
*
* Using the function defined below, the capacitance is calculated and output
*******************************************************************************/

// Import libraries and define constants as macros
#include <stdio.h>
#define eNaught 8.854E-12 // Permeativity of free space
#define pi 3.14159265358979323846 // Pi

// Declare area and capacitance functions

float calcArea(float); // Calculates the area of the plates
float cap(float, float); // Calculates the capacitance given the area and radius


// Main function
int main(void) {

    // Initialize variables
    float radius, distance, area;

    // Input radius and distance values
    printf("Enter radius in cm: ");
    scanf("%f", &radius);
    printf("Enter distance in mm: ");
    scanf("%f", &distance);

    // Calculate area using the created function
    area = calcArea(radius);

    // Output the capacitance to the user in scientific notation
    printf("Capacitance is: %E %c", cap(area, distance), 'F');
    return 0;
}

// Define area function
float calcArea(float r) {
    return (pi * ((r / 100.0) * (r / 100.0)));
}

// Define capacitance function
float cap(float A, float d) {
    return ((eNaught * A) / (d / 1000.0));
}
