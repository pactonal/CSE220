#include <stdio.h>

int main(void) {
    int x = 5, y = 7;
    int result = (x == y) + y/2 + !y;
    printf("%d", result);
    return 0;
}
