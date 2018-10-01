#include <stdio.h>

int main(void) {
    int x = 23;
    if (24 > x && x > 18) {
        printf("%d is between 18 and 24\n");
    } else {
        printf("%d is outside the range 18 - 24\n");
    }
    return 0;
}
