#include <stdio.h>

int main(void) {
    int alpha = 10, beta = 5, gamma = 3;
    alpha /= beta++ - --gamma;
    printf("%d %d %d\n", alpha, beta, gamma);
    return 0;
}
