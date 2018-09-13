/* ***********************************************
 * This program converts the speed (mile/hour)   *
 * to the equivalent pace (min/mile)
 */ 

#include <stdio.h>


int main(void) {
	float speed,pace;

	printf("Enter your speed:");
	scanf("%f", &speed);

	pace = speed/60.0;
	
	printf("The pace is: %f\n", pace); 
	return 0;
}
