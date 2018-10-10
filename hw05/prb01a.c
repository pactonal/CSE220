#include <stdio.h>

int main(void) {
    int value = 7;
    do {
        printf("%d", value);
        value *= 2;
    } while (value < 225);
}
