#include <stdio.h>

int main(void) {
    float minutes,hours;
    printf("Input hours:\n");
    scanf("%f",&hours);

    minutes = hours * 60;
    printf("%f\n",minutes);
    return 0;
}
