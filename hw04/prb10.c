#include <stdio.h>

int main(void) {
    int w = 15, z = 5;

    if (w < 10) {
        if (z > 10) {
            printf("0000\n");
        } else {
            printf("1111\n");
        }
    }
    printf("2222\n");

    return 0;
}
