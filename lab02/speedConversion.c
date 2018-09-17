/* ***********************************************
 * This program converts the speed (mile/hour)   *
 * to the equivalent pace (min/mile)
 */ 

#include <stdio.h>

// Main function
int main(void) {
    // Initialize variables
	float speed,pace;
    // Accept input
	printf("Enter your speed:");
	scanf("%f", &speed);
    // Calculate pace
	pace = speed/60.0;
    // Print pace to screen	
	printf("The pace is: %f\n", pace); 
	return 0;
}
