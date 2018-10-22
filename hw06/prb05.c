#include <stdio.h>

int makeBigger(int number, int factor) {
    return number * factor;
}

int main(void) {
    int x = 2;
    printf("%d %d\n", makeBigger(x + 1, 5), makeBigger(makeBigger(x + 2, 3), -3));
    return 0;
}
