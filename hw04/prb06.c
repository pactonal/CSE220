#include <stdio.h>

int main(void) {
    int x = 16, y = 4;
    int z = x & y;
    int w = x && y;
    printf("z = %d\tw=%d", z, w);
    return 0;
}
