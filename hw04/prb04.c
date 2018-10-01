#include <stdio.h>

int main(void) {
    int x = 18;
    x = x >> 2;
    int y = 12;
    y = y << 4;
    printf("%d %d", x, y);
    return 0;
}
