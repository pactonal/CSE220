#include <stdio.h>

int main(void) {
    int alpha = 10, beta = 10;
    for (alpha = 0; alpha < 5; alpha++) {
        for (beta = 100; beta < 300; beta = beta + 100)
            printf("%d", alpha);
        printf("\n");
    }
}
