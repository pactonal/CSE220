#include <stdio.h> 


int main(void) {
    float hours, minutes;

    printf("Enter hours:");
    scanf("%f",&hours);
    minutes = hours * 60;

    printf("Minutes:%f\n",minutes);
    return 0;
} 
