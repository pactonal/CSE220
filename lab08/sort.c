/*******************************************************************************
* Mitchell Crane | A55587424 | Section 2
*
* Lab 8 | sort.c
*
* User inputs size of array and array elements
* Array is printed to user
* Array is sorted
* Array is printed again
*******************************************************************************/
#include <stdio.h>


void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]); // Print all elements of array
    }
    printf("\n");
}


int largestPos(int array[], int size, int index) {
    int max = -1000000000; // Set initial max to be very small
    int maxindex;
    for (int i = index; i < size; i++) {
        if (array[i] > max) {
            max = array[i]; // For every element in the array, if it is larger
            maxindex = i;   // than the max, set the max to the element and
        }                   // set the maxindex to the index of that element
    } 
    return maxindex;
}


int main(void) {

    int size;
    printf("Enter an integer between 2 and 15: ");
    scanf("%d", &size); // User inputs the size of the array between 2 and 15

    while (size < 2 || size > 15) {
        printf("Invalid input. Enter an integer between 2 and 15: ");
        scanf("%d", &size); // If input is invalid, print error and rescan
    }

    int arr[size]; // Initialize array with given size
    
    for (int i = 0; i < size; i++) {
        printf("Enter an integer: ");
        scanf("%d", &arr[i]); // User inputs number of integers based on size
    }
    
    printArray(arr, size); // Array is printed using written function

    for (int idx = 0; idx < size; idx++) {
        int lpos = largestPos(arr, size, idx);
        int large = arr[lpos];
        arr[lpos] = arr[idx]; // Sort array elements with selection sort
        arr[idx] = large;
    }

    printArray(arr, size); // Print sorted array to user
    return 0;
}
