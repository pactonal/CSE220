/*******************************************************************************
* Mitchell Crane | Section 2 | A55587424
*
* Lab 9 | split.c
*
* Prints a user inputted string recursively
*
* User inputs string
* User chooses print method: split or split and move
*   split function recursively prints the string surrounded by asterisks
*   splitAndMove function recursively prints and shifts string with asterisks
*******************************************************************************/
#include <stdio.h>  // Include headers
#include <string.h>


void split(char arr[], int len) {
    if (len > 0) {
        // Print out first character surrounded by asterisks
        printf("*%c*\n", arr[0]);

        char c = arr[0]; // Set first character to variable c

        for (int i = 0; i < len - 1; i++) { // Iterate through all but last char
            arr[i] = arr[i + 1]; // shifts all characters up a position
        }
        arr[len - 1] = c; // Sets last character to the first
        split(arr, len - 1); // Runs the function again but reduces the length
    }
}

void splitAndMove(char arr[], int len, int spaces) {
    if (len > 0) {
        // Prints spaces based on parameter
        for (int i = 1; i <= spaces; i++) {
            printf(" ");
        }
        // Prints the first character
        printf("*%c*\n", arr[0]);
    
        char c = arr[0];  // Set first character to variable c

        for (int i = 0; i < len - 1; i++) { // Iterate through all but last char
            arr[i] = arr[i + 1]; // shift all characters up a position
        }
        arr[len - 1] = c; // Set last character to first

        // Run the function again and reduce length and increase spaces
        splitAndMove(arr, len - 1, spaces + 1);
    }
}

int main(void) {
    // Initialize size as int
    int size;

    printf("Enter size of string: ");
    scanf("%d", &size); // User inputs size
 
    char in[size]; // Initializes an input array with char type

    printf("Enter string: ");
    scanf(" %[^\n]s", in); // Using a regular expression to filter input, 
                           // stores the string in the input array

    char opt; // Initialize option char
    printf("Output style (a)ligned or (i)ndented: ");
    scanf(" %c", &opt); // User indicates output type
    switch (opt) {
        case 'a':
            split(in, size); // If aligned, run split
            break;
        case 'i':
            splitAndMove(in, size, 0); // If indented, run splitAndMove
            break;
        default:
            printf("Invalid input."); // If neither, print error message
            return 0;
    }
    return 0;
}
