/* ***********************************************
 * This program converts the speed (mile/hour)   *
 * to the equivalent pace (min/mile)
 */ 


#include <stdio.h>


// Main function
int main(void) {

<<<<<<< HEAD

    // Initialize variables
	float speed,pace;


=======
    // Initialize variables
	float speed,pace;

>>>>>>> 2619c03cf7373a778e2626eae02c4c097a1adbbb
    // Accept input
	printf("Enter your speed:");

	scanf("%f", &speed);

<<<<<<< HEAD

    // Calculate pace
	pace = 60.0f / speed;


    // Print pace to screen	
	printf("The pace is: %f\n", pace); 


=======
    // Calculate pace
	pace = 60.0f / speed;

    // Print pace to screen	
	printf("The pace is: %f\n", pace); 

>>>>>>> 2619c03cf7373a778e2626eae02c4c097a1adbbb
	return 0;
}
