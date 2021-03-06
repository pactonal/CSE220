/*******************************************************************************
* Mitchell Crane | A55587424 | Section 2
*
* Lab 04 - Calculate the sum of digits in an integer
* 
* User inputs a number between 0 and 9999 and guesses the sum of the digits
* The digits are individually calculated by modular and integer division
* The sum of the digits is calculated and output to the user
* The user also recieves a score based on if their guess was correct
*   1 if they are right
*   0 if they are wrong
*******************************************************************************/
// Import standard I/O library
#include <stdio.h>

// Main function
int main(void) {

    // Initialize all variables as integers
    int number, guess, sum,  dig1, dig2, dig3, dig4;

    // Get user input for the number and guess
    printf("Enter an integer between 0 and 9999: ");
    scanf("%d", &number);
    printf("Guess the sum of its digits: ");
    scanf("%d", &guess);

    dig1 = (number % 10); // This will find the first digit 
    dig2 = ((number % 100) / 10); // This will find the second digit
    dig3 = ((number % 1000) / 100); // This will find the third digit
    dig4 = ((number % 10000) / 1000); // This will find the fourth digit

    // Calculate the sum of the digits
    sum = dig1 + dig2 + dig3 + dig4;

    // Output the sum and the user's score
    printf("The sum is: %4d\n", sum);
    if (guess == sum)
        printf("Your score is: 1"); // 1 is printed if the player guesses right
    else
        printf("Your score is: 0"); // 0 is printed if the player guesses wrong 

    return 0;
}
