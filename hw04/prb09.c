#include <stdio.h>

int main(void) {
    int a = 4, b = 2, c = 4;
    int x;
    x = a && b ? a/b : a/c;
    printf("%d", x);
    return 0;
}
