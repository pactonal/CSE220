#include <stdio.h>

int main(void) {
    // initialize values
    float weight,height,bmi,bmi5;

    // collect user input and store to variables
    printf("Enter your weight in kg:\n");
    scanf("%f",&weight);

    printf("Enter your height in m:\n");
    scanf("%f",&height);
    
    // calculate bmis, store to variables
    bmi = weight / (height * height);
    bmi5 = (weight - 5) / (height * height);

    // Print bmis to std output
    printf("Your BMI is: %f\n",bmi);
    printf("If you lose 5kg, your BMI becomes: %f\n",bmi5);

    return 0;
}
