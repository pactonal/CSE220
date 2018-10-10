#include <stdio.h>

int main(void) {
    float X;
    X = sizeof(char) / (float) sizeof(2.0);
    printf("%f", X);

    return 0;
}
