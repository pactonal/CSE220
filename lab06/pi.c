/*******************************************************************************
* Mitchell Crane | A55587424 | Section 2
*
* Lab 06 pi.c
*
* User inputs the upper bound of the summation calculation
* Iterates through the summation to calculate pi
* Prints the result every 10000th iteration after the 20000000th iteration
*******************************************************************************/
#include <stdio.h>
#include <math.h>


int main(void) {
    double pi = 0; // Initialize pi as a double
    int n; // initialize n as an int

    // User inputs the upper bound
    printf("Enter an upper bound: ");
    scanf("%d", &n);

    // Iterate from 0 to n
    for (int k = 0; k <= n; k++) {
       double iter;
       iter = (pow(-1, k) / ((2 * k) + 1));
       iter *= 4;
       // Every iteration adds to the pi value
       pi += iter;
       if (k % 10000 == 0)
           printf("%d:\t%.8f\n",k, pi);

    }
}

// 21580000
